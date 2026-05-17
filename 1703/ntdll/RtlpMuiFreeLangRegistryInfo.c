/*
 * XREFs of RtlpMuiFreeLangRegistryInfo @ 0x18006C440
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180040520 (RtlGetThreadPreferredUILanguages.c)
 *     sub_18006C280 @ 0x18006C280 (sub_18006C280.c)
 *     RtlGetUILanguageInfo @ 0x1800EBC90 (RtlGetUILanguageInfo.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDFA0 (RtlpSetUserPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18006D300 (RtlpMuiRegFreeRegistryInfo.c)
 */

__int64 __fastcall RtlpMuiFreeLangRegistryInfo(unsigned __int64 a1)
{
  unsigned int v2; // ebx

  if ( !a1 )
    return 3221225485LL;
  v2 = RtlpMuiRegFreeRegistryInfo(a1, 4095LL);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return v2;
}
