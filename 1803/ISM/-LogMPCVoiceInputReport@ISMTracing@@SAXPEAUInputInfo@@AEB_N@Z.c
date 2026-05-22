/*
 * XREFs of ?LogMPCVoiceInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x18004A594
 * Callers:
 *     ?OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z @ 0x180049C00 (-OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::LogMPCVoiceInputReport(struct InputInfo *a1, const bool *a2)
{
  __int64 v4; // rcx
  int v5; // [rsp+30h] [rbp-79h] BYREF
  int v6; // [rsp+34h] [rbp-75h] BYREF
  int v7; // [rsp+38h] [rbp-71h] BYREF
  int v8; // [rsp+3Ch] [rbp-6Dh] BYREF
  int v9; // [rsp+40h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  int *v11; // [rsp+70h] [rbp-39h]
  __int64 v12; // [rsp+78h] [rbp-31h]
  int *v13; // [rsp+80h] [rbp-29h]
  __int64 v14; // [rsp+88h] [rbp-21h]
  char *v15; // [rsp+90h] [rbp-19h]
  __int64 v16; // [rsp+98h] [rbp-11h]
  const bool *v17; // [rsp+A0h] [rbp-9h]
  __int64 v18; // [rsp+A8h] [rbp-1h]
  char *v19; // [rsp+B0h] [rbp+7h]
  __int64 v20; // [rsp+B8h] [rbp+Fh]
  int *v21; // [rsp+C0h] [rbp+17h]
  __int64 v22; // [rsp+C8h] [rbp+1Fh]
  int *v23; // [rsp+D0h] [rbp+27h]
  __int64 v24; // [rsp+D8h] [rbp+2Fh]
  int *v25; // [rsp+E0h] [rbp+37h]
  __int64 v26; // [rsp+E8h] [rbp+3Fh]

  v4 = *((_QWORD *)ISMTracing::Instance() + 1);
  if ( *(_DWORD *)v4 > 4u && (*(_BYTE *)(v4 + 16) & 1) != 0 && (*(_QWORD *)(v4 + 24) & 1LL) == *(_QWORD *)(v4 + 24) )
  {
    v5 = *(_DWORD *)a1;
    v11 = &v5;
    v6 = *((_DWORD *)a1 + 1);
    v13 = &v6;
    v15 = (char *)a1 + 8;
    v19 = (char *)a1 + 528;
    v7 = *((_DWORD *)a1 + 130);
    v21 = &v7;
    v8 = *((_DWORD *)a1 + 131);
    v23 = &v8;
    v9 = *((_DWORD *)a1 + 286);
    v25 = &v9;
    v12 = 4LL;
    v14 = 4LL;
    v16 = 4LL;
    v17 = a2;
    v18 = 1LL;
    v20 = 4LL;
    v22 = 4LL;
    v24 = 4LL;
    v26 = 4LL;
    TlgWrite((TraceLoggingHProvider)v4, &unk_18010D9F2, 0LL, 0LL, 0xAu, &pData);
  }
}
