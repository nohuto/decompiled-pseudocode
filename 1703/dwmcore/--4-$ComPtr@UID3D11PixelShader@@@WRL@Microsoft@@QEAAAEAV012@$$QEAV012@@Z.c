/*
 * XREFs of ??4?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180195F4C
 * Callers:
 *     ?HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@_NPEAUID3D11RenderTargetView@@2PEAUtagRECT@@@Z @ 0x180196DA8 (-HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIW4DXGI_ALPHA_MODE@@W4DXGI_COL.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<ID3D11PixelShader>::operator=(__int64 *a1, char *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( &v6 != a2 )
  {
    v3 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v4 = *a1;
  *a1 = v3;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return a1;
}
