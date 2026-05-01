/*
 * XREFs of ??$MakeAndInitialize@VWindowWrapper@@UIWindowWrapperInternal@@PEAVWindowEventDispatcher@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@AEAY0DF@$$CBG@Details@WRL@Microsoft@@YAJPEAPEAUIWindowWrapperInternal@@$$QEAPEAVWindowEventDispatcher@@$$QEAPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@AEAY0DF@$$CBG@Z @ 0x1801D1A44
 * Callers:
 *     ?WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1801D9DD0 (-WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@.c)
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

__int64 Microsoft::WRL::Details::MakeAndInitialize<WindowWrapper,IWindowWrapperInternal,WindowEventDispatcher *,Windows::Internal::ApplicationModel::WindowManagement::IAppView *,unsigned short const (&)[53]>(
        WindowWrapper **a1,
        _QWORD *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **a3,
        ...)
{
  WindowWrapper *v6; // rax
  int CanCastTo; // edi
  WindowWrapper *v8; // rax
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v9; // r8
  WindowWrapper *v10; // rbx
  _DWORD *v11; // rcx
  __int64 v12; // r9
  WindowWrapper *v14; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v14 = va_arg(va1, WindowWrapper *);
  *a1 = 0LL;
  v6 = (WindowWrapper *)operator new(0x218uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = WindowWrapper::WindowWrapper(v6);
    v14 = 0LL;
    Microsoft::WRL::ComPtr<WindowWrapper>::Attach((WindowWrapper **)va, v8);
    v9 = *a3;
    v10 = v14;
    CanCastTo = WindowWrapper::RuntimeClassInitialize(
                  v14,
                  (struct IWindowEventDispatcherInternal *)((*a2 + 16LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*a2 >> 64)),
                  v9,
                  L"Windows.Internal.ShellExperience.TopLevelApplication");
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_175d1cfe_6fbc_42ba_81e5_e3bc56d5aae9, &GUID_00000000_0000_0000_c000_000000000046)
        || InlineIsEqualGUID(v11, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
      {
        *a1 = v10;
        (*(void (__fastcall **)(WindowWrapper *))(*(_QWORD *)v10 + 8LL))(v10);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<WindowWrapperBase>,IWeakReferenceSource,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::CanCastTo(
                      (char *)v10 + 8,
                      v12,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(WindowWrapper *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v10 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,WindowWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::Release(v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
