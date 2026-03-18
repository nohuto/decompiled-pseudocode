/*
 * XREFs of TtmiLogQueueDestroyed @ 0x140712704
 * Callers:
 *     TtmpDeleteQueue @ 0x1407111F0 (TtmpDeleteQueue.c)
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void TtmiLogQueueDestroyed()
{
  __int64 v0; // r9
  __int64 v1; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( stru_1407F37A0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1407F37A0, 1uLL) )
    {
      v5 = 0;
      v3 = &v1;
      v1 = v0;
      v4 = 8;
      TlgWrite(&stru_1407F37A0, &unk_1402D3561, 0LL, 0LL, 3u, &pData);
    }
  }
}
