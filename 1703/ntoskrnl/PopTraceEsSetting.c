/*
 * XREFs of PopTraceEsSetting @ 0x14016774C
 * Callers:
 *     PopEsUpdateSetting @ 0x1405D3C7C (PopEsUpdateSetting.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall PopTraceEsSetting(__int64 a1, int a2, unsigned __int8 a3)
{
  TLG_STATUS result; // eax
  int v4; // [rsp+30h] [rbp-29h] BYREF
  int v5; // [rsp+34h] [rbp-25h] BYREF
  int v6; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v8; // [rsp+60h] [rbp+7h]
  __int64 v9; // [rsp+68h] [rbp+Fh]
  int *v10; // [rsp+70h] [rbp+17h]
  __int64 v11; // [rsp+78h] [rbp+1Fh]
  int *v12; // [rsp+80h] [rbp+27h]
  __int64 v13; // [rsp+88h] [rbp+2Fh]

  if ( hProvider.LevelPlus1 > 5 )
  {
    v4 = PopEsMode;
    v6 = a3;
    v8 = &v4;
    v10 = &v5;
    v12 = &v6;
    v5 = a2;
    v9 = 4LL;
    v11 = 4LL;
    v13 = 4LL;
    return TlgWrite(&hProvider, &unk_1402AD91B, 0LL, 0LL, 5u, &pData);
  }
  return result;
}
