/*
 * XREFs of ?OnGlobalTimeUpdated@CAnimatedGlassSheet@@MEAAJXZ @ 0x1800875B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CAnimatedGlassSheet::OnGlobalTimeUpdated(CAnimatedGlassSheet *this)
{
  CVisual::SetDirtyFlags(this, 0x4000);
  return 0LL;
}
