/*
 * XREFs of DxgkHandleMiracastEscape @ 0x1C01E27B8
 * Callers:
 *     DxgkEscape @ 0x1C009EC60 (DxgkEscape.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000F210 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000F314 (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F49C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DpiMiracastGetDeviceContextFromLuid @ 0x1C002EE58 (DpiMiracastGetDeviceContextFromLuid.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C002F8D0 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C002FAC0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00B8774 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00B87F0 (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkWriteDiagEntry @ 0x1C00D2FA0 (DxgkWriteDiagEntry.c)
 *     DpiMiracastDdiMiracastIoControl @ 0x1C01E1498 (DpiMiracastDdiMiracastIoControl.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C01E1B64 (DpiMiracastHandleStartSessionDone.c)
 *     DpiMiracastHandleStopSessionDone @ 0x1C01E1FC0 (DpiMiracastHandleStopSessionDone.c)
 */

__int64 __fastcall DxgkHandleMiracastEscape(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // r13
  _DWORD *PoolWithQuotaTag; // r15
  char v6; // r12
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 DeviceContextFromLuid; // r14
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // r13
  __int64 v24; // r13
  int v25; // eax
  int v26; // eax
  __int64 v27; // rax
  int v28; // eax
  struct _KEVENT *v29; // r9
  void *v30; // rcx
  NTSTATUS v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r13
  __int64 v34; // rax
  unsigned int v35; // eax
  __int64 v36; // rax
  void *v37; // r13
  __int64 v38; // rdx
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-D0h]
  char v40; // [rsp+40h] [rbp-B8h]
  char v41; // [rsp+42h] [rbp-B6h]
  char v42; // [rsp+43h] [rbp-B5h]
  PVOID Src; // [rsp+48h] [rbp-B0h]
  __int64 v44; // [rsp+70h] [rbp-88h]
  PVOID Object; // [rsp+78h] [rbp-80h] BYREF
  _QWORD v46[8]; // [rsp+80h] [rbp-78h] BYREF

  LODWORD(v3) = 0;
  v4 = 0LL;
  v44 = 0LL;
  PoolWithQuotaTag = 0LL;
  Src = 0LL;
  v6 = 0;
  v40 = 0;
  v42 = 0;
  v41 = 0;
  if ( (unsigned int)a1 < 0x38 )
  {
    v7 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v7 + 24) = -1073741789LL;
    WdLogEvent5_WdError(v7);
    return 3221225507LL;
  }
  *(_DWORD *)(a2 + 48) = 0;
  DeviceContextFromLuid = DpiMiracastGetDeviceContextFromLuid(*(_QWORD *)a2, 0);
  if ( !DeviceContextFromLuid )
  {
    v12 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
  if ( PsGetCurrentProcess(v10, v9) != *(_QWORD *)(DeviceContextFromLuid + 104) )
  {
    v3 = -1073741790LL;
LABEL_7:
    v15 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v15 + 24) = v3;
LABEL_8:
    WdLogEvent5_WdError(v15);
    goto LABEL_63;
  }
  v17 = *(_DWORD *)(a2 + 16);
  if ( v17 && (PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v17, 0x74727044u)) == 0LL
    || (v19 = *(_DWORD *)(a2 + 32)) != 0 && (Src = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v19, 0x74727044u)) == 0LL )
  {
    LODWORD(v3) = -1073741801;
    v18 = WdLogNewEntry5_WdLowResource(v13);
    *(_QWORD *)(v18 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v18);
    goto LABEL_63;
  }
  v20 = *(unsigned int *)(a2 + 16);
  if ( (_DWORD)v20 )
  {
    v21 = *(_QWORD *)(a2 + 24);
    if ( v21 + v20 > MmUserProbeAddress || v21 + v20 < v21 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(PoolWithQuotaTag, *(const void **)(a2 + 24), *(unsigned int *)(a2 + 16));
  }
  v22 = *(_DWORD *)(a2 + 32);
  if ( v22 )
    ProbeForWrite(*(volatile void **)(a2 + 40), v22, 1u);
  if ( (*(_DWORD *)(a2 + 8) & 6) != 0 )
  {
    AcquireMiniportListMutex();
    v6 = 1;
    v23 = *(_QWORD *)(DeviceContextFromLuid + 432);
    if ( !v23 )
    {
      v24 = -1073741275LL;
LABEL_24:
      LODWORD(v3) = v24;
      v15 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v15 + 24) = v24;
      goto LABEL_8;
    }
    v4 = *(_QWORD *)(v23 + 64);
    v44 = v4;
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v4 + 483) )
      DpiCheckForOutstandingD3Requests(v4);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 168), 1u);
    v40 = 1;
    v13 = *(unsigned int *)(v4 + 236);
    if ( (_DWORD)v13 != 2 && (*(_DWORD *)(v4 + 240) != 2 || (((_DWORD)v13 - 3) & 0xFFFFFFFC) != 0 || (_DWORD)v13 == 4) )
    {
      v24 = -1073741130LL;
      goto LABEL_24;
    }
    if ( (*(_DWORD *)(a2 + 8) & 4) != 0 )
    {
      v25 = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(DeviceContextFromLuid + 432), *(_BYTE *)(a2 + 12));
      v3 = v25;
      if ( v25 < 0 )
        goto LABEL_7;
      v42 = 1;
    }
  }
  if ( (*(_DWORD *)(a2 + 8) & 1) != 0 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(DeviceContextFromLuid + 32);
    *(_QWORD *)(DeviceContextFromLuid + 88) = KeGetCurrentThread();
    v41 = 1;
  }
  v26 = *(_DWORD *)(a2 + 8);
  if ( v26 == 4 )
  {
    LODWORD(v3) = DpiMiracastDdiMiracastIoControl(
                    v4,
                    *(_QWORD *)(DeviceContextFromLuid + 448),
                    *(unsigned int *)(a2 + 16),
                    (__int64)PoolWithQuotaTag,
                    *(_DWORD *)(a2 + 32),
                    (__int64)Src,
                    (_DWORD *)(a2 + 48));
    goto LABEL_62;
  }
  if ( v26 == 8 )
  {
    if ( *(_DWORD *)(a2 + 16) >= 0x350u )
    {
      DpiMiracastHandleStartSessionDone((char *)DeviceContextFromLuid, (__int64)PoolWithQuotaTag, v14);
      goto LABEL_62;
    }
    LODWORD(v3) = -1073741811;
    v27 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v27 + 24) = 8LL;
    goto LABEL_58;
  }
  if ( v26 != 16 )
  {
    if ( v26 == 24 )
    {
      v29 = 0LL;
      if ( *(_DWORD *)(a2 + 16) >= 0x18u )
      {
        v30 = (void *)*((_QWORD *)PoolWithQuotaTag + 1);
        if ( v30 )
        {
          v31 = ObReferenceObjectByHandle(v30, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
          v33 = v31;
          v29 = (struct _KEVENT *)Object;
          LODWORD(v3) = v31;
          if ( v31 < 0 )
          {
            v34 = WdLogNewEntry5_WdError(v32);
            *(_QWORD *)(v34 + 24) = v33;
            WdLogEvent5_WdError(v34);
            v29 = 0LL;
          }
        }
        LODWORD(HandleInformation) = *PoolWithQuotaTag;
        DpiMiracastStopMiracastSessionSync(
          (char *)DeviceContextFromLuid,
          0,
          0LL,
          v29,
          PoolWithQuotaTag[4],
          (size_t)HandleInformation);
        goto LABEL_62;
      }
    }
    else
    {
      if ( v26 != 32 )
      {
        LODWORD(v3) = -1073741637;
        v27 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v27 + 24) = -1073741637LL;
LABEL_59:
        WdLogEvent5_WdError(v27);
        goto LABEL_62;
      }
      memset(v46, 0, sizeof(v46));
      *(_BYTE *)(DeviceContextFromLuid + 591) = 1;
      if ( *(_DWORD *)(a2 + 16) >= 0x404u )
      {
        *((_BYTE *)PoolWithQuotaTag + 1023) = 0;
        LOBYTE(v13) = 1;
        if ( (unsigned __int8)WdIsDebuggerPresent(v13) )
        {
          DbgPrintEx(0x65u, 0, (PCSTR)PoolWithQuotaTag);
          __debugbreak();
        }
        v28 = PoolWithQuotaTag[256];
        v46[0] = 0x4000000006LL;
        memset(&v46[1], 0, 36);
        LODWORD(v46[6]) = 74;
        HIDWORD(v46[6]) = v28;
        v46[7] = 0LL;
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v46);
        goto LABEL_62;
      }
    }
    LODWORD(v3) = -1073741811;
    v27 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v27 + 24) = -1073741811LL;
    goto LABEL_59;
  }
  if ( *(_DWORD *)(a2 + 16) < 0x350u )
  {
    LODWORD(v3) = -1073741811;
    v27 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v27 + 24) = 16LL;
LABEL_58:
    *(_QWORD *)(v27 + 32) = -1073741811LL;
    goto LABEL_59;
  }
  DpiMiracastHandleStopSessionDone((char *)DeviceContextFromLuid, (__int64)PoolWithQuotaTag, v14);
LABEL_62:
  v40 = v6;
LABEL_63:
  if ( (int)v3 < 0 )
  {
LABEL_68:
    v37 = Src;
    goto LABEL_69;
  }
  v35 = *(_DWORD *)(a2 + 48);
  if ( *(_DWORD *)(a2 + 32) < v35 )
  {
    LODWORD(v3) = -1073741811;
    v36 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v36 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v36);
    goto LABEL_68;
  }
  if ( !v35 )
    goto LABEL_68;
  v37 = Src;
  memmove(*(void **)(a2 + 40), Src, *(unsigned int *)(a2 + 48));
LABEL_69:
  if ( PoolWithQuotaTag )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  if ( v37 )
    ExFreePoolWithTag(v37, 0);
  if ( v41 )
  {
    *(_QWORD *)(DeviceContextFromLuid + 88) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(DeviceContextFromLuid + 32);
  }
  if ( v42 )
    DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(DeviceContextFromLuid + 432), *(_BYTE *)(a2 + 12));
  if ( v40 )
  {
    v38 = v44;
    if ( *(_BYTE *)(v44 + 483) )
      DpiEnableD3Requests(*(_QWORD *)(v44 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v38 + 168));
    KeLeaveCriticalRegion();
  }
  if ( v6 )
  {
    _InterlockedExchange64(&qword_1C0060888, 0LL);
    KeReleaseMutex(Mutex, 0);
  }
  DpiMiracastReleaseMiracastDeviceContext((int *)DeviceContextFromLuid, DeviceContextFromLuid);
  return (unsigned int)v3;
}
