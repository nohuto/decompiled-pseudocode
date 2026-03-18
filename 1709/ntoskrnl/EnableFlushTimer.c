/*
 * XREFs of EnableFlushTimer @ 0x1400B4BF8
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x1400BA53C (InsertEventEntryInLookUpTable.c)
 *     FlushTimerCallbackKernelMode @ 0x140131E80 (FlushTimerCallbackKernelMode.c)
 *     FlushWorkItemRoutineKernelMode @ 0x1404F0670 (FlushWorkItemRoutineKernelMode.c)
 * Callees:
 *     ExSetTimer @ 0x1400E0EB0 (ExSetTimer.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 __fastcall EnableFlushTimer(ULONG_PTR a1)
{
  __int64 result; // rax

  if ( a1 )
    return ExSetTimer(a1);
  return result;
}
