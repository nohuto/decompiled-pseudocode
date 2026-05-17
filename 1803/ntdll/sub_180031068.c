/*
 * XREFs of sub_180031068 @ 0x180031068
 * Callers:
 *     RtlSetThreadPreferredUILanguages @ 0x180031CA0 (RtlSetThreadPreferredUILanguages.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180087CA0 (RtlSetProcessPreferredUILanguages.c)
 *     RtlGetUILanguageInfo @ 0x1800E7C80 (RtlGetUILanguageInfo.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800E9D60 (RtlpSetUserPreferredUILanguages.c)
 * Callees:
 *     sub_180035D8C @ 0x180035D8C (sub_180035D8C.c)
 */

__int64 __fastcall sub_180031068(_WORD *a1, __int64 a2)
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
    v4 = sub_180035D8C(a1, a2 + 1, &v7);
    if ( v4 < 0 )
      break;
    a1 = (_WORD *)(v5 + 2 * v7 + 2);
  }
  return (unsigned int)v4;
}
