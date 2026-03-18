/*
 * XREFs of LpcReplyWaitReplyPort @ 0x1406DC2C0
 * Callers:
 *     <none>
 * Callees:
 *     LpcpReplyWaitReplyPort @ 0x1406DC390 (LpcpReplyWaitReplyPort.c)
 */

__int64 __fastcall LpcReplyWaitReplyPort(int a1, char a2, __int64 a3)
{
  return LpcpReplyWaitReplyPort(a1, a3, 0, a2);
}
