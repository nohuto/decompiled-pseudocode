/*
 * XREFs of ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180029500
 * Callers:
 *     ??$CreateActivationFactory@VMPCManagerClientFactory@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180027250 (--$CreateActivationFactory@VMPCManagerClientFactory@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorM.c)
 *     ??0HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@QEAA@KKK@Z @ 0x180029E10 (--0HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@QEAA@KKK@Z.c)
 *     ??0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z @ 0x180058CE4 (--0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z.c)
 *     ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x18007124C (-DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 *     ??$MakeAndInitialize@VActivationProcessor@@V1@PEAVDWMInputRouter@@@Details@WRL@Microsoft@@YAJPEAPEAVActivationProcessor@@$$QEAPEAVDWMInputRouter@@@Z @ 0x180081AE8 (--$MakeAndInitialize@VActivationProcessor@@V1@PEAVDWMInputRouter@@@Details@WRL@Microsoft@@YAJPEA.c)
 *     ??0SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x1800AAA98 (--0SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAA@XZ.c)
 *     ?OnHitTest@ActivationProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800B9410 (-OnHitTest@ActivationProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorIni.c)
 *     ??$MakeAndInitialize@VSpatialGraphNodeReference@Holographic@Internal@Windows@@UISpatialGraphNodeReference@234@AEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEBUDynamicNodeInfo@234@AEAW4SPATIAL_TRACKING_STATE@@AEAUSpatialGraphSettings@234@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@AEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEBUDynamicNodeInfo@456@AEAW4SPATIAL_TRACKING_STATE@@AEAUSpatialGraphSettings@456@@Z @ 0x1800CCA58 (--$MakeAndInitialize@VSpatialGraphNodeReference@Holographic@Internal@Windows@@UISpatialGraphNode.c)
 *     ??0SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAA@XZ @ 0x1800CD5E4 (--0SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAA@XZ.c)
 *     ??0?$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Microsoft@@QEAA@XZ @ 0x1800D06DC (--0-$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Micros.c)
 *     ??$MakeAndInitialize@VSimpleTimeProvider@HapticsEngine@SpatialInteractions@Internal@Windows@@UIHapticsTimerProvider@345@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIHapticsTimerProvider@SpatialInteractions@Internal@Windows@@@Z @ 0x1800DA064 (--$MakeAndInitialize@VSimpleTimeProvider@HapticsEngine@SpatialInteractions@Internal@Windows@@UIH.c)
 *     ??0HapticsEngine@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x1800DA40C (--0HapticsEngine@SpatialInteractions@Internal@Windows@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VNodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@V1234@PEAVSpatialInteractionSourceController@234@AEBUSPATIAL_NODE_ID@@AEAPEAUISpatialGraphDriverClient@Holographic@34@@Details@WRL@Microsoft@@YAJPEAPEAVNodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@$$QEAPEAVSpatialInteractionSourceController@456@AEBUSPATIAL_NODE_ID@@AEAPEAUISpatialGraphDriverClient@Holographic@56@@Z @ 0x1800DA82C (--$MakeAndInitialize@VNodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@V1234@PEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

Microsoft::WRL::FtmBase *__fastcall Microsoft::WRL::FtmBase::FtmBase(Microsoft::WRL::FtmBase *this)
{
  __int64 *v1; // rbx
  __int64 v3; // rcx
  LPUNKNOWN v4; // rcx
  LPUNKNOWN ppunkMarshal; // [rsp+30h] [rbp+8h] BYREF

  ppunkMarshal = 0LL;
  v1 = (__int64 *)((char *)this + 24);
  *(_QWORD *)this = &Microsoft::WRL::FtmBase::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
  {
    v3 = *v1;
    if ( *v1 )
    {
      *v1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    ((void (__fastcall *)(LPUNKNOWN, GUID *, __int64 *))ppunkMarshal->lpVtbl->QueryInterface)(
      ppunkMarshal,
      &GUID_00000003_0000_0000_c000_000000000046,
      v1);
  }
  v4 = ppunkMarshal;
  if ( ppunkMarshal )
  {
    ppunkMarshal = 0LL;
    ((void (__fastcall *)(LPUNKNOWN))v4->lpVtbl->Release)(v4);
  }
  return this;
}
