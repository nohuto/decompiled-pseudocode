/*
 * XREFs of ??1CCachedVisualImage@@MEAA@XZ @ 0x1800B4D7C
 * Callers:
 *     ??_ECCachedVisualImage@@MEAAPEAXI@Z @ 0x1800B4E54 (--_ECCachedVisualImage@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ @ 0x1800B4984 (-RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ.c)
 *     ?UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ @ 0x1800B4D20 (-UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800CCF78 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CCachedVisualImage::~CCachedVisualImage(CCachedVisualImage *this)
{
  __int64 v1; // r8
  struct CResource **v2; // rdi
  __int64 v4; // rcx
  unsigned int v5; // edx
  __int64 v6; // r9
  CMILCOMBase *v7; // rcx

  v1 = *((_QWORD *)this + 4);
  *(_QWORD *)this = &CCachedVisualImage::`vftable'{for `IPixelFormat'};
  v2 = (struct CResource **)((char *)this + 16);
  *((_QWORD *)this + 1) = &CCachedVisualImage::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 2) = &CCachedVisualImage::`vftable'{for `CContent'};
  *((_QWORD *)this + 9) = &CCachedVisualImage::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 16) = &CCachedVisualImage::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 17) = &CCachedVisualImage::`vftable'{for `IBitmapRealization'};
  v4 = 0LL;
  v5 = *(_DWORD *)(v1 + 696);
  v6 = *(_QWORD *)(v1 + 672);
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
    while ( (unsigned int)v4 < v5 - 1 )
    {
      *(_QWORD *)(v6 + 8 * v4) = *(_QWORD *)(v6 + 8LL * (unsigned int)(v4 + 1));
      v4 = (unsigned int)(v4 + 1);
      v5 = *(_DWORD *)(v1 + 696);
    }
    *(_DWORD *)(v1 + 696) = v5 - 1;
  }
  v7 = (CMILCOMBase *)*((_QWORD *)this + 46);
  if ( v7 )
    CMILCOMBase::InternalRelease(v7);
  operator delete(*((void **)this + 27), 0x44uLL);
  CCachedVisualImage::UnRegisterNotifiers(v2);
  CCachedVisualImage::RemoveAllTargets(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 240);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 80);
  CResource::~CResource((CResource *)v2);
}
