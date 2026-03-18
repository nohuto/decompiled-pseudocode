/*
 * XREFs of ?CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180055624
 * Callers:
 *     ?GetBitmapSource@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x1800555C0 (-GetBitmapSource@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?EnsureBitmapSource@CGdiSpriteBitmap@@IEAAJXZ @ 0x1800557E8 (-EnsureBitmapSource@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?ProcessUpdateSurface@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UPDATESURFACE@@@Z @ 0x180055C30 (-ProcessUpdateSurface@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UPDA.c)
 * Callees:
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@IEAAJXZ @ 0x18005491C (-RegisterForSignaling@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJII@Z @ 0x180055214 (-CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJII@Z.c)
 *     ?UpdateSectionHandle@CGdiSpriteBitmap@@IEAAJPEAX@Z @ 0x180055398 (-UpdateSectionHandle@CGdiSpriteBitmap@@IEAAJPEAX@Z.c)
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@IEAAJXZ @ 0x180055460 (-CreateSectionBitmap@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@IEAAXXZ @ 0x180055810 (-UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@IEAAXXZ.c)
 *     ?RegisterWithSurfaceManager@CGdiSpriteBitmap@@IEAAJXZ @ 0x18005584C (-RegisterWithSurfaceManager@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?ReleaseNonDeviceBitmapResources@CGdiSpriteBitmap@@IEAAX_N@Z @ 0x180055890 (-ReleaseNonDeviceBitmapResources@CGdiSpriteBitmap@@IEAAX_N@Z.c)
 *     ?ReleaseDeviceBitmapResources@CGdiSpriteBitmap@@IEAAXXZ @ 0x180055914 (-ReleaseDeviceBitmapResources@CGdiSpriteBitmap@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18007C0CC (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z @ 0x1800B0910 (-GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall CGdiSpriteBitmap::CreateBitmap(CGdiSpriteBitmap *this, enum DXGI_FORMAT a2)
{
  __int64 v4; // rcx
  enum DXGI_FORMAT v5; // ecx
  int v6; // edx
  int v7; // edx
  int DeviceBitmap; // eax
  unsigned int v9; // ebx
  unsigned int v11; // ecx
  unsigned __int64 v12; // rax
  int v13; // r9d
  unsigned int v14; // [rsp+20h] [rbp-E0h]
  int v15[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v17[16]; // [rsp+48h] [rbp-B8h] BYREF
  void *v18; // [rsp+58h] [rbp-A8h]
  unsigned int v19; // [rsp+60h] [rbp-A0h]
  unsigned int v20; // [rsp+64h] [rbp-9Ch]
  int v21; // [rsp+68h] [rbp-98h]
  enum DXGI_FORMAT v22; // [rsp+6Ch] [rbp-94h]
  __int64 v23; // [rsp+78h] [rbp-88h]
  __int64 v24; // [rsp+80h] [rbp-80h]

  v16 = 0;
  memset_0(v17, 0, 0x130uLL);
  v4 = *((_QWORD *)this + 14);
  v15[0] = 312;
  v22 = a2;
  if ( (int)CRedirectedGDISurface::GetInformation(v4, 2LL, v15, &v16) < 0 || !v16 )
  {
    CGdiSpriteBitmap::ReleaseDeviceBitmapResources(this);
    CGdiSpriteBitmap::ReleaseNonDeviceBitmapResources(this, 0);
    return 0;
  }
  v5 = v22;
  *((_DWORD *)this + 84) = v21;
  *((_DWORD *)this + 30) = v5;
  *((_DWORD *)this + 31) = (unsigned int)HasAlphaChannel(v5) != 0 ? 1 : 3;
  v7 = v6 - 1;
  if ( v7 )
  {
    if ( v7 != 1 )
      goto LABEL_7;
    *((_QWORD *)this + 46) = v24;
    *((_QWORD *)this + 47) = v23;
    CGdiSpriteBitmap::ReleaseNonDeviceBitmapResources(this, 0);
    DeviceBitmap = CGdiSpriteBitmap::CreateDeviceBitmap(this, v19, v20);
    v9 = DeviceBitmap;
    if ( DeviceBitmap < 0 )
    {
      v14 = 359;
    }
    else
    {
      DeviceBitmap = CGdiSpriteBitmap::RegisterWithSurfaceManager(this);
      v9 = DeviceBitmap;
      if ( DeviceBitmap >= 0 )
        goto LABEL_7;
      v14 = 361;
    }
LABEL_18:
    v13 = DeviceBitmap;
LABEL_20:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v14);
    return v9;
  }
  v11 = v19;
  *((_DWORD *)this + 83) = v20;
  *((_DWORD *)this + 82) = v11;
  v12 = 4LL * v11;
  if ( v12 > 0xFFFFFFFF )
  {
    v9 = -2147024362;
    *((_DWORD *)this + 84) = -1;
    v13 = -2147024362;
    v14 = 335;
    goto LABEL_20;
  }
  *((_QWORD *)this + 42) = (unsigned int)v12;
  CGdiSpriteBitmap::ReleaseDeviceBitmapResources(this);
  CGdiSpriteBitmap::UnRegisterWithSurfaceManager(this);
  DeviceBitmap = CGdiSpriteBitmap::UpdateSectionHandle((PVOID *)this, v18);
  v9 = DeviceBitmap;
  if ( DeviceBitmap < 0 )
  {
    v14 = 342;
    goto LABEL_18;
  }
  DeviceBitmap = CGdiSpriteBitmap::CreateSectionBitmap(this);
  v9 = DeviceBitmap;
  if ( DeviceBitmap < 0 )
  {
    v14 = 345;
    goto LABEL_18;
  }
LABEL_7:
  DeviceBitmap = CGdiSpriteBitmap::RegisterForSignaling(this);
  v9 = DeviceBitmap;
  if ( DeviceBitmap < 0 )
  {
    v14 = 371;
    goto LABEL_18;
  }
  return v9;
}
