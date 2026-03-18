/*
 * XREFs of ?IsValid@CHwBitmapCache@@WHI@EBA_NXZ @ 0x1800DE460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CHwBitmapCache::IsValid(__int64 a1)
{
  return CD3DResource::IsValid((CD3DResource *)(a1 - 120));
}
