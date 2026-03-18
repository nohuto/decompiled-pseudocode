/*
 * XREFs of PnpTraceClearDevNodeProblem @ 0x14059A810
 * Callers:
 *     PipClearDevNodeProblem @ 0x14045D5E8 (PipClearDevNodeProblem.c)
 * Callees:
 *     _TlgWriteAgg @ 0x140081D20 (_TlgWriteAgg.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall PnpTraceClearDevNodeProblem(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r9
  unsigned __int16 *v5; // r10
  unsigned __int16 *v6; // r11
  int v7; // [rsp+30h] [rbp-69h] BYREF
  int v8; // [rsp+34h] [rbp-65h] BYREF
  __int64 v9; // [rsp+38h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+40h] [rbp-59h] BYREF
  __int64 *v11; // [rsp+60h] [rbp-39h]
  __int64 v12; // [rsp+68h] [rbp-31h]
  _DWORD *v13; // [rsp+70h] [rbp-29h]
  __int64 v14; // [rsp+78h] [rbp-21h]
  __int64 v15; // [rsp+80h] [rbp-19h]
  _DWORD v16[2]; // [rsp+88h] [rbp-11h] BYREF
  _DWORD *v17; // [rsp+90h] [rbp-9h]
  __int64 v18; // [rsp+98h] [rbp-1h]
  __int64 v19; // [rsp+A0h] [rbp+7h]
  _DWORD v20[2]; // [rsp+A8h] [rbp+Fh] BYREF
  int *v21; // [rsp+B0h] [rbp+17h]
  __int64 v22; // [rsp+B8h] [rbp+1Fh]
  int *v23; // [rsp+C0h] [rbp+27h]
  __int64 v24; // [rsp+C8h] [rbp+2Fh]

  if ( stru_14033C440.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_14033C440, 0x800000000000uLL) )
    {
      v9 = 1LL;
      v11 = &v9;
      v13 = v16;
      v15 = *((_QWORD *)v6 + 1);
      v16[0] = *v6;
      v17 = v20;
      v19 = *((_QWORD *)v5 + 1);
      v20[0] = *v5;
      v21 = &v7;
      v23 = &v8;
      v7 = a3;
      v8 = v4;
      v12 = 8LL;
      v14 = 2LL;
      v16[1] = 0;
      v18 = 2LL;
      v20[1] = 0;
      v22 = 4LL;
      v24 = 4LL;
      TlgWriteAgg((__int64)&stru_14033C440, (unsigned __int8 *)dword_1402AC368, 0LL, v4, 9u, &v10);
    }
  }
}
