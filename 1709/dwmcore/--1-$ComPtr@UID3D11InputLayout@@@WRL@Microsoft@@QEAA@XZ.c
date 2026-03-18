/*
 * XREFs of ??1?$ComPtr@UID3D11InputLayout@@@WRL@Microsoft@@QEAA@XZ @ 0x1800BE760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall Microsoft::WRL::ComPtr<ID3D11InputLayout>::~ComPtr<ID3D11InputLayout>(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1);
}
