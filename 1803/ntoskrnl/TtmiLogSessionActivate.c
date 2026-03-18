/*
 * XREFs of TtmiLogSessionActivate @ 0x140776A08
 * Callers:
 *     TtmpActivateSessionWorker @ 0x1407734B4 (TtmpActivateSessionWorker.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     PsGetProcessSessionIdEx @ 0x1400BD230 (PsGetProcessSessionIdEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void TtmiLogSessionActivate()
{
  int ProcessSessionId; // eax
  int v1; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( stru_140861840.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_140861840, 1uLL) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v5 = 0;
      v1 = ProcessSessionId;
      v3 = &v1;
      v4 = 4;
      TlgWrite(&stru_140861840, &unk_14030D918, 0LL, 0LL, 3u, &pData);
    }
  }
}
