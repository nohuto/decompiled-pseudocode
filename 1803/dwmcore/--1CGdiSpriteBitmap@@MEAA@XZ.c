/*
 * XREFs of ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x180094A78
 * Callers:
 *     ??_ECGdiSpriteBitmap@@MEAAPEAXI@Z @ 0x180093890 (--_ECGdiSpriteBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x180063D60 (--1CRegionShape@@UEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@IEAAXXZ @ 0x1800949FC (-UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@IEAAXXZ.c)
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@IEAAXXZ @ 0x180094A30 (-ReleaseBitmapResources@CGdiSpriteBitmap@@IEAAXXZ.c)
 */

void __fastcall CGdiSpriteBitmap::~CGdiSpriteBitmap(CGdiSpriteBitmap *this)
{
  CMILRefCountBase *v2; // rcx

  *(_QWORD *)this = &CGdiSpriteBitmap::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &CGdiSpriteBitmap::`vftable'{for `ISpriteImage'};
  *((_QWORD *)this + 8) = &CGdiSpriteBitmap::`vftable'{for `IDeviceResourceNotify'};
  CGdiSpriteBitmap::ReleaseBitmapResources(this);
  CGdiSpriteBitmap::UnRegisterWithSurfaceManager(this);
  v2 = (CMILRefCountBase *)*((_QWORD *)this + 10);
  if ( v2 )
    CMILRefCountBase::Release(v2);
  CRegionShape::~CRegionShape((CGdiSpriteBitmap *)((char *)this + 280));
  FastRegion::CRegion::FreeMemory((void **)this + 26);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 168);
  CResource::~CResource(this);
}
