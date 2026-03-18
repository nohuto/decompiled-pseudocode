/*
 * XREFs of ?SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z @ 0x18004E780
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18003DDEC (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180051F3C (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800B3E30 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetCachedWindowBackgroundTreatment(CVisual *this, struct CCachedWindowBackgroundTreatment *a2)
{
  struct CCachedWindowBackgroundTreatment *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  if ( a2 == (struct CCachedWindowBackgroundTreatment *)`CVisual::SetCachedWindowBackgroundTreatment'::`2'::sc_defaultValue )
    *(_DWORD *)(*((_QWORD *)this + 26) + 4LL) &= ~0x8000u;
  else
    CSparseStorage::SetData((CVisual *)((char *)this + 208), 0x11u, 8u, &v2);
}
