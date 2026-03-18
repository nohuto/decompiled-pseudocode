/*
 * XREFs of ?ProcessUpdateTargetBounds@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_UPDATETARGETBOUNDS@@@Z @ 0x180137780
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReportSizeChangeMetaData@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180137A2C (-ReportSizeChangeMetaData@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::ProcessUpdateTargetBounds(
        CIndirectSwapchainRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_INDIRECTSWAPCHAINRENDERTARGET_UPDATETARGETBOUNDS *a3)
{
  unsigned int v3; // ebx
  signed int v6; // eax

  v3 = 0;
  if ( *((_DWORD *)this + 122) == *((_DWORD *)a3 + 4) && *((_DWORD *)this + 123) == *((_DWORD *)a3 + 5)
    || (v6 = CIndirectSwapchainRenderTarget::ReportSizeChangeMetaData(this), v3 = v6, v6 >= 0) )
  {
    *((_DWORD *)this + 35) = COERCE_UNSIGNED_INT((float)*((int *)a3 + 2)) ^ _xmm;
    *((_DWORD *)this + 36) = COERCE_UNSIGNED_INT((float)*((int *)a3 + 3)) ^ _xmm;
    *((_DWORD *)this + 122) = *((_DWORD *)a3 + 4);
    *((_DWORD *)this + 123) = *((_DWORD *)a3 + 5);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x82u);
  }
  return v3;
}
