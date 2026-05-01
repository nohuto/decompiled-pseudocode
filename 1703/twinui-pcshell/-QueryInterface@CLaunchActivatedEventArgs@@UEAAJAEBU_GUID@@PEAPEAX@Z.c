/*
 * XREFs of ?QueryInterface@CLaunchActivatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18018EA10
 * Callers:
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WMA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180190140 (-QueryInterface@CLaunchActivatedEventArgs@@WMA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WOA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801901A0 (-QueryInterface@CLaunchActivatedEventArgs@@WOA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180190220 (-QueryInterface@CLaunchActivatedEventArgs@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180190260 (-QueryInterface@CLaunchActivatedEventArgs@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801902F0 (-QueryInterface@CLaunchActivatedEventArgs@@WII@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180190410 (-QueryInterface@CLaunchActivatedEventArgs@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180190520 (-QueryInterface@CLaunchActivatedEventArgs@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WNA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801905D0 (-QueryInterface@CLaunchActivatedEventArgs@@WNA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180190680 (-QueryInterface@CLaunchActivatedEventArgs@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180190770 (-QueryInterface@CLaunchActivatedEventArgs@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WLI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180190840 (-QueryInterface@CLaunchActivatedEventArgs@@WLI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WNI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180190880 (-QueryInterface@CLaunchActivatedEventArgs@@WNI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180190920 (-QueryInterface@CLaunchActivatedEventArgs@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801909B0 (-QueryInterface@CLaunchActivatedEventArgs@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CLaunchActivatedEventArgs::QueryInterface(
        CLaunchActivatedEventArgs *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CActivatedEventArgsWithPrelaunchAndViewIdBase,Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::QueryInterface(
           this,
           a2,
           a3);
}
