/*
 * XREFs of ??1CCommandListBitmapRepresentation@@MEAA@XZ @ 0x1800C2D68
 * Callers:
 *     ??1CHwndBitmap@@MEAA@XZ @ 0x180020210 (--1CHwndBitmap@@MEAA@XZ.c)
 *     ??1CCompositionSurfaceBitmap@@MEAA@XZ @ 0x1800374DC (--1CCompositionSurfaceBitmap@@MEAA@XZ.c)
 *     ??_GCCommandListBitmapRepresentation@@MEAAPEAXI@Z @ 0x180153DB0 (--_GCCommandListBitmapRepresentation@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseAllCommandListRepresentations@CCommandListBitmapRepresentation@@IEAAXXZ @ 0x1800C2D04 (-ReleaseAllCommandListRepresentations@CCommandListBitmapRepresentation@@IEAAXXZ.c)
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x1800C75BC (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 */

void __fastcall CCommandListBitmapRepresentation::~CCommandListBitmapRepresentation(void **this)
{
  *this = &CCommandListBitmapRepresentation::`vftable';
  CCommandListBitmapRepresentation::ReleaseAllCommandListRepresentations((CCommandListBitmapRepresentation *)this);
  ReleaseInterface<CDisplay>(this + 38);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 39);
}
