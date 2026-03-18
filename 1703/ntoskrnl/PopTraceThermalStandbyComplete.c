/*
 * XREFs of PopTraceThermalStandbyComplete @ 0x140232D04
 * Callers:
 *     PopThermalStandbyEndTracking @ 0x14013C87C (PopThermalStandbyEndTracking.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void PopTraceThermalStandbyComplete()
{
  unsigned __int8 v0; // r9
  int v1; // r10d
  int v2; // r11d
  int v3; // [rsp+30h] [rbp-29h] BYREF
  int v4; // [rsp+34h] [rbp-25h] BYREF
  int v5; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v7; // [rsp+60h] [rbp+7h]
  __int64 v8; // [rsp+68h] [rbp+Fh]
  int *v9; // [rsp+70h] [rbp+17h]
  __int64 v10; // [rsp+78h] [rbp+1Fh]
  int *v11; // [rsp+80h] [rbp+27h]
  __int64 v12; // [rsp+88h] [rbp+2Fh]

  if ( hProvider.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&hProvider, 0x400000000000uLL) )
    {
      v5 = v0;
      v7 = &v3;
      v9 = &v4;
      v11 = &v5;
      v3 = v2;
      v4 = v1;
      v8 = 4LL;
      v10 = 4LL;
      v12 = 4LL;
      TlgWrite(&hProvider, &unk_1402AD4EB, 0LL, 0LL, 5u, &pData);
    }
  }
}
