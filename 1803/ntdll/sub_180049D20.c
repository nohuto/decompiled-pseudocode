/*
 * XREFs of sub_180049D20 @ 0x180049D20
 * Callers:
 *     sub_180024BC0 @ 0x180024BC0 (sub_180024BC0.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall sub_180049D20(volatile signed __int64 *a1)
{
  signed __int64 result; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // rcx
  char v5; // dl
  unsigned __int64 v6; // rcx
  signed __int64 v7; // rtt

  result = *a1;
  do
  {
    v3 = (_QWORD *)(result & 0xFFFFFFFFFFFFFFFCuLL);
    if ( !*(_QWORD *)((result & 0xFFFFFFFFFFFFFFFCuLL) + 32) )
    {
      do
      {
        v4 = v3;
        v3 = (_QWORD *)v3[2];
        v3[3] = v4;
      }
      while ( !v3[4] );
    }
    *(_QWORD *)((result & 0xFFFFFFFFFFFFFFFCuLL) + 32) = v3[4];
    v5 = result & 1;
    v6 = 0LL;
    if ( (result & 1) == 0 )
      v6 = result & 0xFFFFFFFFFFFFFFFCuLL;
    v7 = result;
    result = _InterlockedCompareExchange64(a1, v6, result);
  }
  while ( v7 != result );
  if ( v5 )
    return sub_18004ADC0(result);
  return result;
}
