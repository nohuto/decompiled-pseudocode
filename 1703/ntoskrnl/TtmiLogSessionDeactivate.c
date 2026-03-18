/*
 * XREFs of TtmiLogSessionDeactivate @ 0x1406DC584
 * Callers:
 *     TtmpDeactivateSessionWorker @ 0x1406D98DC (TtmpDeactivateSessionWorker.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x140072E20 (PsGetProcessSessionIdEx.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void TtmiLogSessionDeactivate()
{
  int ProcessSessionId; // eax
  int v1; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-50h] BYREF
  int *v3; // [rsp+58h] [rbp-30h]
  int v4; // [rsp+60h] [rbp-28h]
  int v5; // [rsp+64h] [rbp-24h]

  if ( stru_1407AC710.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1407AC710, 1uLL) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v5 = 0;
      v1 = ProcessSessionId;
      v3 = &v1;
      v4 = 4;
      TlgWrite(&stru_1407AC710, &unk_1402AE6CF, 0LL, 0LL, 3u, &pData);
    }
  }
}
