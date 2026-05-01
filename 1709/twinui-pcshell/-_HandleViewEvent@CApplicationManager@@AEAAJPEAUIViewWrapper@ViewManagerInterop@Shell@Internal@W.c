/*
 * XREFs of ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180011FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_HandleSelectTargetViewForNavigationRequest@CApplicationManager@@AEAAXPEBGPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@5@@Z @ 0x1800125B0 (-_HandleSelectTargetViewForNavigationRequest@CApplicationManager@@AEAAXPEBGPEAUIPropertySet@Coll.c)
 *     ?_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@PEAUIViewEventArgsForNavigationRequest@3456@@Z @ 0x180012768 (-_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x180012B3C (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewPropertyChangedArgs@3456@@Z @ 0x180013604 (-_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ?_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z @ 0x180014FE0 (-_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800189AC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolida.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByTaskWindow@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180019BFC (--$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmer.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall CApplicationManager::_HandleViewEvent(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v6; // rcx
  void *v7; // rcx
  IUnknown *v8; // rbx
  void **v9; // rax
  HRESULT Service; // eax
  HRESULT v11; // ebx
  bool v12; // bl
  IUnknown *v13; // rcx
  void *v14; // rcx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *v15; // rcx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v16; // rcx
  HSTRING v17; // rcx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *v18; // rbx
  const unsigned __int16 *StringRawBuffer; // rax
  struct Windows::Foundation::Collections::IPropertySet *v20; // r8
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *v21; // rcx
  int v23; // [rsp+20h] [rbp-60h]
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *v24; // [rsp+30h] [rbp-50h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v25; // [rsp+38h] [rbp-48h]
  void (__fastcall ***v26)(_QWORD, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **); // [rsp+40h] [rbp-40h] BYREF
  void *v27; // [rsp+48h] [rbp-38h] BYREF
  IUnknown *punk; // [rsp+50h] [rbp-30h] BYREF
  __int64 v29; // [rsp+58h] [rbp-28h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v30; // [rsp+60h] [rbp-20h]
  int v31; // [rsp+68h] [rbp-18h]
  __int64 v32; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  int v34; // [rsp+B0h] [rbp+30h] BYREF
  HSTRING string; // [rsp+B8h] [rbp+38h] BYREF

  v32 = -2LL;
  LODWORD(string) = 0;
  if ( (*(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v34) < 0 )
    return 0LL;
  if ( !v34 )
  {
    string = 0LL;
    if ( (*(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, HSTRING *))(*(_QWORD *)a3 + 56LL))(
           a3,
           &string) >= 0 )
      CApplicationManager::_HandleViewCreation(
        this,
        a2,
        (struct Windows::Foundation::Collections::IPropertySet *)string);
    goto LABEL_70;
  }
  if ( v34 == 1 )
  {
    v27 = 0LL;
    if ( (*(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, void **))(*(_QWORD *)a3 + 56LL))(
           a3,
           &v27) >= 0 )
    {
      v24 = 0LL;
      if ( (**(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **))a3)(
             a3,
             &GUID_741390c6_ef1e_43ce_bfc2_6cfb131c012e,
             &v24) >= 0 )
      {
        string = 0LL;
        WindowsDeleteString(0LL);
        string = 0LL;
        if ( (*(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING *))(*(_QWORD *)a2 + 56LL))(
               a2,
               &string) >= 0 )
        {
          v18 = v24;
          StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
          CApplicationManager::_HandleSelectTargetViewForNavigationRequest(this, StringRawBuffer, v20, v18);
        }
        WindowsDeleteString(string);
      }
      v21 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *))(*(_QWORD *)v21 + 16LL))(v21);
      }
    }
    v7 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      goto LABEL_72;
    }
    return 0LL;
  }
  if ( v34 != 2 )
  {
    if ( v34 == 4 )
    {
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v24 = 0LL;
      v25 = a2;
      if ( a2 )
        (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
      CApplicationManager::_HandleTaskWindowDestruction(this, (const struct CTaskWindowFinder *)&v24);
      v16 = v25;
      if ( v25 )
      {
        v25 = 0LL;
        (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v16 + 16LL))(v16);
      }
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      return 0LL;
    }
    if ( v34 == 5 )
    {
      string = 0LL;
      if ( (**(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, HSTRING *))a3)(
             a3,
             &GUID_360030af_7930_47a7_a1dd_184464be39de,
             &string) >= 0 )
        CApplicationManager::_HandleViewPropertyChanged(
          this,
          a2,
          (struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs *)string);
    }
    else if ( v34 == 12 )
    {
      string = 0LL;
      if ( (**(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, HSTRING *))a3)(
             a3,
             &GUID_ff24ec4d_0f9a_48f8_8083_39f5065b6a49,
             &string) >= 0 )
        (*(void (__fastcall **)(_QWORD, HSTRING))(**((_QWORD **)this + 76) + 104LL))(*((_QWORD *)this + 76), string);
    }
    else if ( v34 == 13 )
    {
      string = 0LL;
      if ( (**(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, HSTRING *))a3)(
             a3,
             &GUID_8a11574c_5d5f_48d7_bd8c_d7a801fca248,
             &string) >= 0 )
        (*(void (__fastcall **)(_QWORD, HSTRING))(**((_QWORD **)this + 76) + 112LL))(*((_QWORD *)this + 76), string);
    }
    else
    {
      if ( v34 != 14 )
      {
        if ( v34 == 35 )
        {
          if ( (`wil::Feature<__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
            wil::Feature<__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop>::GetCachedFeatureEnabledState();
          LODWORD(string) = 0;
          BYTE4(string) = 3;
          LODWORD(punk) = 0;
          WORD2(punk) = WORD2(string);
          wil_details_FeaturePropertyCache_ReportUsageToService(
            &`wil::Feature<__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop>::GetFeaturePropertyCache'::`2'::data,
            8454932LL,
            &punk,
            1LL,
            3);
          AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
          v26 = 0LL;
          v24 = 0LL;
          v25 = a2;
          if ( a2 )
            (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
          v29 = 0LL;
          v30 = a2;
          if ( a2 )
            (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
          v31 = 0;
          CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(this, &v29, &v26, 0LL);
          v6 = v30;
          if ( v30 )
          {
            v30 = 0LL;
            (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v6 + 16LL))(v6);
          }
          if ( a2 )
            (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 16LL))(a2);
          ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
          v7 = v26;
          if ( v26 )
          {
            v24 = 0LL;
            (**v26)(v26, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v24);
            v27 = 0LL;
            punk = 0LL;
            LODWORD(string) = 1;
            (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 7) + 32LL))(
              (char *)this + 56,
              &GUID_00000000_0000_0000_c000_000000000046,
              &punk);
            v8 = punk;
            v9 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v27);
            Service = IUnknown_QueryService(
                        v8,
                        (const GUID *const)&SID_AppCrusher,
                        &GUID_55c8429b_3f9e_4736_96a2_1c56e2dfc883,
                        v9);
            v11 = Service;
            if ( Service < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x1581,
                (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                (const char *)(unsigned int)Service,
                v23);
            v12 = v11 >= 0;
            v13 = punk;
            if ( punk )
            {
              punk = 0LL;
              ((void (__fastcall *)(IUnknown *))v13->lpVtbl->Release)(v13);
            }
            if ( v12 )
              (*(void (__fastcall **)(void *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *, __int64))(*(_QWORD *)v27 + 32LL))(
                v27,
                v24,
                8LL);
            v14 = v27;
            if ( v27 )
            {
              v27 = 0LL;
              (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 16LL))(v14);
            }
            v15 = v24;
            if ( v24 )
            {
              v24 = 0LL;
              (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *))(*(_QWORD *)v15 + 16LL))(v15);
            }
            v7 = v26;
          }
          if ( v7 )
          {
            v26 = 0LL;
LABEL_72:
            (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
            return 0LL;
          }
        }
        return 0LL;
      }
      string = 0LL;
      if ( (**(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, HSTRING *))a3)(
             a3,
             &GUID_ffc41fc2_6037_4426_8bfb_7716e14343f7,
             &string) >= 0 )
        (*(void (__fastcall **)(_QWORD, HSTRING))(**((_QWORD **)this + 76) + 120LL))(*((_QWORD *)this + 76), string);
    }
LABEL_70:
    v7 = string;
    if ( string )
    {
      string = 0LL;
      goto LABEL_72;
    }
    return 0LL;
  }
  v24 = 0LL;
  if ( (*(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **))(*(_QWORD *)a3 + 56LL))(
         a3,
         &v24) >= 0 )
  {
    string = 0LL;
    if ( (**(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, HSTRING *))a3)(
           a3,
           &GUID_a8d2a90c_a403_4593_95ff_012516ae9351,
           &string) >= 0 )
      CApplicationManager::_HandleViewNavigationRequested(
        this,
        a2,
        v24,
        (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest *)string);
    v17 = string;
    if ( string )
    {
      string = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v17 + 16LL))(v17);
    }
  }
  v7 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    goto LABEL_72;
  }
  return 0LL;
}
