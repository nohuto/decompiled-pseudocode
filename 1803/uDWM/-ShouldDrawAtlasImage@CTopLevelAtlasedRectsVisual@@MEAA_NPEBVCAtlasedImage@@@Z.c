/*
 * XREFs of ?ShouldDrawAtlasImage@CTopLevelAtlasedRectsVisual@@MEAA_NPEBVCAtlasedImage@@@Z @ 0x18000F8C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelAtlasedRectsVisual::ShouldDrawAtlasImage(
        CTopLevelAtlasedRectsVisual *this,
        const struct CAtlasedImage *a2)
{
  return (unsigned int)(*((_DWORD *)a2 + 33) - 9) > 8;
}
