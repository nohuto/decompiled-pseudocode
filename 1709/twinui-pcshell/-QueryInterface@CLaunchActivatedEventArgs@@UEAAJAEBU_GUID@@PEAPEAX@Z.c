/*
 * XREFs of ?QueryInterface@CLaunchActivatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801CDC50
 * Callers:
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801CECD0 (-QueryInterface@CLaunchActivatedEventArgs@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WOA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801CED10 (-QueryInterface@CLaunchActivatedEventArgs@@WOA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801CEDA0 (-QueryInterface@CLaunchActivatedEventArgs@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801CEDD0 (-QueryInterface@CLaunchActivatedEventArgs@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801CEED0 (-QueryInterface@CLaunchActivatedEventArgs@@WII@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WOI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801CEF60 (-QueryInterface@CLaunchActivatedEventArgs@@WOI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WBAI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801CEFB0 (-QueryInterface@CLaunchActivatedEventArgs@@WBAI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801CEFE0 (-QueryInterface@CLaunchActivatedEventArgs@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801CF0F0 (-QueryInterface@CLaunchActivatedEventArgs@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WBBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801CF1D0 (-QueryInterface@CLaunchActivatedEventArgs@@WBBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801CF210 (-QueryInterface@CLaunchActivatedEventArgs@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801CF330 (-QueryInterface@CLaunchActivatedEventArgs@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WBBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801CF3F0 (-QueryInterface@CLaunchActivatedEventArgs@@WBBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801CF400 (-QueryInterface@CLaunchActivatedEventArgs@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CLaunchActivatedEventArgs::QueryInterface(
        CLaunchActivatedEventArgs *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>::QueryInterface(
           this,
           a2,
           a3);
}
