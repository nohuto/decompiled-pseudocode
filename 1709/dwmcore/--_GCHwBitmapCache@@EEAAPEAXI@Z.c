/*
 * XREFs of ??_GCHwBitmapCache@@EEAAPEAXI@Z @ 0x18007E880
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x18007E344 (--1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 */

CHwBitmapCache *__fastcall CHwBitmapCache::`scalar deleting destructor'(CHwBitmapCache *this, char a2)
{
  CMILRefCountBase *v4; // rcx
  CMILRefCountBase *v5; // rcx

  *(_QWORD *)this = &CHwBitmapCache::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CD3DVidMemOnlyTexture::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 15) = &CHwBitmapCache::`vftable';
  v4 = (CMILRefCountBase *)*((_QWORD *)this + 61);
  if ( v4 )
    CMILRefCountBase::Release(v4);
  v5 = (CMILRefCountBase *)*((_QWORD *)this + 62);
  if ( v5 )
    CMILRefCountBase::Release(v5);
  CHwBitmapCache::FormatCacheEntry::~FormatCacheEntry((CHwBitmapCache *)((char *)this + 152));
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 9);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
