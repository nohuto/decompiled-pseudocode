/*
 * XREFs of ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x18009E128
 * Callers:
 *     ??_ECGdiSpriteBitmap@@MEAAPEAXI@Z @ 0x18009D0F0 (--_ECGdiSpriteBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@IEAAXXZ @ 0x18009E0AC (-UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@IEAAXXZ.c)
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@IEAAXXZ @ 0x18009E0E0 (-ReleaseBitmapResources@CGdiSpriteBitmap@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CGdiSpriteBitmap::~CGdiSpriteBitmap(CGdiSpriteBitmap *this)
{
  CMILRefCountBase *v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CGdiSpriteBitmap::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &CGdiSpriteBitmap::`vftable'{for `ISpriteImage'};
  *((_QWORD *)this + 8) = &CGdiSpriteBitmap::`vftable'{for `IDeviceResourceNotify'};
  CGdiSpriteBitmap::ReleaseBitmapResources(this);
  CGdiSpriteBitmap::UnRegisterWithSurfaceManager(this);
  v2 = (CMILRefCountBase *)*((_QWORD *)this + 10);
  if ( v2 )
    CMILRefCountBase::Release(v2);
  v3 = *((_QWORD *)this + 36);
  *((_QWORD *)this + 35) = &CRegionShape::`vftable';
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  FastRegion::CRegion::FreeMemory((void **)this + 26);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 21);
  CResource::~CResource(this);
}
