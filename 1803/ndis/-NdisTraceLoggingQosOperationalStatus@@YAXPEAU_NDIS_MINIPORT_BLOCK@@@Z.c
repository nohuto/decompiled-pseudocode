/*
 * XREFs of ?NdisTraceLoggingQosOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0079B34
 * Callers:
 *     ndisMIndicateQosParametersChange @ 0x1C0060398 (ndisMIndicateQosParametersChange.c)
 * Callees:
 *     _TlgWrite @ 0x1C0012C84 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C001EF44 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingQosOperationalStatus(struct _NDIS_MINIPORT_BLOCK *a1)
{
  const GUID *v1; // r8
  const GUID *v2; // r9
  _DWORD *v3; // rdx
  int v4; // [rsp+30h] [rbp-69h] BYREF
  int v5; // [rsp+34h] [rbp-65h] BYREF
  int v6; // [rsp+38h] [rbp-61h] BYREF
  int v7; // [rsp+3Ch] [rbp-5Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-59h] BYREF
  const GUID *v9; // [rsp+60h] [rbp-39h]
  __int64 v10; // [rsp+68h] [rbp-31h]
  int *v11; // [rsp+70h] [rbp-29h]
  __int64 v12; // [rsp+78h] [rbp-21h]
  int *v13; // [rsp+80h] [rbp-19h]
  __int64 v14; // [rsp+88h] [rbp-11h]
  int *v15; // [rsp+90h] [rbp-9h]
  __int64 v16; // [rsp+98h] [rbp-1h]
  int *v17; // [rsp+A0h] [rbp+7h]
  __int64 v18; // [rsp+A8h] [rbp+Fh]
  _DWORD *v19; // [rsp+B0h] [rbp+17h]
  __int64 v20; // [rsp+B8h] [rbp+1Fh]
  _DWORD *v21; // [rsp+C0h] [rbp+27h]
  __int64 v22; // [rsp+C8h] [rbp+2Fh]
  _DWORD *v23; // [rsp+D0h] [rbp+37h]
  __int64 v24; // [rsp+D8h] [rbp+3Fh]

  if ( hProvider.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&hProvider, 0x200000000000uLL) )
    {
      v3 = *(_DWORD **)v2[309].Data4;
      v9 = v2 + 252;
      v10 = 16LL;
      v4 = v3[1];
      v11 = &v4;
      v12 = 4LL;
      v5 = v3[2];
      v13 = &v5;
      v14 = 4LL;
      v6 = v3[9];
      v15 = &v6;
      v16 = 4LL;
      v7 = v3[10];
      v17 = &v7;
      v19 = v3 + 3;
      v21 = v3 + 5;
      v23 = v3 + 7;
      v18 = 4LL;
      v20 = 8LL;
      v22 = 8LL;
      v24 = 8LL;
      TlgWrite(&hProvider, &unk_1C008665C, v1, v2, 0xAu, &pData);
    }
  }
}
