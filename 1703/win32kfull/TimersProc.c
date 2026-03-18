/*
 * XREFs of TimersProc @ 0x1C004BC60
 * Callers:
 *     RawInputThread @ 0x1C004A5F0 (RawInputThread.c)
 * Callees:
 *     ?TimerStatistics@@YAXPEBUtagTIMER@@@Z @ 0x1C004E2E8 (-TimerStatistics@@YAXPEBUtagTIMER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ?CoalescableDueTime@@YAKPEBUtagTIMER@@@Z @ 0x1C01C4C94 (-CoalescableDueTime@@YAKPEBUtagTIMER@@@Z.c)
 *     ?ReadyTimer@@YAHPEAUtagTIMER@@K@Z @ 0x1C01C4D30 (-ReadyTimer@@YAHPEAUtagTIMER@@K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
BOOLEAN TimersProc()
{
  BOOLEAN result; // al

  gbTimersProcActive = 1;
  gbRITAlerted = 0;
  gbRITRescan = 0;
  gcmsLastTimer = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  gdmsNextTimer = 0x7FFFFFFF;
  guNextCoalescableTimerDue = 0x7FFFFFFF;
  result = KeSetTimer(gptmrMaster, (LARGE_INTEGER)-21474836470000LL, 0LL);
  gbTimersProcActive = 0;
  return result;
}
