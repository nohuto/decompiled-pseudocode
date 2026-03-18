/*
 * XREFs of ?ReleaseD3DResources@CD3DConstantBuffer@@MEAAXXZ @ 0x18001A4C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CD3DConstantBuffer::ReleaseD3DResources(CD3DConstantBuffer *this)
{
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((char *)this + 120);
}
