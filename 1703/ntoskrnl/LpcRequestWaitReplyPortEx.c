/*
 * XREFs of LpcRequestWaitReplyPortEx @ 0x140470A50
 * Callers:
 *     ExpRaiseHardError @ 0x140427D10 (ExpRaiseHardError.c)
 *     DbgkpSendApiMessageLpc @ 0x140681200 (DbgkpSendApiMessageLpc.c)
 * Callees:
 *     LpcpRequestWaitReplyPort @ 0x140470B28 (LpcpRequestWaitReplyPort.c)
 */

__int64 __fastcall LpcRequestWaitReplyPortEx(int a1, int a2, __int64 a3)
{
  return LpcpRequestWaitReplyPort(a1, a2, a3, 0, KeGetCurrentThread()->PreviousMode, 2);
}
