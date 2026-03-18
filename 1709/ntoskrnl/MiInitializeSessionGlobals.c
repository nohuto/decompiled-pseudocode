/*
 * XREFs of MiInitializeSessionGlobals @ 0x1405B3E08
 * Callers:
 *     MiSessionCreate @ 0x1405B4810 (MiSessionCreate.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140085190 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 *     MmIsSessionLeaderProcess @ 0x1405B3F40 (MmIsSessionLeaderProcess.c)
 */

__int64 MiInitializeSessionGlobals()
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rbp
  char v2; // bl
  int v4; // eax

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  if ( (CurrentThread->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
    return 3221225505LL;
  if ( (unsigned int)MmIsSessionLeaderProcess(CurrentThread->Process) )
    return 0LL;
  if ( qword_140388498 )
  {
    if ( PsIsCurrentThreadInServerSilo() )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403884A0, 0LL);
      if ( !*((_QWORD *)PsGetCurrentServerSiloGlobals() + 109) )
      {
        *((_QWORD *)PsGetCurrentServerSiloGlobals() + 109) = Process;
        ObfReferenceObject(Process);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403884A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403884A0);
      KeAbPostRelease((ULONG_PTR)&qword_1403884A0);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    v4 = -((unsigned int)MmIsSessionLeaderProcess(Process) == 0);
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403884A0, 0LL);
    if ( !qword_140388498 )
    {
      qword_140388498 = (__int64)Process;
      qword_140388468 = qword_1403884B8 + 0x4000;
      qword_140388460 = qword_1403884B8 + 24576;
      qword_140388488 = qword_1403884B8 + 4218880;
      qword_140389948 = qword_1403884B8 + 7920;
      qword_1403884A8 = qword_1403884B8 + 3328;
      *((_QWORD *)PsGetServerSiloGlobals(0LL) + 109) = Process;
      v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403884A0, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403884A0);
      KeAbPostRelease((ULONG_PTR)&qword_1403884A0);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      ObfReferenceObject(Process);
      return 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403884A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403884A0);
    KeAbPostRelease((ULONG_PTR)&qword_1403884A0);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v4 = -(Process != (_KPROCESS *)qword_140388498);
  }
  return v4 & 0xC000001C;
}
