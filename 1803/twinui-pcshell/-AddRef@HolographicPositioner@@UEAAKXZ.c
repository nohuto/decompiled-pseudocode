/*
 * XREFs of ?AddRef@HolographicPositioner@@UEAAKXZ @ 0x180020840
 * Callers:
 *     ?AddRef@HolographicPositioner@@W7EAAKXZ @ 0x1800A6970 (-AddRef@HolographicPositioner@@W7EAAKXZ.c)
 *     ?AddRef@HolographicPositioner@@WDA@EAAKXZ @ 0x1800A6980 (-AddRef@HolographicPositioner@@WDA@EAAKXZ.c)
 *     ?AddRef@HolographicPositioner@@WDI@EAAKXZ @ 0x1800A6990 (-AddRef@HolographicPositioner@@WDI@EAAKXZ.c)
 *     ?AddRef@HolographicPositioner@@WHA@EAAKXZ @ 0x1800A69A0 (-AddRef@HolographicPositioner@@WHA@EAAKXZ.c)
 *     ?AddRef@HolographicPositioner@@WHI@EAAKXZ @ 0x1800A69B0 (-AddRef@HolographicPositioner@@WHI@EAAKXZ.c)
 *     ?AddRef@HolographicPositioner@@WIA@EAAKXZ @ 0x1800A69C0 (-AddRef@HolographicPositioner@@WIA@EAAKXZ.c)
 *     ?AddRef@HolographicPositioner@@WII@EAAKXZ @ 0x1800A69D0 (-AddRef@HolographicPositioner@@WII@EAAKXZ.c)
 *     ?AddRef@HolographicPositioner@@WJA@EAAKXZ @ 0x1800A69E0 (-AddRef@HolographicPositioner@@WJA@EAAKXZ.c)
 *     ?AddRef@HolographicPositioner@@WJI@EAAKXZ @ 0x1800A69F0 (-AddRef@HolographicPositioner@@WJI@EAAKXZ.c)
 *     ?AddRef@HolographicPositioner@@WKA@EAAKXZ @ 0x1800A6A00 (-AddRef@HolographicPositioner@@WKA@EAAKXZ.c)
 *     ?AddRef@HolographicPositioner@@WLA@EAAKXZ @ 0x1800A6A10 (-AddRef@HolographicPositioner@@WLA@EAAKXZ.c)
 *     ?AddRef@HolographicPositioner@@WLI@EAAKXZ @ 0x1800A6A20 (-AddRef@HolographicPositioner@@WLI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall HolographicPositioner::AddRef(HolographicPositioner *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IHolographicPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInternalFullScreenHandler,IHolographicViewManager,IHolographicViewTransitionNotificationService,Windows::Internal::Shell::Holographic::IHolographicViewHostItemSource,Windows::Internal::Shell::Holographic::IHolographicViewHostItemHistory>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::CloakedIid<IShellPositionerViewHandoff>,Microsoft::WRL::CloakedIid<IApplicationViewChangeListener>>>::AddRef(this);
}
