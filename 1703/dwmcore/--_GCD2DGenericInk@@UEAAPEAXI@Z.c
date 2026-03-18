/*
 * XREFs of ??_GCD2DGenericInk@@UEAAPEAXI@Z @ 0x18019E9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CD2DResource@@MEAA@XZ @ 0x18004BD5C (--1CD2DResource@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CD2DGenericInk *__fastcall CD2DGenericInk::`scalar deleting destructor'(CD2DGenericInk *this, char a2)
{
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)this + 13);
  CD2DResource::~CD2DResource(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
