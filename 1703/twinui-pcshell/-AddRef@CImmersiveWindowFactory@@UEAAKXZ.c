/*
 * XREFs of ?AddRef@CImmersiveWindowFactory@@UEAAKXZ @ 0x180191970
 * Callers:
 *     ?AddRef@CImmersiveWindowFactory@@WDI@EAAKXZ @ 0x180192620 (-AddRef@CImmersiveWindowFactory@@WDI@EAAKXZ.c)
 *     ?AddRef@CImmersiveWindowFactory@@W7EAAKXZ @ 0x1801926B0 (-AddRef@CImmersiveWindowFactory@@W7EAAKXZ.c)
 *     ?AddRef@CImmersiveWindowFactory@@WCI@EAAKXZ @ 0x1801926D0 (-AddRef@CImmersiveWindowFactory@@WCI@EAAKXZ.c)
 *     ?AddRef@CImmersiveWindowFactory@@WII@EAAKXZ @ 0x180192720 (-AddRef@CImmersiveWindowFactory@@WII@EAAKXZ.c)
 *     ?AddRef@CImmersiveWindowFactory@@WDA@EAAKXZ @ 0x180192760 (-AddRef@CImmersiveWindowFactory@@WDA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CImmersiveWindowFactory::AddRef(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<IApplicationFrameEventHandler,Microsoft::WRL::Details::InterfaceList<IImmersiveLayoutChanges,Microsoft::WRL::Details::InterfaceList<ITabTipAdapterOwner,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef(this);
}
