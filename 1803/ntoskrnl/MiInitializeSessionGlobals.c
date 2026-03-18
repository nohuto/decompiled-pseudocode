/*
 * XREFs of MiInitializeSessionGlobals @ 0x14060B700
 * Callers:
 *     MiSessionCreate @ 0x14060A560 (MiSessionCreate.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     PsGetServerSiloGlobals @ 0x14006CD90 (PsGetServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14006E2C0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MmIsSessionLeaderProcess @ 0x14060B830 (MmIsSessionLeaderProcess.c)
 */

__int64 MiInitializeSessionGlobals()
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // r14
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // bl
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  if ( (CurrentThread->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
    return 3221225505LL;
  if ( (unsigned int)MmIsSessionLeaderProcess(CurrentThread->Process) )
    return 0LL;
  if ( qword_1403CB620 )
  {
    if ( PsIsCurrentThreadInServerSilo() )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403CB628, 0LL);
      if ( !*((_QWORD *)PsGetCurrentServerSiloGlobals() + 109) )
      {
        *((_QWORD *)PsGetCurrentServerSiloGlobals() + 109) = Process;
        ObfReferenceObject(Process);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CB628, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CB628, v10, v11, v12);
      KeAbPostRelease((ULONG_PTR)&qword_1403CB628);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    v13 = -((unsigned int)MmIsSessionLeaderProcess(Process) == 0);
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403CB628, 0LL);
    if ( !qword_1403CB620 )
    {
      qword_1403CB620 = (__int64)Process;
      qword_1403CB5F0 = qword_1403CB640 + 20480;
      qword_1403CB5E8 = qword_1403CB640 + 28672;
      qword_1403CB610 = qword_1403CB640 + 4222976;
      qword_1403CCF08 = (PKSPIN_LOCK)(qword_1403CB640 + 8048);
      qword_1403CB630 = qword_1403CB640 + 3328;
      *((_QWORD *)PsGetServerSiloGlobals(0LL) + 109) = Process;
      v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CB628, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v9 & 2) != 0 && (v9 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CB628, v6, v7, v8);
      KeAbPostRelease((ULONG_PTR)&qword_1403CB628);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      ObfReferenceObject(Process);
      return 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CB628, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CB628, v3, v4, v5);
    KeAbPostRelease((ULONG_PTR)&qword_1403CB628);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v13 = -(Process != (_KPROCESS *)qword_1403CB620);
  }
  return v13 & 0xC000001C;
}
