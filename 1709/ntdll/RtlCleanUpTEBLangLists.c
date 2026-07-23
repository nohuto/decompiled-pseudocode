/*
 * XREFs of RtlCleanUpTEBLangLists @ 0x1800031C0
 * Callers:
 *     RtlpCleanupRegistryKeys @ 0x1800EC2B0 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlpMuiRegFreeStringPool @ 0x18000442C (RtlpMuiRegFreeStringPool.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18002CBA4 (RtlpMuiRegFreeLanguageList.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 */

void RtlCleanUpTEBLangLists(void)
{
  PVOID *UserPrefLanguages; // rbx
  PVOID v1; // rcx

  RtlpMuiRegFreeLanguageList(NtCurrentTeb()->MergedPrefLanguages);
  NtCurrentTeb()->MergedPrefLanguages = 0LL;
  UserPrefLanguages = (PVOID *)NtCurrentTeb()->UserPrefLanguages;
  if ( UserPrefLanguages )
  {
    if ( *UserPrefLanguages )
      RtlpMuiRegFreeLanguageList(*UserPrefLanguages);
    v1 = UserPrefLanguages[1];
    if ( v1 )
      RtlpMuiRegFreeStringPool(v1);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, UserPrefLanguages);
  }
  NtCurrentTeb()->UserPrefLanguages = 0LL;
  RtlpMuiRegFreeLanguageList(NtCurrentTeb()->PreferredLanguages);
  NtCurrentTeb()->PreferredLanguages = 0LL;
  if ( NtCurrentTeb()->ResourceRetValue )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, NtCurrentTeb()->ResourceRetValue);
    NtCurrentTeb()->ResourceRetValue = 0LL;
  }
}
