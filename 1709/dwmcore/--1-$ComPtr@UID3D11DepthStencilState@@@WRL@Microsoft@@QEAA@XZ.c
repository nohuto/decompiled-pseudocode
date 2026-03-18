/*
 * XREFs of ??1?$ComPtr@UID3D11DepthStencilState@@@WRL@Microsoft@@QEAA@XZ @ 0x1800BE1B0
 * Callers:
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@I@Z @ 0x1801C20EC (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@I@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>(__int64 *a1)
{
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(a1);
}
