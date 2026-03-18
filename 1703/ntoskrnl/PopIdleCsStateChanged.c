/*
 * XREFs of PopIdleCsStateChanged @ 0x1406D4B54
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1406CB0E0 (PdcPoCurrentPdcPhase.c)
 *     PopDisplayBurstSuppressWorker @ 0x1406CE680 (PopDisplayBurstSuppressWorker.c)
 *     PopLidClosedSleepStudyWorker @ 0x1406CEAD0 (PopLidClosedSleepStudyWorker.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140004F20 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x140236ED4 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopIdleCsStateChanged(char a1)
{
  PopAcquirePolicyLock();
  byte_14034B0F1 = a1;
  if ( a1 )
  {
    qword_14034B0F8 = qword_14036E148;
    if ( !qword_14036E148 )
      qword_14034B0F8 = MEMORY[0xFFFFF78000000008];
    PopIdleArmAoAcDozeS4Timer();
  }
  else if ( PopPdcLastCsExitReason != 6 )
  {
    PopIdleCancelAoAcDozeS4Timer(1u);
    dword_14034B0D0 = 0;
    qword_14034B0F8 = 0LL;
  }
  return PopReleasePolicyLock();
}
