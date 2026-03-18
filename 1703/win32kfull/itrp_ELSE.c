/*
 * XREFs of itrp_ELSE @ 0x1C02D1190
 * Callers:
 *     <none>
 * Callees:
 *     itrp_SkipPushData @ 0x1C02DA854 (itrp_SkipPushData.c)
 */

unsigned __int64 __fastcall itrp_ELSE(_BYTE *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  __int16 v4; // r10
  __int64 v5; // r9
  _BYTE *v6; // rdx

  result = qword_1C032CA58;
  v4 = 1;
  v5 = 1LL;
  while ( (unsigned __int64)a1 < result )
  {
    if ( (unsigned __int64)a1 < qword_1C032CA60 || (v6 = a1 + 1, (unsigned __int64)(a1 + 1) > result) || v6 < a1 )
    {
      dword_1C032CA50 = 4381;
      return result;
    }
    LOBYTE(a3) = *a1++;
    if ( (_BYTE)a3 == 89 )
    {
      LOWORD(v5) = v5 - 1;
    }
    else if ( (_BYTE)a3 == 88 )
    {
      LOWORD(v5) = v4 + v5;
    }
    else
    {
      a1 = (_BYTE *)itrp_SkipPushData(a1, v6, a3, v5);
      result = qword_1C032CA58;
    }
    if ( !(_WORD)v5 )
      return (unsigned __int64)a1;
  }
  dword_1C032CA50 = 4357;
  return (unsigned __int64)a1;
}
