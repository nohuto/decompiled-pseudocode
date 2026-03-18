/*
 * XREFs of ??1CLinearGradientLegacyMilBrush@@MEAA@XZ @ 0x18017B69C
 * Callers:
 *     ??_GCLinearGradientLegacyMilBrush@@MEAAPEAXI@Z @ 0x180153ED0 (--_GCLinearGradientLegacyMilBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CLinearGradientLegacyMilBrush@@UEAAXXZ @ 0x180174F20 (-UnRegisterNotifiers@CLinearGradientLegacyMilBrush@@UEAAXXZ.c)
 *     ??1CMILBrushLinearGradient@@MEAA@XZ @ 0x1801B2834 (--1CMILBrushLinearGradient@@MEAA@XZ.c)
 */

void __fastcall CLinearGradientLegacyMilBrush::~CLinearGradientLegacyMilBrush(struct CResource **this)
{
  *this = (struct CResource *)&CLinearGradientLegacyMilBrush::`vftable';
  CLinearGradientLegacyMilBrush::UnRegisterNotifiers(this);
  this[54] = (struct CResource *)&CMILBrushSolid::`vftable'{for `CMILBrush'};
  this[57] = (struct CResource *)&CMILBrushSolid::`vftable'{for `IMILBrushSolid'};
  this[51] = (struct CResource *)&CMILCOMBase::`vftable';
  CMILBrushLinearGradient::~CMILBrushLinearGradient((CMILBrushLinearGradient *)(this + 22));
  CLegacyMilBrush::~CLegacyMilBrush((CLegacyMilBrush *)this);
}
