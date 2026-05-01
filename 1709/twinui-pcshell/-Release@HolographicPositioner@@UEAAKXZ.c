/*
 * XREFs of ?Release@HolographicPositioner@@UEAAKXZ @ 0x1800FAA60
 * Callers:
 *     ?Release@HolographicPositioner@@WHA@EAAKXZ @ 0x180106480 (-Release@HolographicPositioner@@WHA@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WJA@EAAKXZ @ 0x1801064B0 (-Release@HolographicPositioner@@WJA@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WDI@EAAKXZ @ 0x1801065F0 (-Release@HolographicPositioner@@WDI@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WHI@EAAKXZ @ 0x1801066A0 (-Release@HolographicPositioner@@WHI@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WJI@EAAKXZ @ 0x1801066E0 (-Release@HolographicPositioner@@WJI@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WLI@EAAKXZ @ 0x180106730 (-Release@HolographicPositioner@@WLI@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WIA@EAAKXZ @ 0x1801068B0 (-Release@HolographicPositioner@@WIA@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WKA@EAAKXZ @ 0x180106910 (-Release@HolographicPositioner@@WKA@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WMA@EAAKXZ @ 0x180106970 (-Release@HolographicPositioner@@WMA@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@W7EAAKXZ @ 0x180106A30 (-Release@HolographicPositioner@@W7EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WII@EAAKXZ @ 0x180106BA0 (-Release@HolographicPositioner@@WII@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WKI@EAAKXZ @ 0x180106BE0 (-Release@HolographicPositioner@@WKI@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WMI@EAAKXZ @ 0x180106C20 (-Release@HolographicPositioner@@WMI@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WDA@EAAKXZ @ 0x180106CD0 (-Release@HolographicPositioner@@WDA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall HolographicPositioner::Release(HolographicPositioner *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IHolographicPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInternalFullScreenHandler,IHolographicViewManager,IHolographicViewTransitionNotificationService,Windows::Internal::Shell::Holographic::IHolographicViewHostItemSource,Windows::Internal::Shell::Holographic::IHolographicViewHostItemHistory,Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::CloakedIid<IShellPositionerViewHandoff>,Microsoft::WRL::CloakedIid<IApplicationViewChangeListener>,Microsoft::WRL::CloakedIid<IPrivilegedOperationsConsumer>>>::Release(this);
}
