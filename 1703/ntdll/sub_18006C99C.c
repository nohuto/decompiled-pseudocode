/*
 * XREFs of sub_18006C99C @ 0x18006C99C
 * Callers:
 *     RtlSetProcessPreferredUILanguages @ 0x18006C0F0 (RtlSetProcessPreferredUILanguages.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18006C5C0 (RtlSetThreadPreferredUILanguages.c)
 *     RtlGetUILanguageInfo @ 0x1800EBC90 (RtlGetUILanguageInfo.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDFA0 (RtlpSetUserPreferredUILanguages.c)
 * Callees:
 *     sub_180045280 @ 0x180045280 (sub_180045280.c)
 */

__int64 __fastcall sub_18006C99C(_WORD *a1, __int64 a2)
{
  int v4; // ecx
  __int64 v5; // r11
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  if ( a1 && !*a1 )
    ++a1;
  while ( a1 )
  {
    if ( !*a1 )
      break;
    v4 = sub_180045280(a1, a2 + 1, &v7);
    if ( v4 < 0 )
      break;
    a1 = (_WORD *)(v5 + 2 * v7 + 2);
  }
  return (unsigned int)v4;
}
