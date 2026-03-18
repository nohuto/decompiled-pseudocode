/*
 * XREFs of ??_GCSurfaceShaderComposer@@QEAAPEAXI@Z @ 0x1800D9784
 * Callers:
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x1800D7F68 (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CD5B4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

CSurfaceShaderComposer *__fastcall CSurfaceShaderComposer::`scalar deleting destructor'(CSurfaceShaderComposer *this)
{
  CMILPoolResource *v2; // rcx

  v2 = (CMILPoolResource *)*((_QWORD *)this + 9);
  if ( v2 )
  {
    *((_QWORD *)this + 9) = 0LL;
    CMILPoolResource::Release(v2);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 8);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 5);
  `vector destructor iterator'(
    (char *)this,
    8LL,
    5LL,
    (void (__fastcall *)(KeyframeSequence::Keyframe *__hidden))Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>);
  operator delete(this, 0x60uLL);
  return this;
}
