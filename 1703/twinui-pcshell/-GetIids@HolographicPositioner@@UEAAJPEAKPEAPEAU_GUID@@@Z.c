/*
 * XREFs of ?GetIids@HolographicPositioner@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800D7620
 * Callers:
 *     ?GetIids@HolographicPositioner@@WIA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800E1990 (-GetIids@HolographicPositioner@@WIA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@HolographicPositioner@@WII@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800E1C10 (-GetIids@HolographicPositioner@@WII@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@HolographicPositioner@@WJA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800E1E50 (-GetIids@HolographicPositioner@@WJA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HolographicPositioner::GetIids(HolographicPositioner *this, unsigned int *a2, struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IHolographicPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInternalFullScreenHandler,IHolographicViewManager,IHolographicViewTransitionNotificationService,Windows::Internal::Shell::Holographic::IHolographicViewHostItemSource,Windows::Internal::Shell::Holographic::IHolographicViewHostItemHistory,Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::CloakedIid<IShellPositionerViewHandoff>,Microsoft::WRL::CloakedIid<IApplicationViewChangeListener>,Microsoft::WRL::CloakedIid<IPrivilegedOperationsConsumer>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetIids(
           this,
           a2,
           a3);
}
