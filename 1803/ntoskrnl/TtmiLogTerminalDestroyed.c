/*
 * XREFs of TtmiLogTerminalDestroyed @ 0x1407778A4
 * Callers:
 *     TtmpDeleteTerminal @ 0x140772310 (TtmpDeleteTerminal.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void TtmiLogTerminalDestroyed()
{
  __int64 v0; // r9
  __int64 v1; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( stru_140861840.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_140861840, 1uLL) )
    {
      v5 = 0;
      v3 = &v1;
      v1 = v0;
      v4 = 8;
      TlgWrite(&stru_140861840, &unk_14030CE5A, 0LL, 0LL, 3u, &pData);
    }
  }
}
