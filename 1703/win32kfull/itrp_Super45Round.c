/*
 * XREFs of itrp_Super45Round @ 0x1C02DA914
 * Callers:
 *     InvokeRoundValue @ 0x1C02CF758 (InvokeRoundValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_Super45Round(int a1, __int16 a2)
{
  int v2; // r9d
  __int64 v3; // r8
  __int16 v4; // ax
  unsigned __int64 v5; // rax
  __int64 result; // rax
  __int16 v7; // ax
  unsigned int v8; // edx

  v2 = *(__int16 *)(qword_1C032CA00 + 144);
  v3 = *(__int16 *)(qword_1C032CA00 + 140);
  v4 = *(_WORD *)(qword_1C032CA00 + 146) - *(_WORD *)(qword_1C032CA00 + 144);
  if ( a1 < 0 )
  {
    v7 = ((__int16)(a2 + v4 - a1) << 14) / *(__int16 *)(qword_1C032CA00 + 140);
    result = (unsigned int)(-262144 * ((v3 * (v7 & 0xFFFFFFFFFFFFFFC0uLL)) >> 32)
                          - (((((unsigned int)v3 * (v7 & 0xFFFFFFC0)) >> 13) + 1) >> 1)
                          - v2);
  }
  else
  {
    v5 = v3 * ((__int16)(((__int16)(a2 + a1 + v4) << 14) / *(__int16 *)(qword_1C032CA00 + 140)) & 0xFFFFFFFFFFFFFFC0uLL);
    result = v2 + ((((unsigned int)v5 >> 13) + 1) >> 1) + (HIDWORD(v5) << 18);
  }
  v8 = *(__int16 *)(qword_1C032CA00 + 144);
  if ( (int)(a1 ^ result) < 0 && a1 )
  {
    if ( a1 <= 0 )
      return (unsigned int)-v2;
    return v8;
  }
  return result;
}
