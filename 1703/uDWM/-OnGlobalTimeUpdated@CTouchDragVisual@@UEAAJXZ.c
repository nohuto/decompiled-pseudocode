/*
 * XREFs of ?OnGlobalTimeUpdated@CTouchDragVisual@@UEAAJXZ @ 0x18008C9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CTouchDragVisual::OnGlobalTimeUpdated(CTouchDragVisual *this)
{
  if ( *((_DWORD *)this + 86) > 1u )
    CVisual::SetDirtyFlags(this, 4096);
  return 0LL;
}
