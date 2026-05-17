/*
 * XREFs of RtlCleanUpTEBLangLists @ 0x18006BFE0
 * Callers:
 *     RtlpCleanupRegistryKeys @ 0x1800EC730 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_180040BA0 @ 0x180040BA0 (sub_180040BA0.c)
 *     sub_18006EBF4 @ 0x18006EBF4 (sub_18006EBF4.c)
 */

struct _TEB *RtlCleanUpTEBLangLists()
{
  unsigned __int64 *UserPrefLanguages; // rbx
  struct _TEB *result; // rax

  sub_180040BA0((unsigned __int64)NtCurrentTeb()->MergedPrefLanguages);
  NtCurrentTeb()->MergedPrefLanguages = 0LL;
  UserPrefLanguages = (unsigned __int64 *)NtCurrentTeb()->UserPrefLanguages;
  if ( UserPrefLanguages )
  {
    if ( *UserPrefLanguages )
      sub_180040BA0(*UserPrefLanguages);
    if ( UserPrefLanguages[1] )
      sub_18006EBF4();
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)UserPrefLanguages);
  }
  NtCurrentTeb()->UserPrefLanguages = 0LL;
  sub_180040BA0((unsigned __int64)NtCurrentTeb()->PreferredLanguages);
  NtCurrentTeb()->PreferredLanguages = 0LL;
  result = NtCurrentTeb();
  if ( result->ResourceRetValue )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)NtCurrentTeb()->ResourceRetValue);
    result = NtCurrentTeb();
    result->ResourceRetValue = 0LL;
  }
  return result;
}
