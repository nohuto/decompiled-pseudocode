/*
 * XREFs of ??$ReleaseInterface@V?$CWeakReference@VCVisual@@@@@@YAXAEAPEAV?$CWeakReference@VCVisual@@@@@Z @ 0x1800BE68C
 * Callers:
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x180091874 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ??1CInteraction@@MEAA@XZ @ 0x1800919C8 (--1CInteraction@@MEAA@XZ.c)
 *     ?UnRegisterNotifiers@CInteraction@@UEAAXXZ @ 0x18011AE30 (-UnRegisterNotifiers@CInteraction@@UEAAXXZ.c)
 *     ??_GCCursorVisual@@QEAAPEAXI@Z @ 0x1801278B0 (--_GCCursorVisual@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x18006B3FC (-Release@CWeakReferenceBase@@QEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<CWeakReference<CVisual>>(CWeakReferenceBase **a1)
{
  CWeakReferenceBase *v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = CWeakReferenceBase::Release(v2);
    *a1 = 0LL;
  }
  return result;
}
