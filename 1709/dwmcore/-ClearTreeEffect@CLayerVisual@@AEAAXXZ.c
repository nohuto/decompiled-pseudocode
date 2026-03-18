/*
 * XREFs of ?ClearTreeEffect@CLayerVisual@@AEAAXXZ @ 0x180083498
 * Callers:
 *     ?ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LAYERVISUAL_SETEFFECT@@@Z @ 0x180083320 (-ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LAYERVISUAL_SETEFFECT@@@Z.c)
 *     ??1CLayerVisual@@UEAA@XZ @ 0x180083830 (--1CLayerVisual@@UEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CLayerVisual::ClearTreeEffect(CLayerVisual *this)
{
  struct CResource **v2; // rbx
  struct CResource *v3; // rcx

  v2 = (struct CResource **)(*(__int64 (__fastcall **)(CLayerVisual *))(*(_QWORD *)this + 184LL))(this);
  CResource::UnRegisterNotifierInternal(this, *v2);
  v3 = *v2;
  if ( *v2 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  WPF::ProcessHeapImpl::Free(v2);
  *((_QWORD *)this + 65) = 0LL;
}
