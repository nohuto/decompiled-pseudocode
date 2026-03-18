/*
 * XREFs of EtwpWriteAppStateChange @ 0x1404DD438
 * Callers:
 *     EtwTraceProcess @ 0x1404DBA5C (EtwTraceProcess.c)
 *     EtwTraceAppStateChange @ 0x1404FE234 (EtwTraceAppStateChange.c)
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void EtwpWriteAppStateChange()
{
  __int64 v0; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  __int64 v2; // [rsp+50h] [rbp-28h]
  int v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+5Ch] [rbp-1Ch]

  if ( stru_140354B50.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_140354B50, 0x200000000001uLL) )
    {
      v4 = 0;
      v2 = v0;
      v3 = 98;
      TlgWrite(&stru_140354B50, &unk_1402D4A5B, 0LL, 0LL, 3u, &pData);
    }
  }
}
