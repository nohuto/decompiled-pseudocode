/*
 * XREFs of ??_ECD3DConstantBuffer@@MEAAPEAXI@Z @ 0x18007EE30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

CD3DConstantBuffer *__fastcall CD3DConstantBuffer::`vector deleting destructor'(CD3DConstantBuffer *this, char a2)
{
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 15);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 9);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
