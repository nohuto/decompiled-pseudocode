/*
 * XREFs of ?FillTexture@CHwSolidColorTextureSource@@AEAAJXZ @ 0x1801AF888
 * Callers:
 *     ?Realize@CHwSolidColorTextureSource@@UEAAJXZ @ 0x1801AF960 (-Realize@CHwSolidColorTextureSource@@UEAAJXZ.c)
 * Callees:
 *     ?Unmap@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@I@Z @ 0x180020718 (-Unmap@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@I@Z.c)
 *     ?Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x180020730 (-Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Convert_MilColorF_scRGB_To_Premultiplied_MilColorB_sRGB@@YAIPEBU_D3DCOLORVALUE@@@Z @ 0x1801C865C (-Convert_MilColorF_scRGB_To_Premultiplied_MilColorB_sRGB@@YAIPEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CHwSolidColorTextureSource::FillTexture(CHwSolidColorTextureSource *this)
{
  signed int v2; // eax
  signed int v3; // ebx
  _DWORD *pData; // rdi
  unsigned int v6; // [rsp+20h] [rbp-28h]
  struct D3D11_MAPPED_SUBRESOURCE v7; // [rsp+30h] [rbp-18h] BYREF
  _DWORD *v8; // [rsp+50h] [rbp+8h]

  v2 = CD3DDeviceLevel1::Map(
         *(CD3DDeviceLevel1 **)(*(_QWORD *)(*((_QWORD *)this + 14) + 16LL) + 80LL),
         *(struct ID3D11Resource **)(*((_QWORD *)this + 14) + 120LL),
         0LL,
         4LL,
         v6,
         &v7);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v2, 0xAEu);
    pData = v8;
  }
  else
  {
    pData = v7.pData;
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x103u);
  }
  else
  {
    *pData = Convert_MilColorF_scRGB_To_Premultiplied_MilColorB_sRGB((const struct _D3DCOLORVALUE *)((char *)this + 124));
    CD3DDeviceLevel1::Unmap(
      *(CD3DDeviceLevel1 **)(*(_QWORD *)(*((_QWORD *)this + 14) + 16LL) + 80LL),
      *(struct ID3D11Resource **)(*((_QWORD *)this + 14) + 120LL));
  }
  return (unsigned int)v3;
}
