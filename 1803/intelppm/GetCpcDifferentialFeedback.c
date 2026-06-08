/*
 * XREFs of GetCpcDifferentialFeedback @ 0x1C0008270
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C0007BBC (ReadGenAddr.c)
 */

unsigned __int64 __fastcall GetCpcDifferentialFeedback(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  unsigned __int64 result; // rax

  *a3 = ReadGenAddr(a1 + 140);
  result = ReadGenAddr(a1 + 152);
  *a4 = result;
  return result;
}
