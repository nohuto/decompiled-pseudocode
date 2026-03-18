/*
 * XREFs of MiInitializeSessionGlobals @ 0x14057F1FC
 * Callers:
 *     MiSessionCreate @ 0x14057DF80 (MiSessionCreate.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400F0FA0 (PsIsCurrentThreadInServerSilo.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     MmIsSessionLeaderProcess @ 0x14057F330 (MmIsSessionLeaderProcess.c)
 */

__int64 MiInitializeSessionGlobals()
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rbp
  int v3; // eax

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  if ( (CurrentThread->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
    return 3221225505LL;
  if ( (unsigned int)MmIsSessionLeaderProcess(CurrentThread->Process) )
    return 0LL;
  if ( qword_14036C158 )
  {
    if ( PsIsCurrentThreadInServerSilo() )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14036C160, 0LL);
      if ( !*((_QWORD *)PsGetCurrentServerSiloGlobals() + 109) )
      {
        *((_QWORD *)PsGetCurrentServerSiloGlobals() + 109) = Process;
        ObfReferenceObject(Process);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036C160, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_14036C160);
      KeAbPostRelease((ULONG_PTR)&qword_14036C160);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    v3 = -((unsigned int)MmIsSessionLeaderProcess(Process) == 0);
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14036C160, 0LL);
    if ( !qword_14036C158 )
    {
      qword_14036C158 = (__int64)Process;
      qword_14036C128 = qword_14036C178 + 0x4000;
      qword_14036C120 = qword_14036C178 + 24576;
      qword_14036C148 = qword_14036C178 + 4218880;
      qword_14036D688 = qword_14036C178 + 7920;
      qword_14036C168 = qword_14036C178 + 3328;
      *((_QWORD *)PsGetServerSiloGlobals(0LL) + 109) = Process;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036C160, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_14036C160);
      KeAbPostRelease((ULONG_PTR)&qword_14036C160);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      ObfReferenceObject(Process);
      return 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036C160, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14036C160);
    KeAbPostRelease((ULONG_PTR)&qword_14036C160);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v3 = -(Process != (_KPROCESS *)qword_14036C158);
  }
  return v3 & 0xC000001C;
}
