/*
 * XREFs of ??1?$ComPtr@UID3D11SamplerState@@@WRL@Microsoft@@QEAA@XZ @ 0x1800DA360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::ComPtr<ID3D11SamplerState>::~ComPtr<ID3D11SamplerState>(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
