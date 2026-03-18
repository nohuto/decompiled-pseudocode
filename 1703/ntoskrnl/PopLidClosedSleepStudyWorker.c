/*
 * XREFs of PopLidClosedSleepStudyWorker @ 0x1406CEAD0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PopDiagStopCsSleepStudySession @ 0x1406CC424 (PopDiagStopCsSleepStudySession.c)
 *     PopIdleCsStateChanged @ 0x1406D4B54 (PopIdleCsStateChanged.c)
 */

__int64 PopLidClosedSleepStudyWorker()
{
  __int64 v0; // rcx
  char v2; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-50h] BYREF
  char *v4; // [rsp+58h] [rbp-30h]
  int v5; // [rsp+60h] [rbp-28h]
  int v6; // [rsp+64h] [rbp-24h]

  _InterlockedExchange(&PopLidClosedSleepStudyWorkItemQueued, 0);
  PopSleepstudyStopReason = 17;
  PopDiagStopCsSleepStudySession(1, 15, 15);
  if ( hProvider.LevelPlus1 > 5 && TlgKeywordOn(&hProvider, 0x400000000000uLL) )
  {
    v6 = 0;
    v2 = PopLidOpened;
    v4 = &v2;
    v5 = 1;
    TlgWrite(&hProvider, &unk_1402ACF90, 0LL, 0LL, 3u, &pData);
  }
  PopIdleCsStateChanged(0LL);
  LOBYTE(v0) = 1;
  return PopIdleCsStateChanged(v0);
}
