/*
 * XREFs of LpcRequestWaitReplyPort @ 0x1405E6C90
 * Callers:
 *     <none>
 * Callees:
 *     LpcpRequestWaitReplyPort @ 0x140560A98 (LpcpRequestWaitReplyPort.c)
 */

__int64 __fastcall LpcRequestWaitReplyPort(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  return LpcpRequestWaitReplyPort(a1, a2, a3, 0, 0, 2);
}
