/*
 * XREFs of ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180148D20
 * Callers:
 *     ?ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET@@@Z @ 0x180129104 (-ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGE.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x1801293EC (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x180147ED0 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?ProcessCreate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_CREATE@@@Z @ 0x18014885C (-ProcessCreate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18007C0CC (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z @ 0x18007DA30 (-IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall COffScreenRenderTarget::UpdatePixelFormatInfo(COffScreenRenderTarget *this, int a2)
{
  unsigned int v2; // ebx
  int v3; // edx
  int v4; // ecx
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // r8
  int v8; // edx

  v2 = 0;
  if ( IsValidPixelFormat(a2) )
  {
    *(_DWORD *)(v5 + 312) = v3;
    v6 = HasAlphaChannel(v4);
    *(_DWORD *)(v7 + 316) = v6 != 0 ? 1 : 3;
    *(_DWORD *)(v7 + 320) = v8 == 10;
  }
  else
  {
    v2 = -2003292288;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292288, 0xD2u);
  }
  return v2;
}
