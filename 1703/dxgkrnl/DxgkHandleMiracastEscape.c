/*
 * XREFs of DxgkHandleMiracastEscape @ 0x1C01C8674
 * Callers:
 *     DxgkEscape @ 0x1C00D0150 (DxgkEscape.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001278 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C00012A0 (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00013AC (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DpiMiracastGetDeviceContextFromLuid @ 0x1C003E2D8 (DpiMiracastGetDeviceContextFromLuid.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C003ED50 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C003EF40 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00AA538 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00AA5B4 (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkWriteDiagEntry @ 0x1C00F2CA0 (DxgkWriteDiagEntry.c)
 *     DpiMiracastDdiMiracastIoControl @ 0x1C01C7370 (DpiMiracastDdiMiracastIoControl.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C01C7A04 (DpiMiracastHandleStartSessionDone.c)
 *     DpiMiracastHandleStopSessionDone @ 0x1C01C7E88 (DpiMiracastHandleStopSessionDone.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned int v24; // eax
  __int64 v25; // r13
  __int64 v26; // r13
  int v27; // eax
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // eax
  struct _KEVENT *v34; // r9
  void *v35; // rcx
  NTSTATUS v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r13
  __int64 v40; // rax
  unsigned int v41; // eax
  __int64 v42; // rax
  void *v43; // r13
  __int64 v44; // rdx
  char v45; // [rsp+40h] [rbp-B8h]
  char v46; // [rsp+42h] [rbp-B6h]
  char v47; // [rsp+43h] [rbp-B5h]
  PVOID Src; // [rsp+48h] [rbp-B0h]
  __int64 v49; // [rsp+70h] [rbp-88h]
  PVOID Object; // [rsp+78h] [rbp-80h] BYREF
  _QWORD v51[8]; // [rsp+80h] [rbp-78h] BYREF

  LODWORD(v3) = 0;
  v4 = 0LL;
  v49 = 0LL;
  PoolWithQuotaTag = 0LL;
  Src = 0LL;
  v6 = 0;
  v45 = 0;
  v47 = 0;
  v46 = 0;
  if ( (unsigned int)a1 < 0x38 )
  {
    v7 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v7 + 24) = -1073741789LL;
    WdLogEvent5_WdError(v7);
    return 3221225507LL;
  }
  *(_DWORD *)(a2 + 48) = 0;
  DeviceContextFromLuid = DpiMiracastGetDeviceContextFromLuid(*(_QWORD *)a2, 0);
  if ( !DeviceContextFromLuid )
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
  if ( PsGetCurrentProcess(v10) != *(_QWORD *)(DeviceContextFromLuid + 104) )
  {
    v3 = -1073741790LL;
LABEL_7:
    v16 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v16 + 24) = v3;
LABEL_8:
    WdLogEvent5_WdError(v16);
    goto LABEL_63;
  }
  v19 = *(_DWORD *)(a2 + 16);
  if ( v19 && (PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v19, 0x74727044u)) == 0LL
    || (v21 = *(_DWORD *)(a2 + 32)) != 0 && (Src = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v21, 0x74727044u)) == 0LL )
  {
    LODWORD(v3) = -1073741801;
    v20 = WdLogNewEntry5_WdLowResource(v14);
    *(_QWORD *)(v20 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v20);
    goto LABEL_63;
  }
  v22 = *(unsigned int *)(a2 + 16);
  if ( (_DWORD)v22 )
  {
    v23 = *(_QWORD *)(a2 + 24);
    if ( v23 + v22 > MmUserProbeAddress || v23 + v22 < v23 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(PoolWithQuotaTag, *(const void **)(a2 + 24), *(unsigned int *)(a2 + 16));
  }
  v24 = *(_DWORD *)(a2 + 32);
  if ( v24 )
    ProbeForWrite(*(volatile void **)(a2 + 40), v24, 1u);
  if ( (*(_DWORD *)(a2 + 8) & 6) != 0 )
  {
    AcquireMiniportListMutex();
    v6 = 1;
    v25 = *(_QWORD *)(DeviceContextFromLuid + 432);
    if ( !v25 )
    {
      v26 = -1073741275LL;
LABEL_24:
      LODWORD(v3) = v26;
      v16 = WdLogNewEntry5_WdError(v14, v13);
      *(_QWORD *)(v16 + 24) = v26;
      goto LABEL_8;
    }
    v4 = *(_QWORD *)(v25 + 64);
    v49 = v4;
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v4 + 483) )
      DpiCheckForOutstandingD3Requests(v4);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 168), 1u);
    v45 = 1;
    v14 = *(unsigned int *)(v4 + 236);
    if ( (_DWORD)v14 != 2 && (*(_DWORD *)(v4 + 240) != 2 || (((_DWORD)v14 - 3) & 0xFFFFFFFC) != 0 || (_DWORD)v14 == 4) )
    {
      v26 = -1073741130LL;
      goto LABEL_24;
    }
    if ( (*(_DWORD *)(a2 + 8) & 4) != 0 )
    {
      v27 = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(DeviceContextFromLuid + 432), *(_BYTE *)(a2 + 12));
      v3 = v27;
      if ( v27 < 0 )
        goto LABEL_7;
      v47 = 1;
    }
  }
  if ( (*(_DWORD *)(a2 + 8) & 1) != 0 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(DeviceContextFromLuid + 32);
    *(_QWORD *)(DeviceContextFromLuid + 88) = KeGetCurrentThread();
    v46 = 1;
  }
  v28 = *(_DWORD *)(a2 + 8);
  if ( v28 == 4 )
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
  if ( v28 == 8 )
  {
    if ( *(_DWORD *)(a2 + 16) >= 0x350u )
    {
      DpiMiracastHandleStartSessionDone((char *)DeviceContextFromLuid, (__int64)PoolWithQuotaTag, v15);
      goto LABEL_62;
    }
    LODWORD(v3) = -1073741811;
    v29 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v29 + 24) = 8LL;
    goto LABEL_58;
  }
  if ( v28 != 16 )
  {
    if ( v28 == 24 )
    {
      v34 = 0LL;
      if ( *(_DWORD *)(a2 + 16) >= 0x18u )
      {
        v35 = (void *)*((_QWORD *)PoolWithQuotaTag + 1);
        if ( v35 )
        {
          v36 = ObReferenceObjectByHandle(v35, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
          v39 = v36;
          v34 = (struct _KEVENT *)Object;
          LODWORD(v3) = v36;
          if ( v36 < 0 )
          {
            v40 = WdLogNewEntry5_WdError(v38, v37);
            *(_QWORD *)(v40 + 24) = v39;
            WdLogEvent5_WdError(v40);
            v34 = 0LL;
          }
        }
        DpiMiracastStopMiracastSessionSync(
          (char *)DeviceContextFromLuid,
          0,
          0LL,
          v34,
          PoolWithQuotaTag[4],
          *PoolWithQuotaTag);
        goto LABEL_62;
      }
    }
    else
    {
      if ( v28 != 32 )
      {
        LODWORD(v3) = -1073741637;
        v29 = WdLogNewEntry5_WdError(v14, v13);
        *(_QWORD *)(v29 + 24) = -1073741637LL;
LABEL_59:
        WdLogEvent5_WdError(v29);
        goto LABEL_62;
      }
      memset(v51, 0, sizeof(v51));
      *(_BYTE *)(DeviceContextFromLuid + 591) = 1;
      if ( *(_DWORD *)(a2 + 16) >= 0x404u )
      {
        *((_BYTE *)PoolWithQuotaTag + 1023) = 0;
        LOBYTE(v14) = 1;
        if ( (unsigned __int8)WdIsDebuggerPresent(v14) )
        {
          DbgPrintEx(0x65u, 0, (PCSTR)PoolWithQuotaTag);
          __debugbreak();
        }
        v33 = PoolWithQuotaTag[256];
        v51[0] = 0x4000000006LL;
        memset(&v51[1], 0, 36);
        LODWORD(v51[6]) = 74;
        HIDWORD(v51[6]) = v33;
        v51[7] = 0LL;
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v51, v30, v31, v32);
        goto LABEL_62;
      }
    }
    LODWORD(v3) = -1073741811;
    v29 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v29 + 24) = -1073741811LL;
    goto LABEL_59;
  }
  if ( *(_DWORD *)(a2 + 16) < 0x350u )
  {
    LODWORD(v3) = -1073741811;
    v29 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v29 + 24) = 16LL;
LABEL_58:
    *(_QWORD *)(v29 + 32) = -1073741811LL;
    goto LABEL_59;
  }
  DpiMiracastHandleStopSessionDone((char *)DeviceContextFromLuid, (__int64)PoolWithQuotaTag, v15);
LABEL_62:
  v45 = v6;
LABEL_63:
  if ( (int)v3 < 0 )
  {
LABEL_68:
    v43 = Src;
    goto LABEL_69;
  }
  v41 = *(_DWORD *)(a2 + 48);
  if ( *(_DWORD *)(a2 + 32) < v41 )
  {
    LODWORD(v3) = -1073741811;
    v42 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v42 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v42);
    goto LABEL_68;
  }
  if ( !v41 )
    goto LABEL_68;
  v43 = Src;
  memmove(*(void **)(a2 + 40), Src, *(unsigned int *)(a2 + 48));
LABEL_69:
  if ( PoolWithQuotaTag )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  if ( v43 )
    ExFreePoolWithTag(v43, 0);
  if ( v46 )
  {
    *(_QWORD *)(DeviceContextFromLuid + 88) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(DeviceContextFromLuid + 32);
  }
  if ( v47 )
    DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(DeviceContextFromLuid + 432), *(_BYTE *)(a2 + 12));
  if ( v45 )
  {
    v44 = v49;
    if ( *(_BYTE *)(v49 + 483) )
      DpiEnableD3Requests(*(_QWORD *)(v49 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v44 + 168));
    KeLeaveCriticalRegion();
  }
  if ( v6 )
  {
    _InterlockedExchange64(&qword_1C006FA08, 0LL);
    KeReleaseMutex(Mutex, 0);
  }
  DpiMiracastReleaseMiracastDeviceContext((int *)DeviceContextFromLuid, DeviceContextFromLuid);
  return (unsigned int)v3;
}
