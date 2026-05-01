/*
 * XREFs of ?Release@HolographicPositioner@@UEAAKXZ @ 0x180021690
 * Callers:
 *     ?Release@HolographicPositioner@@W7EAAKXZ @ 0x1800A6F80 (-Release@HolographicPositioner@@W7EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WDA@EAAKXZ @ 0x1800A6F90 (-Release@HolographicPositioner@@WDA@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WDI@EAAKXZ @ 0x1800A6FA0 (-Release@HolographicPositioner@@WDI@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WHA@EAAKXZ @ 0x1800A6FB0 (-Release@HolographicPositioner@@WHA@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WHI@EAAKXZ @ 0x1800A6FC0 (-Release@HolographicPositioner@@WHI@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WIA@EAAKXZ @ 0x1800A6FD0 (-Release@HolographicPositioner@@WIA@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WII@EAAKXZ @ 0x1800A6FE0 (-Release@HolographicPositioner@@WII@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WJA@EAAKXZ @ 0x1800A6FF0 (-Release@HolographicPositioner@@WJA@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WJI@EAAKXZ @ 0x1800A7000 (-Release@HolographicPositioner@@WJI@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WKA@EAAKXZ @ 0x1800A7010 (-Release@HolographicPositioner@@WKA@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WLA@EAAKXZ @ 0x1800A7020 (-Release@HolographicPositioner@@WLA@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WLI@EAAKXZ @ 0x1800A7030 (-Release@HolographicPositioner@@WLI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall HolographicPositioner::Release(HolographicPositioner *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IWnfCallback,IEyeControlAdapterOwner,IEyeControlManager,IInputDeviceWatcherOwner,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::Release(this);
}
