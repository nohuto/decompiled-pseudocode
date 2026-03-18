/*
 * XREFs of ??1CCachedVisualImage@@MEAA@XZ @ 0x18008EA8C
 * Callers:
 *     ??_ECCachedVisualImage@@MEAAPEAXI@Z @ 0x18008EB60 (--_ECCachedVisualImage@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ @ 0x18008E6B0 (-RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ.c)
 *     ?UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ @ 0x18008EA30 (-UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

void __fastcall CCachedVisualImage::~CCachedVisualImage(CCachedVisualImage *this)
{
  __int64 v1; // r8
  struct CResource **v2; // rdi
  __int64 v4; // rcx
  unsigned int v5; // edx
  __int64 v6; // r9
  CMILCOMBase *v7; // rcx
  __int64 v8; // rdx

  v1 = *((_QWORD *)this + 4);
  *(_QWORD *)this = &CCachedVisualImage::`vftable'{for `IPixelFormat'};
  v2 = (struct CResource **)((char *)this + 16);
  *((_QWORD *)this + 1) = &CCachedVisualImage::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 2) = &CCachedVisualImage::`vftable'{for `CContent'};
  *((_QWORD *)this + 9) = &CCachedVisualImage::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 16) = &CCachedVisualImage::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 17) = &CCachedVisualImage::`vftable'{for `IBitmapRealization'};
  v4 = 0LL;
  v5 = *(_DWORD *)(v1 + 672);
  v6 = *(_QWORD *)(v1 + 648);
  if ( v5 )
  {
    do
    {
      if ( this == *(CCachedVisualImage **)(v6 + 8 * v4) )
        break;
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < v5 );
  }
  if ( (unsigned int)v4 < v5 )
  {
    if ( (unsigned int)v4 < v5 - 1 )
    {
      do
      {
        v8 = (unsigned int)(v4 + 1);
        *(_QWORD *)(v6 + 8 * v4) = *(_QWORD *)(v6 + 8 * v8);
        v4 = v8;
      }
      while ( (unsigned int)v8 < *(_DWORD *)(v1 + 672) - 1 );
    }
    --*(_DWORD *)(v1 + 672);
  }
  v7 = (CMILCOMBase *)*((_QWORD *)this + 46);
  if ( v7 )
    CMILCOMBase::InternalRelease(v7);
  WPF::ProcessHeapImpl::Free(*((void **)this + 27));
  CCachedVisualImage::UnRegisterNotifiers(v2);
  CCachedVisualImage::RemoveAllTargets(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 30);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 10);
  CResource::~CResource((CResource *)v2);
}
