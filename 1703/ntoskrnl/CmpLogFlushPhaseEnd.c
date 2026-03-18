/*
 * XREFs of CmpLogFlushPhaseEnd @ 0x1404D814C
 * Callers:
 *     CmpFlushHive @ 0x1404D6DE0 (CmpFlushHive.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall CmpLogFlushPhaseEnd(__int64 a1, char a2, int a3)
{
  TLG_STATUS result; // eax
  char v4; // [rsp+30h] [rbp-78h] BYREF
  int v5; // [rsp+34h] [rbp-74h] BYREF
  EVENT_DATA_DESCRIPTOR v6; // [rsp+40h] [rbp-68h] BYREF
  char *v7; // [rsp+60h] [rbp-48h]
  int v8; // [rsp+68h] [rbp-40h]
  int v9; // [rsp+6Ch] [rbp-3Ch]
  int *v10; // [rsp+70h] [rbp-38h]
  int v11; // [rsp+78h] [rbp-30h]
  int v12; // [rsp+7Ch] [rbp-2Ch]

  if ( stru_14033C3C0.LevelPlus1 > 4 )
  {
    v4 = a2;
    v7 = &v4;
    v9 = 0;
    v8 = 1;
    v10 = &v5;
    v12 = 0;
    v11 = 4;
    v5 = a3;
    return TlgWrite(&stru_14033C3C0, &unk_1402AAC8A, 0LL, 0LL, 4u, &v6);
  }
  return result;
}
