/*
 * XREFs of PopDiagTracePowerButtonBugcheck @ 0x140704A58
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x140249C30 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopDiagTracePowerButtonBugcheck(int a1)
{
  BOOLEAN result; // al
  int v2; // r9d
  int v3; // r10d
  char v4; // r11
  int v5; // r9d
  int v6; // r10d
  char v7; // r11
  _BYTE v8[4]; // [rsp+30h] [rbp-29h] BYREF
  int v9; // [rsp+34h] [rbp-25h] BYREF
  int v10; // [rsp+38h] [rbp-21h] BYREF
  int v11; // [rsp+3Ch] [rbp-1Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v13; // [rsp+60h] [rbp+7h]
  __int64 v14; // [rsp+68h] [rbp+Fh]
  int *v15; // [rsp+70h] [rbp+17h]
  __int64 v16; // [rsp+78h] [rbp+1Fh]
  int *v17; // [rsp+80h] [rbp+27h]
  __int64 v18; // [rsp+88h] [rbp+2Fh]
  _BYTE *v19; // [rsp+90h] [rbp+37h]
  __int64 v20; // [rsp+98h] [rbp+3Fh]

  result = BYTE8(PopBsdPhysicalPowerButtonInfo) - BYTE8(xmmword_1403A2B60);
  if ( a1 == 7000 )
  {
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      result = TlgKeywordOn(&pCallbackContext, 0x400000000000uLL);
      if ( result )
      {
        v9 = 7000;
        v13 = &v9;
        v15 = &v10;
        v19 = v8;
        v17 = &v11;
        v10 = v2;
        v11 = v3;
        v8[0] = v4;
        v14 = 4LL;
        v16 = 4LL;
        v18 = 4LL;
        v20 = 1LL;
        return TlgWrite(&pCallbackContext, &unk_1402D2B26, 0LL, 0LL, 6u, &pData);
      }
    }
  }
  else if ( a1 == 11000 && pCallbackContext.LevelPlus1 > 5 )
  {
    result = TlgKeywordOn(&pCallbackContext, 0x400000000000uLL);
    if ( result )
    {
      v11 = 11000;
      v13 = &v11;
      v15 = &v10;
      v19 = v8;
      v17 = &v9;
      v10 = v5;
      v9 = v6;
      v8[0] = v7;
      v14 = 4LL;
      v16 = 4LL;
      v18 = 4LL;
      v20 = 1LL;
      return TlgWrite(&pCallbackContext, &unk_1402D2AAD, 0LL, 0LL, 6u, &pData);
    }
  }
  return result;
}
