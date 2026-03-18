/*
 * XREFs of PopPrintEx @ 0x14006850C
 * Callers:
 *     PopCoalescingSetTimer @ 0x14022D97C (PopCoalescingSetTimer.c)
 *     PopSessionWinlogonNotification @ 0x14041DDF0 (PopSessionWinlogonNotification.c)
 *     PopSessionInputChange @ 0x14041FE64 (PopSessionInputChange.c)
 *     PopUpdateTimeouts @ 0x140420304 (PopUpdateTimeouts.c)
 *     PopSetSessionUserStatus @ 0x1404205E4 (PopSetSessionUserStatus.c)
 *     PopEvaluateGlobalUserStatus @ 0x1404206BC (PopEvaluateGlobalUserStatus.c)
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 *     PopSessionConnectionChange @ 0x14057D5B0 (PopSessionConnectionChange.c)
 *     PopSetSessionDisplayStatus @ 0x14057D6FC (PopSetSessionDisplayStatus.c)
 *     PoFxRegisterDevice @ 0x1405BE400 (PoFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x1405D80C8 (PopCheckThermalPolicy.c)
 *     PopCoalescingNotify @ 0x1406C95B0 (PopCoalescingNotify.c)
 *     PopDiagTraceIoCoalescingOff @ 0x1406CD924 (PopDiagTraceIoCoalescingOff.c)
 *     PopDiagTraceIoCoalescingOn @ 0x1406CD950 (PopDiagTraceIoCoalescingOn.c)
 *     PopCheckConsoleTimeouts @ 0x1406D4484 (PopCheckConsoleTimeouts.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1400690F0 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 PopPrintEx(ULONG Level, __int64 a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal((void *)File, 0x92u, Level, va, 1);
}
