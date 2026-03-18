/*
 * XREFs of PsUpdateActiveProcessAffinity @ 0x14077A61C
 * Callers:
 *     KeStartDynamicProcessor @ 0x1407421B0 (KeStartDynamicProcessor.c)
 * Callees:
 *     KeAndAffinityEx @ 0x140035310 (KeAndAffinityEx.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KeIsEqualAffinityEx @ 0x14017FE90 (KeIsEqualAffinityEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PsGetNextProcess @ 0x140538C80 (PsGetNextProcess.c)
 *     PspUpdateSingleProcessAffinity @ 0x14077AED8 (PspUpdateSingleProcessAffinity.c)
 */

_QWORD *PsUpdateActiveProcessAffinity()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int64 v12; // rax
  _QWORD *v13; // rcx
  unsigned __int64 NextProcess; // rax
  _QWORD *v15; // rdi
  unsigned __int16 v17[88]; // [rsp+20h] [rbp-C8h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspAffinityUpdateLock, 0LL);
  KeAndAffinityEx((unsigned __int16 *)KeActiveProcessors, PspLastUpdateAffinityMask, v17);
  if ( !(unsigned int)KeIsEqualAffinityEx((unsigned __int16 *)KeActiveProcessors, v17) )
  {
    v4 = *(_OWORD *)&KeActiveProcessors[4];
    *(_OWORD *)PspLastUpdateAffinityMask = *(_OWORD *)KeActiveProcessors;
    v5 = *(_OWORD *)&KeActiveProcessors[8];
    *(_OWORD *)&PspLastUpdateAffinityMask[8] = v4;
    v6 = *(_OWORD *)&KeActiveProcessors[12];
    *(_OWORD *)&PspLastUpdateAffinityMask[16] = v5;
    v7 = *(_OWORD *)&KeActiveProcessors[16];
    *(_OWORD *)&PspLastUpdateAffinityMask[24] = v6;
    v8 = *(_OWORD *)&KeActiveProcessors[20];
    *(_OWORD *)&PspLastUpdateAffinityMask[32] = v7;
    v9 = *(_OWORD *)&KeActiveProcessors[24];
    *(_OWORD *)&PspLastUpdateAffinityMask[40] = v8;
    v10 = *(_OWORD *)&KeActiveProcessors[32];
    *(_OWORD *)&PspLastUpdateAffinityMask[48] = v9;
    *(_OWORD *)&PspLastUpdateAffinityMask[56] = *(_OWORD *)&KeActiveProcessors[28];
    v11 = *(_OWORD *)&KeActiveProcessors[36];
    v12 = *(_QWORD *)&KeActiveProcessors[40];
    v13 = 0LL;
    *(_OWORD *)&PspLastUpdateAffinityMask[64] = v10;
    *(_OWORD *)&PspLastUpdateAffinityMask[72] = v11;
    *(_QWORD *)&PspLastUpdateAffinityMask[80] = v12;
    while ( 1 )
    {
      NextProcess = PsGetNextProcess(v13);
      v15 = (_QWORD *)NextProcess;
      if ( !NextProcess )
        break;
      PspUpdateSingleProcessAffinity(CurrentThread, NextProcess, KeActiveProcessors);
      v13 = v15;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspAffinityUpdateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspAffinityUpdateLock, v1, v2, v3);
  KeAbPostRelease((ULONG_PTR)&PspAffinityUpdateLock);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
