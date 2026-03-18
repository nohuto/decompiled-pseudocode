/*
 * XREFs of ?ReportSizeChangeMetaData@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180149170
 * Callers:
 *     ?ProcessUpdateTargetBounds@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_UPDATETARGETBOUNDS@@@Z @ 0x180129340 (-ProcessUpdateTargetBounds@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_I.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800B428C (-EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::ReportSizeChangeMetaData(CIndirectSwapchainRenderTarget *this)
{
  char v1; // al
  unsigned int v2; // ebx
  int v3; // eax

  v1 = *((_BYTE *)this + 456);
  v2 = 0;
  if ( (v1 & 1) == 0 )
  {
    *((_BYTE *)this + 456) = v1 | 1;
    v3 = CIndirectSwapchainRenderTarget::EnsureMetadataBuffer(this);
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x207u);
  }
  return v2;
}
