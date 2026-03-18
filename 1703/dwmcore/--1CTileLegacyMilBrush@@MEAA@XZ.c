/*
 * XREFs of ??1CTileLegacyMilBrush@@MEAA@XZ @ 0x18007C3FC
 * Callers:
 *     ??1CImageLegacyMilBrush@@MEAA@XZ @ 0x18007BA88 (--1CImageLegacyMilBrush@@MEAA@XZ.c)
 *     ??_GCTileLegacyMilBrush@@MEAAPEAXI@Z @ 0x180153F60 (--_GCTileLegacyMilBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CMILBrushBitmap@@MEAA@XZ @ 0x180054204 (--1CMILBrushBitmap@@MEAA@XZ.c)
 */

void __fastcall CTileLegacyMilBrush::~CTileLegacyMilBrush(CTileLegacyMilBrush *this)
{
  *(_QWORD *)this = &CTileLegacyMilBrush::`vftable';
  CMILBrushBitmap::~CMILBrushBitmap((CTileLegacyMilBrush *)((char *)this + 112));
  CLegacyMilBrush::~CLegacyMilBrush(this);
}
