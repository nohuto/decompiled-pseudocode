/*
 * XREFs of ??1CSolidColorLegacyMilBrush@@MEAA@XZ @ 0x18004BCDC
 * Callers:
 *     ??_ECSolidColorLegacyMilBrush@@MEAAPEAXI@Z @ 0x18004B9F0 (--_ECSolidColorLegacyMilBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CSolidColorLegacyMilBrush@@UEAAXXZ @ 0x18004BC90 (-UnRegisterNotifiers@CSolidColorLegacyMilBrush@@UEAAXXZ.c)
 */

void __fastcall CSolidColorLegacyMilBrush::~CSolidColorLegacyMilBrush(struct CResource **this)
{
  *this = (struct CResource *)&CSolidColorLegacyMilBrush::`vftable';
  CSolidColorLegacyMilBrush::UnRegisterNotifiers(this);
  this[18] = (struct CResource *)&CMILBrushSolid::`vftable'{for `CMILBrush'};
  this[21] = (struct CResource *)&CMILBrushSolid::`vftable'{for `IMILBrushSolid'};
  this[15] = (struct CResource *)&CMILCOMBase::`vftable';
  CLegacyMilBrush::~CLegacyMilBrush((CLegacyMilBrush *)this);
}
