/*
 * XREFs of PsUpdateActiveProcessAffinity @ 0x140716588
 * Callers:
 *     KeStartDynamicProcessor @ 0x1406D8330 (KeStartDynamicProcessor.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KeAndAffinityEx @ 0x14008CC70 (KeAndAffinityEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeIsEqualAffinityEx @ 0x140138DD0 (KeIsEqualAffinityEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PsGetNextProcess @ 0x1404FD830 (PsGetNextProcess.c)
 *     PspUpdateSingleProcessAffinity @ 0x140716D58 (PspUpdateSingleProcessAffinity.c)
 */

_QWORD *PsUpdateActiveProcessAffinity()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int128 v1; // xmm1
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int64 v9; // rax
  _QWORD *v10; // rcx
  unsigned __int64 NextProcess; // rax
  _QWORD *v12; // rdi
  unsigned __int16 v14[88]; // [rsp+20h] [rbp-C8h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspAffinityUpdateLock, 0LL);
  KeAndAffinityEx((unsigned __int16 *)KeActiveProcessors, PspLastUpdateAffinityMask, v14);
  if ( !(unsigned int)KeIsEqualAffinityEx((unsigned __int16 *)KeActiveProcessors, v14) )
  {
    v1 = *(_OWORD *)&KeActiveProcessors[4];
    *(_OWORD *)PspLastUpdateAffinityMask = *(_OWORD *)KeActiveProcessors;
    v2 = *(_OWORD *)&KeActiveProcessors[8];
    *(_OWORD *)&PspLastUpdateAffinityMask[8] = v1;
    v3 = *(_OWORD *)&KeActiveProcessors[12];
    *(_OWORD *)&PspLastUpdateAffinityMask[16] = v2;
    v4 = *(_OWORD *)&KeActiveProcessors[16];
    *(_OWORD *)&PspLastUpdateAffinityMask[24] = v3;
    v5 = *(_OWORD *)&KeActiveProcessors[20];
    *(_OWORD *)&PspLastUpdateAffinityMask[32] = v4;
    v6 = *(_OWORD *)&KeActiveProcessors[24];
    *(_OWORD *)&PspLastUpdateAffinityMask[40] = v5;
    v7 = *(_OWORD *)&KeActiveProcessors[32];
    *(_OWORD *)&PspLastUpdateAffinityMask[48] = v6;
    *(_OWORD *)&PspLastUpdateAffinityMask[56] = *(_OWORD *)&KeActiveProcessors[28];
    v8 = *(_OWORD *)&KeActiveProcessors[36];
    v9 = *(_QWORD *)&KeActiveProcessors[40];
    v10 = 0LL;
    *(_OWORD *)&PspLastUpdateAffinityMask[64] = v7;
    *(_OWORD *)&PspLastUpdateAffinityMask[72] = v8;
    *(_QWORD *)&PspLastUpdateAffinityMask[80] = v9;
    while ( 1 )
    {
      NextProcess = PsGetNextProcess(v10);
      v12 = (_QWORD *)NextProcess;
      if ( !NextProcess )
        break;
      PspUpdateSingleProcessAffinity(CurrentThread, NextProcess, KeActiveProcessors);
      v10 = v12;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspAffinityUpdateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspAffinityUpdateLock);
  KeAbPostRelease((ULONG_PTR)&PspAffinityUpdateLock);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
