/*
 * XREFs of ??_GCHwBitmapCache@@EEAAPEAXI@Z @ 0x1800CC080
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x1800CCA10 (--1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CHwBitmapCache *__fastcall CHwBitmapCache::`scalar deleting destructor'(CHwBitmapCache *this, char a2)
{
  CMILRefCountBase *v4; // rcx
  CMILRefCountBase *v5; // rcx

  *(_QWORD *)this = &CHwBitmapCache::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 15) = &CHwBitmapCache::`vftable';
  v4 = (CMILRefCountBase *)*((_QWORD *)this + 61);
  if ( v4 )
    CMILRefCountBase::Release(v4);
  v5 = (CMILRefCountBase *)*((_QWORD *)this + 62);
  if ( v5 )
    CMILRefCountBase::Release(v5);
  CHwBitmapCache::FormatCacheEntry::~FormatCacheEntry((CHwBitmapCache *)((char *)this + 152));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 72);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
