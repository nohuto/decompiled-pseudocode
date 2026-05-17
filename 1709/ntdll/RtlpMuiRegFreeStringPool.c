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

__int64 __fastcall RtlpMuiRegFreeStringPool(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
  return result;
}
