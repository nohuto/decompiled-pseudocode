/*
 * XREFs of ??_ECComplexShape@@UEAAPEAXI@Z @ 0x1801CB5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

CComplexShape *__fastcall CComplexShape::`vector deleting destructor'(CComplexShape *this, char a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 1);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
