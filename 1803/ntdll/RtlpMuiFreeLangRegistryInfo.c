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

__int64 __fastcall RtlpMuiFreeLangRegistryInfo(PVOID BaseAddress)
{
  unsigned int v2; // ebx

  if ( !BaseAddress )
    return 3221225485LL;
  v2 = RtlpMuiRegFreeRegistryInfo(BaseAddress, 4095LL);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  return v2;
}
