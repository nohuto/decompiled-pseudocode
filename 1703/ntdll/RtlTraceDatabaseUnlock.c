/*
 * XREFs of RtlTraceDatabaseUnlock @ 0x1800F9C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RtlTraceDatabaseUnlock(__int64 a1)
{
  *(_QWORD *)(a1 + 40) = 0LL;
  return RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 48));
}
