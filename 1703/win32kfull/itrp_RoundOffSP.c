/*
 * XREFs of itrp_RoundOffSP @ 0x1C02D801C
 * Callers:
 *     InvokeRoundValue @ 0x1C02CF758 (InvokeRoundValue.c)
 *     itrp_MIRP @ 0x1C02D5EC0 (itrp_MIRP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_RoundOffSP(int a1, int a2)
{
  int v2; // eax
  unsigned int v3; // edx
  __int64 result; // rax

  v2 = a2 / 2;
  v3 = a1 - a2 / 2;
  result = (unsigned int)(a1 + v2);
  if ( a1 < 0 )
    result = v3;
  if ( (int)(a1 ^ result) < 0 )
  {
    if ( a1 )
      return 0LL;
  }
  return result;
}
