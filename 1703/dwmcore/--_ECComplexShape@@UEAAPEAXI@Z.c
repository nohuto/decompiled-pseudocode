/*
 * XREFs of ??_ECComplexShape@@UEAAPEAXI@Z @ 0x1801B0320
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CComplexShape *__fastcall CComplexShape::`vector deleting destructor'(CComplexShape *this, char a2)
{
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)this + 1);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
