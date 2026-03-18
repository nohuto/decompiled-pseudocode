/*
 * XREFs of PopFxBuildDripsBlockingDeviceList @ 0x140274C18
 * Callers:
 *     PopDripsCallbackTakeAction @ 0x14076DE64 (PopDripsCallbackTakeAction.c)
 *     PopDripsWatchdogTakeAction @ 0x14076DFD0 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     PopFxAddRefDevice @ 0x14007826C (PopFxAddRefDevice.c)
 *     PnpLockDeviceActionQueue @ 0x1400C89A8 (PnpLockDeviceActionQueue.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PopFxIsDripsBlockingDevice @ 0x1402755A4 (PopFxIsDripsBlockingDevice.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     IoGetDevicePropertyData @ 0x140587390 (IoGetDevicePropertyData.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x14075F754 (PopFxDestroyDripsBlockingDeviceList.c)
 */

__int64 __fastcall PopFxBuildDripsBlockingDeviceList(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS DevicePropertyData; // ebp
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  ULONG_PTR *i; // rdi
  _QWORD *v10; // r14
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  __int64 *v13; // rbx
  __int64 v14; // rcx
  __int64 *v15; // rax
  unsigned int v16; // r14d
  __int64 *v17; // r8
  unsigned int v18; // r9d
  __int64 *v19; // rax
  unsigned int v20; // edx
  unsigned int v21; // ecx
  int v22; // eax
  __int64 *v23; // rax
  unsigned int v24; // ecx
  unsigned __int64 v25; // rax
  _QWORD *PoolWithTag; // r8
  __int64 *v27; // rdx
  __int64 v28; // r9
  __int64 *v29; // rcx
  int v30; // eax
  __int64 *v31; // rax
  ULONG Type; // [rsp+40h] [rbp-48h] BYREF
  ULONG RequiredSize; // [rsp+44h] [rbp-44h] BYREF
  _QWORD Data[2]; // [rsp+48h] [rbp-40h] BYREF

  CurrentThread = KeGetCurrentThread();
  DevicePropertyData = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxBlockingDeviceListLock, 0LL);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  a2[1] = a2;
  *a2 = a2;
  for ( i = (ULONG_PTR *)PopFxDeviceList; i != &PopFxDeviceList; i = (ULONG_PTR *)*i )
  {
    v10 = i + 94;
    if ( i[6] && (unsigned __int8)PopFxIsDripsBlockingDevice(i, a1, i + 96) )
    {
      PopFxAddRefDevice((ULONG_PTR)i);
      v11 = (_QWORD *)a2[1];
      if ( (_QWORD *)*v11 != a2 )
        __fastfail(3u);
      *v10 = a2;
      i[95] = (ULONG_PTR)v11;
      *v11 = v10;
      a2[1] = v10;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxDeviceListLock, v6, v7, v8);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  PnpLockDeviceActionQueue();
  v12 = (_QWORD *)*a2;
  if ( (_QWORD *)*a2 == a2 )
    return (unsigned int)DevicePropertyData;
  while ( 1 )
  {
    v13 = (__int64 *)*(v12 - 88);
    DevicePropertyData = IoGetDevicePropertyData(
                           (PDEVICE_OBJECT)v13[4],
                           &DEVPKEY_Device_ClassGuid,
                           0,
                           0,
                           0x10u,
                           Data,
                           &RequiredSize,
                           &Type);
    if ( DevicePropertyData >= 0 && Type == 13 && RequiredSize == 16 )
    {
      v14 = *(_QWORD *)&GUID_DEVICE_CLASS_USB_CONTROLLER.Data1 - Data[0];
      if ( *(_QWORD *)&GUID_DEVICE_CLASS_USB_CONTROLLER.Data1 == Data[0] )
        v14 = *(_QWORD *)GUID_DEVICE_CLASS_USB_CONTROLLER.Data4 - Data[1];
      if ( !v14 )
        break;
    }
    DevicePropertyData = 0;
LABEL_52:
    v12 = (_QWORD *)*v12;
    if ( v12 == a2 )
      goto LABEL_55;
  }
  v15 = (__int64 *)v13[1];
  v16 = 0;
  v17 = v13;
  while ( v15 )
  {
    v17 = v15;
    v15 = (__int64 *)v15[1];
  }
  if ( v17 == v13 )
    goto LABEL_52;
  do
  {
    v18 = v16;
    if ( *((_DWORD *)v17 + 35) == 1 )
    {
      *((_DWORD *)v17 + 74) &= ~0x20u;
      v19 = v17;
      if ( v17 == v13 )
      {
LABEL_26:
        *((_DWORD *)v17 + 74) |= 0x20u;
        v20 = v16 + 1;
        v21 = v16;
        v22 = -1;
        if ( v16 + 1 >= v16 )
          v22 = v16 + 1;
        v16 = v22;
        DevicePropertyData = v20 < v21 ? 0xC0000095 : 0;
        if ( v20 < v18 )
          goto LABEL_55;
      }
      else
      {
        while ( *((_DWORD *)v19 + 35) == 1 )
        {
          v19 = (__int64 *)v19[2];
          if ( v19 == v13 )
            goto LABEL_26;
        }
      }
    }
    v23 = (__int64 *)*v17;
    if ( *v17 )
    {
      do
      {
        v17 = v23;
        v23 = (__int64 *)v23[1];
      }
      while ( v23 );
    }
    else
    {
      v17 = (__int64 *)v17[2];
    }
  }
  while ( v17 != v13 );
  if ( !v16 )
    goto LABEL_52;
  v24 = -1;
  v25 = 8LL * v16;
  if ( v25 <= 0xFFFFFFFF )
    v24 = 8 * v16;
  DevicePropertyData = v25 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v25 > 0xFFFFFFFF )
    goto LABEL_55;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v24, 0x4D584650u);
  if ( PoolWithTag )
  {
    v27 = (__int64 *)v13[1];
    v28 = 0LL;
    v29 = v13;
    while ( v27 )
    {
      v29 = v27;
      v27 = (__int64 *)v27[1];
    }
    while ( v29 != v13 )
    {
      v30 = *((_DWORD *)v29 + 74);
      if ( (v30 & 0x20) != 0 )
      {
        *((_DWORD *)v29 + 74) = v30 & 0xFFFFFFDF;
        PoolWithTag[v28] = v29;
        v28 = (unsigned int)(v28 + 1);
      }
      v31 = (__int64 *)*v29;
      if ( *v29 )
      {
        do
        {
          v29 = v31;
          v31 = (__int64 *)v31[1];
        }
        while ( v31 );
      }
      else
      {
        v29 = (__int64 *)v29[2];
      }
    }
    v12[3] = PoolWithTag;
    *((_DWORD *)v12 + 8) = v16;
    goto LABEL_52;
  }
  DevicePropertyData = -1073741670;
LABEL_55:
  if ( DevicePropertyData < 0 )
    PopFxDestroyDripsBlockingDeviceList(a2);
  return (unsigned int)DevicePropertyData;
}
