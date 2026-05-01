/*
 * XREFs of ??$MakeAndInitialize@VViewEventArgsForShowAsViewMode@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapperInternal@@PEAU7@AEAW4ApplicationViewMode@ViewManagement@UI@6@AEAW4ViewSizePreference@9UI@6@AEAUSize@Foundation@6@AEAPEAUIAsyncCallback@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapperInternal@@1AEAW4ApplicationViewMode@ViewManagement@UI@7@AEAW4ViewSizePreference@ViewManagement@UI@7@AEAUSize@Foundation@7@AEAPEAUIAsyncCallback@@@Z @ 0x1801C7008
 * Callers:
 *     ?TryShowAsViewModeAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ViewSizePreference@345@USize@Foundation@5@PEAUIAsyncCallback@@@Z @ 0x1801CF328 (-TryShowAsViewModeAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewMode@ViewManagement@UI@Wind.c)
 *     ?TryShowAsViewModeAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ViewSizePreference@345@USize@Foundation@5@PEAUIAsyncCallback@@@Z @ 0x1801D95BC (-TryShowAsViewModeAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Wi.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0ViewEventArgsForShowAsViewMode@@QEAA@XZ @ 0x1801C7F04 (--0ViewEventArgsForShowAsViewMode@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VViewEventArgsForSwitch@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForSwitch@@@Z @ 0x1801C9DBC (-Attach@-$ComPtr@VViewEventArgsForSwitch@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForSwitch@@@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U?$ImplementsMarker@VViewEventArgsBase@@@Details@23@UIWeakReferenceSource@@UIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801C9E14 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U-$Implem_ea_1801C9E14.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801CCD40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_1801CCD40.c)
 *     ?RuntimeClassInitialize@ViewEventArgsForShowAsViewMode@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@0W4ApplicationViewMode@ViewManagement@UI@6@W4ViewSizePreference@896@USize@Foundation@6@PEAUIAsyncCallback@@@Z @ 0x1801CCEA4 (-RuntimeClassInitialize@ViewEventArgsForShowAsViewMode@@QEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForShowAsViewMode,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,IViewWrapperInternal *,IViewWrapperInternal *,enum Windows::UI::ViewManagement::ApplicationViewMode &,enum Windows::UI::ViewManagement::ViewSizePreference &,Windows::Foundation::Size &,IAsyncCallback * &>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4,
        _DWORD *a5,
        _QWORD *a6,
        _QWORD *a7)
{
  ViewEventArgsForShowAsViewMode *v11; // rax
  int CanCastTo; // edi
  ViewEventArgsForShowAsViewMode *v13; // rax
  __int64 v14; // r9
  __int64 v15; // rbx
  _DWORD *v16; // rcx
  __int64 v17; // rcx
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v11 = (ViewEventArgsForShowAsViewMode *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v13 = ViewEventArgsForShowAsViewMode::ViewEventArgsForShowAsViewMode(v11);
    v19 = 0LL;
    Microsoft::WRL::ComPtr<ViewEventArgsForSwitch>::Attach(&v19, v13);
    v14 = *a4;
    v15 = v19;
    CanCastTo = ViewEventArgsForShowAsViewMode::RuntimeClassInitialize(v19, *a2, *a3, v14, *a5, *a6, *a7);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_96c11dea_68de_44ef_a7f7_3aa869663d57, &GUID_00000000_0000_0000_c000_000000000046)
        || InlineIsEqualGUID(v16, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
      {
        *a1 = v15;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Microsoft::WRL::Details::ImplementsMarker<ViewEventArgsBase>,IWeakReferenceSource,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode>::CanCastTo(
                      v15,
                      v17,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v15 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode>::Release(v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
