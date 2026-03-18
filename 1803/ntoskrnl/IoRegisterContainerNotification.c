/*
 * XREFs of IoRegisterContainerNotification @ 0x140651FD0
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionObjectById @ 0x14005A340 (MmGetSessionObjectById.c)
 *     IopGetDevicePDO @ 0x140065174 (IopGetDevicePDO.c)
 *     IopAllocateFileObjectExtension @ 0x140069670 (IopAllocateFileObjectExtension.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ExRegisterCallback @ 0x14016BF30 (ExRegisterCallback.c)
 *     ExUnregisterCallback @ 0x14016DE80 (ExUnregisterCallback.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     IopGetSessionIdFromPDO @ 0x1405D5BE0 (IopGetSessionIdFromPDO.c)
 */

NTSTATUS __stdcall IoRegisterContainerNotification(
        IO_CONTAINER_NOTIFICATION_CLASS NotificationClass,
        PIO_CONTAINER_NOTIFICATION_FUNCTION CallbackFunction,
        PVOID NotificationInformation,
        ULONG NotificationInformationLength,
        PVOID CallbackRegistration)
{
  NTSTATUS FileObjectExtension; // ebx
  PIO_CONTAINER_NOTIFICATION_FUNCTION v7; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  PVOID *v12; // rcx
  _QWORD *PoolWithTag; // rax
  _QWORD *v14; // rdi
  PVOID v15; // rbp
  void *SessionObjectById; // r12
  void *v17; // r14
  _QWORD *v18; // rax
  PVOID *v20; // rax
  struct _DEVICE_OBJECT *DevicePDO; // rax
  struct _DEVICE_OBJECT *v22; // r15
  __int64 v23[7]; // [rsp+20h] [rbp-38h] BYREF

  FileObjectExtension = 0;
  v7 = CallbackFunction;
  if ( NotificationClass >= IoMaxContainerNotificationClass )
    return -1073741585;
  if ( NotificationInformationLength == 32 && *(_DWORD *)NotificationInformation == 32 )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = *((_QWORD *)NotificationInformation + 1);
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&IopSessionNotificationLock, 0LL);
    v12 = (PVOID *)IopSessionNotificationQueueHead;
    while ( v12 != &IopSessionNotificationQueueHead )
    {
      v20 = v12;
      v12 = (PVOID *)*v12;
      if ( v20[5] == (PVOID)v9 )
      {
        FileObjectExtension = -1073741791;
        goto LABEL_13;
      }
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x6E536F49u);
    v14 = PoolWithTag;
    if ( !PoolWithTag )
    {
      FileObjectExtension = -1073741670;
LABEL_13:
      ExReleasePushLockEx((ULONG_PTR)&IopSessionNotificationLock, 0LL, v10, v11);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return FileObjectExtension;
    }
    v15 = ExRegisterCallback(
            (PCALLBACK_OBJECT)IopSessionCallbackObject,
            (PCALLBACK_FUNCTION)IopDispatchSessionNotifications,
            PoolWithTag);
    if ( v15 )
    {
      SessionObjectById = 0LL;
      switch ( *(_WORD *)v9 )
      {
        case 3:
          v17 = *(void **)(v9 + 8);
          if ( (*(_DWORD *)(*(_QWORD *)(v9 + 312) + 32LL) & 0x400) != 0 )
          {
            DevicePDO = (struct _DEVICE_OBJECT *)IopGetDevicePDO(v9);
            v22 = DevicePDO;
            if ( DevicePDO )
            {
              IopGetSessionIdFromPDO(DevicePDO);
              SessionObjectById = MmGetSessionObjectById();
              ObfDereferenceObject(v22);
            }
            v7 = CallbackFunction;
          }
          *(_DWORD *)(*(_QWORD *)(v9 + 312) + 32LL) |= 0x1000u;
          goto LABEL_11;
        case 4:
          v17 = (void *)v9;
LABEL_11:
          ObfReferenceObject(v17);
          v14[5] = v9;
          v14[2] = v17;
          v14[4] = v15;
          v14[8] = *((_QWORD *)NotificationInformation + 3);
          *((_DWORD *)v14 + 14) = *((_DWORD *)NotificationInformation + 4);
          v14[3] = v7;
          v14[6] = SessionObjectById;
          *(_QWORD *)CallbackRegistration = v15;
          v18 = (_QWORD *)qword_1403C8728;
          if ( *(PVOID **)qword_1403C8728 != &IopSessionNotificationQueueHead )
            __fastfail(3u);
          *v14 = &IopSessionNotificationQueueHead;
          v14[1] = v18;
          *v18 = v14;
          qword_1403C8728 = (__int64)v14;
          goto LABEL_13;
        case 5:
          v17 = *(void **)(*(_QWORD *)(v9 + 8) + 8LL);
          FileObjectExtension = IopAllocateFileObjectExtension(v9, v23);
          if ( FileObjectExtension >= 0 )
          {
            *(_DWORD *)v23[0] |= 2u;
            FileObjectExtension = 0;
          }
          if ( FileObjectExtension >= 0 )
            goto LABEL_11;
          break;
        default:
          FileObjectExtension = -1073741583;
          break;
      }
    }
    else
    {
      FileObjectExtension = -1073741670;
    }
    ExFreePoolWithTag(v14, 0);
    if ( v15 )
      ExUnregisterCallback(v15);
    goto LABEL_13;
  }
  return -1073741582;
}
