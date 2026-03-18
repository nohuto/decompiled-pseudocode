/*
 * XREFs of PopIdleCsStateChanged @ 0x14076C2B4
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x140764990 (PdcPoCurrentPdcPhase.c)
 *     PopDisplayBurstSuppressWorker @ 0x140769A40 (PopDisplayBurstSuppressWorker.c)
 *     PopLidClosedSleepStudyWorker @ 0x140769EA0 (PopLidClosedSleepStudyWorker.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140077584 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14027FF14 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopIdleCsStateChanged(char a1)
{
  PopAcquirePolicyLock();
  byte_1403A9FD1 = a1;
  if ( a1 )
  {
    qword_1403A9FD8 = qword_1403CD9C8;
    if ( !qword_1403CD9C8 )
      qword_1403A9FD8 = MEMORY[0xFFFFF78000000008];
    PopIdleArmAoAcDozeS4Timer();
  }
  else if ( PopPdcLastCsExitReason != 6 )
  {
    PopIdleCancelAoAcDozeS4Timer(1u);
    dword_1403A9FB0 = 0;
    qword_1403A9FD8 = 0LL;
  }
  return PopReleasePolicyLock();
}
