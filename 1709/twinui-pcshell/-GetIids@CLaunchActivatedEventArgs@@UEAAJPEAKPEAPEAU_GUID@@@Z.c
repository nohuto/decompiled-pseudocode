/*
 * XREFs of ?GetIids@CLaunchActivatedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801CDC40
 * Callers:
 *     ?GetIids@CLaunchActivatedEventArgs@@WJA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801CED80 (-GetIids@CLaunchActivatedEventArgs@@WJA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WBBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801CEEB0 (-GetIids@CLaunchActivatedEventArgs@@WBBA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801CEEE0 (-GetIids@CLaunchActivatedEventArgs@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WJI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801CEFC0 (-GetIids@CLaunchActivatedEventArgs@@WJI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WBBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801CF0D0 (-GetIids@CLaunchActivatedEventArgs@@WBBI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WCA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801CF110 (-GetIids@CLaunchActivatedEventArgs@@WCA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WKA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801CF1F0 (-GetIids@CLaunchActivatedEventArgs@@WKA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WOA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801CF280 (-GetIids@CLaunchActivatedEventArgs@@WOA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@W7EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801CF310 (-GetIids@CLaunchActivatedEventArgs@@W7EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WII@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801CF3A0 (-GetIids@CLaunchActivatedEventArgs@@WII@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WOI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801CF450 (-GetIids@CLaunchActivatedEventArgs@@WOI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801CF4E0 (-GetIids@CLaunchActivatedEventArgs@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CLaunchActivatedEventArgs::GetIids(
        CLaunchActivatedEventArgs *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>::GetIids(
           this,
           a2,
           a3);
}
