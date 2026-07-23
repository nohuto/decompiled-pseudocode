/*
 * XREFs of sub_1800024A8 @ 0x1800024A8
 * Callers:
 *     sub_18000469C @ 0x18000469C (sub_18000469C.c)
 *     sub_1800730D0 @ 0x1800730D0 (sub_1800730D0.c)
 * Callees:
 *     sub_180002524 @ 0x180002524 (sub_180002524.c)
 *     sub_180005554 @ 0x180005554 (sub_180005554.c)
 *     RtlWakeAllConditionVariable @ 0x1800735E0 (RtlWakeAllConditionVariable.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 */

__int64 __fastcall sub_1800024A8(__int64 a1)
{
  void *v2; // rcx

  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 328), 0, 1) )
    return 4201LL;
  sub_180002524(*(unsigned int *)(a1 + 20));
  v2 = *(void **)(a1 + 544);
  if ( v2 )
  {
    ZwClose(v2);
    *(_QWORD *)(a1 + 544) = 0LL;
  }
  _InterlockedExchange64((volatile __int64 *)(qword_18015A420 + 16LL * *(unsigned int *)(a1 + 20)), 3LL);
  RtlWakeAllConditionVariable((PRTL_CONDITION_VARIABLE)(a1 + 80));
  sub_180005554(a1, 2LL, *(unsigned int *)(a1 + 40));
  return 0LL;
}
