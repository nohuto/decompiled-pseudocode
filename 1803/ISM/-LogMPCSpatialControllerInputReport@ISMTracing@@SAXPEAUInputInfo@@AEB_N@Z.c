/*
 * XREFs of ?LogMPCSpatialControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x18004B7BC
 * Callers:
 *     ?OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z @ 0x180049C00 (-OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::LogMPCSpatialControllerInputReport(struct InputInfo *a1, const bool *a2)
{
  int v2; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // [rsp+30h] [rbp-49h] BYREF
  int v8; // [rsp+34h] [rbp-45h] BYREF
  int v9; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  int *v11; // [rsp+60h] [rbp-19h]
  __int64 v12; // [rsp+68h] [rbp-11h]
  int *v13; // [rsp+70h] [rbp-9h]
  __int64 v14; // [rsp+78h] [rbp-1h]
  char *v15; // [rsp+80h] [rbp+7h]
  __int64 v16; // [rsp+88h] [rbp+Fh]
  const bool *v17; // [rsp+90h] [rbp+17h]
  __int64 v18; // [rsp+98h] [rbp+1Fh]
  char *v19; // [rsp+A0h] [rbp+27h]
  __int64 v20; // [rsp+A8h] [rbp+2Fh]
  int *v21; // [rsp+B0h] [rbp+37h]
  __int64 v22; // [rsp+B8h] [rbp+3Fh]

  v2 = *((_DWORD *)a1 + 131);
  if ( v2 == 3 || v2 == 6 )
  {
    v6 = *((_QWORD *)ISMTracing::Instance() + 1);
    if ( *(_DWORD *)v6 > 5u && (*(_BYTE *)(v6 + 16) & 1) != 0 && (*(_QWORD *)(v6 + 24) & 1LL) == *(_QWORD *)(v6 + 24) )
    {
      v9 = *(_DWORD *)a1;
      v11 = &v9;
      v8 = *((_DWORD *)a1 + 1);
      v13 = &v8;
      v15 = (char *)a1 + 8;
      v19 = (char *)a1 + 528;
      v7 = *((_DWORD *)a1 + 131);
      v21 = &v7;
      v12 = 4LL;
      v14 = 4LL;
      v16 = 4LL;
      v17 = a2;
      v18 = 1LL;
      v20 = 4LL;
      v22 = 4LL;
      TlgWrite((TraceLoggingHProvider)v6, &unk_18010DE07, 0LL, 0LL, 8u, &pData);
    }
  }
  else
  {
    v5 = *((_QWORD *)ISMTracing::Instance() + 1);
    if ( *(_DWORD *)v5 > 4u && (*(_BYTE *)(v5 + 16) & 1) != 0 && (*(_QWORD *)(v5 + 24) & 1LL) == *(_QWORD *)(v5 + 24) )
    {
      v7 = *(_DWORD *)a1;
      v11 = &v7;
      v8 = *((_DWORD *)a1 + 1);
      v13 = &v8;
      v15 = (char *)a1 + 8;
      v19 = (char *)a1 + 528;
      v9 = *((_DWORD *)a1 + 131);
      v21 = &v9;
      v12 = 4LL;
      v14 = 4LL;
      v16 = 4LL;
      v17 = a2;
      v18 = 1LL;
      v20 = 4LL;
      v22 = 4LL;
      TlgWrite((TraceLoggingHProvider)v5, &unk_18010DE99, 0LL, 0LL, 8u, &pData);
    }
  }
}
