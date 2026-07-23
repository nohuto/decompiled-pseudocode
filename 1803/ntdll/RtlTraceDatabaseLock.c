/*
 * XREFs of RtlTraceDatabaseLock @ 0x1800F7C10
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 */

NTSTATUS __fastcall RtlTraceDatabaseLock(__int64 a1)
{
  NTSTATUS result; // eax

  result = RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 48));
  *(_QWORD *)(a1 + 40) = 0LL;
  return result;
}
