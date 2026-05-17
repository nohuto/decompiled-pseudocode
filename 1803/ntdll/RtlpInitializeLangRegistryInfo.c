/*
 * XREFs of RtlpInitializeLangRegistryInfo @ 0x18006E8F0
 * Callers:
 *     RtlGetUILanguageInfo @ 0x1800E7C80 (RtlGetUILanguageInfo.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800E9D60 (RtlpSetUserPreferredUILanguages.c)
 * Callees:
 *     sub_18006ECB4 @ 0x18006ECB4 (sub_18006ECB4.c)
 */

__int64 __fastcall RtlpInitializeLangRegistryInfo(_QWORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( !*a1 )
    return sub_18006ECB4(a1);
  return result;
}
