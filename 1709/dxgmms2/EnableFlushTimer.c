/*
 * XREFs of EnableFlushTimer @ 0x1C002DFBC
 * Callers:
 *     FlushTimerCallbackKernelMode @ 0x1C002E1D0 (FlushTimerCallbackKernelMode.c)
 *     InsertEventEntryInLookUpTable @ 0x1C002E210 (InsertEventEntryInLookUpTable.c)
 *     FlushWorkItemRoutineKernelMode @ 0x1C00B6650 (FlushWorkItemRoutineKernelMode.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 */

__int64 __fastcall EnableFlushTimer(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    v3[1] = -1LL;
    v3[0] = 0LL;
    return ExSetTimer(a1, -10000LL * a2, 0LL, v3);
  }
  return result;
}
