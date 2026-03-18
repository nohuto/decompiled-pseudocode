/*
 * XREFs of ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x180055960
 * Callers:
 *     ??_ECGdiSpriteBitmap@@MEAAPEAXI@Z @ 0x180055A28 (--_ECGdiSpriteBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@IEAAXXZ @ 0x180055810 (-UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@IEAAXXZ.c)
 *     ?ReleaseNonDeviceBitmapResources@CGdiSpriteBitmap@@IEAAX_N@Z @ 0x180055890 (-ReleaseNonDeviceBitmapResources@CGdiSpriteBitmap@@IEAAX_N@Z.c)
 *     ?ReleaseDeviceBitmapResources@CGdiSpriteBitmap@@IEAAXXZ @ 0x180055914 (-ReleaseDeviceBitmapResources@CGdiSpriteBitmap@@IEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180075968 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CGdiSpriteBitmap::~CGdiSpriteBitmap(CGdiSpriteBitmap *this)
{
  bool v1; // zf
  CMILRefCountBase *v3; // rcx
  __int64 v4; // rcx

  v1 = (*((_BYTE *)this + 148) & 1) == 0;
  *(_QWORD *)this = &CGdiSpriteBitmap::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 1) = &CGdiSpriteBitmap::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 2) = &CGdiSpriteBitmap::`vftable'{for `CContent'};
  *((_QWORD *)this + 11) = &CGdiSpriteBitmap::`vftable'{for `ISpriteImage'};
  *((_QWORD *)this + 12) = &CGdiSpriteBitmap::`vftable'{for `IDeviceResourceNotify'};
  if ( !v1 )
    --*(_DWORD *)(*((_QWORD *)this + 4) + 408LL);
  CGdiSpriteBitmap::ReleaseDeviceBitmapResources(this);
  CGdiSpriteBitmap::ReleaseNonDeviceBitmapResources(this, 0);
  CGdiSpriteBitmap::UnRegisterWithSurfaceManager(this);
  v3 = (CMILRefCountBase *)*((_QWORD *)this + 14);
  if ( v3 )
    CMILRefCountBase::Release(v3);
  v4 = *((_QWORD *)this + 40);
  *((_QWORD *)this + 39) = &CRegionShape::`vftable';
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  FastRegion::CRegion::FreeMemory((CGdiSpriteBitmap *)((char *)this + 240));
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 200);
  CBitmapResource::~CBitmapResource(this);
}
