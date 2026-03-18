/*
 * XREFs of ??1CColorKeyBitmap@@MEAA@XZ @ 0x1801D120C
 * Callers:
 *     ??_ECColorKeyBitmap@@MEAAPEAXI@Z @ 0x1801D12A0 (--_ECColorKeyBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CColorKeyBitmap::~CColorKeyBitmap(CColorKeyBitmap *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CColorKeyBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CColorKeyBitmap::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CColorKeyBitmap::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 11) = &CColorKeyBitmap::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 18) = &CColorKeyBitmap::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 19) = &CColorKeyBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 20));
  v2 = *((_QWORD *)this + 21);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 12);
  CD2DBitmapCache::~CD2DBitmapCache(this);
}
