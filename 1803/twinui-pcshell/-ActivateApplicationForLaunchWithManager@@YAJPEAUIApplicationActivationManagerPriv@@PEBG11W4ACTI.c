/*
 * XREFs of ?ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUISplashScreen@@PEAUHMONITOR__@@PEAK@Z @ 0x180305FE4
 * Callers:
 *     ?ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z @ 0x1802B4540 (-ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z.c)
 *     ?ActivateApplicationForLaunch@@YAJPEBG00W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAK@Z @ 0x180305F3C (-ActivateApplicationForLaunch@@YAJPEBG00W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAK@Z.c)
 * Callees:
 *     ?Release@CImmersiveWindowFactory@@UEAAKXZ @ 0x180027320 (-Release@CImmersiveWindowFactory@@UEAAKXZ.c)
 *     ??$Make@VCImmersiveWindowFactory@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCImmersiveWindowFactory@@@12@XZ @ 0x18007FC70 (--$Make@VCImmersiveWindowFactory@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCImmersiveWindowFact.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAUICoreWindowFactory@Core@UI@Windows@@PEAK@Z @ 0x180306520 (-_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@.c)
 *     ?SetExistingSplashScreen@CImmersiveWindowFactoryBase@@QEAAXPEAUISplashScreen@@@Z @ 0x1803169CC (-SetExistingSplashScreen@CImmersiveWindowFactoryBase@@QEAAXPEAUISplashScreen@@@Z.c)
 */

__int64 __fastcall ActivateApplicationForLaunchWithManager(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        struct ISplashScreen *a6,
        __int64 a7,
        CImmersiveWindowFactory *a8)
{
  CImmersiveWindowFactory *v8; // r14
  CImmersiveWindowFactory *v9; // rbx
  CImmersiveWindowFactory **v13; // rax
  CImmersiveWindowFactoryBase *v14; // rdi
  CImmersiveWindowFactory *v15; // rcx
  CImmersiveWindowFactory *v16; // rax
  void (*v17)(void); // rax
  unsigned int v18; // edi
  __int64 (__fastcall *v19)(CImmersiveWindowFactory *); // rax
  char v21; // [rsp+40h] [rbp-38h] BYREF

  v8 = a8;
  v9 = 0LL;
  *(_DWORD *)a8 = 0;
  if ( !a6 || (a5 & 0x10001) != 0 )
    goto LABEL_12;
  v13 = Microsoft::WRL::Details::Make<CImmersiveWindowFactory,>(&a8);
  v14 = 0LL;
  if ( &v21 != (char *)v13 )
  {
    v9 = *v13;
    *v13 = 0LL;
    v14 = v9;
  }
  v15 = a8;
  v16 = v9;
  if ( a8 )
  {
    a8 = 0LL;
    v17 = *(void (**)(void))(*(_QWORD *)v15 + 16LL);
    if ( (char *)v17 == (char *)CImmersiveWindowFactory::Release )
      CImmersiveWindowFactory::Release(v15);
    else
      v17();
    v16 = v9;
  }
  if ( v16 )
  {
    CImmersiveWindowFactoryBase::SetExistingSplashScreen(v14, a6);
LABEL_12:
    v18 = _ActivateApplicationForLaunchHelperWithWindowFactory(a1, a2, a3, a4, a5, a7, v9, v8);
    goto LABEL_13;
  }
  v18 = -2147024882;
LABEL_13:
  if ( v9 )
  {
    v19 = *(__int64 (__fastcall **)(CImmersiveWindowFactory *))(*(_QWORD *)v9 + 16LL);
    if ( v19 == CImmersiveWindowFactory::Release )
      CImmersiveWindowFactory::Release(v9);
    else
      v19(v9);
  }
  return v18;
}
