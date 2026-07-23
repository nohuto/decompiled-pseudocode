/*
 * XREFs of RtlTraceDatabaseAdd @ 0x1800F7890
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_1800F7D2C @ 0x1800F7D2C (sub_1800F7D2C.c)
 */

char __fastcall RtlTraceDatabaseAdd(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  char v8; // al

  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 48));
  *(_QWORD *)(a1 + 40) = 0LL;
  v8 = sub_1800F7D2C(a1, a2, a3, a4);
  *(_QWORD *)(a1 + 40) = 0LL;
  LOBYTE(a4) = v8;
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 48));
  return a4;
}
