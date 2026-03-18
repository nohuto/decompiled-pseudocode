/*
 * XREFs of TtmiLogCalloutStop @ 0x1407113EC
 * Callers:
 *     TtmpStopCallout @ 0x14070E0C8 (TtmpStopCallout.c)
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     PsGetProcessSessionIdEx @ 0x140121C00 (PsGetProcessSessionIdEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

char __fastcall TtmiLogCalloutStop(int a1, int a2, __int64 a3, int a4, int a5, __int64 a6)
{
  _UNKNOWN **v6; // rax
  int ProcessSessionId; // eax
  int v12; // [rsp+38h] [rbp-89h] BYREF
  int v13; // [rsp+3Ch] [rbp-85h] BYREF
  int v14; // [rsp+40h] [rbp-81h] BYREF
  int v15; // [rsp+44h] [rbp-7Dh] BYREF
  __int64 v16; // [rsp+48h] [rbp-79h] BYREF
  __int64 v17; // [rsp+50h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-69h] BYREF
  int *v19; // [rsp+78h] [rbp-49h]
  int v20; // [rsp+80h] [rbp-41h]
  int v21; // [rsp+84h] [rbp-3Dh]
  int *v22; // [rsp+88h] [rbp-39h]
  int v23; // [rsp+90h] [rbp-31h]
  int v24; // [rsp+94h] [rbp-2Dh]
  int *v25; // [rsp+98h] [rbp-29h]
  int v26; // [rsp+A0h] [rbp-21h]
  int v27; // [rsp+A4h] [rbp-1Dh]
  __int64 *v28; // [rsp+A8h] [rbp-19h]
  int v29; // [rsp+B0h] [rbp-11h]
  int v30; // [rsp+B4h] [rbp-Dh]
  _DWORD *v31; // [rsp+B8h] [rbp-9h]
  int v32; // [rsp+C0h] [rbp-1h]
  int v33; // [rsp+C4h] [rbp+3h]
  int *v34; // [rsp+C8h] [rbp+7h]
  _DWORD v35[2]; // [rsp+D0h] [rbp+Fh] BYREF
  int *v36; // [rsp+D8h] [rbp+17h]
  int v37; // [rsp+E0h] [rbp+1Fh]
  int v38; // [rsp+E4h] [rbp+23h]
  __int64 *v39; // [rsp+E8h] [rbp+27h]
  int v40; // [rsp+F0h] [rbp+2Fh]
  int v41; // [rsp+F4h] [rbp+33h]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+4Fh] BYREF
  int v43; // [rsp+130h] [rbp+6Fh] BYREF

  v6 = &retaddr;
  v43 = a4;
  if ( stru_1407F37A0.LevelPlus1 > 5 )
  {
    LOBYTE(v6) = TlgKeywordOn(&stru_1407F37A0, 0x400000000001uLL);
    if ( (_BYTE)v6 )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v30 = 0;
      v33 = 0;
      v35[1] = 0;
      v38 = 0;
      v41 = 0;
      v12 = ProcessSessionId;
      v15 = a5;
      v17 = a6;
      v19 = &v12;
      v22 = &v13;
      v25 = &v14;
      v28 = &v16;
      v31 = v35;
      v34 = &v43;
      v36 = &v15;
      v39 = &v17;
      v13 = a1;
      v14 = a2;
      v16 = a3;
      v20 = 4;
      v23 = 4;
      v26 = 4;
      v29 = 8;
      v32 = 2;
      v35[0] = 4;
      v37 = 4;
      v40 = 8;
      LOBYTE(v6) = TlgWrite(&stru_1407F37A0, &unk_1402D3968, 0LL, 0LL, 0xAu, &pData);
    }
  }
  return (char)v6;
}
