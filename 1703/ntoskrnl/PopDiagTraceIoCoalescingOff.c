/*
 * XREFs of PopDiagTraceIoCoalescingOff @ 0x1406CD924
 * Callers:
 *     PopCoalescingSetActiveState @ 0x14022D8DC (PopCoalescingSetActiveState.c)
 * Callees:
 *     PopPrintEx @ 0x14006850C (PopPrintEx.c)
 */

void PopDiagTraceIoCoalescingOff()
{
  PopPrintEx(3u, (__int64)"PopCoalescing: OFF notification sent.\n");
  PopDiagTraceEventNoPayload(&POP_ETW_IO_COALESCING_OFF);
}
