/*
 * XREFs of ??$MakeAndInitialize@VWindowWrapper@@UIWindowWrapperInternal@@PEAVWindowEventDispatcher@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEBG@Details@WRL@Microsoft@@YAJPEAPEAUIWindowWrapperInternal@@$$QEAPEAVWindowEventDispatcher@@$$QEAPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@$$QEAPEBG@Z @ 0x1801D1B58
 * Callers:
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801D3130 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0WindowWrapper@@QEAA@XZ @ 0x1801D2640 (--0WindowWrapper@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VWindowWrapper@@@WRL@Microsoft@@QEAAXPEAVWindowWrapper@@@Z @ 0x1801D5020 (-Attach@-$ComPtr@VWindowWrapper@@@WRL@Microsoft@@QEAAXPEAVWindowWrapper@@@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VWindowWrapperBase@@@Details@23@UIWeakReferenceSource@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801D51D8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$ImplementsMarker@VWi.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801D8260 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWind_ea_1801D8260.c)
 *     ?RuntimeClassInitialize@WindowWrapper@@QEAAJPEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEBG@Z @ 0x1801EE3EC (-RuntimeClassInitialize@WindowWrapper@@QEAAJPEAUIWindowEventDispatcherInternal@@PEAUIAppView@Win.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<WindowWrapper,IWindowWrapperInternal,WindowEventDispatcher *,Windows::Internal::ApplicationModel::WindowManagement::IAppView *,unsigned short const *>(
        WindowWrapper **a1,
        _QWORD *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **a3,
        const unsigned __int16 **a4)
{
  WindowWrapper *v8; // rax
  int CanCastTo; // edi
  WindowWrapper *v10; // rax
  const unsigned __int16 *v11; // r9
  WindowWrapper *v12; // rbx
  _DWORD *v13; // rcx
  __int64 v14; // r9
  WindowWrapper *v16; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (WindowWrapper *)operator new(0x218uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = WindowWrapper::WindowWrapper(v8);
    v16 = 0LL;
    Microsoft::WRL::ComPtr<WindowWrapper>::Attach(&v16, v10);
    v11 = *a4;
    v12 = v16;
    CanCastTo = WindowWrapper::RuntimeClassInitialize(
                  v16,
                  (struct IWindowEventDispatcherInternal *)((*a2 + 16LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*a2 >> 64)),
                  *a3,
                  v11);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_175d1cfe_6fbc_42ba_81e5_e3bc56d5aae9, &GUID_00000000_0000_0000_c000_000000000046)
        || InlineIsEqualGUID(v13, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
      {
        *a1 = v12;
        (*(void (__fastcall **)(WindowWrapper *))(*(_QWORD *)v12 + 8LL))(v12);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<WindowWrapperBase>,IWeakReferenceSource,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::CanCastTo(
                      (char *)v12 + 8,
                      v14,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(WindowWrapper *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v12 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,WindowWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::Release(v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
