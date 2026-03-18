/*
 * XREFs of PopLidClosedSleepStudyWorker @ 0x140705FE0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PopDiagStopCsSleepStudySession @ 0x1407016F4 (PopDiagStopCsSleepStudySession.c)
 *     PopIdleCsStateChanged @ 0x14070A3E4 (PopIdleCsStateChanged.c)
 */

__int64 PopLidClosedSleepStudyWorker()
{
  __int64 v0; // rcx
  char v2; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  char *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]
  int v6; // [rsp+64h] [rbp-14h]

  _InterlockedExchange(&PopLidClosedSleepStudyWorkItemQueued, 0);
  PopSleepstudyStopReason = 17;
  PopDiagStopCsSleepStudySession(1, 15, 15);
  if ( pCallbackContext.LevelPlus1 > 5 && TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
  {
    v6 = 0;
    v2 = PopLidOpened;
    v4 = &v2;
    v5 = 1;
    TlgWrite(&pCallbackContext, &unk_1402D1EEB, 0LL, 0LL, 3u, &pData);
  }
  PopIdleCsStateChanged(0LL);
  LOBYTE(v0) = 1;
  return PopIdleCsStateChanged(v0);
}
