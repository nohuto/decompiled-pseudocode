/*
 * XREFs of PopIdleCsStateChanged @ 0x14070A3E4
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1406FF060 (PdcPoCurrentPdcPhase.c)
 *     PopDisplayBurstSuppressWorker @ 0x140705B90 (PopDisplayBurstSuppressWorker.c)
 *     PopLidClosedSleepStudyWorker @ 0x140705FE0 (PopLidClosedSleepStudyWorker.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140132AA4 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14024C0E4 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopIdleCsStateChanged(char a1)
{
  PopAcquirePolicyLock();
  byte_140365751 = a1;
  if ( a1 )
  {
    qword_140365758 = qword_140389BC8;
    if ( !qword_140389BC8 )
      qword_140365758 = MEMORY[0xFFFFF78000000008];
    PopIdleArmAoAcDozeS4Timer();
  }
  else if ( PopPdcLastCsExitReason != 6 )
  {
    PopIdleCancelAoAcDozeS4Timer(1u);
    dword_140365730 = 0;
    qword_140365758 = 0LL;
  }
  return PopReleasePolicyLock();
}
