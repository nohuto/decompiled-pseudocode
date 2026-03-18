/*
 * XREFs of PnpTraceDockDeviceEnumeration @ 0x1406D1324
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14052E48C (PiProcessNewDeviceNode.c)
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void PnpTraceDockDeviceEnumeration()
{
  __int64 v0; // r9
  int v1; // r10d
  int v2; // [rsp+30h] [rbp-29h] BYREF
  int v3; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  _DWORD *v5; // [rsp+60h] [rbp+7h]
  __int64 v6; // [rsp+68h] [rbp+Fh]
  __int64 v7; // [rsp+70h] [rbp+17h]
  _DWORD v8[2]; // [rsp+78h] [rbp+1Fh] BYREF
  int *v9; // [rsp+80h] [rbp+27h]
  __int64 v10; // [rsp+88h] [rbp+2Fh]
  int *v11; // [rsp+90h] [rbp+37h]
  __int64 v12; // [rsp+98h] [rbp+3Fh]

  if ( stru_140354A70.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_140354A70, 0x400000000000uLL) )
    {
      v2 = *(_DWORD *)(v0 + 568);
      v5 = v8;
      v7 = *(_QWORD *)(v0 + 48);
      v8[0] = *(unsigned __int16 *)(v0 + 40);
      v9 = &v2;
      v11 = &v3;
      v3 = v1;
      v6 = 2LL;
      v8[1] = 0;
      v10 = 4LL;
      v12 = 4LL;
      TlgWrite(&stru_140354A70, &unk_1402D000C, 0LL, 0LL, 6u, &pData);
    }
  }
}
