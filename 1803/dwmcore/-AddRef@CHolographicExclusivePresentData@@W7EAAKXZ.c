/*
 * XREFs of ?AddRef@CHolographicExclusivePresentData@@W7EAAKXZ @ 0x1800DD440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicExclusivePresentData::AddRef(__int64 a1)
{
  return Dwm3DRECompositorThunk::AddRef((Dwm3DRECompositorThunk *)(a1 - 8));
}
