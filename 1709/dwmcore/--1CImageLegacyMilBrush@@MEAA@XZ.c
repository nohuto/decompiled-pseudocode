/*
 * XREFs of ??1CImageLegacyMilBrush@@MEAA@XZ @ 0x18007CD04
 * Callers:
 *     ??_ECImageLegacyMilBrush@@MEAAPEAXI@Z @ 0x18007C140 (--_ECImageLegacyMilBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ @ 0x18007CC50 (-UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ.c)
 */

void __fastcall CImageLegacyMilBrush::~CImageLegacyMilBrush(struct CResource **this)
{
  *this = (struct CResource *)&CImageLegacyMilBrush::`vftable';
  CImageLegacyMilBrush::UnRegisterNotifiers(this);
  CTileLegacyMilBrush::~CTileLegacyMilBrush((CTileLegacyMilBrush *)this);
}
