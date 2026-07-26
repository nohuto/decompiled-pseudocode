/*
 * XREFs of ?NdisTraceLoggingDeviceInitialized@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEBVNdisStopwatch@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@H@Z @ 0x1C0014BF0
 * Callers:
 *     ndisMInvokeInitialize @ 0x1C00AABA0 (ndisMInvokeInitialize.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0015A3C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0015A70 (_TlgWrite.c)
 *     ?GetElapsedTimeInMilliseconds@NdisStopwatch@@QEBA_JXZ @ 0x1C0015B10 (-GetElapsedTimeInMilliseconds@NdisStopwatch@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingDeviceInitialized(
        const struct _TlgProvider_t *a1,
        NdisStopwatch *a2,
        __int64 a3,
        int a4)
{
  _DWORD *v5; // r10
  TraceLoggingHProvider v6; // rcx
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  __int64 v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  int v12; // r11d
  int ElapsedTimeInMilliseconds; // [rsp+30h] [rbp-69h] BYREF
  int v14; // [rsp+34h] [rbp-65h] BYREF
  int v15; // [rsp+38h] [rbp-61h] BYREF
  int v16; // [rsp+3Ch] [rbp-5Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-59h] BYREF
  int *p_ElapsedTimeInMilliseconds; // [rsp+60h] [rbp-39h]
  __int64 v19; // [rsp+68h] [rbp-31h]
  int *v20; // [rsp+70h] [rbp-29h]
  __int64 v21; // [rsp+78h] [rbp-21h]
  int *v22; // [rsp+80h] [rbp-19h]
  __int64 v23; // [rsp+88h] [rbp-11h]
  int *v24; // [rsp+90h] [rbp-9h]
  __int64 v25; // [rsp+98h] [rbp-1h]
  int *v26; // [rsp+A0h] [rbp+7h]
  __int64 v27; // [rsp+A8h] [rbp+Fh]
  char *v28; // [rsp+B0h] [rbp+17h]
  __int64 v29; // [rsp+B8h] [rbp+1Fh]
  __int64 v30; // [rsp+C0h] [rbp+27h]
  __int64 v31; // [rsp+C8h] [rbp+2Fh]

  if ( a4 )
  {
    if ( (unsigned int)dword_1C0091010 > 5 && TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v15 = (int)v11;
      p_ElapsedTimeInMilliseconds = &v15;
      v20 = &v14;
      v22 = (int *)(v9 + 4032);
      ElapsedTimeInMilliseconds = *(_DWORD *)(v9 + 464);
      v24 = &ElapsedTimeInMilliseconds;
      v16 = *(_DWORD *)(v9 + 1832);
      v26 = &v16;
      v28 = (char *)(v9 + 32);
      v30 = v9 + 33;
      v19 = 4LL;
      v14 = v12;
      v21 = 4LL;
      v23 = 16LL;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 1LL;
      v31 = 1LL;
      TlgWrite((TraceLoggingHProvider)v9, &unk_1C0080917, v10, v11, 9u, &pData);
    }
  }
  else if ( (unsigned int)dword_1C0091010 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      ElapsedTimeInMilliseconds = NdisStopwatch::GetElapsedTimeInMilliseconds(a2);
      p_ElapsedTimeInMilliseconds = &ElapsedTimeInMilliseconds;
      v20 = v5 + 1008;
      v14 = v5[116];
      v22 = &v14;
      v15 = v5[458];
      v24 = &v15;
      v26 = v5 + 8;
      v28 = (char *)v5 + 33;
      v19 = 4LL;
      v21 = 16LL;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 1LL;
      v29 = 1LL;
      TlgWrite(v6, &unk_1C007F9E9, v7, v8, 8u, &pData);
    }
  }
}
