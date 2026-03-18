/*
 * XREFs of ?FillTexture@CHwSolidColorTextureSource@@AEAAJXZ @ 0x18019CBD0
 * Callers:
 *     ?Realize@CHwSolidColorTextureSource@@UEAAJXZ @ 0x18019CCC0 (-Realize@CHwSolidColorTextureSource@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Unmap@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@I@Z @ 0x1800778A8 (-Unmap@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@I@Z.c)
 *     ?Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x1800778C0 (-Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z.c)
 *     ?Convert_MilColorF_scRGB_To_Premultiplied_MilColorB_sRGB@@YAIPEBU_D3DCOLORVALUE@@@Z @ 0x1801ADC8C (-Convert_MilColorF_scRGB_To_Premultiplied_MilColorB_sRGB@@YAIPEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CHwSolidColorTextureSource::FillTexture(CHwSolidColorTextureSource *this)
{
  int v2; // eax
  int v3; // ebx
  _DWORD *pData; // rdi
  unsigned int v6; // [rsp+20h] [rbp-28h]
  struct D3D11_MAPPED_SUBRESOURCE v7; // [rsp+30h] [rbp-18h] BYREF

  v2 = CD3DDeviceLevel1::Map(
         *(CD3DDeviceLevel1 **)(*(_QWORD *)(*((_QWORD *)this + 13) + 16LL) + 128LL),
         *(struct ID3D11Resource **)(*((_QWORD *)this + 13) + 128LL),
         0LL,
         4LL,
         v6,
         &v7);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0xAEu);
    pData = *(_DWORD **)&v7.RowPitch;
  }
  else
  {
    pData = v7.pData;
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x103u);
  }
  else
  {
    *pData = Convert_MilColorF_scRGB_To_Premultiplied_MilColorB_sRGB((const struct _D3DCOLORVALUE *)((char *)this + 116));
    CD3DDeviceLevel1::Unmap(
      *(CD3DDeviceLevel1 **)(*(_QWORD *)(*((_QWORD *)this + 13) + 16LL) + 128LL),
      *(struct ID3D11Resource **)(*((_QWORD *)this + 13) + 128LL));
  }
  return (unsigned int)v3;
}
