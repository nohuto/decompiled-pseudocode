/*
 * XREFs of ??1CImageLegacyMilBrush@@MEAA@XZ @ 0x1800B7DD8
 * Callers:
 *     ??_ECImageLegacyMilBrush@@MEAAPEAXI@Z @ 0x1800B7CF0 (--_ECImageLegacyMilBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ @ 0x1800B7D30 (-UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ.c)
 */

void __fastcall CImageLegacyMilBrush::~CImageLegacyMilBrush(struct CResource **this)
{
  *this = (struct CResource *)&CImageLegacyMilBrush::`vftable';
  CImageLegacyMilBrush::UnRegisterNotifiers(this);
  CTileLegacyMilBrush::~CTileLegacyMilBrush((CTileLegacyMilBrush *)this);
}
