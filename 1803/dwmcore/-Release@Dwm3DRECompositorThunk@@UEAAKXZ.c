/*
 * XREFs of ?Release@Dwm3DRECompositorThunk@@UEAAKXZ @ 0x1800643E0
 * Callers:
 *     ?Release@CHolographicExclusivePresentData@@W7EAAKXZ @ 0x1800DD7C0 (-Release@CHolographicExclusivePresentData@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall Dwm3DRECompositorThunk::Release(Dwm3DRECompositorThunk *this)
{
  return CMILCOMBase::InternalRelease((Dwm3DRECompositorThunk *)((char *)this + 8));
}
