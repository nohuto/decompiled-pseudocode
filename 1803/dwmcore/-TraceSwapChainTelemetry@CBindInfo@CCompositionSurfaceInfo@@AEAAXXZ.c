/*
 * XREFs of ?TraceSwapChainTelemetry@CBindInfo@CCompositionSurfaceInfo@@AEAAXXZ @ 0x1800824A4
 * Callers:
 *     ??1CCompositionSurfaceInfo@@MEAA@XZ @ 0x180081074 (--1CCompositionSurfaceInfo@@MEAA@XZ.c)
 * Callees:
 *     ?UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z @ 0x18001AA24 (-UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z.c)
 *     _TlgCreateWsz @ 0x1800D176C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

void __fastcall CCompositionSurfaceInfo::CBindInfo::TraceSwapChainTelemetry(LPCWSTR *this)
{
  __int64 v2; // rcx
  _DWORD v3[4]; // [rsp+30h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-39h] BYREF
  _DWORD *v6; // [rsp+70h] [rbp-29h]
  int v7; // [rsp+78h] [rbp-21h]
  int v8; // [rsp+7Ch] [rbp-1Dh]
  _DWORD *v9; // [rsp+80h] [rbp-19h]
  int v10; // [rsp+88h] [rbp-11h]
  int v11; // [rsp+8Ch] [rbp-Dh]
  char *v12; // [rsp+90h] [rbp-9h]
  int v13; // [rsp+98h] [rbp-1h]
  int v14; // [rsp+9Ch] [rbp+3h]
  char *v15; // [rsp+A0h] [rbp+7h]
  int v16; // [rsp+A8h] [rbp+Fh]
  int v17; // [rsp+ACh] [rbp+13h]
  char *v18; // [rsp+B0h] [rbp+17h]
  int v19; // [rsp+B8h] [rbp+1Fh]
  int v20; // [rsp+BCh] [rbp+23h]
  char *v21; // [rsp+C0h] [rbp+27h]
  int v22; // [rsp+C8h] [rbp+2Fh]
  int v23; // [rsp+CCh] [rbp+33h]
  char *v24; // [rsp+D0h] [rbp+37h]
  int v25; // [rsp+D8h] [rbp+3Fh]
  int v26; // [rsp+DCh] [rbp+43h]

  if ( this[36] )
  {
    CCompositionSurfaceInfo::CBindInfo::UpdateSwapChainStat(this, 0, 0);
    v3[0] = 0;
    v2 = *((_QWORD *)*this + 44);
    if ( v2 )
      v3[0] = *(_DWORD *)(v2 + 128);
    if ( dword_1802D3FA0 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FA0, 0x200000000000uLL) )
      {
        TlgCreateWsz(&pDesc, this[36]);
        v8 = 0;
        v11 = 0;
        v14 = 0;
        v17 = 0;
        v20 = 0;
        v23 = 0;
        v26 = 0;
        v9 = v3;
        v12 = (char *)(this + 37);
        v15 = (char *)(this + 29);
        v18 = (char *)(this + 31);
        v6 = v3;
        v21 = (char *)(this + 33);
        v24 = (char *)(this + 35);
        v7 = 4;
        v10 = 4;
        v13 = 1;
        v16 = 8;
        v19 = 8;
        v22 = 8;
        v25 = 8;
        TlgWrite((TraceLoggingHProvider)&dword_1802D3FA0, &unk_1802A948A, 0LL, 0LL, 0xAu, &pData);
      }
    }
  }
}
