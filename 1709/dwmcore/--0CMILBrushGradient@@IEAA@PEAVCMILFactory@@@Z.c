/*
 * XREFs of ??0CMILBrushGradient@@IEAA@PEAVCMILFactory@@@Z @ 0x1801CED4C
 * Callers:
 *     ??0CLinearGradientLegacyMilBrush@@IEAA@PEAVCComposition@@@Z @ 0x180145E54 (--0CLinearGradientLegacyMilBrush@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

CMILBrushGradient *__fastcall CMILBrushGradient::CMILBrushGradient(CMILBrushGradient *this, struct CMILFactory *a2)
{
  CMILBrushGradient *result; // rax

  *(_QWORD *)this = &CMILObject::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = &CMILBrush::`vftable';
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)((char *)this + 36) = 3LL;
  *((_QWORD *)this + 7) = (char *)this + 88;
  *((_QWORD *)this + 8) = (char *)this + 88;
  *((_DWORD *)this + 18) = 2;
  *(_QWORD *)((char *)this + 76) = 2LL;
  *((_QWORD *)this + 6) = &CMILResourceCache::`vftable';
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 30) = 1;
  *(_QWORD *)this = &CMILBrushGradient::`vftable'{for `CMILObject'};
  *((_QWORD *)this + 3) = &CMILBrush::`vftable';
  *((_QWORD *)this + 6) = &CMILBrushGradient::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 14) = &CMILBrushGradient::`vftable'{for `IMILBrushGradient'};
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = 0;
  *(_QWORD *)((char *)this + 124) = 0LL;
  *(_QWORD *)((char *)this + 132) = 0LL;
  *(_QWORD *)((char *)this + 140) = 0LL;
  result = this;
  *((_DWORD *)this + 54) = 0;
  *((_DWORD *)this + 55) = 1;
  return result;
}
