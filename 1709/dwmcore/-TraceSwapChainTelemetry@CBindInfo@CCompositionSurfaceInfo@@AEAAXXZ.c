/*
 * XREFs of ?TraceSwapChainTelemetry@CBindInfo@CCompositionSurfaceInfo@@AEAAXXZ @ 0x180075F7C
 * Callers:
 *     ??1CCompositionSurfaceInfo@@MEAA@XZ @ 0x18004BD28 (--1CCompositionSurfaceInfo@@MEAA@XZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1800053BC (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     ?UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z @ 0x180075ED8 (-UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

void __fastcall CCompositionSurfaceInfo::CBindInfo::TraceSwapChainTelemetry(LPCWSTR *this)
{
  LPCGUID v2; // r8
  LPCGUID v3; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-9h] BYREF
  char *v6; // [rsp+60h] [rbp+7h]
  int v7; // [rsp+68h] [rbp+Fh]
  int v8; // [rsp+6Ch] [rbp+13h]
  char *v9; // [rsp+70h] [rbp+17h]
  int v10; // [rsp+78h] [rbp+1Fh]
  int v11; // [rsp+7Ch] [rbp+23h]
  char *v12; // [rsp+80h] [rbp+27h]
  int v13; // [rsp+88h] [rbp+2Fh]
  int v14; // [rsp+8Ch] [rbp+33h]
  char *v15; // [rsp+90h] [rbp+37h]
  int v16; // [rsp+98h] [rbp+3Fh]
  int v17; // [rsp+9Ch] [rbp+43h]

  if ( this[36] )
  {
    CCompositionSurfaceInfo::CBindInfo::UpdateSwapChainStat(this, 0, 0);
    if ( hProvider > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
      {
        TlgCreateWsz(&pDesc, this[36]);
        v8 = 0;
        v11 = 0;
        v14 = 0;
        v17 = 0;
        v9 = (char *)(this + 31);
        v12 = (char *)(this + 33);
        v15 = (char *)(this + 35);
        v6 = (char *)(this + 29);
        v7 = 8;
        v10 = 8;
        v13 = 8;
        v16 = 8;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180214520, v2, v3, 7u, &pData);
      }
    }
  }
}
