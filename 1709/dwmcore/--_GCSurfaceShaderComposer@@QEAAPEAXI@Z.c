/*
 * XREFs of ??_GCSurfaceShaderComposer@@QEAAPEAXI@Z @ 0x18007509C
 * Callers:
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x18002174C (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180046BF8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

CSurfaceShaderComposer *__fastcall CSurfaceShaderComposer::`scalar deleting destructor'(CSurfaceShaderComposer *this)
{
  CMILPoolResource *v2; // rcx

  v2 = (CMILPoolResource *)*((_QWORD *)this + 7);
  if ( v2 )
  {
    *((_QWORD *)this + 7) = 0LL;
    CMILPoolResource::Release(v2);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((char *)this + 48);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((char *)this + 32);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((char *)this + 24);
  `vector destructor iterator'(
    (char *)this,
    8LL,
    3LL,
    (void (__fastcall *)(CDrawListBitmap *))Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>);
  WPF::ProcessHeapImpl::Free(this);
  return this;
}
