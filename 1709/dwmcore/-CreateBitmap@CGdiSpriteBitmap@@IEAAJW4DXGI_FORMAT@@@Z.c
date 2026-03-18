/*
 * XREFs of ?CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18009DF10
 * Callers:
 *     ?EnsureBitmapRealization@CGdiSpriteBitmap@@IEAA_NXZ @ 0x18009D1B8 (-EnsureBitmapRealization@CGdiSpriteBitmap@@IEAA_NXZ.c)
 *     ?GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x18009DEA0 (-GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?ProcessUpdateSurface@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UPDATESURFACE@@@Z @ 0x18009E3F0 (-ProcessUpdateSurface@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UPDA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z @ 0x18007F140 (-GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x1800823E4 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@IEAAJXZ @ 0x18009D54C (-RegisterForSignaling@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAXU_LUID@@II@Z @ 0x18009DBA4 (-CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAXU_LUID@@II@Z.c)
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@IEAAJPEAXII@Z @ 0x18009DCE8 (-CreateSectionBitmap@CGdiSpriteBitmap@@IEAAJPEAXII@Z.c)
 *     ?UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@IEAAXXZ @ 0x18009E0AC (-UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@IEAAXXZ.c)
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@IEAAXXZ @ 0x18009E0E0 (-ReleaseBitmapResources@CGdiSpriteBitmap@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

__int64 __fastcall CGdiSpriteBitmap::CreateBitmap(CGdiSpriteBitmap *this, enum DXGI_FORMAT a2)
{
  __int64 v4; // rcx
  bool v5; // sf
  enum DXGI_FORMAT v6; // ecx
  signed int SectionBitmap; // eax
  unsigned int v8; // ebx
  signed int v9; // eax
  signed int DeviceBitmap; // eax
  __int64 *v12; // r8
  __int64 v13; // rdx
  __int64 **v14; // rax
  int v15[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  char v17[16]; // [rsp+48h] [rbp-B8h] BYREF
  void *v18; // [rsp+58h] [rbp-A8h]
  unsigned int v19; // [rsp+60h] [rbp-A0h]
  unsigned int v20; // [rsp+64h] [rbp-9Ch]
  int v21; // [rsp+68h] [rbp-98h]
  enum DXGI_FORMAT v22; // [rsp+6Ch] [rbp-94h]
  struct _LUID v23; // [rsp+78h] [rbp-88h]
  void *v24; // [rsp+80h] [rbp-80h]

  v16 = 0;
  memset_0(v17, 0, 0x130uLL);
  v4 = *((_QWORD *)this + 10);
  v15[0] = 312;
  v22 = a2;
  if ( (int)CRedirectedGDISurface::GetInformation(v4, 2, v15, (__int64)&v16) >= 0 && v16 )
  {
    v5 = *((char *)this + 116) < 0;
    v6 = v22;
    *((_DWORD *)this + 92) = v21;
    if ( v5 && *((_BYTE *)this + 336) && v6 == DXGI_FORMAT_B8G8R8X8_UNORM )
      v6 = DXGI_FORMAT_B8G8R8A8_UNORM;
    *((_DWORD *)this + 22) = v6;
    *((_DWORD *)this + 23) = (unsigned int)HasAlphaChannel(v6) != 0 ? 1 : 3;
    CGdiSpriteBitmap::ReleaseBitmapResources(this);
    if ( v16 == 1 )
    {
      CGdiSpriteBitmap::UnRegisterWithSurfaceManager(this);
      SectionBitmap = CGdiSpriteBitmap::CreateSectionBitmap((HANDLE *)this, v18, v19, v20);
      v8 = SectionBitmap;
      if ( SectionBitmap < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, SectionBitmap, 0x122u);
        return v8;
      }
    }
    else if ( v16 == 2 )
    {
      DeviceBitmap = CGdiSpriteBitmap::CreateDeviceBitmap(this, v24, v23, v19, v20);
      v8 = DeviceBitmap;
      if ( DeviceBitmap < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, DeviceBitmap, 0x12Fu);
        return v8;
      }
      if ( (*((_BYTE *)this + 116) & 2) == 0 )
      {
        v12 = (__int64 *)((char *)this + 152);
        v13 = *(_QWORD *)(*((_QWORD *)this + 2) + 80LL) + 176LL;
        v14 = *(__int64 ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 80LL) + 184LL);
        if ( *v14 != (__int64 *)v13 )
          __fastfail(3u);
        *v12 = v13;
        *((_QWORD *)this + 20) = v14;
        *v14 = v12;
        *(_QWORD *)(v13 + 8) = v12;
        *((_BYTE *)this + 116) |= 2u;
      }
    }
    v9 = CGdiSpriteBitmap::RegisterForSignaling(this);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x13Bu);
  }
  else
  {
    CGdiSpriteBitmap::ReleaseBitmapResources(this);
    return 0;
  }
  return v8;
}
