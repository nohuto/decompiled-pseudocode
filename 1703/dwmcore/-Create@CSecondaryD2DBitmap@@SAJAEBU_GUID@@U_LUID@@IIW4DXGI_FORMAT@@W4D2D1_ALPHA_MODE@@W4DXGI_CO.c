/*
 * XREFs of ?Create@CSecondaryD2DBitmap@@SAJAEBU_GUID@@U_LUID@@IIW4DXGI_FORMAT@@W4D2D1_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x18000711C
 * Callers:
 *     ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1800250D8 (-CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z.c)
 * Callees:
 *     ?CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMAP_PROPERTIES1@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x18001B0A8 (-CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEA.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::Create(
        const struct _GUID *a1,
        struct _LUID a2,
        int a3,
        int a4,
        enum DXGI_FORMAT a5,
        enum D2D1_ALPHA_MODE a6,
        enum DXGI_COLOR_SPACE_TYPE a7,
        struct CSecondaryD2DBitmap **a8)
{
  __int128 v8; // xmm0
  int v9; // eax
  unsigned int v10; // ebx
  struct D2D1_BITMAP_PROPERTIES1 v12; // [rsp+40h] [rbp-49h] BYREF
  _DWORD v13[12]; // [rsp+60h] [rbp-29h] BYREF
  __int128 v14; // [rsp+90h] [rbp+7h]

  v13[6] = 0;
  v13[7] = 0;
  v13[9] = 0;
  v13[10] = 0;
  v12.bitmapOptions = D2D1_BITMAP_OPTIONS_NONE;
  v12.colorContext = 0LL;
  v12.pixelFormat = (D2D1_PIXEL_FORMAT)"DWM Secondary D2D Bitmap";
  v13[4] = a5;
  LODWORD(v12.dpiX) = 24;
  v8 = *(_OWORD *)&v12.pixelFormat.format;
  v12.pixelFormat.format = a5;
  v12.pixelFormat.alphaMode = a6;
  v13[0] = a3;
  v13[2] = 1;
  v13[3] = 1;
  v13[5] = 1;
  v13[1] = a4;
  v14 = v8;
  v13[8] = 8;
  v12.dpiX = 96.0;
  v12.dpiY = 96.0;
  v9 = CD3DDeviceManager::CreateSecondaryD2DBitmap(
         (CD3DDeviceManager *)&g_D3DDeviceManager,
         a1,
         a2,
         (struct DWM_TEXTURE2D_DESC *)v13,
         &v12,
         &a7,
         a8);
  v10 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x37u);
  return v10;
}
