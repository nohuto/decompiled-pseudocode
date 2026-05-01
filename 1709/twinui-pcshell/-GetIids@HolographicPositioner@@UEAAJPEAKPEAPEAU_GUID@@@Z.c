/*
 * XREFs of ?GetIids@HolographicPositioner@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800FAA40
 * Callers:
 *     ?GetIids@HolographicPositioner@@WJI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801065D0 (-GetIids@HolographicPositioner@@WJI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@HolographicPositioner@@WKA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180106850 (-GetIids@HolographicPositioner@@WKA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@HolographicPositioner@@WKI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180106AD0 (-GetIids@HolographicPositioner@@WKI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HolographicPositioner::GetIids(HolographicPositioner *this, unsigned int *a2, struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IHolographicPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInternalFullScreenHandler,IHolographicViewManager,IHolographicViewTransitionNotificationService,Windows::Internal::Shell::Holographic::IHolographicViewHostItemSource,Windows::Internal::Shell::Holographic::IHolographicViewHostItemHistory,Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::CloakedIid<IShellPositionerViewHandoff>,Microsoft::WRL::CloakedIid<IApplicationViewChangeListener>,Microsoft::WRL::CloakedIid<IPrivilegedOperationsConsumer>>>::GetIids(
           this,
           a2,
           a3);
}
