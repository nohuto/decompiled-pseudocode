/*
 * XREFs of IoRegisterFsRegistrationChangeMountAware @ 0x14064DD40
 * Callers:
 *     IoRegisterFsRegistrationChange @ 0x14071C660 (IoRegisterFsRegistrationChange.c)
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     IoGetActivityIdThread @ 0x140075140 (IoGetActivityIdThread.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x1400C8880 (IopIsKnownGoodLegacyFsFilter.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     IopGetFsRegistrationInProgress @ 0x140237164 (IopGetFsRegistrationInProgress.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     FsRtlSetDriverBacking @ 0x1405F6440 (FsRtlSetDriverBacking.c)
 *     IopNotifyAlreadyRegisteredFileSystems @ 0x14064DEF4 (IopNotifyAlreadyRegisteredFileSystems.c)
 */

NTSTATUS __stdcall IoRegisterFsRegistrationChangeMountAware(
        PDRIVER_OBJECT DriverObject,
        PDRIVER_FS_NOTIFICATION DriverNotificationRoutine,
        BOOLEAN SynchronizeWithMounts)
{
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v8; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  REGHANDLE v14; // rsi
  int Length; // ecx
  const GUID *ActivityIdThread; // rax
  __int16 v17; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-40h] BYREF
  wchar_t *Buffer; // [rsp+48h] [rbp-30h]
  int v20; // [rsp+50h] [rbp-28h]
  int v21; // [rsp+54h] [rbp-24h]

  if ( IopBlockLegacyFsFilters && !IopIsKnownGoodLegacyFsFilter((const void **)&DriverObject->DriverName) )
  {
    v14 = IoMgrTraceHandle;
    if ( EtwEventEnabled(IoMgrTraceHandle, &IoMgr_LegacyFsFilterBlockedByPolicy) )
    {
      Length = DriverObject->DriverName.Length;
      UserData.Reserved = 0;
      v21 = 0;
      v17 = (unsigned __int16)Length >> 1;
      UserData.Ptr = (ULONGLONG)&v17;
      Buffer = DriverObject->DriverName.Buffer;
      UserData.Size = 2;
      v20 = Length;
      ActivityIdThread = (const GUID *)IoGetActivityIdThread();
      EtwWrite(v14, &IoMgr_LegacyFsFilterBlockedByPolicy, ActivityIdThread, 2u, &UserData);
    }
    return -1073741637;
  }
  result = FsRtlSetDriverBacking((__int64)DriverObject, 1);
  if ( result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( SynchronizeWithMounts )
  {
    if ( ExAcquireResourceExclusiveLite(&IopDatabaseResource, 0) )
      goto LABEL_6;
    if ( IopGetFsRegistrationInProgress() )
    {
      v8 = -1073741267;
      goto LABEL_10;
    }
  }
  ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
LABEL_6:
  if ( (__int64 *)IopFsNotifyChangeQueueHead != &IopFsNotifyChangeQueueHead
    && *(PDRIVER_OBJECT *)(qword_1403C8208 + 16) == DriverObject
    && *(PDRIVER_FS_NOTIFICATION *)(qword_1403C8208 + 24) == DriverNotificationRoutine )
  {
    ExReleaseResourceLite(&IopDatabaseResource);
    v8 = -1073741768;
LABEL_10:
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v8;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x73466F49u);
  if ( !PoolWithTag )
  {
    ExReleaseResourceLite(&IopDatabaseResource);
    v8 = -1073741670;
    goto LABEL_10;
  }
  PoolWithTag[2] = DriverObject;
  PoolWithTag[3] = DriverNotificationRoutine;
  v10 = (_QWORD *)qword_1403C8208;
  if ( *(__int64 **)qword_1403C8208 != &IopFsNotifyChangeQueueHead )
    __fastfail(3u);
  *PoolWithTag = &IopFsNotifyChangeQueueHead;
  PoolWithTag[1] = v10;
  *v10 = PoolWithTag;
  qword_1403C8208 = (__int64)PoolWithTag;
  if ( SynchronizeWithMounts == 1 )
  {
    while ( IopMountsInProgress )
    {
      ++IopMountCompletionWaiters;
      ExReleaseResourceLite(&IopDatabaseResource);
      KeWaitForSingleObject(&IopMountCompletionEvent, Executive, 0, 0, 0LL);
      ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
      if ( --IopMountCompletionWaiters )
      {
        if ( !IopMountsInProgress )
          break;
      }
      KeResetEvent(&IopMountCompletionEvent);
    }
  }
  IopNotifyAlreadyRegisteredFileSystems(&IopNetworkFileSystemQueueHead, DriverNotificationRoutine, 0LL);
  LOBYTE(v11) = 1;
  IopNotifyAlreadyRegisteredFileSystems(&IopCdRomFileSystemQueueHead, DriverNotificationRoutine, v11);
  LOBYTE(v12) = 1;
  IopNotifyAlreadyRegisteredFileSystems(&IopDiskFileSystemQueueHead, DriverNotificationRoutine, v12);
  LOBYTE(v13) = 1;
  IopNotifyAlreadyRegisteredFileSystems(&IopTapeFileSystemQueueHead, DriverNotificationRoutine, v13);
  ExReleaseResourceLite(&IopDatabaseResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ObfReferenceObject(DriverObject);
  return 0;
}
