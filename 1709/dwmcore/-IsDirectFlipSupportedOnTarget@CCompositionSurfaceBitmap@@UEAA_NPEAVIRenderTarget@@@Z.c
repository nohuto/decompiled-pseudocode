/*
 * XREFs of ?IsDirectFlipSupportedOnTarget@CCompositionSurfaceBitmap@@UEAA_NPEAVIRenderTarget@@@Z @ 0x18015DFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDirectFlipSupportedOnTarget@CBindInfo@CCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z @ 0x18017C314 (-IsDirectFlipSupportedOnTarget@CBindInfo@CCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z.c)
 */

bool __fastcall CCompositionSurfaceBitmap::IsDirectFlipSupportedOnTarget(
        CCompositionSurfaceBitmap *this,
        struct IRenderTarget *a2)
{
  __int64 v2; // rcx
  bool result; // al

  v2 = *((_QWORD *)this + 4);
  result = 0;
  if ( v2 )
    return CCompositionSurfaceInfo::CBindInfo::IsDirectFlipSupportedOnTarget(
             (CCompositionSurfaceInfo::CBindInfo *)(v2 + 48),
             a2);
  return result;
}
