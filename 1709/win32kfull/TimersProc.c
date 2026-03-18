/*
 * XREFs of TimersProc @ 0x1C00888F0
 * Callers:
 *     RawInputThread @ 0x1C0087D60 (RawInputThread.c)
 * Callees:
 *     ?TimerStatistics@@YAXPEBUtagTIMER@@@Z @ 0x1C0088CD8 (-TimerStatistics@@YAXPEBUtagTIMER@@@Z.c)
 *     ThreadLockExchange @ 0x1C01242F4 (ThreadLockExchange.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ?CoalescableDueTime@@YAKPEBUtagTIMER@@@Z @ 0x1C01C6FF4 (-CoalescableDueTime@@YAKPEBUtagTIMER@@@Z.c)
 *     ?ReadyTimer@@YAXPEAUtagTIMER@@K@Z @ 0x1C01C7090 (-ReadyTimer@@YAXPEAUtagTIMER@@K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
BOOLEAN __fastcall TimersProc(__int64 a1, __int64 a2)
{
  BOOLEAN result; // al
  _QWORD v3[4]; // [rsp+30h] [rbp-48h] BYREF

  gbTimersProcActive = 1;
  BYTE4(WPP_MAIN_CB.DeviceObjectExtension) = 0;
  do
  {
    gbRITRescan = 0;
    gcmsLastTimer = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v3[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v3;
    v3[1] = 0LL;
    ThreadUnlock1(gptiCurrent, a2);
  }
  while ( gbRITRescan );
  gdmsNextTimer = 0x7FFFFFFF;
  guNextCoalescableTimerDue = 0x7FFFFFFF;
  result = KeSetTimer(gptmrMaster, (LARGE_INTEGER)-21474836470000LL, 0LL);
  gbTimersProcActive = 0;
  return result;
}
