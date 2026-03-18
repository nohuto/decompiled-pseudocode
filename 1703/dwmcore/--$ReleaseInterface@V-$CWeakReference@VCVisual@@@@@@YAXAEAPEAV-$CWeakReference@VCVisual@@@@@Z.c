/*
 * XREFs of ??$ReleaseInterface@V?$CWeakReference@VCVisual@@@@@@YAXAEAPEAV?$CWeakReference@VCVisual@@@@@Z @ 0x1800C1D18
 * Callers:
 *     ?UnRegisterNotifiers@CInteraction@@UEAAXXZ @ 0x18004B390 (-UnRegisterNotifiers@CInteraction@@UEAAXXZ.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x18004B67C (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ??_GCCursorVisual@@QEAAPEAXI@Z @ 0x1800CF27C (--_GCCursorVisual@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x1800C1D3C (-Release@CWeakReferenceBase@@QEAAKXZ.c)
 */

unsigned int __fastcall ReleaseInterface<CWeakReference<CVisual>>(CWeakReferenceBase **a1)
{
  CWeakReferenceBase *v2; // rcx
  unsigned int result; // eax

  v2 = *a1;
  if ( v2 )
  {
    result = CWeakReferenceBase::Release(v2);
    *a1 = 0LL;
  }
  return result;
}
