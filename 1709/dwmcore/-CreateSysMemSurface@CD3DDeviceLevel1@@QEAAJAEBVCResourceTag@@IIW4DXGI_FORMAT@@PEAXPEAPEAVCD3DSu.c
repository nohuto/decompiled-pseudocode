/*
 * XREFs of ?CreateSysMemSurface@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIW4DXGI_FORMAT@@PEAXPEAPEAVCD3DSurface@@@Z @ 0x1801A6F94
 * Callers:
 *     ?ReCreateAndLockSysMemSurface@CHwVidMemTextureManager@@QEAAJPEAULOCKED_RECT@@@Z @ 0x1801BCDD0 (-ReCreateAndLockSysMemSurface@CHwVidMemTextureManager@@QEAAJPEAULOCKED_RECT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAV1@@Z @ 0x180084EF8 (-Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_D.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateSysMemSurface(
        CD3DDeviceLevel1 **this,
        const struct CResourceTag *a2,
        int a3,
        int a4,
        enum DXGI_FORMAT a5,
        void *a6,
        struct CD3DSurface **a7)
{
  __int128 v7; // xmm0
  signed int v8; // eax
  unsigned int v9; // ebx
  _DWORD v11[12]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v12; // [rsp+60h] [rbp-20h]

  v7 = *(_OWORD *)a2;
  v11[6] = 0;
  v11[10] = 0;
  *a7 = 0LL;
  v11[2] = 1;
  v11[3] = 1;
  v11[5] = 1;
  v11[0] = a3;
  v11[1] = a4;
  v12 = v7;
  v11[4] = a5;
  v11[7] = 2;
  v11[8] = 8;
  v11[9] = 0x10000;
  v8 = CD3DSurface::Create(this + 112, (const struct DWM_TEXTURE2D_DESC *)v11, 0LL, a7);
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x7FCu);
  return v9;
}
