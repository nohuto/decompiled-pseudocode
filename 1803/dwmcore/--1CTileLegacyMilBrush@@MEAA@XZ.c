/*
 * XREFs of ??1CTileLegacyMilBrush@@MEAA@XZ @ 0x1800B8284
 * Callers:
 *     ??1CImageLegacyMilBrush@@MEAA@XZ @ 0x1800B7DD8 (--1CImageLegacyMilBrush@@MEAA@XZ.c)
 *     ??_GCTileLegacyMilBrush@@MEAAPEAXI@Z @ 0x18016ED70 (--_GCTileLegacyMilBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CMILBrushBitmap@@MEAA@XZ @ 0x18001DA7C (--1CMILBrushBitmap@@MEAA@XZ.c)
 */

void __fastcall CTileLegacyMilBrush::~CTileLegacyMilBrush(CTileLegacyMilBrush *this)
{
  *(_QWORD *)this = &CTileLegacyMilBrush::`vftable';
  CMILBrushBitmap::~CMILBrushBitmap((CTileLegacyMilBrush *)((char *)this + 112));
  CLegacyMilBrush::~CLegacyMilBrush(this);
}
