/*
 * XREFs of ?EnableHeadEventHandler@SpatialInputControllerCollection@@AEAAJXZ @ 0x180091DAC
 * Callers:
 *     ?FinalizeControllerInitialization@SpatialInputControllerCollection@@AEAAJAEBV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z @ 0x1800933D0 (-FinalizeControllerInitialization@SpatialInputControllerCollection@@AEAAJAEBV-$shared_ptr@VSpati.c)
 *     ?TryUpdateControllerNodeReference@SpatialInputControllerCollection@@AEAAJAEBV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x180095644 (-TryUpdateControllerNodeReference@SpatialInputControllerCollection@@AEAAJAEBV-$shared_ptr@VSpati.c)
 * Callees:
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18008CCC0 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?HeadEventHandlerEnabled_@RawInputProvidersTracing@@QEAAXJ@Z @ 0x18008F400 (-HeadEventHandlerEnabled_@RawInputProvidersTracing@@QEAAXJ@Z.c)
 *     ?SetOwner@SpatialInputControllerHeadEventHandler@@QEAAJPEAVSpatialInputControllerCollection@@PEAUIMessageSession@@@Z @ 0x180091ACC (-SetOwner@SpatialInputControllerHeadEventHandler@@QEAAJPEAVSpatialInputControllerCollection@@PEA.c)
 *     ??$MakeAndInitialize@VSpatialInputControllerHeadEventHandler@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VSpatialInputControllerHeadEventHandler@@@WRL@Microsoft@@@012@@Z @ 0x18009825C (--$MakeAndInitialize@VSpatialInputControllerHeadEventHandler@@V1@$$V@Details@WRL@Microsoft@@YAJV.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialInputControllerCollection::EnableHeadEventHandler(SpatialInputControllerCollection *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v3; // ebp
  _DWORD *v4; // rcx
  RawInputProvidersTracing *v5; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 2760);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 69);
  if ( !*((_QWORD *)this + 350) )
  {
    v3 = Microsoft::WRL::Details::MakeAndInitialize<SpatialInputControllerHeadEventHandler,SpatialInputControllerHeadEventHandler,>((char *)this + 2800);
    v4 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
    if ( v4 && *v4 )
    {
      RawInputProvidersTracing::Instance();
      RawInputProvidersTracing::HeadEventHandlerEnabled_(v5, v3);
    }
    if ( v3 >= 0 )
      SpatialInputControllerHeadEventHandler::SetOwner(
        *((struct EventRegistrationToken **)this + 350),
        this,
        *((struct IMessageSession **)this + 351));
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
