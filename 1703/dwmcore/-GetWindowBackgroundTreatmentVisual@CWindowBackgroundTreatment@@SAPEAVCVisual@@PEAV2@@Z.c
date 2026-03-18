/*
 * XREFs of ?GetWindowBackgroundTreatmentVisual@CWindowBackgroundTreatment@@SAPEAVCVisual@@PEAV2@@Z @ 0x180178730
 * Callers:
 *     ?IsDrawListCacheDirty@CSpriteVisualContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18008CF00 (-IsDrawListCacheDirty@CSpriteVisualContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD.c)
 * Callees:
 *     <none>
 */

struct CVisual *__fastcall CWindowBackgroundTreatment::GetWindowBackgroundTreatmentVisual(struct CVisual *a1)
{
  struct CVisual *result; // rax

  for ( result = a1; result; result = (struct CVisual *)*((_QWORD *)result + 10) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)result + 26) + 4LL) & 0x8000) != 0 )
      break;
  }
  return result;
}
