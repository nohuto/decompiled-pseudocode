/*
 * XREFs of RtlTraceDatabaseFind @ 0x1800F7B90
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_1800F7ED0 @ 0x1800F7ED0 (sub_1800F7ED0.c)
 */

char __fastcall RtlTraceDatabaseFind(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  char v8; // bl

  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 48));
  *(_QWORD *)(a1 + 40) = 0LL;
  v8 = sub_1800F7ED0(a1, a2, a3, a4);
  if ( v8 )
    ++*(_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 40) = 0LL;
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 48));
  return v8;
}
