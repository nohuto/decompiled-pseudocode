/*
 * XREFs of TtmiLogSessionWorkerStop @ 0x1406DD090
 * Callers:
 *     TtmpSessionWorker @ 0x1406D9A30 (TtmpSessionWorker.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void TtmiLogSessionWorkerStop()
{
  int v0; // r9d
  int v1; // r10d
  int v2; // [rsp+30h] [rbp-78h] BYREF
  int v3; // [rsp+34h] [rbp-74h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  int *v5; // [rsp+60h] [rbp-48h]
  int v6; // [rsp+68h] [rbp-40h]
  int v7; // [rsp+6Ch] [rbp-3Ch]
  int *v8; // [rsp+70h] [rbp-38h]
  int v9; // [rsp+78h] [rbp-30h]
  int v10; // [rsp+7Ch] [rbp-2Ch]

  if ( stru_1407AC710.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1407AC710, 1uLL) )
    {
      v7 = 0;
      v10 = 0;
      v5 = &v2;
      v8 = &v3;
      v2 = v1;
      v3 = v0;
      v6 = 4;
      v9 = 4;
      TlgWrite(&stru_1407AC710, &unk_1402ADF8C, 0LL, 0LL, 4u, &pData);
    }
  }
}
