/*
 * XREFs of ?Release@CLaunchActivatedEventArgs@@UEAAKXZ @ 0x1801CDC60
 * Callers:
 *     ?Release@CLaunchActivatedEventArgs@@WJA@EAAKXZ @ 0x1801CED90 (-Release@CLaunchActivatedEventArgs@@WJA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WBBA@EAAKXZ @ 0x1801CEEC0 (-Release@CLaunchActivatedEventArgs@@WBBA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WBI@EAAKXZ @ 0x1801CEEF0 (-Release@CLaunchActivatedEventArgs@@WBI@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WJI@EAAKXZ @ 0x1801CEFD0 (-Release@CLaunchActivatedEventArgs@@WJI@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WBBI@EAAKXZ @ 0x1801CF0E0 (-Release@CLaunchActivatedEventArgs@@WBBI@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WCA@EAAKXZ @ 0x1801CF120 (-Release@CLaunchActivatedEventArgs@@WCA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WKA@EAAKXZ @ 0x1801CF200 (-Release@CLaunchActivatedEventArgs@@WKA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WOA@EAAKXZ @ 0x1801CF290 (-Release@CLaunchActivatedEventArgs@@WOA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@W7EAAKXZ @ 0x1801CF320 (-Release@CLaunchActivatedEventArgs@@W7EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WCI@EAAKXZ @ 0x1801CF340 (-Release@CLaunchActivatedEventArgs@@WCI@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WII@EAAKXZ @ 0x1801CF3B0 (-Release@CLaunchActivatedEventArgs@@WII@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WOI@EAAKXZ @ 0x1801CF460 (-Release@CLaunchActivatedEventArgs@@WOI@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WBAI@EAAKXZ @ 0x1801CF4C0 (-Release@CLaunchActivatedEventArgs@@WBAI@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WBA@EAAKXZ @ 0x1801CF4F0 (-Release@CLaunchActivatedEventArgs@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CLaunchActivatedEventArgs::Release(CLaunchActivatedEventArgs *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>::Release(this);
}
