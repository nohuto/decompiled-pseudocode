/*
 * XREFs of ?GetCurrentDisplayId@CDrawingContext@@UEBA?AVDisplayId@@XZ @ 0x1800A1DF0
 * Callers:
 *     ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x1800ADDF0 (-PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     ?GetCurrentRenderTargetInfo@ID2DContextOwner@@QEAAXPEAURenderTargetInfo@@@Z @ 0x1800C21D0 (-GetCurrentRenderTargetInfo@ID2DContextOwner@@QEAAXPEAURenderTargetInfo@@@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CDrawingContext::GetCurrentDisplayId(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 400);
  return a2;
}
