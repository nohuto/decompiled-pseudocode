/*
 * XREFs of PopTraceSmbiosChange @ 0x140232A40
 * Callers:
 *     PopUpdateSmbiosData @ 0x14057A340 (PopUpdateSmbiosData.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall PopTraceSmbiosChange(__int64 a1, int a2)
{
  int v3; // r9d
  __int64 v4; // r10
  __int64 v5; // r11
  int v6; // [rsp+30h] [rbp-49h] BYREF
  int v7; // [rsp+34h] [rbp-45h] BYREF
  __int64 v8; // [rsp+38h] [rbp-41h] BYREF
  __int64 v9; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v11; // [rsp+70h] [rbp-9h]
  int v12; // [rsp+78h] [rbp-1h]
  int v13; // [rsp+7Ch] [rbp+3h]
  int *v14; // [rsp+80h] [rbp+7h]
  int v15; // [rsp+88h] [rbp+Fh]
  int v16; // [rsp+8Ch] [rbp+13h]
  __int64 *v17; // [rsp+90h] [rbp+17h]
  int v18; // [rsp+98h] [rbp+1Fh]
  int v19; // [rsp+9Ch] [rbp+23h]
  int *v20; // [rsp+A0h] [rbp+27h]
  int v21; // [rsp+A8h] [rbp+2Fh]
  int v22; // [rsp+ACh] [rbp+33h]

  if ( hProvider.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&hProvider, 0x400000000000uLL) )
    {
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v11 = &v8;
      v14 = &v6;
      v8 = v4;
      v17 = &v9;
      v20 = &v7;
      v6 = a2;
      v9 = v5;
      v7 = v3;
      v12 = 8;
      v15 = 4;
      v18 = 8;
      v21 = 4;
      TlgWrite(&hProvider, &unk_1402AD69E, 0LL, 0LL, 6u, &pData);
    }
  }
}
