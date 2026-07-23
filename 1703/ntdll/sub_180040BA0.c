/*
 * XREFs of sub_180040BA0 @ 0x180040BA0
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180040520 (RtlGetThreadPreferredUILanguages.c)
 *     sub_180044D64 @ 0x180044D64 (sub_180044D64.c)
 *     sub_180046F10 @ 0x180046F10 (sub_180046F10.c)
 *     RtlCleanUpTEBLangLists @ 0x18006BFE0 (RtlCleanUpTEBLangLists.c)
 *     RtlSetProcessPreferredUILanguages @ 0x18006C0F0 (RtlSetProcessPreferredUILanguages.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18006C5C0 (RtlSetThreadPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x18006CBF0 (RtlGetUserPreferredUILanguages.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18006D300 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18006D510 (RtlGetSystemPreferredUILanguages.c)
 *     RtlpQueryDefaultUILanguage @ 0x18006D720 (RtlpQueryDefaultUILanguage.c)
 *     sub_18006D864 @ 0x18006D864 (sub_18006D864.c)
 *     sub_18006EA40 @ 0x18006EA40 (sub_18006EA40.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall sub_180040BA0(PVOID BaseAddress)
{
  LOGICAL result; // eax

  if ( BaseAddress )
  {
    if ( (*((_BYTE *)BaseAddress + 40) & 0x40) == 0 )
      return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  return result;
}
