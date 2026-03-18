/*
 * XREFs of ?UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z @ 0x1801E58C8
 * Callers:
 *     ?HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@AEBUPixelFormatInfo@@1PEAUID3D11RenderTargetView@@IIW4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x1801E04C0 (-HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIAEBV-$TMilRect_@HUtagRECT@@UM.c)
 *     ?HDRConvertWithFakeOverlay@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@12PEAUID3D11RenderTargetView@@IIW4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x1801E087C (-HDRConvertWithFakeOverlay@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV?$span@$$CBE$0?0@gsl@@I@Z @ 0x1801E57F8 (-SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV-$span@$$CBE$0-0@gsl@@I@Z.c)
 */

__int64 __fastcall CSurfaceShaderComposer::UpdateSDRBoostConstantBuffer(CSurfaceShaderComposer *this, float a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  const void *v5[2]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v6[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v7; // [rsp+48h] [rbp-20h]

  v5[0] = (const void *)16;
  v6[1] = 0;
  v7 = 0LL;
  *(float *)v6 = a2;
  v5[1] = v6;
  v2 = CSurfaceShaderComposer::SetScratchConstantBuffer((__int64)this, v5, D3D11_USAGE_DYNAMIC);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x170u);
  return v3;
}
