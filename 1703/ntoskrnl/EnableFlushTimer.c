/*
 * XREFs of EnableFlushTimer @ 0x140030F08
 * Callers:
 *     FlushTimerCallbackKernelMode @ 0x14003C860 (FlushTimerCallbackKernelMode.c)
 *     InsertEventEntryInLookUpTable @ 0x140081DE4 (InsertEventEntryInLookUpTable.c)
 *     FlushWorkItemRoutineKernelMode @ 0x14044C610 (FlushWorkItemRoutineKernelMode.c)
 * Callees:
 *     ExSetTimer @ 0x14004B440 (ExSetTimer.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall EnableFlushTimer(ULONG_PTR a1)
{
  __int64 result; // rax

  if ( a1 )
    return ExSetTimer(a1);
  return result;
}
