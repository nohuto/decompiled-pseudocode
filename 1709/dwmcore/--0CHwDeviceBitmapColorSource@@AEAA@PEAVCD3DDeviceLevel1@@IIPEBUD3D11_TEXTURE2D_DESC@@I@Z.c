/*
 * XREFs of ??0CHwDeviceBitmapColorSource@@AEAA@PEAVCD3DDeviceLevel1@@IIPEBUD3D11_TEXTURE2D_DESC@@I@Z @ 0x1800856EC
 * Callers:
 *     ?CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z @ 0x18008573C (-CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSourc.c)
 *     ?CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FORMAT@@VDisplayId@@_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAXPEAPEAV1@@Z @ 0x1801B6E4C (-CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FO.c)
 * Callees:
 *     ??0CHwBitmapColorSource@@IEAA@PEAVCD3DDeviceLevel1@@IIPEAVIMILResourceCache@@PEBUD3D11_TEXTURE2D_DESC@@@Z @ 0x180085400 (--0CHwBitmapColorSource@@IEAA@PEAVCD3DDeviceLevel1@@IIPEAVIMILResourceCache@@PEBUD3D11_TEXTURE2D.c)
 */

CHwDeviceBitmapColorSource *__fastcall CHwDeviceBitmapColorSource::CHwDeviceBitmapColorSource(
        CHwDeviceBitmapColorSource *this,
        struct CD3DDeviceLevel1 *a2,
        int a3,
        int a4,
        const struct D3D11_TEXTURE2D_DESC *a5,
        unsigned int a6)
{
  CHwBitmapColorSource::CHwBitmapColorSource(this, a2, a3, a4, 0LL, a5);
  *((_QWORD *)this + 43) = 0LL;
  *(_QWORD *)this = &CHwDeviceBitmapColorSource::`vftable'{for `CHwTexturedColorSource'};
  *((_QWORD *)this + 14) = &CHwDeviceBitmapColorSource::`vftable'{for `IDeviceResource'};
  *((_DWORD *)this + 84) = a6;
  return this;
}
