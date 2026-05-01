/*
 * XREFs of ??$MakeAndInitialize@VViewEventArgsForSwitch@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapperInternal@@PEAU7@AEAW4ApplicationViewSwitchingOptions@ViewManagement@UI@6@AEAPEAUIAsyncCallback@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapperInternal@@1AEAW4ApplicationViewSwitchingOptions@ViewManagement@UI@7@AEAPEAUIAsyncCallback@@@Z @ 0x1801D1768
 * Callers:
 *     ?SwitchAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x1801CEF80 (-SwitchAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Win.c)
 *     ?SwitchAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x1801D8F2C (-SwitchAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@W.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0ViewEventArgsForSwitch@@QEAA@XZ @ 0x1801C7FB8 (--0ViewEventArgsForSwitch@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VViewEventArgsForSwitch@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForSwitch@@@Z @ 0x1801C9DBC (-Attach@-$ComPtr@VViewEventArgsForSwitch@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForSwitch@@@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U?$ImplementsMarker@VViewEventArgsBase@@@Details@23@UIWeakReferenceSource@@UIViewEventArgsForSwitch@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801C9E94 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U-$Implem_ea_1801C9E94.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801CCD40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_1801CCD40.c)
 *     ?RuntimeClassInitialize@ViewEventArgsForSwitch@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@0W4ApplicationViewSwitchingOptions@ViewManagement@UI@6@PEAUIAsyncCallback@@@Z @ 0x1801CCF2C (-RuntimeClassInitialize@ViewEventArgsForSwitch@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@I.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForSwitch,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,IViewWrapperInternal *,IViewWrapperInternal *,enum Windows::UI::ViewManagement::ApplicationViewSwitchingOptions &,IAsyncCallback * &>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        int *a4,
        void **a5)
{
  ViewEventArgsForSwitch *v9; // rax
  int CanCastTo; // edi
  ViewEventArgsForSwitch *v11; // rax
  int v12; // r9d
  __int64 v13; // rbx
  _DWORD *v14; // rcx
  _DWORD *v15; // rcx
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = (ViewEventArgsForSwitch *)operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v11 = ViewEventArgsForSwitch::ViewEventArgsForSwitch(v9);
    v17 = 0LL;
    Microsoft::WRL::ComPtr<ViewEventArgsForSwitch>::Attach(&v17, (__int64)v11);
    v12 = *a4;
    v13 = v17;
    CanCastTo = ViewEventArgsForSwitch::RuntimeClassInitialize(v17, *a2, *a3, v12, *a5);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_96c11dea_68de_44ef_a7f7_3aa869663d57, &GUID_00000000_0000_0000_c000_000000000046)
        || InlineIsEqualGUID(v14, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
      {
        *a1 = v13;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Microsoft::WRL::Details::ImplementsMarker<ViewEventArgsBase>,IWeakReferenceSource,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch>::CanCastTo(
                      v13,
                      v15);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v13 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode>::Release(v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
