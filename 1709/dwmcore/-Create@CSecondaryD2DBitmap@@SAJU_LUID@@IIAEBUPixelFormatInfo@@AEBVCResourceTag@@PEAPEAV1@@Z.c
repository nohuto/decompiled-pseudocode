/*
 * XREFs of ?Create@CSecondaryD2DBitmap@@SAJU_LUID@@IIAEBUPixelFormatInfo@@AEBVCResourceTag@@PEAPEAV1@@Z @ 0x180088258
 * Callers:
 *     ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x18008A28C (-CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z.c)
 * Callees:
 *     ?CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJU_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMAP_PROPERTIES1@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x18001A14C (-CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJU_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::Create(
        struct _LUID a1,
        UINT a2,
        UINT a3,
        enum DXGI_COLOR_SPACE_TYPE *a4,
        const struct CResourceTag *a5,
        struct CSecondaryD2DBitmap **a6)
{
  __int128 v6; // xmm0
  enum DXGI_COLOR_SPACE_TYPE v7; // eax
  signed int v8; // eax
  unsigned int v9; // ebx
  enum DXGI_COLOR_SPACE_TYPE v11[2]; // [rsp+30h] [rbp-49h] BYREF
  struct D2D1_BITMAP_PROPERTIES1 v12; // [rsp+38h] [rbp-41h] BYREF
  struct D3D11_TEXTURE2D_DESC v13; // [rsp+60h] [rbp-19h] BYREF
  __int128 v14; // [rsp+90h] [rbp+17h]

  v13.SampleDesc.Quality = 0;
  v13.Usage = D3D11_USAGE_DEFAULT;
  v6 = *(_OWORD *)a5;
  v7 = *a4;
  v13.CPUAccessFlags = 0;
  v13.MiscFlags = 0;
  v12.bitmapOptions = D2D1_BITMAP_OPTIONS_NONE;
  v12.colorContext = 0LL;
  v11[0] = v7;
  v13.Format = v7;
  v11[1] = a4[1];
  v13.Width = a2;
  v12.pixelFormat = *(D2D1_PIXEL_FORMAT *)v11;
  v11[0] = a4[2];
  v13.MipLevels = 1;
  v13.ArraySize = 1;
  v13.SampleDesc.Count = 1;
  v13.Height = a3;
  v14 = v6;
  v13.BindFlags = 8;
  v12.dpiX = 96.0;
  v12.dpiY = 96.0;
  v8 = CD3DDeviceManager::CreateSecondaryD2DBitmap((CD3DDeviceManager *)&g_D3DDeviceManager, a1, &v13, &v12, v11, a6);
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x37u);
  return v9;
}
