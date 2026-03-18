/*
 * XREFs of DpiMiracastTearDownAssociation @ 0x1C0030410
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x1C002FAC0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C002FFE0 (DpiMiracastTargetDeviceChange.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C01E1B64 (DpiMiracastHandleStartSessionDone.c)
 *     DpiMiracastHandleStopSessionDone @ 0x1C01E1FC0 (DpiMiracastHandleStopSessionDone.c)
 *     DpiMiracastStartSessionRequestCallback @ 0x1C01E2660 (DpiMiracastStartSessionRequestCallback.c)
 *     DpiMiracastStopSessionRequestCallback @ 0x1C01E2770 (DpiMiracastStopSessionRequestCallback.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C000F314 (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F49C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpIndicateChildStatus @ 0x1C0011220 (DpIndicateChildStatus.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z @ 0x1C002E884 (--_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z.c)
 *     DpiMiracastEtwLogStopMiracastSessionStage @ 0x1C002EE28 (DpiMiracastEtwLogStopMiracastSessionStage.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C002F8D0 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     McTemplateK0qqz @ 0x1C0031F4C (McTemplateK0qqz.c)
 *     TraceLoggingWriteMiracastSessionStop @ 0x1C00343FC (TraceLoggingWriteMiracastSessionStop.c)
 *     DxgkWriteDiagEntry @ 0x1C00D2FA0 (DxgkWriteDiagEntry.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x1C01E0FB8 (DpiMiracastBroadcastDeviceStateChange.c)
 *     DpiMiracastDdiMiracastDestroyContext @ 0x1C01E1420 (DpiMiracastDdiMiracastDestroyContext.c)
 */

void __fastcall DpiMiracastTearDownAssociation(char *P, int a2, int a3, unsigned int a4, char a5)
{
  __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // r8
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // rcx
  MIRACAST_CHUNK_LIST *v16; // rcx
  MIRACAST_CHUNK_LIST *v17; // rcx
  MIRACAST_CHUNK_LIST *v18; // rcx
  MIRACAST_CHUNK_LIST *v19; // rcx
  MIRACAST_CHUNK_LIST *v20; // rcx
  MIRACAST_CHUNK_LIST *v21; // rcx
  struct _KEVENT *v22; // rcx
  struct _KEVENT *v23; // rcx
  __int64 v24; // rcx
  unsigned int v25; // r13d
  __int64 v26; // [rsp+30h] [rbp-51h] BYREF
  __int64 v27; // [rsp+38h] [rbp-49h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-41h] BYREF
  _QWORD v29[8]; // [rsp+60h] [rbp-21h] BYREF

  if ( !a5 )
    AcquireMiniportListMutex();
  if ( *((_DWORD *)P + 110) != a2 && a2 != -2 )
    goto LABEL_43;
  v9 = *((_QWORD *)P + 54);
  if ( v9 )
  {
    v11 = *(_QWORD *)(v9 + 64);
    v26 = 0LL;
    v27 = 0LL;
    if ( !a5 )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v11 + 483) )
        DpiCheckForOutstandingD3Requests(v11);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v11 + 168), 1u);
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(P + 32);
      *((_QWORD *)P + 11) = KeGetCurrentThread();
    }
    *((_DWORD *)P + 104) = a3;
    if ( a4 <= 0x7F )
    {
      *((_DWORD *)P + 103) = *((_DWORD *)P + 102);
      *((_DWORD *)P + 102) = 0;
      DpiMiracastBroadcastDeviceStateChange(P);
    }
    DpiMiracastDdiMiracastDestroyContext(v11, *((_QWORD *)P + 56));
    DpiMiracastEtwLogStopMiracastSessionStage((__int64)P, 1, v12);
    if ( !P[590] && (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
      McTemplateK0qqz(
        v13,
        (unsigned int)&EventMiracastPerfTrackStartMiracastSessionNoSend,
        v14,
        *((_DWORD *)P + 110),
        *((_DWORD *)P + 50),
        *((_QWORD *)P + 44));
    v15 = *(_QWORD *)(v11 + 24);
    HIDWORD(v26) = *((_DWORD *)P + 114);
    LODWORD(v26) = 3;
    LOBYTE(v27) = 0;
    DpIndicateChildStatus(v15, (int *)&v26);
    *((_QWORD *)P + 56) = 0LL;
    *((_DWORD *)P + 114) = -1;
    KeAcquireInStackQueuedSpinLock(&qword_1C0060BD8, &LockHandle);
    *((_QWORD *)P + 54) = 0LL;
    *(_QWORD *)(v11 + 3096) = 0LL;
    *(_QWORD *)(v11 + 3104) = 0LL;
    *((_QWORD *)P + 47) = 0LL;
    *((_QWORD *)P + 48) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    KeFlushQueuedDpcs();
    v16 = (MIRACAST_CHUNK_LIST *)*((_QWORD *)P + 61);
    if ( v16 )
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v16);
    *((_QWORD *)P + 61) = 0LL;
    v17 = *(MIRACAST_CHUNK_LIST **)(v11 + 3120);
    if ( v17 )
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v17);
    v18 = *(MIRACAST_CHUNK_LIST **)(v11 + 3128);
    *(_QWORD *)(v11 + 3120) = 0LL;
    if ( v18 )
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v18);
    v19 = *(MIRACAST_CHUNK_LIST **)(v11 + 3136);
    *(_QWORD *)(v11 + 3128) = 0LL;
    if ( v19 )
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v19);
    *(_QWORD *)(v11 + 3136) = 0LL;
    v20 = (MIRACAST_CHUNK_LIST *)*((_QWORD *)P + 63);
    if ( v20 )
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v20);
    v21 = (MIRACAST_CHUNK_LIST *)*((_QWORD *)P + 64);
    *((_QWORD *)P + 63) = 0LL;
    if ( v21 )
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v21);
    v22 = (struct _KEVENT *)*((_QWORD *)P + 59);
    *((_QWORD *)P + 64) = 0LL;
    if ( v22 )
    {
      KeSetEvent(v22, 0, 0);
      ObfDereferenceObject(*((PVOID *)P + 59));
      *((_QWORD *)P + 59) = 0LL;
    }
    v23 = (struct _KEVENT *)*((_QWORD *)P + 60);
    if ( v23 )
      KeSetEvent(v23, 0, 0);
    KeSetEvent(*((PRKEVENT *)P + 58), 0, 0);
    --dword_1C0060C00;
    DpiMiracastReleaseMiracastDeviceContext((int *)P, (unsigned int)P);
    v24 = MEMORY[0xFFFFF78000000014];
    *((_QWORD *)P + 80) = MEMORY[0xFFFFF78000000014];
    TraceLoggingWriteMiracastSessionStop(P, a4, (v24 - *((_QWORD *)P + 79)) / 10000000);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v11 + 64), P, 0x20u);
    v25 = *((_DWORD *)P + 169);
    memset(P + 600, 0, 0x20uLL);
    if ( !a5 )
    {
      *((_QWORD *)P + 11) = 0LL;
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(P + 32);
      if ( *(_BYTE *)(v11 + 483) )
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v11 + 24) + 64LL) + 3912LL));
      ExReleaseResourceLite(*(PERESOURCE *)(v11 + 168));
      KeLeaveCriticalRegion();
    }
    memset(v29, 0, sizeof(v29));
    v29[0] = 0x4000000006LL;
    memset(&v29[1], 0, 36);
    LODWORD(v29[6]) = 72;
    HIDWORD(v29[6]) = a3;
    v29[7] = __PAIR64__(a4, v25);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v29);
    goto LABEL_43;
  }
  if ( a4 > 0x7F )
  {
LABEL_43:
    if ( !a5 )
    {
      _InterlockedExchange64(&qword_1C0060888, 0LL);
      KeReleaseMutex(Mutex, 0);
    }
    return;
  }
  if ( !a5 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(P + 32);
    *((_QWORD *)P + 11) = KeGetCurrentThread();
  }
  v10 = *((_DWORD *)P + 102);
  if ( v10 )
  {
    *((_DWORD *)P + 103) = v10;
    *((_DWORD *)P + 102) = 0;
    *((_DWORD *)P + 104) = a3;
    DpiMiracastBroadcastDeviceStateChange(P);
  }
  if ( !a5 )
  {
    *((_QWORD *)P + 11) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(P + 32);
    goto LABEL_43;
  }
}
