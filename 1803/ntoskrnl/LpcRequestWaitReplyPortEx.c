/*
 * XREFs of LpcRequestWaitReplyPortEx @ 0x1405609C0
 * Callers:
 *     DbgkpSendApiMessageLpc @ 0x140710D08 (DbgkpSendApiMessageLpc.c)
 *     ExpRaiseHardError @ 0x1407C5BB8 (ExpRaiseHardError.c)
 * Callees:
 *     LpcpRequestWaitReplyPort @ 0x140560A98 (LpcpRequestWaitReplyPort.c)
 */

__int64 __fastcall LpcRequestWaitReplyPortEx(int a1)
{
  return LpcpRequestWaitReplyPort(a1, KeGetCurrentThread()->PreviousMode, 2);
}
