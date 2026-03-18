/*
 * XREFs of ?GetCachedWindowBackgroundTreatment@CVisual@@QEBAPEAVCCachedWindowBackgroundTreatment@@XZ @ 0x18014C7D4
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x180089A30 (--1CVisual@@MEAA@XZ.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18014C8F8 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 * Callees:
 *     <none>
 */

struct CCachedWindowBackgroundTreatment *__fastcall CVisual::GetCachedWindowBackgroundTreatment(CVisual *this)
{
  __int64 v1; // rcx
  __int64 i; // rcx

  v1 = *((_QWORD *)this + 26);
  if ( (*(_DWORD *)(v1 + 4) & 0x4000) == 0 )
    return 0LL;
  for ( i = v1 + 12; (*(_DWORD *)i & 0x7F000000) != 0x12000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
    ;
  return *(struct CCachedWindowBackgroundTreatment **)(i + 4);
}
