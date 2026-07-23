/*
 * XREFs of sub_180050D48 @ 0x180050D48
 * Callers:
 *     sub_180051190 @ 0x180051190 (sub_180051190.c)
 *     sub_180051300 @ 0x180051300 (sub_180051300.c)
 * Callees:
 *     RtlWakeAllConditionVariable @ 0x180051860 (RtlWakeAllConditionVariable.c)
 *     sub_18005203C @ 0x18005203C (sub_18005203C.c)
 *     sub_1800520F8 @ 0x1800520F8 (sub_1800520F8.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 */

__int64 __fastcall sub_180050D48(__int64 a1)
{
  void *v2; // rcx

  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 328), 0, 1) )
    return 4201LL;
  sub_1800520F8(*(unsigned int *)(a1 + 20));
  v2 = *(void **)(a1 + 528);
  if ( v2 )
  {
    ZwClose(v2);
    *(_QWORD *)(a1 + 528) = 0LL;
  }
  _InterlockedExchange64((volatile __int64 *)(qword_1801593C0 + 16LL * *(unsigned int *)(a1 + 20)), 3LL);
  RtlWakeAllConditionVariable((PRTL_CONDITION_VARIABLE)(a1 + 80));
  sub_18005203C(a1, 2LL, *(unsigned int *)(a1 + 40));
  return 0LL;
}
