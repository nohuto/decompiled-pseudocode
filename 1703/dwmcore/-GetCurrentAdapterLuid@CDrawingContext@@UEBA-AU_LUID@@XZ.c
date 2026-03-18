/*
 * XREFs of ?GetCurrentAdapterLuid@CDrawingContext@@UEBA?AU_LUID@@XZ @ 0x1800A1E00
 * Callers:
 *     ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x1800ADDF0 (-PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     ?GetCurrentRenderTargetInfo@ID2DContextOwner@@QEAAXPEAURenderTargetInfo@@@Z @ 0x1800C21D0 (-GetCurrentRenderTargetInfo@ID2DContextOwner@@QEAAXPEAURenderTargetInfo@@@Z.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CDrawingContext::GetCurrentAdapterLuid(CDrawingContext *this, _QWORD *a2)
{
  *a2 = *((_QWORD *)this + 49);
  return (struct _LUID)a2;
}
