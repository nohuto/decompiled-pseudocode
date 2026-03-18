/*
 * XREFs of EtwpWriteAppStateChange @ 0x14045549C
 * Callers:
 *     EtwTraceAppStateChange @ 0x1404E977C (EtwTraceAppStateChange.c)
 *     EtwTraceProcess @ 0x1404ED910 (EtwTraceProcess.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void EtwpWriteAppStateChange()
{
  __int64 v0; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  __int64 v2; // [rsp+50h] [rbp-28h]
  int v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+5Ch] [rbp-1Ch]

  if ( stru_14033C520.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_14033C520, 0x200000000001uLL) )
    {
      v4 = 0;
      v2 = v0;
      v3 = 98;
      TlgWrite(&stru_14033C520, &unk_1402AF805, 0LL, 0LL, 3u, &pData);
    }
  }
}
