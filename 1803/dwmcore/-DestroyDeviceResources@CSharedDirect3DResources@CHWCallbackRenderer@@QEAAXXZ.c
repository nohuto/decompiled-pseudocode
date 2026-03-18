/*
 * XREFs of ?DestroyDeviceResources@CSharedDirect3DResources@CHWCallbackRenderer@@QEAAXXZ @ 0x1800D9480
 * Callers:
 *     ?DestroyDeviceResources@CCallbackRendererManager@@IEAAXXZ @ 0x1800D9358 (-DestroyDeviceResources@CCallbackRendererManager@@IEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
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
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 34);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 38);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 74);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 106);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 142);
}
