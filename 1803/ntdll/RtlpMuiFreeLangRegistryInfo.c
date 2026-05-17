/*
 * XREFs of RtlpMuiFreeLangRegistryInfo @ 0x18006E920
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180032530 (RtlGetThreadPreferredUILanguages.c)
 *     sub_18006E740 @ 0x18006E740 (sub_18006E740.c)
 *     RtlGetUILanguageInfo @ 0x1800E7C80 (RtlGetUILanguageInfo.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800E9D60 (RtlpSetUserPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18006EF00 (RtlpMuiRegFreeRegistryInfo.c)
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
