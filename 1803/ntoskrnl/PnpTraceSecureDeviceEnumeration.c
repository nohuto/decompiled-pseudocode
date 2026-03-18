/*
 * XREFs of PnpTraceSecureDeviceEnumeration @ 0x140739320
 * Callers:
 *     PiProcessDriversLoadedOnSecureDevice @ 0x14073FFBC (PiProcessDriversLoadedOnSecureDevice.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void PnpTraceSecureDeviceEnumeration()
{
  __int64 v0; // r9
  int v1; // r10d
  int v2; // r11d
  int v3; // [rsp+30h] [rbp-29h] BYREF
  int v4; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  _DWORD *v6; // [rsp+60h] [rbp+7h]
  __int64 v7; // [rsp+68h] [rbp+Fh]
  __int64 v8; // [rsp+70h] [rbp+17h]
  _DWORD v9[2]; // [rsp+78h] [rbp+1Fh] BYREF
  int *v10; // [rsp+80h] [rbp+27h]
  __int64 v11; // [rsp+88h] [rbp+2Fh]
  int *v12; // [rsp+90h] [rbp+37h]
  __int64 v13; // [rsp+98h] [rbp+3Fh]

  if ( stru_140397160.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_140397160, 0x400000000000uLL) )
    {
      v3 = v2;
      v6 = v9;
      v8 = *(_QWORD *)(v0 + 48);
      v9[0] = *(unsigned __int16 *)(v0 + 40);
      v10 = &v3;
      v12 = &v4;
      v4 = v1;
      v7 = 2LL;
      v9[1] = 0;
      v11 = 4LL;
      v13 = 4LL;
      TlgWrite(&stru_140397160, &unk_14030974C, 0LL, 0LL, 6u, &pData);
    }
  }
}
