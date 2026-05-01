/*
 * XREFs of ?GetIids@HolographicPositioner@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801AE870
 * Callers:
 *     ?GetIids@HolographicPositioner@@WJI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800A6AC0 (-GetIids@HolographicPositioner@@WJI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@HolographicPositioner@@WKA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800A6AD0 (-GetIids@HolographicPositioner@@WKA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HolographicPositioner::GetIids(__int64 this, _DWORD *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IHolographicPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInternalFullScreenHandler,IHolographicViewManager,IHolographicViewTransitionNotificationService,Windows::Internal::Shell::Holographic::IHolographicViewHostItemSource,Windows::Internal::Shell::Holographic::IHolographicViewHostItemHistory>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::CloakedIid<IShellPositionerViewHandoff>,Microsoft::WRL::CloakedIid<IApplicationViewChangeListener>>>::GetIids(
           this,
           a2,
           a3);
}
