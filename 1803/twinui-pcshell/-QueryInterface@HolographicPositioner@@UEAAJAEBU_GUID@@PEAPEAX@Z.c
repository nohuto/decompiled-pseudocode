/*
 * XREFs of ?QueryInterface@HolographicPositioner@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180021680
 * Callers:
 *     ?QueryInterface@HolographicPositioner@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A6DA0 (-QueryInterface@HolographicPositioner@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A6DB0 (-QueryInterface@HolographicPositioner@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A6DC0 (-QueryInterface@HolographicPositioner@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A6DD0 (-QueryInterface@HolographicPositioner@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A6DE0 (-QueryInterface@HolographicPositioner@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A6DF0 (-QueryInterface@HolographicPositioner@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A6E00 (-QueryInterface@HolographicPositioner@@WII@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A6E10 (-QueryInterface@HolographicPositioner@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A6E20 (-QueryInterface@HolographicPositioner@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A6E30 (-QueryInterface@HolographicPositioner@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A6E40 (-QueryInterface@HolographicPositioner@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WLI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A6E50 (-QueryInterface@HolographicPositioner@@WLI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HolographicPositioner::QueryInterface(
        HolographicPositioner *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IHolographicPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInternalFullScreenHandler,IHolographicViewManager,IHolographicViewTransitionNotificationService,Windows::Internal::Shell::Holographic::IHolographicViewHostItemSource,Windows::Internal::Shell::Holographic::IHolographicViewHostItemHistory>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::CloakedIid<IShellPositionerViewHandoff>,Microsoft::WRL::CloakedIid<IApplicationViewChangeListener>>>::QueryInterface(
           this,
           a2,
           a3);
}
