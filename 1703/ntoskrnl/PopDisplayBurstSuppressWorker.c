/*
 * XREFs of PopDisplayBurstSuppressWorker @ 0x1406CE680
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PopDiagStopCsSleepStudySession @ 0x1406CC424 (PopDiagStopCsSleepStudySession.c)
 *     PopIdleCsStateChanged @ 0x1406D4B54 (PopIdleCsStateChanged.c)
 */

char PopDisplayBurstSuppressWorker()
{
  GUID *v0; // rax
  __int64 v1; // rcx
  char v3; // [rsp+30h] [rbp-69h] BYREF
  char v4; // [rsp+31h] [rbp-68h] BYREF
  char v5; // [rsp+32h] [rbp-67h] BYREF
  char v6; // [rsp+33h] [rbp-66h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-59h] BYREF
  char *v8; // [rsp+60h] [rbp-39h]
  __int64 v9; // [rsp+68h] [rbp-31h]
  char *v10; // [rsp+70h] [rbp-29h]
  __int64 v11; // [rsp+78h] [rbp-21h]
  EVENT_DATA_DESCRIPTOR v12; // [rsp+90h] [rbp-9h] BYREF
  char *v13; // [rsp+B0h] [rbp+17h]
  __int64 v14; // [rsp+B8h] [rbp+1Fh]
  char *v15; // [rsp+C0h] [rbp+27h]
  __int64 v16; // [rsp+C8h] [rbp+2Fh]

  v0 = &NullGuid;
  if ( (GUID *)PopWdiCurrentScenario == &NullGuid )
  {
    if ( !PopDisableDisplayBurstOnPowerSourceChange && hProvider.LevelPlus1 > 5 )
    {
      LOBYTE(v0) = TlgKeywordOn(&hProvider, 0x400000000000uLL);
      if ( (_BYTE)v0 )
      {
        v3 = PopLidOpened;
        v4 = PopConsoleExternalDisplayConnected;
        v8 = &v3;
        v10 = &v4;
        v9 = 1LL;
        v11 = 1LL;
        LOBYTE(v0) = TlgWrite(&hProvider, &unk_1402AD0AF, 0LL, 0LL, 4u, &pData);
      }
    }
  }
  else
  {
    PopSleepstudyStopReason = 17;
    PopDiagStopCsSleepStudySession(1, 28, 28);
    if ( hProvider.LevelPlus1 > 5 && TlgKeywordOn(&hProvider, 0x400000000000uLL) )
    {
      v5 = PopLidOpened;
      v6 = PopConsoleExternalDisplayConnected;
      v13 = &v5;
      v15 = &v6;
      v14 = 1LL;
      v16 = 1LL;
      TlgWrite(&hProvider, &unk_1402AD10B, 0LL, 0LL, 4u, &v12);
    }
    PopIdleCsStateChanged(0LL);
    LOBYTE(v1) = 1;
    LOBYTE(v0) = PopIdleCsStateChanged(v1);
  }
  _InterlockedExchange(&PopDisplayBurstSuppressWorkItemQueued, 0);
  return (char)v0;
}
