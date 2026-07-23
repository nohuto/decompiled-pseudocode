/*
 * XREFs of RtlpMuiRegFreeStringPool @ 0x18000442C
 * Callers:
 *     RtlCleanUpTEBLangLists @ 0x1800031C0 (RtlCleanUpTEBLangLists.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x180005920 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpUpdateTEBLanguage @ 0x180006630 (RtlpUpdateTEBLanguage.c)
 *     RtlpLoadLanguageConfigList @ 0x18005302C (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegResizeStringPool @ 0x1800FD75C (RtlpMuiRegResizeStringPool.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall RtlpMuiRegFreeStringPool(PVOID BaseAddress)
{
  LOGICAL result; // eax

  if ( BaseAddress )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  return result;
}
