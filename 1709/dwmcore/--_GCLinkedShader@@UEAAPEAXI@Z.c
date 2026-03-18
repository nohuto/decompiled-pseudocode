/*
 * XREFs of ??_GCLinkedShader@@UEAAPEAXI@Z @ 0x18017F420
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@UEAA@XZ @ 0x18017F3C0 (--1-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@UEAA@XZ.c)
 */

CLinkedShader *__fastcall CLinkedShader::`scalar deleting destructor'(CLinkedShader *this, char a2)
{
  CDeviceResourceTable<CD3DPixelShader,CLinkedShader,CD3DDeviceLevel1>::~CDeviceResourceTable<CD3DPixelShader,CLinkedShader,CD3DDeviceLevel1>((__int64)this + 32);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 2);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
