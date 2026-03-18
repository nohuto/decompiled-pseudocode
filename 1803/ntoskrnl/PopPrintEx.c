/*
 * XREFs of PopPrintEx @ 0x140077270
 * Callers:
 *     PopCoalescingSetTimer @ 0x14027846C (PopCoalescingSetTimer.c)
 *     PopSessionWinlogonNotification @ 0x14048B920 (PopSessionWinlogonNotification.c)
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 *     PopUpdateTimeouts @ 0x1405265A0 (PopUpdateTimeouts.c)
 *     PopSetSessionUserStatus @ 0x140526758 (PopSetSessionUserStatus.c)
 *     PopEvaluateGlobalUserStatus @ 0x140526838 (PopEvaluateGlobalUserStatus.c)
 *     PopSessionInputChange @ 0x140526C44 (PopSessionInputChange.c)
 *     PopSessionConnectionChange @ 0x140612D8C (PopSessionConnectionChange.c)
 *     PopSetSessionDisplayStatus @ 0x140612ED8 (PopSetSessionDisplayStatus.c)
 *     PoFxRegisterDevice @ 0x140614990 (PoFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x140643E8C (PopCheckThermalPolicy.c)
 *     PopCoalescingNotify @ 0x140761620 (PopCoalescingNotify.c)
 *     PopDeferDoze @ 0x1407653E4 (PopDeferDoze.c)
 *     PopDiagTraceIoCoalescingOff @ 0x140768168 (PopDiagTraceIoCoalescingOff.c)
 *     PopDiagTraceIoCoalescingOn @ 0x140768194 (PopDiagTraceIoCoalescingOn.c)
 *     PopCheckConsoleTimeouts @ 0x14076D7C4 (PopCheckConsoleTimeouts.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140077340 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 PopPrintEx(ULONG Level, __int64 a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal((void *)&File, 0x92u, Level, va, 1);
}
