/*
 * XREFs of ?IsOpaque@CRenderTargetImageSource@@UEBA_NXZ @ 0x180016710
 * Callers:
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x1800193BC (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectS.c)
 * Callees:
 *     ?GetAlphaMode@CRenderTargetBitmap@@UEBA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180016480 (-GetAlphaMode@CRenderTargetBitmap@@UEBA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CRenderTargetImageSource::IsOpaque(CRenderTargetImageSource *this)
{
  CRenderTargetBitmap *v1; // rcx
  __int64 (*v2)(void); // rax
  int AlphaMode; // eax

  v1 = (CRenderTargetImageSource *)((char *)this + 112);
  v2 = *(__int64 (**)(void))(*(_QWORD *)v1 + 48LL);
  if ( (char *)v2 == (char *)CRenderTargetBitmap::GetAlphaMode )
    AlphaMode = CRenderTargetBitmap::GetAlphaMode(v1);
  else
    AlphaMode = v2();
  return AlphaMode == 3;
}
