/*
 * XREFs of ??$As@UID3D11DeviceContext3@@@?$ComPtr@UID3D11DeviceContext1@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UID3D11DeviceContext3@@@WRL@Microsoft@@@Details@12@@Z @ 0x180195EC8
 * Callers:
 *     ?HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@_NPEAUID3D11RenderTargetView@@2PEAUtagRECT@@@Z @ 0x180196DA8 (-HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIW4DXGI_ALPHA_MODE@@W4DXGI_COL.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ID3D11DeviceContext1>::As<ID3D11DeviceContext3>(_QWORD *a1, __int64 *a2)
{
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_b4e3c01d_e79e_4637_91b2_510e9f4c9b8f,
           a2);
}
