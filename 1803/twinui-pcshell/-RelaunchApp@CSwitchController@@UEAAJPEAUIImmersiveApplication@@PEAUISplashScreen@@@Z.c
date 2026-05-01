/*
 * XREFs of ?RelaunchApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEAUISplashScreen@@@Z @ 0x1802B1F20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_PerformDelayedActivationInternal@CSwitchController@@AEAAJPEAUIImmersiveApplication@@PEAUIDelayedAppActivation@@PEAUISplashScreen@@@Z @ 0x1802B2A5C (-_PerformDelayedActivationInternal@CSwitchController@@AEAAJPEAUIImmersiveApplication@@PEAUIDelay.c)
 *     ?CDelayedTileActivation_CreateInstance@@YAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@AEBU_GUID@@PEAPEAX@Z @ 0x1802B46F0 (-CDelayedTileActivation_CreateInstance@@YAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4ACTIVATEOP.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSwitchController::RelaunchApp(
        CSwitchController *this,
        struct IImmersiveApplication *a2,
        struct ISplashScreen *a3)
{
  __int64 v5; // rdx
  CSwitchController *v6; // rcx
  int Instance; // ebx
  struct IDelayedAppActivation *v9; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  Instance = CDelayedTileActivation_CreateInstance(a2, v5, 0LL);
  if ( Instance >= 0 )
    Instance = CSwitchController::_PerformDelayedActivationInternal(v6, a2, v9, a3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  return (unsigned int)Instance;
}
