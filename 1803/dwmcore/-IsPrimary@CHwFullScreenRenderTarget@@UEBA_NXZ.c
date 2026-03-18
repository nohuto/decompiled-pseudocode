/*
 * XREFs of ?IsPrimary@CHwFullScreenRenderTarget@@UEBA_NXZ @ 0x18007BA90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CHwFullScreenRenderTarget::IsPrimary(CDisplay **this)
{
  return CDisplay::IsPrimary(this[3]);
}
