/*
 * XREFs of RtlCleanUpTEBLangLists @ 0x18006BFE0
 * Callers:
 *     RtlpCleanupRegistryKeys @ 0x1800EC730 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_180040BA0 @ 0x180040BA0 (sub_180040BA0.c)
 *     sub_18006EBF4 @ 0x18006EBF4 (sub_18006EBF4.c)
 */

void RtlCleanUpTEBLangLists(void)
{
  PVOID *UserPrefLanguages; // rbx
  PVOID v1; // rcx

  sub_180040BA0(NtCurrentTeb()->MergedPrefLanguages);
  NtCurrentTeb()->MergedPrefLanguages = 0LL;
  UserPrefLanguages = (PVOID *)NtCurrentTeb()->UserPrefLanguages;
  if ( UserPrefLanguages )
  {
    if ( *UserPrefLanguages )
      sub_180040BA0(*UserPrefLanguages);
    v1 = UserPrefLanguages[1];
    if ( v1 )
      sub_18006EBF4(v1);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, UserPrefLanguages);
  }
  NtCurrentTeb()->UserPrefLanguages = 0LL;
  sub_180040BA0(NtCurrentTeb()->PreferredLanguages);
  NtCurrentTeb()->PreferredLanguages = 0LL;
  if ( NtCurrentTeb()->ResourceRetValue )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, NtCurrentTeb()->ResourceRetValue);
    NtCurrentTeb()->ResourceRetValue = 0LL;
  }
}
