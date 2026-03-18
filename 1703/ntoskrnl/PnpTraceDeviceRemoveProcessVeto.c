/*
 * XREFs of PnpTraceDeviceRemoveProcessVeto @ 0x1406A62EC
 * Callers:
 *     PnpLogVetoInformation @ 0x14059A4E0 (PnpLogVetoInformation.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void PnpTraceDeviceRemoveProcessVeto()
{
  unsigned __int16 *v0; // r9
  unsigned __int16 *v1; // r10
  unsigned __int16 *v2; // r11
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-49h] BYREF
  _DWORD *v4; // [rsp+50h] [rbp-29h]
  __int64 v5; // [rsp+58h] [rbp-21h]
  __int64 v6; // [rsp+60h] [rbp-19h]
  _DWORD v7[2]; // [rsp+68h] [rbp-11h] BYREF
  _DWORD *v8; // [rsp+70h] [rbp-9h]
  __int64 v9; // [rsp+78h] [rbp-1h]
  __int64 v10; // [rsp+80h] [rbp+7h]
  _DWORD v11[2]; // [rsp+88h] [rbp+Fh] BYREF
  _DWORD *v12; // [rsp+90h] [rbp+17h]
  __int64 v13; // [rsp+98h] [rbp+1Fh]
  __int64 v14; // [rsp+A0h] [rbp+27h]
  _DWORD v15[6]; // [rsp+A8h] [rbp+2Fh] BYREF

  if ( stru_14033C440.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_14033C440, 0x400000000000uLL) )
    {
      v5 = 2LL;
      v4 = v7;
      v6 = *((_QWORD *)v2 + 1);
      v7[0] = *v2;
      v8 = v11;
      v10 = *((_QWORD *)v1 + 1);
      v11[0] = *v1;
      v12 = v15;
      v14 = *((_QWORD *)v0 + 1);
      v15[0] = *v0;
      v7[1] = 0;
      v9 = 2LL;
      v11[1] = 0;
      v13 = 2LL;
      v15[1] = 0;
      TlgWrite(&stru_14033C440, &unk_1402AC183, 0LL, 0LL, 8u, &pData);
    }
  }
}
