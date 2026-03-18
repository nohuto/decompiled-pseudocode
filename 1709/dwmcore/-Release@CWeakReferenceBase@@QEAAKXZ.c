/*
 * XREFs of ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x18006B3FC
 * Callers:
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x180051AC0 (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPAREN.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180051F3C (--1CVisual@@MEAA@XZ.c)
 *     ?OnWeakReferenceTargetRemoved@CVisual@@UEAAXPEAVCWeakReferenceBase@@@Z @ 0x180052890 (-OnWeakReferenceTargetRemoved@CVisual@@UEAAXPEAVCWeakReferenceBase@@@Z.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x1800A23EC (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ??1CBaseExpression@@UEAA@XZ @ 0x1800A32DC (--1CBaseExpression@@UEAA@XZ.c)
 *     ??1CExpression@@UEAA@XZ @ 0x1800A81F4 (--1CExpression@@UEAA@XZ.c)
 *     ?ClearWeakReference@CComposition@@QEAAXPEAVCResource@@@Z @ 0x1800AA980 (-ClearWeakReference@CComposition@@QEAAXPEAVCResource@@@Z.c)
 *     ??$ReleaseInterface@V?$CWeakReference@VCVisual@@@@@@YAXAEAPEAV?$CWeakReference@VCVisual@@@@@Z @ 0x1800BE68C (--$ReleaseInterface@V-$CWeakReference@VCVisual@@@@@@YAXAEAPEAV-$CWeakReference@VCVisual@@@@@Z.c)
 *     ?Partition_SetExcludeFromDDA@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETEXCLUDEFROMDDA@@@Z @ 0x180128A18 (-Partition_SetExcludeFromDDA@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMIL.c)
 *     ?Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETMAGNIFIER@@@Z @ 0x180128ABC (-Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_P.c)
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x18016EA90 (-StopCustomAnimation@CInteractionTracker@@AEAAXH@Z.c)
 *     ??1CManipulation@@UEAA@XZ @ 0x1801702B8 (--1CManipulation@@UEAA@XZ.c)
 *     ?ClearVisualGroupData@CVisualGroup@@AEAAXXZ @ 0x180178340 (-ClearVisualGroupData@CVisualGroup@@AEAAXXZ.c)
 *     ?SetExcludeSubtree@CVisualGroup@@QEAAX_N@Z @ 0x18017873C (-SetExcludeSubtree@CVisualGroup@@QEAAX_N@Z.c)
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x1801886C0 (--1CScrollAnimation@@UEAA@XZ.c)
 *     ??_ECNaturalAnimationScalarForceAdapater@@UEAAPEAXI@Z @ 0x180193B74 (--_ECNaturalAnimationScalarForceAdapater@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
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
      RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)(*(_QWORD *)this + 1088LL), v5);
      *(_DWORD *)(v6 + 32) &= ~8u;
    }
    DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 2);
    WPF::ProcessHeapImpl::Free(this);
  }
  return v3;
}
