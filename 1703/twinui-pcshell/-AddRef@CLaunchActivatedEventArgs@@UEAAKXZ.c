/*
 * XREFs of ?AddRef@CLaunchActivatedEventArgs@@UEAAKXZ @ 0x18018EA30
 * Callers:
 *     ?AddRef@CLaunchActivatedEventArgs@@WLI@EAAKXZ @ 0x180190150 (-AddRef@CLaunchActivatedEventArgs@@WLI@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WNI@EAAKXZ @ 0x1801901B0 (-AddRef@CLaunchActivatedEventArgs@@WNI@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WCA@EAAKXZ @ 0x180190270 (-AddRef@CLaunchActivatedEventArgs@@WCA@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WIA@EAAKXZ @ 0x180190300 (-AddRef@CLaunchActivatedEventArgs@@WIA@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WMA@EAAKXZ @ 0x180190360 (-AddRef@CLaunchActivatedEventArgs@@WMA@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WOA@EAAKXZ @ 0x180190390 (-AddRef@CLaunchActivatedEventArgs@@WOA@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@W7EAAKXZ @ 0x180190420 (-AddRef@CLaunchActivatedEventArgs@@W7EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WCI@EAAKXZ @ 0x180190490 (-AddRef@CLaunchActivatedEventArgs@@WCI@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WII@EAAKXZ @ 0x180190550 (-AddRef@CLaunchActivatedEventArgs@@WII@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WBA@EAAKXZ @ 0x180190690 (-AddRef@CLaunchActivatedEventArgs@@WBA@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WHA@EAAKXZ @ 0x180190780 (-AddRef@CLaunchActivatedEventArgs@@WHA@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WNA@EAAKXZ @ 0x180190890 (-AddRef@CLaunchActivatedEventArgs@@WNA@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WBI@EAAKXZ @ 0x180190930 (-AddRef@CLaunchActivatedEventArgs@@WBI@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WHI@EAAKXZ @ 0x1801909C0 (-AddRef@CLaunchActivatedEventArgs@@WHI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CLaunchActivatedEventArgs::AddRef(CLaunchActivatedEventArgs *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CActivatedEventArgsWithPrelaunchAndViewIdBase,Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::AddRef(this);
}
