/*
 * XREFs of ??1CHwndBitmap@@MEAA@XZ @ 0x180020210
 * Callers:
 *     ??_ECHwndBitmap@@MEAAPEAXI@Z @ 0x1800202B4 (--_ECHwndBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??1CCommandListBitmapRepresentation@@MEAA@XZ @ 0x1800C2D68 (--1CCommandListBitmapRepresentation@@MEAA@XZ.c)
 *     ?RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x1801448CC (-RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 */

void __fastcall CHwndBitmap::~CHwndBitmap(CHwndBitmap *this)
{
  bool v1; // zf
  __int64 v3; // rcx
  CMILRefCountBase *v4; // rcx

  v1 = *((_QWORD *)this + 58) == 0LL;
  *(_QWORD *)this = &CHwndBitmap::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 1) = &CHwndBitmap::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 2) = &CHwndBitmap::`vftable'{for `CContent'};
  *((_QWORD *)this + 11) = &CHwndBitmap::`vftable';
  if ( !v1 )
    CWindowManager::RemoveHwndBitmap(*(CWindowManager **)(*((_QWORD *)this + 4) + 48LL), this);
  CResource::UnRegisterNotifierInternal((CHwndBitmap *)((char *)this + 16), *((struct CResource **)this + 59));
  *((_QWORD *)this + 59) = 0LL;
  v3 = *((_QWORD *)this + 62);
  if ( v3 )
    CMILCOMBase::InternalRelease((CMILCOMBase *)(v3 + 16));
  v4 = (CMILRefCountBase *)*((_QWORD *)this + 60);
  if ( v4 )
    CMILRefCountBase::Release(v4);
  CCommandListBitmapRepresentation::~CCommandListBitmapRepresentation((CHwndBitmap *)((char *)this + 88));
  CBitmapResource::~CBitmapResource(this);
}
