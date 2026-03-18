/*
 * XREFs of ?ClearTreeEffect@CLayerVisual@@AEAAXXZ @ 0x180009DF8
 * Callers:
 *     ?ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LAYERVISUAL_SETEFFECT@@@Z @ 0x18000A1B0 (-ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LAYERVISUAL_SETEFFECT@@@Z.c)
 *     ??1CLayerVisual@@UEAA@XZ @ 0x1800BE2B0 (--1CLayerVisual@@UEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
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
  operator delete(v2);
  *((_QWORD *)this + 66) = 0LL;
}
