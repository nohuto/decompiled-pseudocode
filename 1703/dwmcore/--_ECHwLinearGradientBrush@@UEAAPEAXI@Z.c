/*
 * XREFs of ??_ECHwLinearGradientBrush@@UEAAPEAXI@Z @ 0x1801A255C
 * Callers:
 *     ??_ECHwLinearGradientBrush@@W7EAAPEAXI@Z @ 0x1800D6650 (--_ECHwLinearGradientBrush@@W7EAAPEAXI@Z.c)
 *     ?CreateHwBrush@CHwLinearGradientBrushPoolManager@@MEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z @ 0x1801A25E0 (-CreateHwBrush@CHwLinearGradientBrushPoolManager@@MEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPE.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??1CHwCacheablePoolBrush@@MEAA@XZ @ 0x1801A2928 (--1CHwCacheablePoolBrush@@MEAA@XZ.c)
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
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
