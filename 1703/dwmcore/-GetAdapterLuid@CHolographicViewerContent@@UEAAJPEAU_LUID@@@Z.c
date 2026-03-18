/*
 * XREFs of ?GetAdapterLuid@CHolographicViewerContent@@UEAAJPEAU_LUID@@@Z @ 0x1801A5590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicViewerContent::GetAdapterLuid(CHolographicViewerContent *this, struct _LUID *a2)
{
  return CHolographicViewerContent::GetPrimaryAdapter(this, a2, 0LL);
}
