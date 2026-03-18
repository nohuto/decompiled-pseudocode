/*
 * XREFs of PopPrintEx @ 0x14013284C
 * Callers:
 *     PopCoalescingSetTimer @ 0x140240ED8 (PopCoalescingSetTimer.c)
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 *     PopSessionInputChange @ 0x14059FC48 (PopSessionInputChange.c)
 *     PopSetSessionUserStatus @ 0x14059FF2C (PopSetSessionUserStatus.c)
 *     PopEvaluateGlobalUserStatus @ 0x1405A000C (PopEvaluateGlobalUserStatus.c)
 *     PopUpdateTimeouts @ 0x1405A0278 (PopUpdateTimeouts.c)
 *     PoFxRegisterDevice @ 0x1405C9F50 (PoFxRegisterDevice.c)
 *     PopSessionConnectionChange @ 0x1405ED750 (PopSessionConnectionChange.c)
 *     PopSetSessionDisplayStatus @ 0x1405ED87C (PopSetSessionDisplayStatus.c)
 *     PopCoalescingNotify @ 0x1406FA190 (PopCoalescingNotify.c)
 *     PopCheckThermalPolicy @ 0x1406FFC0C (PopCheckThermalPolicy.c)
 *     PopDeferDoze @ 0x140700F18 (PopDeferDoze.c)
 *     PopDiagTraceIoCoalescingOff @ 0x140703F30 (PopDiagTraceIoCoalescingOff.c)
 *     PopDiagTraceIoCoalescingOn @ 0x140703F5C (PopDiagTraceIoCoalescingOn.c)
 *     PopCheckConsoleTimeouts @ 0x140709B34 (PopCheckConsoleTimeouts.c)
 *     PopSessionWinlogonNotification @ 0x140709EF4 (PopSessionWinlogonNotification.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140132910 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 PopPrintEx(ULONG Level, __int64 a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal((void *)&File, 0x92u, Level, va, 1);
}
