/*
 * XREFs of TtmiLogSessionWorkerStart @ 0x1407134B8
 * Callers:
 *     TtmpSessionWorker @ 0x14070FE40 (TtmpSessionWorker.c)
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void TtmiLogSessionWorkerStart()
{
  int v0; // r9d
  int v1; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( stru_1407F37A0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1407F37A0, 1uLL) )
    {
      v5 = 0;
      v3 = &v1;
      v1 = v0;
      v4 = 4;
      TlgWrite(&stru_1407F37A0, &unk_1402D3E7F, 0LL, 0LL, 3u, &pData);
    }
  }
}
