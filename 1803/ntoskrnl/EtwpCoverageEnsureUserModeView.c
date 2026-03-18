/*
 * XREFs of EtwpCoverageEnsureUserModeView @ 0x14056F3B0
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x14056F324 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiUnmapViewOfSection @ 0x1404D7010 (MiUnmapViewOfSection.c)
 *     MmMapViewOfSection @ 0x1404EA390 (MmMapViewOfSection.c)
 */

__int64 __fastcall EtwpCoverageEnsureUserModeView(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _KPROCESS *Process; // rsi
  unsigned __int64 v5; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  char v9; // di
  int v11; // [rsp+50h] [rbp-38h]
  __int64 v12; // [rsp+58h] [rbp-30h] BYREF
  _QWORD v13[5]; // [rsp+60h] [rbp-28h] BYREF
  unsigned __int64 v14; // [rsp+A0h] [rbp+18h] BYREF
  _KPROCESS *v15; // [rsp+A8h] [rbp+20h]

  v14 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v15 = Process;
  v5 = Process[1].ActiveProcessors.Bitmap[1];
  v13[1] = v5;
  if ( *(_QWORD *)(v5 + 1952) )
  {
    v11 = 0;
  }
  else
  {
    v13[0] = 0LL;
    v12 = 0LL;
    v11 = MmMapViewOfSection(*(_QWORD *)(a1 + 8), (__int64)Process, &v14, 0LL, 0LL, (__int64)v13, &v12, 1, 0, 2);
    if ( v11 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
      EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
      if ( !*(_QWORD *)(v5 + 1952) )
      {
        *(_QWORD *)(v5 + 1952) = v14;
        v14 = 0LL;
      }
      v7 = 0LL;
      v8 = Process[1].ActiveProcessors.Bitmap[7];
      if ( v8 )
      {
        a2 = *(unsigned __int16 *)(v8 + 8);
        a3 = 332LL;
        if ( (_WORD)a2 == 332 || (a3 = 452LL, (_WORD)a2 == 452) )
          v7 = *(_QWORD *)v8;
      }
      if ( v7 )
        *(_DWORD *)(v7 + 1116) = *(_DWORD *)(v5 + 1952);
      v11 = 0;
    }
  }
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == KeGetCurrentThread() )
  {
    EtwpCoverageLockOwner = 0LL;
    v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v9 & 2) != 0 && (v9 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock, a2, a3, a4);
    KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v14 )
    MiUnmapViewOfSection((__int64)Process, v14, 0, 0);
  return (unsigned int)v11;
}
