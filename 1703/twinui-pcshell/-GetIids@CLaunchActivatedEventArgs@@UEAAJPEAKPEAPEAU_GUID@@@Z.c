/*
 * XREFs of ?GetIids@CLaunchActivatedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18018EA00
 * Callers:
 *     ?GetIids@CLaunchActivatedEventArgs@@WHA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801901C0 (-GetIids@CLaunchActivatedEventArgs@@WHA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180190310 (-GetIids@CLaunchActivatedEventArgs@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WHI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801903A0 (-GetIids@CLaunchActivatedEventArgs@@WHI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WLI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180190470 (-GetIids@CLaunchActivatedEventArgs@@WLI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WNI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801904C0 (-GetIids@CLaunchActivatedEventArgs@@WNI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WCA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180190560 (-GetIids@CLaunchActivatedEventArgs@@WCA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WIA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180190600 (-GetIids@CLaunchActivatedEventArgs@@WIA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WMA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801906D0 (-GetIids@CLaunchActivatedEventArgs@@WMA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WOA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180190710 (-GetIids@CLaunchActivatedEventArgs@@WOA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@W7EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180190790 (-GetIids@CLaunchActivatedEventArgs@@W7EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WII@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801908C0 (-GetIids@CLaunchActivatedEventArgs@@WII@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801909D0 (-GetIids@CLaunchActivatedEventArgs@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CLaunchActivatedEventArgs::GetIids(
        CLaunchActivatedEventArgs *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CActivatedEventArgsWithPrelaunchAndViewIdBase,Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::GetIids(
           this,
           a2,
           a3);
}
