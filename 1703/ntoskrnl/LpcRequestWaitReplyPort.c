/*
 * XREFs of LpcRequestWaitReplyPort @ 0x1405746A0
 * Callers:
 *     <none>
 * Callees:
 *     LpcpRequestWaitReplyPort @ 0x140470B28 (LpcpRequestWaitReplyPort.c)
 */

__int64 __fastcall LpcRequestWaitReplyPort(int a1, int a2, __int64 a3)
{
  return LpcpRequestWaitReplyPort(a1, a2, a3, 0, 0, 2);
}
