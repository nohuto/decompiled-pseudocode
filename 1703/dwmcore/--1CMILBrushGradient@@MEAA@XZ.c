/*
 * XREFs of ??1CMILBrushGradient@@MEAA@XZ @ 0x1801B2A20
 * Callers:
 *     ??1CMILBrushLinearGradient@@MEAA@XZ @ 0x1801B2834 (--1CMILBrushLinearGradient@@MEAA@XZ.c)
 *     ??_GCMILBrushGradient@@MEAAPEAXI@Z @ 0x1801B2AA0 (--_GCMILBrushGradient@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CMILResourceCache@@IEAA@XZ @ 0x180056F24 (--1CMILResourceCache@@IEAA@XZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CMILBrushGradient::~CMILBrushGradient(CMILBrushGradient *this)
{
  void **v2; // rbx

  *(_QWORD *)this = &CMILBrushGradient::`vftable'{for `CMILObject'};
  v2 = (void **)((char *)this + 152);
  *((_QWORD *)this + 3) = &CMILBrush::`vftable';
  *((_QWORD *)this + 6) = &CMILBrushGradient::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 14) = &CMILBrushGradient::`vftable'{for `IMILBrushGradient'};
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 23);
  DynArrayImpl<1>::~DynArrayImpl<1>(v2);
  CMILResourceCache::~CMILResourceCache((CMILBrushGradient *)((char *)this + 48));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
