/*
 * XREFs of ?IsOfType@CSolidColorLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007D670
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE@gsl@@PEA_N@Z @ 0x18001E008 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ?DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x18005DCD0 (-DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CSolidColorLegacyMilBrush::IsOfType(__int64 a1, int a2)
{
  return a2 == 122 || a2 == 80;
}
