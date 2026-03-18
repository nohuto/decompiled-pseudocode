/*
 * XREFs of PnpTraceRequestDeviceRemovalForReset @ 0x1406A6810
 * Callers:
 *     IoRequestDeviceRemovalForReset @ 0x1406948A0 (IoRequestDeviceRemovalForReset.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall PnpTraceRequestDeviceRemovalForReset(__int64 a1, int a2, int a3)
{
  unsigned __int16 *v5; // r9
  unsigned __int16 *v6; // r10
  int v7; // r11d
  int v8; // [rsp+30h] [rbp-69h] BYREF
  int v9; // [rsp+34h] [rbp-65h] BYREF
  int v10; // [rsp+38h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-59h] BYREF
  _DWORD *v12; // [rsp+60h] [rbp-39h]
  int v13; // [rsp+68h] [rbp-31h]
  int v14; // [rsp+6Ch] [rbp-2Dh]
  __int64 v15; // [rsp+70h] [rbp-29h]
  _DWORD v16[2]; // [rsp+78h] [rbp-21h] BYREF
  _DWORD *v17; // [rsp+80h] [rbp-19h]
  int v18; // [rsp+88h] [rbp-11h]
  int v19; // [rsp+8Ch] [rbp-Dh]
  __int64 v20; // [rsp+90h] [rbp-9h]
  _DWORD v21[2]; // [rsp+98h] [rbp-1h] BYREF
  int *v22; // [rsp+A0h] [rbp+7h]
  int v23; // [rsp+A8h] [rbp+Fh]
  int v24; // [rsp+ACh] [rbp+13h]
  int *v25; // [rsp+B0h] [rbp+17h]
  int v26; // [rsp+B8h] [rbp+1Fh]
  int v27; // [rsp+BCh] [rbp+23h]
  int *v28; // [rsp+C0h] [rbp+27h]
  int v29; // [rsp+C8h] [rbp+2Fh]
  int v30; // [rsp+CCh] [rbp+33h]

  if ( stru_14033C440.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_14033C440, 0x400000000000uLL) )
    {
      v14 = 0;
      v16[1] = 0;
      v19 = 0;
      v21[1] = 0;
      v24 = 0;
      v27 = 0;
      v30 = 0;
      v12 = v16;
      v15 = *((_QWORD *)v5 + 1);
      v16[0] = *v5;
      v17 = v21;
      v20 = *((_QWORD *)v6 + 1);
      v21[0] = *v6;
      v22 = &v8;
      v25 = &v9;
      v28 = &v10;
      v8 = v7;
      v9 = a2;
      v10 = a3;
      v13 = 2;
      v18 = 2;
      v23 = 4;
      v26 = 4;
      v29 = 4;
      TlgWrite(&stru_14033C440, &unk_1402ABFA0, 0LL, 0LL, 9u, &pData);
    }
  }
}
