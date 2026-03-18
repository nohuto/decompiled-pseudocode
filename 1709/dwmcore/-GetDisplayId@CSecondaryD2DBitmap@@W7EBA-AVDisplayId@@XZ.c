/*
 * XREFs of ?GetDisplayId@CSecondaryD2DBitmap@@W7EBA?AVDisplayId@@XZ @ 0x1800C6390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CSecondaryD2DBitmap::GetDisplayId(__int64 a1, _DWORD *a2)
{
  return CHwTexturedColorSource::DisplayRestriction(a1 - 8, a2);
}
