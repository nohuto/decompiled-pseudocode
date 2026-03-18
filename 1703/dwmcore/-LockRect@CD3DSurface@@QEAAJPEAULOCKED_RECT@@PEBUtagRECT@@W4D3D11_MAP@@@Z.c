/*
 * XREFs of ?LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z @ 0x180073434
 * Callers:
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x180072AE4 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 *     ?ReCreateAndLockSysMemSurface@CHwVidMemTextureManager@@QEAAJPEAULOCKED_RECT@@@Z @ 0x1801A34CC (-ReCreateAndLockSysMemSurface@CHwVidMemTextureManager@@QEAAJPEAULOCKED_RECT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x1800778C0 (-Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18007E584 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18008F260 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 */

__int64 __fastcall CD3DSurface::LockRect(
        CD3DSurface *this,
        struct LOCKED_RECT *a2,
        const struct tagRECT *a3,
        enum D3D11_MAP a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  unsigned __int8 PixelFormatSize; // al
  char *pData; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned int v14; // [rsp+20h] [rbp-28h]
  struct D3D11_MAPPED_SUBRESOURCE v15; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v16; // [rsp+50h] [rbp+8h] BYREF

  v7 = CD3DDeviceLevel1::Map(
         *(CD3DDeviceLevel1 **)(*((_QWORD *)this + 2) + 128LL),
         *((struct ID3D11Resource **)this + 17),
         *((_DWORD *)this + 36),
         a4,
         v14,
         &v15);
  v16 = v7;
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x30u);
  }
  else
  {
    PixelFormatSize = GetPixelFormatSize(*((enum DXGI_FORMAT *)this + 41));
    pData = (char *)v15.pData;
    v11 = a3->left * (PixelFormatSize >> 3);
    v12 = v15.RowPitch * a3->top;
    *(_DWORD *)a2 = v15.RowPitch;
    *((_QWORD *)a2 + 1) = &pData[v11 + v12];
  }
  TranslateDXGIorD3DErrorInContext(v8, 0LL, &v16);
  return v16;
}
