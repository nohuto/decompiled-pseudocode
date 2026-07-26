/*
 * XREFs of ?NdisTraceLoggingDeviceStarted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@J@Z @ 0x1C0011E74
 * Callers:
 *     ndisPnPIrpStartDevice @ 0x1C00C12A4 (ndisPnPIrpStartDevice.c)
 * Callees:
 *     _TlgWrite @ 0x1C0011DA8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0012B70 (_TlgKeywordOn.c)
 *     ?NdisTraceLoggingDiscoverOperationalStatus@@YA?AW4_NDIS_TRACEFORMAT_OPERATIONAL_STATUS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0024044 (-NdisTraceLoggingDiscoverOperationalStatus@@YA-AW4_NDIS_TRACEFORMAT_OPERATIONAL_STATUS@@PEAU_NDI.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingDeviceStarted(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  int v4; // eax
  const GUID *v5; // r9
  LPCGUID v6; // r8
  const GUID *v7; // r8
  const GUID *v8; // r9
  int v9; // r10d
  int v10; // r11d
  int v11; // [rsp+30h] [rbp-29h] BYREF
  int v12; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v14; // [rsp+60h] [rbp+7h]
  int v15; // [rsp+68h] [rbp+Fh]
  int v16; // [rsp+6Ch] [rbp+13h]
  const GUID *v17; // [rsp+70h] [rbp+17h]
  int v18; // [rsp+78h] [rbp+1Fh]
  int v19; // [rsp+7Ch] [rbp+23h]
  const GUID *v20; // [rsp+80h] [rbp+27h]
  int v21; // [rsp+88h] [rbp+2Fh]
  int v22; // [rsp+8Ch] [rbp+33h]
  const GUID *v23; // [rsp+90h] [rbp+37h]
  int v24; // [rsp+98h] [rbp+3Fh]
  int v25; // [rsp+9Ch] [rbp+43h]

  if ( a3 < 0 )
  {
    if ( hProvider.LevelPlus1 > 5 && TlgKeywordOn(&hProvider, 0x200000000000uLL) )
    {
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v14 = &v11;
      v17 = (const GUID *)&v12;
      v20 = v8 + 252;
      v11 = v9;
      v15 = 4;
      v12 = v10;
      v18 = 4;
      v21 = 16;
      TlgWrite(&hProvider, &unk_1C0085271, v7, v8, 5u, &pData);
    }
  }
  else if ( hProvider.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&hProvider, 0x200000000000uLL) )
    {
      v4 = NdisTraceLoggingDiscoverOperationalStatus(v3);
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v11 = v4;
      v14 = &v11;
      v17 = v5 + 2;
      v20 = (const GUID *)((char *)v5 + 33);
      v23 = v5 + 252;
      v15 = 4;
      v18 = 1;
      v21 = 1;
      v24 = 16;
      TlgWrite(&hProvider, &unk_1C008571E, v6, v5, 6u, &pData);
    }
  }
}
