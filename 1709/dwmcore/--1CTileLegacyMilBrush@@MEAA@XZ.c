/*
 * XREFs of ??1CTileLegacyMilBrush@@MEAA@XZ @ 0x18007CF28
 * Callers:
 *     ??1CImageLegacyMilBrush@@MEAA@XZ @ 0x18007CD04 (--1CImageLegacyMilBrush@@MEAA@XZ.c)
 *     ??_GCTileLegacyMilBrush@@MEAAPEAXI@Z @ 0x180146DC0 (--_GCTileLegacyMilBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CMILBrushBitmap@@MEAA@XZ @ 0x1800461D0 (--1CMILBrushBitmap@@MEAA@XZ.c)
 */

void __fastcall CTileLegacyMilBrush::~CTileLegacyMilBrush(CTileLegacyMilBrush *this)
{
  *(_QWORD *)this = &CTileLegacyMilBrush::`vftable';
  CMILBrushBitmap::~CMILBrushBitmap((CTileLegacyMilBrush *)((char *)this + 112));
  CLegacyMilBrush::~CLegacyMilBrush(this);
}
