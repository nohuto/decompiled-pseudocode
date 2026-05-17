/*
 * XREFs of RtlpMuiFreeLangRegistryInfo @ 0x1800043E0
 * Callers:
 *     RtlUpdateProcessRegistryInfo @ 0x1800035F8 (RtlUpdateProcessRegistryInfo.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18002C530 (RtlGetThreadPreferredUILanguages.c)
 *     RtlGetUILanguageInfo @ 0x1800EB810 (RtlGetUILanguageInfo.c)
 *     RtlpSetPreferredUILanguages @ 0x1800EDCC0 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegFreeRegistryInfo @ 0x180005920 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpMuiFreeLangRegistryInfo(__int64 a1)
{
  unsigned int v2; // ebx

  if ( !a1 )
    return 3221225485LL;
  v2 = RtlpMuiRegFreeRegistryInfo(a1, 4095LL);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
  return v2;
}
