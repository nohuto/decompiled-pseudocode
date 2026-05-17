/*
 * XREFs of RtlpInitializeLangRegistryInfo @ 0x18006CE80
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180040520 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180040DB0 (RtlpCreateProcessRegistryInfo.c)
 *     sub_18006C280 @ 0x18006C280 (sub_18006C280.c)
 *     RtlGetUILanguageInfo @ 0x1800EBC90 (RtlGetUILanguageInfo.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDFA0 (RtlpSetUserPreferredUILanguages.c)
 * Callees:
 *     sub_18006CEA4 @ 0x18006CEA4 (sub_18006CEA4.c)
 */

__int64 __fastcall RtlpInitializeLangRegistryInfo(_QWORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( !*a1 )
    return sub_18006CEA4();
  return result;
}
