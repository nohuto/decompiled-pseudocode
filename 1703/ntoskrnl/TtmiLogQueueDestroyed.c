/*
 * XREFs of TtmiLogQueueDestroyed @ 0x1406DC218
 * Callers:
 *     TtmpDeleteQueue @ 0x1406DADE0 (TtmpDeleteQueue.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void TtmiLogQueueDestroyed()
{
  __int64 v0; // r9
  __int64 v1; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-50h] BYREF
  __int64 *v3; // [rsp+58h] [rbp-30h]
  int v4; // [rsp+60h] [rbp-28h]
  int v5; // [rsp+64h] [rbp-24h]

  if ( stru_1407AC710.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1407AC710, 1uLL) )
    {
      v5 = 0;
      v3 = &v1;
      v1 = v0;
      v4 = 8;
      TlgWrite(&stru_1407AC710, &unk_1402AE406, 0LL, 0LL, 3u, &pData);
    }
  }
}
