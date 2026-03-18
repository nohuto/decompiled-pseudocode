/*
 * XREFs of ?GetAdapterLuid@CBitmapRealization@@QEBA?AU_LUID@@XZ @ 0x1800498B8
 * Callers:
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x180045BD8 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ?AddRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAVCBitmapRealization@@@Z @ 0x180082694 (-AddRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAVCBitmapRealization@@@Z.c)
 *     ?GetCurrentDXGIResource@CDirectFlipInfo@@IEAAJU_LUID@@PEAPEAUIDXGIResource@@@Z @ 0x180172780 (-GetCurrentDXGIResource@CDirectFlipInfo@@IEAAJU_LUID@@PEAPEAUIDXGIResource@@@Z.c)
 *     ?IsDirectFlipSupportedOnTarget@CBindInfo@CCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z @ 0x1801AC6B8 (-IsDirectFlipSupportedOnTarget@CBindInfo@CCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CBitmapRealization::GetAdapterLuid(CBitmapRealization *this, struct _LUID *a2)
{
  struct _LUID v2; // rax

  if ( (unsigned int)(*((_DWORD *)this + 68) - 2) > 2 )
    v2 = g_luidZero;
  else
    v2 = (struct _LUID)*((_QWORD *)this + 36);
  *a2 = v2;
  return (struct _LUID)a2;
}
