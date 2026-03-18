/*
 * XREFs of DpiMiracastTargetDeviceChange @ 0x1C003E0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0001CD4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C003D9C0 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C003DBB0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTearDownAssociation @ 0x1C003E500 (DpiMiracastTearDownAssociation.c)
 *     DxgkFreeUnicodeString @ 0x1C01F03D8 (DxgkFreeUnicodeString.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x1C01FE960 (DpiMiracastBroadcastDeviceStateChange.c)
 */

__int64 __fastcall DpiMiracastTargetDeviceChange(char *NotificationStructure, char *Context)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  void *v7; // rcx
  __int64 v8; // rax
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v13; // rax
  char *v14; // r14
  void *v15; // rbx
  int v16; // r15d
  void *v17; // rcx
  NTSTATUS v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rax
  int v22; // eax
  _QWORD *v23; // rcx
  PVOID *v24; // rax
  char **v25; // rax
  void *v26; // rcx
  void *v27; // rcx
  void *v28; // rcx
  void *v29; // rcx
  void *v30; // rcx
  void *v31; // rcx
  size_t Size; // [rsp+28h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+80h] [rbp+8h] BYREF

  LODWORD(v3) = 0;
  if ( !NotificationStructure )
  {
    v4 = WdLogNewEntry5_WdError(0LL);
    v5 = -1073741585LL;
LABEL_47:
    *(_QWORD *)(v4 + 24) = v5;
    WdLogEvent5_WdError(v4);
    return (unsigned int)v5;
  }
  if ( !Context || *((_DWORD *)Context + 4) != 1953656900 || *((_DWORD *)Context + 5) != 14 )
  {
    v4 = WdLogNewEntry5_WdError(NotificationStructure);
    v5 = -1073741584LL;
    goto LABEL_47;
  }
  v6 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v6 )
    v6 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( v6 )
  {
    v8 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
    if ( !v8 )
      v8 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
    if ( v8 )
    {
      v13 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
      if ( !v13 )
        v13 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
      if ( v13 )
      {
        LODWORD(v3) = -1073741811;
      }
      else
      {
        v14 = Context + 32;
        ExEnterCriticalRegionAndAcquireFastMutexUnsafe(Context + 32);
        v15 = (void *)*((_QWORD *)Context + 50);
        v16 = *((_DWORD *)Context + 102);
        *((_QWORD *)Context + 50) = 0LL;
        *((_QWORD *)Context + 11) = 0LL;
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v14);
        if ( v15 )
        {
          IoUnregisterPlugPlayNotificationEx(v15);
          IoSetDeviceInterfaceState((PUNICODE_STRING)Context + 8, 0);
          if ( v16 )
          {
            LODWORD(Size) = 0;
            DpiMiracastStopMiracastSessionSync(Context, 0, 0LL, 0LL, 0x87u, Size);
            v17 = (void *)*((_QWORD *)Context + 58);
            Timeout.QuadPart = -300000000LL;
            v18 = KeWaitForSingleObject(v17, Executive, 0, 0, &Timeout);
            v20 = v18;
            if ( v18 )
            {
              v21 = WdLogNewEntry5_WdError(v19);
              *(_QWORD *)(v21 + 24) = v20;
              WdLogEvent5_WdError(v21);
              DpiMiracastTearDownAssociation(Context, 0);
            }
          }
          AcquireMiniportListMutex();
          ExEnterCriticalRegionAndAcquireFastMutexUnsafe(v14);
          *((_QWORD *)Context + 11) = KeGetCurrentThread();
          v22 = *((_DWORD *)Context + 102);
          if ( v22 )
          {
            *((_DWORD *)Context + 103) = v22;
            *((_DWORD *)Context + 102) = 0;
            DpiMiracastBroadcastDeviceStateChange(Context);
          }
          KeAcquireInStackQueuedSpinLock(&qword_1C007AB30, &LockHandle);
          v23 = *(_QWORD **)Context;
          if ( *(char **)(*(_QWORD *)Context + 8LL) != Context
            || (v24 = (PVOID *)*((_QWORD *)Context + 1), *v24 != Context) )
          {
            __fastfail(3u);
          }
          *v24 = v23;
          v23[1] = v24;
          v25 = (char **)qword_1C007AB50;
          if ( *(__int64 **)qword_1C007AB50 != &qword_1C007AB48 )
            __fastfail(3u);
          *(_QWORD *)Context = &qword_1C007AB48;
          *((_QWORD *)Context + 1) = v25;
          *v25 = Context;
          qword_1C007AB50 = (__int64)Context;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v26 = (void *)*((_QWORD *)Context + 22);
          if ( v26 )
          {
            ObfDereferenceObject(v26);
            *((_QWORD *)Context + 22) = 0LL;
            *((_QWORD *)Context + 23) = 0LL;
          }
          DxgkFreeUnicodeString(Context + 160);
          v27 = (void *)*((_QWORD *)Context + 42);
          if ( v27 )
          {
            ExFreePoolWithTag(v27, 0);
            *((_QWORD *)Context + 42) = 0LL;
          }
          v28 = (void *)*((_QWORD *)Context + 43);
          if ( v28 )
          {
            ExFreePoolWithTag(v28, 0);
            *((_QWORD *)Context + 43) = 0LL;
          }
          v29 = (void *)*((_QWORD *)Context + 44);
          if ( v29 )
          {
            ExFreePoolWithTag(v29, 0);
            *((_QWORD *)Context + 44) = 0LL;
          }
          v30 = (void *)*((_QWORD *)Context + 45);
          if ( v30 )
          {
            ExFreePoolWithTag(v30, 0);
            *((_QWORD *)Context + 45) = 0LL;
          }
          v31 = (void *)*((_QWORD *)Context + 46);
          if ( v31 )
          {
            ExFreePoolWithTag(v31, 0);
            *((_QWORD *)Context + 46) = 0LL;
          }
          RtlFreeUnicodeString((PUNICODE_STRING)Context + 8);
          *((_QWORD *)Context + 11) = 0LL;
          ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v14);
          _InterlockedExchange64(&qword_1C007A788, 0LL);
          KeReleaseMutex((PRKMUTEX)Mutex, 0);
          DpiMiracastReleaseMiracastDeviceContext((int *)Context, 0);
        }
      }
    }
    else
    {
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(Context + 32);
      *((_QWORD *)Context + 11) = KeGetCurrentThread();
      DeviceObjectPointer = IoGetDeviceObjectPointer(
                              (PUNICODE_STRING)Context + 9,
                              0x80000000,
                              (PFILE_OBJECT *)Context + 22,
                              (PDEVICE_OBJECT *)Context + 23);
      *((_QWORD *)Context + 11) = 0LL;
      v3 = DeviceObjectPointer;
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(Context + 32);
      if ( (int)v3 < 0 )
      {
        v11 = WdLogNewEntry5_WdError(v10);
        *(_QWORD *)(v11 + 24) = v3;
        WdLogEvent5_WdError(v11);
      }
    }
  }
  else
  {
    LODWORD(Size) = 0;
    DpiMiracastStopMiracastSessionSync(Context, 0, 0LL, 0LL, 0x84u, Size);
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(Context + 32);
    v7 = (void *)*((_QWORD *)Context + 22);
    *((_QWORD *)Context + 11) = KeGetCurrentThread();
    if ( v7 )
    {
      ObfDereferenceObject(v7);
      *((_QWORD *)Context + 22) = 0LL;
      *((_QWORD *)Context + 23) = 0LL;
    }
    *((_QWORD *)Context + 11) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(Context + 32);
  }
  return (unsigned int)v3;
}
