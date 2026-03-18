/*
 * XREFs of HvpLogIneligibleLogHeader @ 0x1401E1828
 * Callers:
 *     HvpGetLogHeader @ 0x140676C8C (HvpGetLogHeader.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall HvpLogIneligibleLogHeader(__int64 a1, char a2, int a3, int a4)
{
  TLG_STATUS result; // eax
  char v5; // [rsp+30h] [rbp-29h] BYREF
  int v6; // [rsp+34h] [rbp-25h] BYREF
  int v7; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  char *v9; // [rsp+60h] [rbp+7h]
  __int64 v10; // [rsp+68h] [rbp+Fh]
  int *v11; // [rsp+70h] [rbp+17h]
  __int64 v12; // [rsp+78h] [rbp+1Fh]
  int *v13; // [rsp+80h] [rbp+27h]
  __int64 v14; // [rsp+88h] [rbp+2Fh]

  if ( stru_14033C3C0.LevelPlus1 > 5 )
  {
    v5 = a2;
    v9 = &v5;
    v11 = &v6;
    v13 = &v7;
    v6 = a3;
    v7 = a4;
    v10 = 1LL;
    v12 = 4LL;
    v14 = 4LL;
    return TlgWrite(&stru_14033C3C0, &unk_1402AB3D4, 0LL, 0LL, 5u, &pData);
  }
  return result;
}
