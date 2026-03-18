/*
 * XREFs of ??_ECHwLinearGradientBrush@@UEAAPEAXI@Z @ 0x1801F68F0
 * Callers:
 *     ??_ECHwLinearGradientBrush@@W7EAAPEAXI@Z @ 0x1800DE5C0 (--_ECHwLinearGradientBrush@@W7EAAPEAXI@Z.c)
 *     ?CreateHwBrush@CHwLinearGradientBrushPoolManager@@MEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z @ 0x1801F6990 (-CreateHwBrush@CHwLinearGradientBrushPoolManager@@MEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPE.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??1CHwCacheablePoolBrush@@MEAA@XZ @ 0x1801F6D28 (--1CHwCacheablePoolBrush@@MEAA@XZ.c)
 */

CHwLinearGradientBrush *__fastcall CHwLinearGradientBrush::`vector deleting destructor'(
        CHwLinearGradientBrush *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &CHwLinearGradientBrush::`vftable'{for `IMILCacheableResource'};
  *((_QWORD *)this + 1) = &CHwLinearGradientBrush::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 4) = &CHwLinearGradientBrush::`vftable'{for `CHwBrush'};
  v4 = *((_QWORD *)this + 12);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = *((_QWORD *)this + 13);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  CHwCacheablePoolBrush::~CHwCacheablePoolBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
