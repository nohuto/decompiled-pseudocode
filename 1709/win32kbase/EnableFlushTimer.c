/*
 * XREFs of EnableFlushTimer @ 0x1C0156158
 * Callers:
 *     FlushTimerCallbackKernelMode @ 0x1C0156360 (FlushTimerCallbackKernelMode.c)
 *     InsertEventEntryInLookUpTable @ 0x1C01563A0 (InsertEventEntryInLookUpTable.c)
 *     FlushWorkItemRoutineKernelMode @ 0x1C01C51B0 (FlushWorkItemRoutineKernelMode.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

__int64 __fastcall EnableFlushTimer(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    v3[1] = -1LL;
    v3[0] = 0LL;
    return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD *))ExSetTimer)(a1, -10000LL * a2, 0LL, v3);
  }
  return result;
}
