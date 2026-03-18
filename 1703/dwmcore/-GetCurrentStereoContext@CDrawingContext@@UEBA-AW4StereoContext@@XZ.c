/*
 * XREFs of ?GetCurrentStereoContext@CDrawingContext@@UEBA?AW4StereoContext@@XZ @ 0x1800A1E40
 * Callers:
 *     ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x1800ADDF0 (-PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     ?GetCurrentRenderTargetInfo@ID2DContextOwner@@QEAAXPEAURenderTargetInfo@@@Z @ 0x1800C21D0 (-GetCurrentRenderTargetInfo@ID2DContextOwner@@QEAAXPEAURenderTargetInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawingContext::GetCurrentStereoContext(__int64 a1)
{
  return *(unsigned int *)(a1 + 6704);
}
