/*
 * XREFs of ?FromToken@CFlipToken@@SAPEBV1@PEBVCToken@@@Z @ 0x1C00802D4
 * Callers:
 *     ?GetSurfaceUpdates@CCompositionFrame@DirectComposition@@QEAAHPEAUCSM_SURFACE_UPDATE@@IPEAI@Z @ 0x1C0035298 (-GetSurfaceUpdates@CCompositionFrame@DirectComposition@@QEAAHPEAUCSM_SURFACE_UPDATE@@IPEAI@Z.c)
 *     ?NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z @ 0x1C0039700 (-NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z.c)
 *     ?ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE@@IPEA_NPEAIPEAPEAVCToken@@@Z @ 0x1C0153CA8 (-ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE@@IPEA_NPEAIPEAPEAVC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

const struct CFlipToken *__fastcall CFlipToken::FromToken(const struct CToken *a1)
{
  __int64 v2; // rdi

  v2 = 0LL;
  if ( (*(unsigned int (__fastcall **)(const struct CToken *))(*(_QWORD *)a1 + 64LL))(a1) == 1 )
    return a1;
  return (const struct CFlipToken *)v2;
}
