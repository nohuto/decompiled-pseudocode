/*
 * XREFs of sub_18006C8FC @ 0x18006C8FC
 * Callers:
 *     RtlSetProcessPreferredUILanguages @ 0x18006C0F0 (RtlSetProcessPreferredUILanguages.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18006C5C0 (RtlSetThreadPreferredUILanguages.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800ECBD0 (RtlpConvertCultureNamesToLCIDs.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800ECDF0 (RtlpConvertLCIDsToCultureNames.c)
 * Callees:
 *     sub_180045280 @ 0x180045280 (sub_180045280.c)
 */

__int64 __fastcall sub_18006C8FC(_WORD *a1, __int64 a2, _DWORD *a3)
{
  _WORD *v4; // rbx
  unsigned int v5; // edi
  unsigned __int64 v6; // r11
  __int64 v8; // r11
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  v4 = a1;
  v5 = 0;
  v6 = 0LL;
  if ( !a3 )
    return 3221225485LL;
  if ( a1 )
  {
    if ( *a1 )
      goto LABEL_8;
    v6 = 1LL;
    while ( 1 )
    {
      if ( !*++v4 )
      {
        LODWORD(v6) = v6 + 1;
        goto LABEL_7;
      }
LABEL_8:
      if ( v6 > 0x7FFFFFFF || (int)sub_180045280(v4, 0x7FFFFFFF - v6, &v9) < 0 )
        break;
      v6 = v9 + v8 + 1;
      v4 += v9;
    }
    v5 = -2147483643;
    LODWORD(v6) = 0;
  }
LABEL_7:
  *a3 = v6;
  return v5;
}
