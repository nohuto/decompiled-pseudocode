/*
 * XREFs of ??$MakeAndInitialize@VViewEventArgsForPropertyChanged@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@AEAY0M@$$CBG@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@AEAY0M@$$CBG@Z @ 0x1801D1580
 * Callers:
 *     ?AppViewUniversalPropertyChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewUniversalPropertyChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801D48E0 (-AppViewUniversalPropertyChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewUniversalPropertyChange.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewPropertyChangedArgs@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180029830 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_180029830.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0ViewEventArgsForPropertyChanged@@QEAA@XZ @ 0x1800F1AFC (--0ViewEventArgsForPropertyChanged@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@ViewEventArgsForPropertyChanged@@QEAAJPEBG@Z @ 0x1800F1B9C (-RuntimeClassInitialize@ViewEventArgsForPropertyChanged@@QEAAJPEBG@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U?$ImplementsMarker@VViewEventArgsBase@@@Details@23@UIWeakReferenceSource@@UIViewPropertyChangedArgs@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800F1C04 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U-$Implem_ea_1800F1C04.c)
 *     ?Attach@?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForPropertyChanged@@@Z @ 0x1800FAF34 (-Attach@-$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForProp.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForPropertyChanged,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,unsigned short const (&)[12]>(
        ViewEventArgsForPropertyChanged **a1,
        ViewEventArgsForPropertyChanged *a2)
{
  ViewEventArgsForPropertyChanged *v3; // rax
  int CanCastTo; // edi
  ViewEventArgsForPropertyChanged *v5; // rax
  ViewEventArgsForPropertyChanged *v6; // rbx
  _DWORD *v7; // rcx
  _DWORD *v8; // rcx
  ViewEventArgsForPropertyChanged *v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  *a1 = 0LL;
  v3 = (ViewEventArgsForPropertyChanged *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v5 = ViewEventArgsForPropertyChanged::ViewEventArgsForPropertyChanged(v3);
    v10 = 0LL;
    Microsoft::WRL::ComPtr<ViewEventArgsForPropertyChanged>::Attach((void **)&v10, v5);
    v6 = v10;
    CanCastTo = ViewEventArgsForPropertyChanged::RuntimeClassInitialize(v10, L"BackVisible");
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_96c11dea_68de_44ef_a7f7_3aa869663d57, &GUID_00000000_0000_0000_c000_000000000046)
        || InlineIsEqualGUID(v7, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
      {
        *a1 = v6;
        (*(void (__fastcall **)(ViewEventArgsForPropertyChanged *))(*(_QWORD *)v6 + 8LL))(v6);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Microsoft::WRL::Details::ImplementsMarker<ViewEventArgsBase>,IWeakReferenceSource,Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs>::CanCastTo(
                      (__int64)v6,
                      v8);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(ViewEventArgsForPropertyChanged *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs>::Release(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
