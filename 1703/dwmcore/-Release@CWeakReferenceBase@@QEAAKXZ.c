/*
 * XREFs of ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x1800C1D3C
 * Callers:
 *     ?OnWeakReferenceTargetRemoved@CVisual@@UEAAXPEAVCWeakReferenceBase@@@Z @ 0x180013230 (-OnWeakReferenceTargetRemoved@CVisual@@UEAAXPEAVCWeakReferenceBase@@@Z.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18002F284 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ??1CExpression@@UEAA@XZ @ 0x1800337B4 (--1CExpression@@UEAA@XZ.c)
 *     ?ClearWeakReference@CComposition@@QEAAXPEAVCResource@@@Z @ 0x18005B660 (-ClearWeakReference@CComposition@@QEAAXPEAVCResource@@@Z.c)
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x1800856C0 (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPAREN.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180089A30 (--1CVisual@@MEAA@XZ.c)
 *     ??$ReleaseInterface@V?$CWeakReference@VCVisual@@@@@@YAXAEAPEAV?$CWeakReference@VCVisual@@@@@Z @ 0x1800C1D18 (--$ReleaseInterface@V-$CWeakReference@VCVisual@@@@@@YAXAEAPEAV-$CWeakReference@VCVisual@@@@@Z.c)
 *     ?Partition_SetExcludeFromDDA@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETEXCLUDEFROMDDA@@@Z @ 0x180131310 (-Partition_SetExcludeFromDDA@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMIL.c)
 *     ?Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETMAGNIFIER@@@Z @ 0x1801313B4 (-Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_P.c)
 *     ?ClearVisualGroupData@CVisualGroup@@AEAAXXZ @ 0x180163200 (-ClearVisualGroupData@CVisualGroup@@AEAAXXZ.c)
 *     ?SetExcludeSubtree@CVisualGroup@@QEAAX_N@Z @ 0x180163498 (-SetExcludeSubtree@CVisualGroup@@QEAAX_N@Z.c)
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x18016E91C (-StopCustomAnimation@CInteractionTracker@@AEAAXH@Z.c)
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x180181314 (--1CScrollAnimation@@UEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

__int64 __fastcall CWeakReferenceBase::Release(struct _RTL_GENERIC_TABLE **this)
{
  bool v1; // zf
  unsigned int v3; // esi
  struct _RTL_GENERIC_TABLE *v5; // rdx
  struct _RTL_SPLAY_LINKS *LeftChild; // rbx

  v1 = (*((_DWORD *)this + 14))-- == 1;
  v3 = *((_DWORD *)this + 14);
  if ( v1 )
  {
    if ( *this )
    {
      v5 = this[6];
      LeftChild = v5->TableRoot->LeftChild;
      RtlDeleteElementGenericTable(*this + 16, v5);
      LODWORD(LeftChild[1].LeftChild) &= ~8u;
    }
    DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 2);
    WPF::ProcessHeapImpl::Free(this);
  }
  return v3;
}
