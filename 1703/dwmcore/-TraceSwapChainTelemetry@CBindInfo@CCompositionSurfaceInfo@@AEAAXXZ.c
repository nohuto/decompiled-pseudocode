/*
 * XREFs of ?TraceSwapChainTelemetry@CBindInfo@CCompositionSurfaceInfo@@AEAAXXZ @ 0x180075D2C
 * Callers:
 *     ??1CCompositionSurfaceInfo@@MEAA@XZ @ 0x180076F7C (--1CCompositionSurfaceInfo@@MEAA@XZ.c)
 * Callees:
 *     ?UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z @ 0x1800211D4 (-UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z.c)
 *     _TlgCreateWsz @ 0x1800B1408 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

void __fastcall CCompositionSurfaceInfo::CBindInfo::TraceSwapChainTelemetry(LPCWSTR *this)
{
  LPCGUID v2; // r8
  LPCGUID v3; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-19h] BYREF
  char *v6; // [rsp+60h] [rbp-9h]
  int v7; // [rsp+68h] [rbp-1h]
  int v8; // [rsp+6Ch] [rbp+3h]
  char *v9; // [rsp+70h] [rbp+7h]
  int v10; // [rsp+78h] [rbp+Fh]
  int v11; // [rsp+7Ch] [rbp+13h]
  char *v12; // [rsp+80h] [rbp+17h]
  int v13; // [rsp+88h] [rbp+1Fh]
  int v14; // [rsp+8Ch] [rbp+23h]
  char *v15; // [rsp+90h] [rbp+27h]
  int v16; // [rsp+98h] [rbp+2Fh]
  int v17; // [rsp+9Ch] [rbp+33h]

  if ( this[36] )
  {
    CCompositionSurfaceInfo::CBindInfo::UpdateSwapChainStat(this, 0, 0);
    if ( dword_18023D720 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18023D720, 0x400000000000uLL) )
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
        TlgWrite((TraceLoggingHProvider)&dword_18023D720, &unk_1801F7BAE, v2, v3, 7u, &pData);
      }
    }
  }
}
