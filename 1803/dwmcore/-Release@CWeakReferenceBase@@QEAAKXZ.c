/*
 * XREFs of ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x180034B54
 * Callers:
 *     ?ClearWeakReference@CComposition@@QEAAXPEAVCResource@@@Z @ 0x180034930 (-ClearWeakReference@CComposition@@QEAAXPEAVCResource@@@Z.c)
 *     ??$ReleaseInterface@V?$CWeakReference@VCVisual@@@@@@YAXAEAPEAV?$CWeakReference@VCVisual@@@@@Z @ 0x180034E00 (--$ReleaseInterface@V-$CWeakReference@VCVisual@@@@@@YAXAEAPEAV-$CWeakReference@VCVisual@@@@@Z.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18003BD74 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?Partition_SetExcludeFromDDA@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETEXCLUDEFROMDDA@@@Z @ 0x18014A77C (-Partition_SetExcludeFromDDA@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMIL.c)
 *     ?Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETMAGNIFIER@@@Z @ 0x18014A820 (-Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_P.c)
 *     ??1DataSourceProxy@@UEAA@XZ @ 0x18016B090 (--1DataSourceProxy@@UEAA@XZ.c)
 *     ?UnregisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x18016BC14 (-UnregisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 *     ?InsertDependenciesForAxis@CInteractionTracker@@QEAAX_KW4ScrollAxis@@@Z @ 0x18019484C (-InsertDependenciesForAxis@CInteractionTracker@@QEAAX_KW4ScrollAxis@@@Z.c)
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x180196C68 (-StopCustomAnimation@CInteractionTracker@@AEAAXH@Z.c)
 *     ??1CManipulation@@UEAA@XZ @ 0x180198F84 (--1CManipulation@@UEAA@XZ.c)
 *     ?ClearVisualGroupData@CVisualGroup@@AEAAXXZ @ 0x1801A94C4 (-ClearVisualGroupData@CVisualGroup@@AEAAXXZ.c)
 *     ?SetExcludeSubtree@CVisualGroup@@QEAAX_N@Z @ 0x1801A98AC (-SetExcludeSubtree@CVisualGroup@@QEAAX_N@Z.c)
 *     ??$ReleaseInterface@V?$CWeakReference@VCInteractionTracker@@@@@@YAXAEAPEAV?$CWeakReference@VCInteractionTracker@@@@@Z @ 0x1801BDAB4 (--$ReleaseInterface@V-$CWeakReference@VCInteractionTracker@@@@@@YAXAEAPEAV-$CWeakReference@VCInt.c)
 *     ?InsertDependenciesForAxis@InteractionSourceManager@@QEAAX_KW4ScrollAxis@@@Z @ 0x1801C9EC0 (-InsertDependenciesForAxis@InteractionSourceManager@@QEAAX_KW4ScrollAxis@@@Z.c)
 *     ??_ECNaturalAnimationScalarForceAdapater@@UEAAPEAXI@Z @ 0x1801CC9C0 (--_ECNaturalAnimationScalarForceAdapater@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCWeakReferenceBase@@QEAAPEAXI@Z @ 0x180034AA0 (--_GCWeakReferenceBase@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CWeakReferenceBase::Release(CWeakReferenceBase *this)
{
  bool v1; // zf
  unsigned int v3; // esi
  void *v5; // rdx
  __int64 v6; // rbx

  v1 = (*((_DWORD *)this + 14))-- == 1;
  v3 = *((_DWORD *)this + 14);
  if ( v1 )
  {
    if ( *(_QWORD *)this )
    {
      v5 = (void *)*((_QWORD *)this + 6);
      v6 = *(_QWORD *)(*(_QWORD *)v5 + 8LL);
      RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)(*(_QWORD *)this + 1112LL), v5);
      *(_DWORD *)(v6 + 32) &= ~8u;
    }
    CWeakReferenceBase::`scalar deleting destructor'(this);
  }
  return v3;
}
