/*
 * XREFs of TtmiLogSessionActivate @ 0x140712920
 * Callers:
 *     TtmpActivateSessionWorker @ 0x14070FC40 (TtmpActivateSessionWorker.c)
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     PsGetProcessSessionIdEx @ 0x140121C00 (PsGetProcessSessionIdEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void TtmiLogSessionActivate()
{
  int ProcessSessionId; // eax
  int v1; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( stru_1407F37A0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1407F37A0, 1uLL) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v5 = 0;
      v1 = ProcessSessionId;
      v3 = &v1;
      v4 = 4;
      TlgWrite(&stru_1407F37A0, &unk_1402D389E, 0LL, 0LL, 3u, &pData);
    }
  }
}
