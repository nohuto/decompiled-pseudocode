/*
 * XREFs of ?Release@CLaunchActivatedEventArgs@@UEAAKXZ @ 0x18018EA20
 * Callers:
 *     ?Release@CLaunchActivatedEventArgs@@WHA@EAAKXZ @ 0x1801901D0 (-Release@CLaunchActivatedEventArgs@@WHA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WNA@EAAKXZ @ 0x180190280 (-Release@CLaunchActivatedEventArgs@@WNA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WBI@EAAKXZ @ 0x180190320 (-Release@CLaunchActivatedEventArgs@@WBI@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WHI@EAAKXZ @ 0x1801903B0 (-Release@CLaunchActivatedEventArgs@@WHI@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WLI@EAAKXZ @ 0x180190480 (-Release@CLaunchActivatedEventArgs@@WLI@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WNI@EAAKXZ @ 0x1801904D0 (-Release@CLaunchActivatedEventArgs@@WNI@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WCA@EAAKXZ @ 0x180190570 (-Release@CLaunchActivatedEventArgs@@WCA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WIA@EAAKXZ @ 0x180190610 (-Release@CLaunchActivatedEventArgs@@WIA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WMA@EAAKXZ @ 0x1801906E0 (-Release@CLaunchActivatedEventArgs@@WMA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WOA@EAAKXZ @ 0x180190720 (-Release@CLaunchActivatedEventArgs@@WOA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@W7EAAKXZ @ 0x1801907A0 (-Release@CLaunchActivatedEventArgs@@W7EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WCI@EAAKXZ @ 0x1801907E0 (-Release@CLaunchActivatedEventArgs@@WCI@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WII@EAAKXZ @ 0x1801908D0 (-Release@CLaunchActivatedEventArgs@@WII@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WBA@EAAKXZ @ 0x1801909E0 (-Release@CLaunchActivatedEventArgs@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CLaunchActivatedEventArgs::Release(CLaunchActivatedEventArgs *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CActivatedEventArgsWithPrelaunchAndViewIdBase,Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(this);
}
