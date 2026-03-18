/*
 * XREFs of ?Release@CHwBitmapCache@@WHI@EAAKXZ @ 0x1800DE470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwBitmapCache::Release(__int64 a1)
{
  return CD3DLockableTexture::Release((CD3DLockableTexture *)(a1 - 120));
}
