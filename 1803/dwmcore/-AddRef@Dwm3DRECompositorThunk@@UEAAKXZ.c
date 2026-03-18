/*
 * XREFs of ?AddRef@Dwm3DRECompositorThunk@@UEAAKXZ @ 0x180028200
 * Callers:
 *     ?InternalAddRef@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEBAXXZ @ 0x180026454 (-InternalAddRef@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?AddRef@CHolographicExclusivePresentData@@W7EAAKXZ @ 0x1800DD440 (-AddRef@CHolographicExclusivePresentData@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Dwm3DRECompositorThunk::AddRef(Dwm3DRECompositorThunk *this)
{
  return CMILCOMBase::InternalAddRef((Dwm3DRECompositorThunk *)((char *)this + 8));
}
