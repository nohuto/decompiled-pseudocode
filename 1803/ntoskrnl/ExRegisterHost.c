/*
 * XREFs of ExRegisterHost @ 0x1406423DC
 * Callers:
 *     IopInitializeIoRate @ 0x1401803AC (IopInitializeIoRate.c)
 *     PspInitializeOctagonExtensionHost @ 0x14064212C (PspInitializeOctagonExtensionHost.c)
 *     EtwpInitializeProcessorTrace @ 0x140642180 (EtwpInitializeProcessorTrace.c)
 *     ExpInitSystemPhase1 @ 0x1408A0198 (ExpInitSystemPhase1.c)
 *     KeInitSystem @ 0x1408B21CC (KeInitSystem.c)
 *     PspInitializeBackgroundActivityModeratorCallouts @ 0x1408BC8EC (PspInitializeBackgroundActivityModeratorCallouts.c)
 *     PspInitializeDesktopActivityModeratorCallouts @ 0x1408BC948 (PspInitializeDesktopActivityModeratorCallouts.c)
 *     PspInitializeHwTraceCallouts @ 0x1408BC99C (PspInitializeHwTraceCallouts.c)
 *     PspInitializeMMCSSCallouts @ 0x1408BC9F8 (PspInitializeMMCSSCallouts.c)
 *     PspInitializeNetRateControl @ 0x1408BCA54 (PspInitializeNetRateControl.c)
 *     VmInitSystem @ 0x1408BCAA4 (VmInitSystem.c)
 *     SepInitializeAuthorizationCallbacks @ 0x1408BCB04 (SepInitializeAuthorizationCallbacks.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExWaitForRundownProtectionRelease @ 0x140040D50 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ExpFindHost @ 0x140642534 (ExpFindHost.c)
 *     ExpDereferenceHost @ 0x1407C6258 (ExpDereferenceHost.c)
 */

__int64 __fastcall ExRegisterHost(_QWORD *a1, __int64 a2, unsigned __int16 *a3)
{
  char *PoolWithTag; // rax
  unsigned int v6; // edi
  _QWORD *v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rax
  signed __int8 v10; // cf
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 Host; // rbp
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rax
  char v17; // si

  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)*((_DWORD *)a3 + 2), 0x60uLL, 0x48457845u);
  v6 = 0;
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[88] &= ~1u;
  *((_DWORD *)PoolWithTag + 4) = 1;
  *((_QWORD *)PoolWithTag + 10) = 0LL;
  *(_OWORD *)(PoolWithTag + 24) = *(_OWORD *)a3;
  *(_OWORD *)(PoolWithTag + 40) = *((_OWORD *)a3 + 1);
  *((_QWORD *)PoolWithTag + 7) = *((_QWORD *)a3 + 4);
  *((_QWORD *)PoolWithTag + 9) = 0LL;
  *((_QWORD *)PoolWithTag + 8) = 0LL;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)PoolWithTag + 8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = KeAbPreAcquire((ULONG_PTR)&ExpHostListLock, 0LL, 0);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&ExpHostListLock, 0LL);
  v11 = v9;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(&ExpHostListLock, v9, (ULONG_PTR)&ExpHostListLock);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  Host = ExpFindHost(*a3, a3[1]);
  if ( Host )
  {
    v6 = -1073741771;
    ExpDereferenceHost(v7);
    ExpDereferenceHost(Host);
  }
  else
  {
    v16 = (_QWORD *)qword_140861300;
    if ( *(__int64 **)qword_140861300 != &ExpHostList )
      __fastfail(3u);
    *v7 = &ExpHostList;
    v7[1] = v16;
    *v16 = v7;
    qword_140861300 = (__int64)v7;
    *a1 = v7;
  }
  v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpHostListLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v17 & 2) != 0 && (v17 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpHostListLock, v12, v14, v15);
  KeAbPostRelease((ULONG_PTR)&ExpHostListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v6;
}
