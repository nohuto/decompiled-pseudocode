/*
 * XREFs of ??$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIAEAPEAUIUnknown@@PEBGAEAY0DF@$$CBGQEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@012@AEAIAEAPEAUIUnknown@@$$QEAPEBGAEAY0DF@$$CBG$$QEBQEAVViewEventDispatcher@@@Z @ 0x1800FE7FC
 * Callers:
 *     ?ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z @ 0x1800F32D4 (-ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z.c)
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x1800F7A78 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@PEA_N@Z @ 0x1800F8480 (-_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEA.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VViewWrapperBase@@U?$InterfaceList@UIUAPViewWrapper@@U?$InterfaceList@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800FC480 (-Release@-$RuntimeClass@U-$InterfaceList@VViewWrapperBase@@U-$InterfaceList@UIUAPViewWrapper@@U-.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VViewWrapperBase@@U?$InterfaceList@UIUAPViewWrapper@@U?$InterfaceList@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FC5A0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VViewWrapperBase@@U-$InterfaceList@UIUAPViewWrap.c)
 *     ??0UAPViewWrapper@@QEAA@XZ @ 0x1801001B0 (--0UAPViewWrapper@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@UAPViewWrapper@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z @ 0x180111010 (-RuntimeClassInitialize@UAPViewWrapper@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<UAPViewWrapper,IViewWrapperInternal,unsigned int &,IUnknown * &,unsigned short const *,unsigned short const (&)[53],ViewEventDispatcher * const>(
        __int64 *a1,
        unsigned int *a2,
        struct IUnknown **a3,
        const unsigned __int16 **a4,
        __int64 a5,
        struct ViewEventDispatcher **a6)
{
  __int64 v10; // rcx
  UAPViewWrapper *v11; // rax
  int Interface; // esi
  UAPViewWrapper *v13; // rdi

  v10 = *a1;
  if ( v10 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  *a1 = 0LL;
  v11 = (UAPViewWrapper *)operator new(0x220uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v13 = UAPViewWrapper::UAPViewWrapper(v11);
    Interface = UAPViewWrapper::RuntimeClassInitialize(
                  v13,
                  *a2,
                  *a3,
                  *a4,
                  L"Windows.Internal.ShellExperience.TopLevelApplication",
                  *a6);
    if ( Interface >= 0 )
      Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ViewWrapperBase,Microsoft::WRL::Details::InterfaceList<IUAPViewWrapper,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
                    (__int64)v13,
                    &GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f,
                    a1);
    if ( v13 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ViewWrapperBase,Microsoft::WRL::Details::InterfaceList<IUAPViewWrapper,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release((volatile signed __int64 *)v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)Interface;
}
