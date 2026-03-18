/*
 * XREFs of ??1CMILBrushLinearGradient@@MEAA@XZ @ 0x1801CEC44
 * Callers:
 *     ??1CLinearGradientLegacyMilBrush@@MEAA@XZ @ 0x180181918 (--1CLinearGradientLegacyMilBrush@@MEAA@XZ.c)
 *     ??_G?$LocalMILObject@VCMILBrushLinearGradient@@@@UEAAPEAXI@Z @ 0x1801CEC90 (--_G-$LocalMILObject@VCMILBrushLinearGradient@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILBrushLinearGradient::~CMILBrushLinearGradient(CMILBrushLinearGradient *this)
{
  *(_QWORD *)this = &CMILBrushLinearGradient::`vftable'{for `CMILObject'};
  *((_QWORD *)this + 3) = &CMILBrushLinearGradient::`vftable'{for `CMILBrush'};
  *((_QWORD *)this + 6) = &CMILBrushLinearGradient::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 14) = &CMILBrushLinearGradient::`vftable'{for `IMILBrushGradient'};
  *((_QWORD *)this + 28) = &CMILBrushLinearGradient::`vftable';
  CMILBrushGradient::~CMILBrushGradient(this);
}
