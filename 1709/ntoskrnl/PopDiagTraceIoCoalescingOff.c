/*
 * XREFs of PopDiagTraceIoCoalescingOff @ 0x140703F30
 * Callers:
 *     PopCoalescingSetActiveState @ 0x140240E38 (PopCoalescingSetActiveState.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14012C528 (PopDiagTraceEventNoPayload.c)
 *     PopPrintEx @ 0x14013284C (PopPrintEx.c)
 */

void PopDiagTraceIoCoalescingOff()
{
  PopPrintEx(3u, (__int64)"PopCoalescing: OFF notification sent.\n");
  PopDiagTraceEventNoPayload(&POP_ETW_IO_COALESCING_OFF);
}
