/*
 * XREFs of PsResumeThread @ 0x140575A80
 * Callers:
 *     NtResumeThread @ 0x1405759C4 (NtResumeThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x1406AA3AC (DbgkpPostFakeThreadMessages.c)
 *     DbgkpWakeTarget @ 0x1406AB018 (DbgkpWakeTarget.c)
 *     DbgkQueueUserExceptionReport @ 0x1406ABCD4 (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x1406ABF00 (DbgkUserReportWorkRoutine.c)
 * Callees:
 *     KeResumeThread @ 0x14011CDF8 (KeResumeThread.c)
 */

__int64 __fastcall PsResumeThread(__int64 a1, _DWORD *a2)
{
  int v4; // edx
  __int64 v5; // rcx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt

  v4 = KeResumeThread(a1);
  if ( v4 == 1 )
  {
    v5 = *(_QWORD *)(a1 + 544);
    _m_prefetchw((const void *)(v5 + 1008));
    v6 = *(_QWORD *)(v5 + 1008);
    do
    {
      if ( !v6 )
        break;
      if ( (v6 & 1) != 0 )
        break;
      v7 = v6;
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 1008), 0LL, v6);
    }
    while ( v7 != v6 );
  }
  if ( a2 )
    *a2 = v4;
  return 0LL;
}
