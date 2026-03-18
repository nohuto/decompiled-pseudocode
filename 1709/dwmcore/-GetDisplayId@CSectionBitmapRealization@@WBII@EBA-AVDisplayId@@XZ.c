/*
 * XREFs of ?GetDisplayId@CSectionBitmapRealization@@WBII@EBA?AVDisplayId@@XZ @ 0x1800C7010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CSectionBitmapRealization::GetDisplayId(__int64 a1, _DWORD *a2)
{
  return CHwTexturedColorSource::DisplayRestriction(a1 - 392, a2);
}
