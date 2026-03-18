/*
 * XREFs of ??$ReleaseInterface@V?$CWeakReference@VCVisual@@@@@@YAXAEAPEAV?$CWeakReference@VCVisual@@@@@Z @ 0x180034E00
 * Callers:
 *     ?OnWeakReferenceTargetRemoved@CVisualReferenceController@@UEAAXPEAVCWeakReferenceBase@@@Z @ 0x180027FA0 (-OnWeakReferenceTargetRemoved@CVisualReferenceController@@UEAAXPEAVCWeakReferenceBase@@@Z.c)
 *     ?UnRegisterNotifiers@CVisualReferenceController@@UEAAXXZ @ 0x180027FD0 (-UnRegisterNotifiers@CVisualReferenceController@@UEAAXXZ.c)
 *     ?ProcessUpdate@CVisualReferenceController@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALREFERENCECONTROLLER@@@Z @ 0x180028078 (-ProcessUpdate@CVisualReferenceController@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALREFERENCECO.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x180028438 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ??1CInteraction@@MEAA@XZ @ 0x1800285B0 (--1CInteraction@@MEAA@XZ.c)
 *     ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800D9F60 (--_GCCursorVisualReference@@QEAAPEAXI@Z.c)
 *     ?UnRegisterNotifiers@CInteraction@@UEAAXXZ @ 0x18013D550 (-UnRegisterNotifiers@CInteraction@@UEAAXXZ.c)
 * Callees:
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x180034B54 (-Release@CWeakReferenceBase@@QEAAKXZ.c)
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
