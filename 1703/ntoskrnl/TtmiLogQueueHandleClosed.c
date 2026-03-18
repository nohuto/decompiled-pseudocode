/*
 * XREFs of TtmiLogQueueHandleClosed @ 0x1406DC2B4
 * Callers:
 *     TtmpCloseQueueHandle @ 0x1406DADA0 (TtmpCloseQueueHandle.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void TtmiLogQueueHandleClosed()
{
  __int64 v0; // r9
  __int64 v1; // r10
  __int64 v2; // r11
  __int64 v3; // [rsp+30h] [rbp-39h] BYREF
  __int64 v4; // [rsp+38h] [rbp-31h] BYREF
  __int64 v5; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v7; // [rsp+70h] [rbp+7h]
  __int64 v8; // [rsp+78h] [rbp+Fh]
  __int64 *v9; // [rsp+80h] [rbp+17h]
  __int64 v10; // [rsp+88h] [rbp+1Fh]
  __int64 *v11; // [rsp+90h] [rbp+27h]
  __int64 v12; // [rsp+98h] [rbp+2Fh]

  if ( stru_1407AC710.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1407AC710, 1uLL) )
    {
      v3 = v2;
      v7 = &v3;
      v9 = &v4;
      v11 = &v5;
      v4 = v1;
      v5 = v0;
      v8 = 8LL;
      v10 = 8LL;
      v12 = 8LL;
      TlgWrite(&stru_1407AC710, &unk_1402ADF41, 0LL, 0LL, 5u, &pData);
    }
  }
}
