/*
 * XREFs of ?SetButtonLatencyMicroseconds@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAAXH@Z @ 0x1800D6060
 * Callers:
 *     ?OnSpatialGraphNodePropertiesUpdated@NodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialGraphDriverClient@Holographic@34@AEBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@634@@Z @ 0x1800D5760 (-OnSpatialGraphNodePropertiesUpdated@NodePropertyChangedHandler@SpatialInteractions@Internal@Win.c)
 *     ??0SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@PEAUIHidDevice@123@KKV?$function@$$A6AXXZ@std@@@Z @ 0x1800D59A4 (--0SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@PEAUIHidDevice@.c)
 *     ?EnsureDynamicNodeForDevice@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJPEAUISpatialGraphDriverClient@Holographic@34@PEAUDynamicNodeInfo@634@PEAK@Z @ 0x1800D84F4 (-EnsureDynamicNodeForDevice@SpatialInteractionSourceController@SpatialInteractions@Internal@Wind.c)
 * Callees:
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x18009B17C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?ControllerNodeButtonLatencySet_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKKH@Z @ 0x1800D37F8 (-ControllerNodeButtonLatencySet_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKKH@Z.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SetButtonLatencyMicroseconds(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        int a2)
{
  _DWORD *v4; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v5; // rcx

  _InterlockedExchange64((volatile __int64 *)this + 110, qword_180136738 * a2 / 1000000);
  v4 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( v4 )
  {
    if ( *v4 )
    {
      SpatialInteractionDevices::SpatialInteractionTrace::Instance();
      SpatialInteractionDevices::SpatialInteractionTrace::ControllerNodeButtonLatencySet_(
        v5,
        *((_DWORD *)this + 2),
        *((_DWORD *)this + 3),
        a2);
    }
  }
}
