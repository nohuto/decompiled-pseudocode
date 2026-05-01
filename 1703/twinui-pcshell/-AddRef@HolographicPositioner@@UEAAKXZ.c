/*
 * XREFs of ?AddRef@HolographicPositioner@@UEAAKXZ @ 0x1800D7650
 * Callers:
 *     ?AddRef@HolographicPositioner@@W7EAAKXZ @ 0x1800E15D0 (-AddRef@HolographicPositioner@@W7EAAKXZ.c)
 *     ?AddRef@HolographicPositioner@@WCI@EAAKXZ @ 0x1800E1600 (-AddRef@HolographicPositioner@@WCI@EAAKXZ.c)
 *     ?AddRef@HolographicPositioner@@WGI@EAAKXZ @ 0x1800E16A0 (-AddRef@HolographicPositioner@@WGI@EAAKXZ.c)
 *     ?AddRef@HolographicPositioner@@WII@EAAKXZ @ 0x1800E1700 (-AddRef@HolographicPositioner@@WII@EAAKXZ.c)
 *     ?AddRef@HolographicPositioner@@WKI@EAAKXZ @ 0x1800E1760 (-AddRef@HolographicPositioner@@WKI@EAAKXZ.c)
 *     ?AddRef@HolographicPositioner@@WDA@EAAKXZ @ 0x1800E1860 (-AddRef@HolographicPositioner@@WDA@EAAKXZ.c)
 *     ?AddRef@HolographicPositioner@@WHA@EAAKXZ @ 0x1800E18A0 (-AddRef@HolographicPositioner@@WHA@EAAKXZ.c)
 *     ?AddRef@HolographicPositioner@@WJA@EAAKXZ @ 0x1800E18E0 (-AddRef@HolographicPositioner@@WJA@EAAKXZ.c)
 *     ?AddRef@HolographicPositioner@@WFI@EAAKXZ @ 0x1800E1AF0 (-AddRef@HolographicPositioner@@WFI@EAAKXZ.c)
 *     ?AddRef@HolographicPositioner@@WHI@EAAKXZ @ 0x1800E1B30 (-AddRef@HolographicPositioner@@WHI@EAAKXZ.c)
 *     ?AddRef@HolographicPositioner@@WJI@EAAKXZ @ 0x1800E1B80 (-AddRef@HolographicPositioner@@WJI@EAAKXZ.c)
 *     ?AddRef@HolographicPositioner@@WGA@EAAKXZ @ 0x1800E1D40 (-AddRef@HolographicPositioner@@WGA@EAAKXZ.c)
 *     ?AddRef@HolographicPositioner@@WIA@EAAKXZ @ 0x1800E1D90 (-AddRef@HolographicPositioner@@WIA@EAAKXZ.c)
 *     ?AddRef@HolographicPositioner@@WKA@EAAKXZ @ 0x1800E1DF0 (-AddRef@HolographicPositioner@@WKA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall HolographicPositioner::AddRef(HolographicPositioner *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IHolographicPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInternalFullScreenHandler,IHolographicViewManager,IHolographicViewTransitionNotificationService,Windows::Internal::Shell::Holographic::IHolographicViewHostItemSource,Windows::Internal::Shell::Holographic::IHolographicViewHostItemHistory,Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::CloakedIid<IShellPositionerViewHandoff>,Microsoft::WRL::CloakedIid<IApplicationViewChangeListener>,Microsoft::WRL::CloakedIid<IPrivilegedOperationsConsumer>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef(this);
}
