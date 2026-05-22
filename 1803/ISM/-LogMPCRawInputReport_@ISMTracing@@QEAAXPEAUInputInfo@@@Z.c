/*
 * XREFs of ?LogMPCRawInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@@Z @ 0x18005D8A4
 * Callers:
 *     ?QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z @ 0x18005E2EC (-QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::LogMPCRawInputReport_(ISMTracing *this, struct InputInfo *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // [rsp+30h] [rbp-49h] BYREF
  int v7; // [rsp+34h] [rbp-45h] BYREF
  int v8; // [rsp+38h] [rbp-41h] BYREF
  int v9; // [rsp+3Ch] [rbp-3Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  int *v11; // [rsp+60h] [rbp-19h]
  __int64 v12; // [rsp+68h] [rbp-11h]
  int *v13; // [rsp+70h] [rbp-9h]
  __int64 v14; // [rsp+78h] [rbp-1h]
  char *v15; // [rsp+80h] [rbp+7h]
  __int64 v16; // [rsp+88h] [rbp+Fh]
  char *v17; // [rsp+90h] [rbp+17h]
  __int64 v18; // [rsp+98h] [rbp+1Fh]
  int *v19; // [rsp+A0h] [rbp+27h]
  __int64 v20; // [rsp+A8h] [rbp+2Fh]
  int *v21; // [rsp+B0h] [rbp+37h]
  __int64 v22; // [rsp+B8h] [rbp+3Fh]

  v3 = *((_QWORD *)ISMTracing::Instance() + 1);
  if ( *(_DWORD *)v3 > 5u && (*(_BYTE *)(v3 + 16) & 1) != 0 && (*(_QWORD *)(v3 + 24) & 1LL) == *(_QWORD *)(v3 + 24) )
  {
    if ( ((*((_DWORD *)a2 + 130) - 6) & 0xFFFFFFFD) != 0 )
    {
      v4 = *((_QWORD *)ISMTracing::Instance() + 1);
      if ( *(_DWORD *)v4 > 4u && (*(_BYTE *)(v4 + 16) & 1) != 0 && (*(_QWORD *)(v4 + 24) & 1LL) == *(_QWORD *)(v4 + 24) )
      {
        v6 = *(_DWORD *)a2;
        v11 = &v6;
        v7 = *((_DWORD *)a2 + 1);
        v13 = &v7;
        v15 = (char *)a2 + 8;
        v17 = (char *)a2 + 528;
        v8 = *((_DWORD *)a2 + 130);
        v19 = &v8;
        v9 = *((_DWORD *)a2 + 131);
        v21 = &v9;
        v12 = 4LL;
        v14 = 4LL;
        v16 = 4LL;
        v18 = 4LL;
        v20 = 4LL;
        v22 = 4LL;
        TlgWrite((TraceLoggingHProvider)v4, &unk_18010E8BC, 0LL, 0LL, 8u, &pData);
      }
    }
    else
    {
      v5 = *((_QWORD *)ISMTracing::Instance() + 1);
      if ( *(_DWORD *)v5 > 5u && (*(_BYTE *)(v5 + 16) & 1) != 0 && (*(_QWORD *)(v5 + 24) & 1LL) == *(_QWORD *)(v5 + 24) )
      {
        v9 = *(_DWORD *)a2;
        v11 = &v9;
        v8 = *((_DWORD *)a2 + 1);
        v13 = &v8;
        v15 = (char *)a2 + 8;
        v17 = (char *)a2 + 528;
        v7 = *((_DWORD *)a2 + 130);
        v19 = &v7;
        v6 = *((_DWORD *)a2 + 131);
        v21 = &v6;
        v12 = 4LL;
        v14 = 4LL;
        v16 = 4LL;
        v18 = 4LL;
        v20 = 4LL;
        v22 = 4LL;
        TlgWrite((TraceLoggingHProvider)v5, &unk_18010E93A, 0LL, 0LL, 8u, &pData);
      }
    }
  }
}
