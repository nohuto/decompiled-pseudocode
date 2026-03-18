/*
 * XREFs of itrp_RoundDownToGridSP @ 0x1C02D7FA0
 * Callers:
 *     InvokeRoundValue @ 0x1C02CF758 (InvokeRoundValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_RoundDownToGridSP(int a1, int a2)
{
  int v2; // eax
  __int64 result; // rax

  if ( (*(_BYTE *)(qword_1C032CA00 + 120) & 4) == 0 && dword_1C032CA34 == 1 )
    return itrp_RoundDownToGrid(a1, a2);
  v2 = a2 / 2;
  if ( a1 < 0 )
    result = -((v2 - a1) & 0xFFFFFFFC);
  else
    result = (a1 + v2) & 0xFFFFFFFC;
  if ( (int)(a1 ^ result) < 0 )
  {
    if ( a1 )
      return 0LL;
  }
  return result;
}
