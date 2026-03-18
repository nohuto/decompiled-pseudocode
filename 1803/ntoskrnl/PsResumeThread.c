/*
 * XREFs of PsResumeThread @ 0x140567C50
 * Callers:
 *     NtResumeThread @ 0x140567B94 (NtResumeThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x14070EB0C (DbgkpPostFakeThreadMessages.c)
 *     DbgkpWakeTarget @ 0x14070F788 (DbgkpWakeTarget.c)
 *     DbgkQueueUserExceptionReport @ 0x14071043C (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x140710940 (DbgkUserReportWorkRoutine.c)
 * Callees:
 *     KeResumeThread @ 0x1400BD808 (KeResumeThread.c)
 */

__int64 __fastcall PsResumeThread(__int64 a1, _DWORD *a2)
{
  int v4; // eax
  __int64 v5; // rdx

  v4 = KeResumeThread(a1);
  if ( v4 == 1 )
  {
    v5 = *(_QWORD *)(a1 + 544);
    if ( (*(_DWORD *)(v5 + 1740) & 0x8000) == 0 )
      _InterlockedOr((volatile signed __int32 *)(v5 + 1740), 0x8000u);
  }
  if ( a2 )
    *a2 = v4;
  return 0LL;
}
