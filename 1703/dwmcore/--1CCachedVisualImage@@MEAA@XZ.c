/*
 * XREFs of ??1CCachedVisualImage@@MEAA@XZ @ 0x18004827C
 * Callers:
 *     ??_ECCachedVisualImage@@MEAAPEAXI@Z @ 0x180048310 (--_ECCachedVisualImage@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ @ 0x180047F90 (-RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ.c)
 *     ?UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ @ 0x180048230 (-UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CCachedVisualImage::~CCachedVisualImage(CCachedVisualImage *this)
{
  struct CResource **v2; // rdi
  CMILCOMBase *v3; // rcx

  *(_QWORD *)this = &CCachedVisualImage::`vftable'{for `IPixelFormat'};
  v2 = (struct CResource **)((char *)this + 16);
  *((_QWORD *)this + 1) = &CCachedVisualImage::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 2) = &CCachedVisualImage::`vftable'{for `CContent'};
  *((_QWORD *)this + 9) = &CCachedVisualImage::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 10) = &CCachedVisualImage::`vftable'{for `IBitmapRealization'};
  v3 = (CMILCOMBase *)*((_QWORD *)this + 39);
  if ( v3 )
    CMILCOMBase::InternalRelease(v3);
  WPF::ProcessHeapImpl::Free(*((void **)this + 20));
  CCachedVisualImage::UnRegisterNotifiers(v2);
  CCachedVisualImage::RemoveAllTargets(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 184);
  CResource::~CResource((CResource *)v2);
}
