/*
 * XREFs of TraceLoggingPTPWarpBack @ 0x1C01A3C00
 * Callers:
 *     ?DoTPButtonWarpBack@@YAXPEAUtagTPSTATE@@K@Z @ 0x1C01AE0C4 (-DoTPButtonWarpBack@@YAXPEAUtagTPSTATE@@K@Z.c)
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01B1800 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00414C0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingPTPWarpBack(int a1)
{
  const GUID *v2; // r8
  const GUID *v3; // r9
  __int64 v4; // r10
  __int64 v5; // r11
  int v6; // [rsp+30h] [rbp-29h] BYREF
  int v7; // [rsp+34h] [rbp-25h] BYREF
  int v8; // [rsp+38h] [rbp-21h] BYREF
  int v9; // [rsp+3Ch] [rbp-1Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v11; // [rsp+60h] [rbp+7h]
  __int64 v12; // [rsp+68h] [rbp+Fh]
  int *v13; // [rsp+70h] [rbp+17h]
  __int64 v14; // [rsp+78h] [rbp+1Fh]
  int *v15; // [rsp+80h] [rbp+27h]
  __int64 v16; // [rsp+88h] [rbp+2Fh]
  int *v17; // [rsp+90h] [rbp+37h]
  __int64 v18; // [rsp+98h] [rbp+3Fh]

  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
    {
      v12 = 4LL;
      v6 = v4 - v5;
      v11 = &v6;
      v13 = &v7;
      v15 = &v8;
      v7 = HIDWORD(v4) - HIDWORD(v5);
      v17 = &v9;
      v14 = 4LL;
      v8 = (int)v3;
      v16 = 4LL;
      v9 = a1;
      v18 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E7DDC, v2, v3, 6u, &pData);
    }
  }
}
