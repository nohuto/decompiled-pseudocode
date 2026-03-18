/*
 * XREFs of ?DestroyDeviceResources@CSharedDirect3DResources@CHWCallbackRenderer@@QEAAXXZ @ 0x1800B82F0
 * Callers:
 *     ?DestroyDeviceResources@CCallbackRendererManager@@IEAAXXZ @ 0x1800462D0 (-DestroyDeviceResources@CCallbackRendererManager@@IEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CHWCallbackRenderer::CSharedDirect3DResources::DestroyDeviceResources(
        CHWCallbackRenderer::CSharedDirect3DResources *this)
{
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 3);
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 14) = 0;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 9);
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 26) = 0;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 14);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 32);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 36);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 72);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 100);
}
