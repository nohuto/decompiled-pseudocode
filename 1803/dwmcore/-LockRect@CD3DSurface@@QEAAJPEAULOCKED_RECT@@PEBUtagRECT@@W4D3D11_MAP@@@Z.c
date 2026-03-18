/*
 * XREFs of ?LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z @ 0x1800434EC
 * Callers:
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x180042B90 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 *     ?ReCreateAndLockSysMemSurface@CHwVidMemTextureManager@@QEAAJPEAULOCKED_RECT@@@Z @ 0x1801F78F8 (-ReCreateAndLockSysMemSurface@CHwVidMemTextureManager@@QEAAJPEAULOCKED_RECT@@@Z.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180059E10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x180075234 (-Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180084360 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
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
         *(CD3DDeviceLevel1 **)(*((_QWORD *)this + 2) + 80LL),
         *((struct ID3D11Resource **)this + 16),
         *((_DWORD *)this + 34),
         a4,
         v14,
         &v15);
  v16 = v7;
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x32u);
  }
  else
  {
    PixelFormatSize = GetPixelFormatSize(*((enum DXGI_FORMAT *)this + 39));
    pData = (char *)v15.pData;
    v11 = a3->left * (PixelFormatSize >> 3);
    v12 = v15.RowPitch * a3->top;
    *(_DWORD *)a2 = v15.RowPitch;
    *((_QWORD *)a2 + 1) = &pData[v11 + v12];
  }
  TranslateDXGIorD3DErrorInContext(v8, 0LL, &v16);
  return v16;
}
