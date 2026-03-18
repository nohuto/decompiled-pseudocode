/*
 * XREFs of EtwpCoverageEnsureUserModeView @ 0x1405791A0
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x140579114 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MmMapViewOfSection @ 0x140460870 (MmMapViewOfSection.c)
 *     MiUnmapViewOfSection @ 0x140499D10 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall EtwpCoverageEnsureUserModeView(__int64 a1)
{
  _KPROCESS *Process; // rsi
  unsigned __int64 v2; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  __int16 v6; // dx
  char v7; // bl
  int v9; // [rsp+50h] [rbp-38h]
  __int64 v10; // [rsp+58h] [rbp-30h] BYREF
  _QWORD v11[5]; // [rsp+60h] [rbp-28h] BYREF
  unsigned __int64 v12; // [rsp+A0h] [rbp+18h] BYREF
  _KPROCESS *v13; // [rsp+A8h] [rbp+20h]

  v12 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v13 = Process;
  v2 = Process[1].ActiveProcessors.Bitmap[1];
  v11[1] = v2;
  if ( *(_QWORD *)(v2 + 1952) )
  {
    v9 = 0;
  }
  else
  {
    v11[0] = 0LL;
    v10 = 0LL;
    v9 = MmMapViewOfSection(*(_QWORD *)(a1 + 8), (int)Process, &v12, 0, 0LL, (__int64)v11, (__int64)&v10, 1, 0, 2);
    if ( v9 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
      EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
      if ( !*(_QWORD *)(v2 + 1952) )
      {
        *(_QWORD *)(v2 + 1952) = v12;
        v12 = 0LL;
      }
      v4 = 0LL;
      v5 = Process[1].ActiveProcessors.Bitmap[7];
      if ( v5 )
      {
        v6 = *(_WORD *)(v5 + 8);
        if ( v6 == 332 || v6 == 452 )
          v4 = *(_QWORD *)v5;
      }
      if ( v4 )
        *(_DWORD *)(v4 + 1116) = *(_DWORD *)(v2 + 1952);
      v9 = 0;
    }
  }
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == KeGetCurrentThread() )
  {
    EtwpCoverageLockOwner = 0LL;
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
    KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v12 )
    MiUnmapViewOfSection((__int64)Process, v12, 0);
  return (unsigned int)v9;
}
