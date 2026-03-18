/*
 * XREFs of HvpLogUnreadableLog @ 0x1401E1A40
 * Callers:
 *     HvpGetLogHeader @ 0x140676C8C (HvpGetLogHeader.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall HvpLogUnreadableLog(__int64 a1, char a2)
{
  TLG_STATUS result; // eax
  char v3; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-50h] BYREF
  char *v5; // [rsp+58h] [rbp-30h]
  int v6; // [rsp+60h] [rbp-28h]
  int v7; // [rsp+64h] [rbp-24h]

  if ( stru_14033C3C0.LevelPlus1 > 5 )
  {
    v3 = a2;
    v5 = &v3;
    v7 = 0;
    v6 = 1;
    return TlgWrite(&stru_14033C3C0, &unk_1402AB4B3, 0LL, 0LL, 3u, &v4);
  }
  return result;
}
