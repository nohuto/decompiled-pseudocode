/*
 * XREFs of ?AddInvalidRegion@CSecondaryBitmap@@UEAAJAEBVCRegion@@@Z @ 0x18001BB00
 * Callers:
 *     ?AddInvalidRegion@CD2DBitmapCache@@UEAAJAEBVCRegion@@@Z @ 0x1800779A0 (-AddInvalidRegion@CD2DBitmapCache@@UEAAJAEBVCRegion@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSecondaryBitmap::AddInvalidRegion(CSecondaryBitmap *this, const struct CRegion *a2)
{
  return FastRegion::CRegion::Union((CSecondaryBitmap *)((char *)this + 8), a2);
}
