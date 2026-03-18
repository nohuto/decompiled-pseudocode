/*
 * XREFs of CmpLogFlushPhaseStart @ 0x14049A820
 * Callers:
 *     CmpFlushHive @ 0x14049D2A8 (CmpFlushHive.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall CmpLogFlushPhaseStart(__int64 a1, char a2)
{
  TLG_STATUS result; // eax
  char v3; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  char *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  if ( stru_140397090.LevelPlus1 > 4 )
  {
    v3 = a2;
    v5 = &v3;
    v7 = 0;
    v6 = 1;
    return TlgWrite(&stru_140397090, &unk_1403083B0, 0LL, 0LL, 3u, &v4);
  }
  return result;
}
