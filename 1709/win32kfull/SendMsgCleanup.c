/*
 * XREFs of SendMsgCleanup @ 0x1C00490C0
 * Callers:
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00484B0 (xxxRestoreCsrssThreadDesktop.c)
 *     zzzCancelJournalling @ 0x1C011A924 (zzzCancelJournalling.c)
 * Callees:
 *     ?SenderDied@@YAXPEAUtagSMS@@@Z @ 0x1C0046548 (-SenderDied@@YAXPEAUtagSMS@@@Z.c)
 *     xxxReceiverDied @ 0x1C004911C (xxxReceiverDied.c)
 */

__int64 SendMsgCleanup()
{
  return gsmsList;
}
