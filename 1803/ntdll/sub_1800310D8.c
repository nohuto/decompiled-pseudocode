/*
 * XREFs of sub_1800310D8 @ 0x1800310D8
 * Callers:
 *     RtlSetThreadPreferredUILanguages @ 0x180031CA0 (RtlSetThreadPreferredUILanguages.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180087CA0 (RtlSetProcessPreferredUILanguages.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800E8C70 (RtlpConvertCultureNamesToLCIDs.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800E8E80 (RtlpConvertLCIDsToCultureNames.c)
 * Callees:
 *     sub_180035D8C @ 0x180035D8C (sub_180035D8C.c)
 */

__int64 __fastcall sub_1800310D8(__int16 *a1, __int64 a2, _DWORD *a3)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // r11
  __int16 v6; // ax
  __int16 *v7; // rbx
  __int16 v8; // dx
  __int64 v10; // r11
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0LL;
  v4 = 0;
  v5 = 0LL;
  if ( !a3 )
    return 3221225485LL;
  if ( a1 )
  {
    v6 = *a1;
    v7 = a1 + 1;
    v8 = *a1;
    if ( !*a1 )
      v8 = *v7;
    LOBYTE(v5) = v6 == 0;
    if ( v8 )
    {
      if ( v6 )
        v7 = a1;
      while ( v5 <= 0x7FFFFFFF && (int)sub_180035D8C(v7, 0x7FFFFFFF - v5, &v11) >= 0 )
      {
        v5 = v11 + v10 + 1;
        v7 += v11 + 1;
        if ( !*v7 )
          goto LABEL_6;
      }
      v4 = -2147483643;
      LODWORD(v5) = 0;
    }
    else
    {
LABEL_6:
      LODWORD(v5) = v5 + 1;
    }
  }
  *a3 = v5;
  return v4;
}
