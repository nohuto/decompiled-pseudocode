/*
 * XREFs of ??_ECCachedWindowBackgroundTreatment@@UEAAPEAXI@Z @ 0x1800B1960
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CCachedWindowBackgroundTreatment *__fastcall CCachedWindowBackgroundTreatment::`vector deleting destructor'(
        CCachedWindowBackgroundTreatment *this,
        char a2)
{
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 2);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
