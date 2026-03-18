/*
 * XREFs of ?ClearTreeEffect@CLayerVisual@@AEAAXXZ @ 0x180013ECC
 * Callers:
 *     ?ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LAYERVISUAL_SETEFFECT@@@Z @ 0x1800140B0 (-ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LAYERVISUAL_SETEFFECT@@@Z.c)
 *     ??1CLayerVisual@@UEAA@XZ @ 0x1800C1ADC (--1CLayerVisual@@UEAA@XZ.c)
 * Callees:
 *     ?GetTreeEffectInternal@CVisual@@QEBAPEAVCTreeEffect@@XZ @ 0x1800136BC (-GetTreeEffectInternal@CVisual@@QEBAPEAVCTreeEffect@@XZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CLayerVisual::ClearTreeEffect(CLayerVisual *this)
{
  struct CResource **TreeEffectInternal; // rbx
  struct CResource *v3; // rcx

  TreeEffectInternal = (struct CResource **)CVisual::GetTreeEffectInternal(this);
  CResource::UnRegisterNotifierInternal(this, *TreeEffectInternal);
  v3 = *TreeEffectInternal;
  if ( *TreeEffectInternal )
  {
    *TreeEffectInternal = 0LL;
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  WPF::ProcessHeapImpl::Free(TreeEffectInternal);
  CVisual::SetTreeEffectInternal(this, 0LL);
}
