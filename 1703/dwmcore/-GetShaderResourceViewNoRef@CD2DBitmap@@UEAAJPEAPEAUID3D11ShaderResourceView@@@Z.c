/*
 * XREFs of ?GetShaderResourceViewNoRef@CD2DBitmap@@UEAAJPEAPEAUID3D11ShaderResourceView@@@Z @ 0x18007AA90
 * Callers:
 *     ?GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18007A250 (-GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAU.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateShaderResourceView@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DESC@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180079928 (-CreateShaderResourceView@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_V.c)
 */

__int64 __fastcall CD2DBitmap::GetShaderResourceViewNoRef(CD2DBitmap *this, struct ID3D11ShaderResourceView **a2)
{
  struct ID3D11Resource *v3; // rdx
  unsigned int v5; // edi
  bool v7; // cc
  const struct D3D11_SHADER_RESOURCE_VIEW_DESC *v8; // r8
  int ShaderResourceView; // eax
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  v3 = (struct ID3D11Resource *)*((_QWORD *)this + 3);
  v5 = 0;
  if ( !v3 )
  {
    v5 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x247u);
    goto LABEL_12;
  }
  if ( !*((_QWORD *)this + 5) )
  {
    v7 = *((_DWORD *)this + 19) <= 1u;
    v10 = 0uLL;
    v11 = 0LL;
    if ( !v7 )
    {
      LODWORD(v10) = *((_DWORD *)this + 20);
      HIDWORD(v10) = *((_DWORD *)this + 18);
      LODWORD(v11) = *((_DWORD *)this + 38);
      *(_QWORD *)((char *)&v10 + 4) = 5LL;
      HIDWORD(v11) = 1;
    }
    v8 = (const struct D3D11_SHADER_RESOURCE_VIEW_DESC *)&v10;
    if ( *((_DWORD *)this + 19) <= 1u )
      v8 = 0LL;
    ShaderResourceView = CD3DDeviceLevel1::CreateShaderResourceView(
                           *(CD3DDeviceLevel1 **)(*((_QWORD *)this - 10) + 24LL),
                           v3,
                           v8,
                           (struct ID3D11ShaderResourceView **)this + 5);
    v5 = ShaderResourceView;
    if ( ShaderResourceView < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ShaderResourceView, 0x25Bu);
LABEL_12:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xCDu);
      return v5;
    }
  }
  *a2 = (struct ID3D11ShaderResourceView *)*((_QWORD *)this + 5);
  return v5;
}
