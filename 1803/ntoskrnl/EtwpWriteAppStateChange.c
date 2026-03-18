/*
 * XREFs of EtwpWriteAppStateChange @ 0x14050E9E4
 * Callers:
 *     EtwTraceProcess @ 0x1404F846C (EtwTraceProcess.c)
 *     EtwTraceAppStateChange @ 0x140510E74 (EtwTraceAppStateChange.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void EtwpWriteAppStateChange()
{
  __int64 v0; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  __int64 v2; // [rsp+50h] [rbp-28h]
  int v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+5Ch] [rbp-1Ch]

  if ( stru_1403977E0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1403977E0, 0x200000000001uLL) )
    {
      v4 = 0;
      v2 = v0;
      v3 = 98;
      TlgWrite(&stru_1403977E0, &unk_14030E655, 0LL, 0LL, 3u, &pData);
    }
  }
}
