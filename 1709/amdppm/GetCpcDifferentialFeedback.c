/*
 * XREFs of GetCpcDifferentialFeedback @ 0x1C0007220
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C0008E0C (ReadGenAddr.c)
 */

__int64 __fastcall GetCpcDifferentialFeedback(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v4; // rbx
  __int64 result; // rax

  v4 = 0LL;
  if ( a1 == -140 )
    result = 0LL;
  else
    result = ReadGenAddr();
  *a3 = result;
  if ( a1 != -152 )
  {
    result = ReadGenAddr();
    v4 = result;
  }
  *a4 = v4;
  return result;
}
