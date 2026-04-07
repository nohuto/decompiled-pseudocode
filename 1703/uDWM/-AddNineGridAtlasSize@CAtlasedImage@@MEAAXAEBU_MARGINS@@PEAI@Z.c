/*
 * XREFs of ?AddNineGridAtlasSize@CAtlasedImage@@MEAAXAEBU_MARGINS@@PEAI@Z @ 0x18006FDF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAtlasedImage::AddNineGridAtlasSize(CAtlasedImage *this, const struct _MARGINS *a2, unsigned int *a3)
{
  *a3 += ((a2->cxLeftWidth > 0) + 1 + (a2->cxRightWidth > 0)) * ((a2->cyTopHeight > 0) + 1 + (a2->cyBottomHeight > 0));
}
