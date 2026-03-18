/*
 * XREFs of itrp_ELSE @ 0x1C02CAF80
 * Callers:
 *     <none>
 * Callees:
 *     itrp_SkipPushData @ 0x1C02D4510 (itrp_SkipPushData.c)
 */

__int64 __fastcall itrp_ELSE(char *a1)
{
  __int16 v1; // r9
  __int64 v2; // r8
  __int64 result; // rax
  char *v4; // rdx
  char v5; // al

  v1 = 1;
  v2 = 1LL;
  while ( 1 )
  {
    result = qword_1C0327CE8;
    if ( (unsigned __int64)a1 >= qword_1C0327CE8 )
      break;
    if ( (unsigned __int64)a1 < qword_1C0327CF0
      || (v4 = a1 + 1, (unsigned __int64)(a1 + 1) > qword_1C0327CE8)
      || v4 < a1 )
    {
      dword_1C0327CE0 = 4381;
      return result;
    }
    v5 = *a1++;
    if ( v5 == 89 )
    {
      LOWORD(v2) = v2 - 1;
    }
    else if ( v5 == 88 )
    {
      LOWORD(v2) = v1 + v2;
    }
    else
    {
      a1 = (char *)itrp_SkipPushData(a1, v4, v2);
    }
    if ( !(_WORD)v2 )
      return (__int64)a1;
  }
  dword_1C0327CE0 = 4357;
  return (__int64)a1;
}
