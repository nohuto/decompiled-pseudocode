/*
 * XREFs of ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180011910
 * Callers:
 *     <none>
 * Callees:
 *     ?_HandleSelectTargetViewForNavigationRequest@CApplicationManager@@AEAAXPEBGPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@5@@Z @ 0x180011EB8 (-_HandleSelectTargetViewForNavigationRequest@CApplicationManager@@AEAAXPEBGPEAUIPropertySet@Coll.c)
 *     ?_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@PEAUIViewEventArgsForNavigationRequest@3456@@Z @ 0x180012070 (-_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18001240C (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewPropertyChangedArgs@3456@@Z @ 0x180012C88 (-_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ?_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z @ 0x1800143FC (-_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180017770 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolida.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByTaskWindow@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1800189BC (--$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmer.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180025750 (-_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16
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
  __int64 v13; // rcx
  HSTRING v14; // rcx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *v15; // rcx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v16; // rcx
  HSTRING v17; // rcx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *v18; // rbx
  const unsigned __int16 *StringRawBuffer; // rax
  struct Windows::Foundation::Collections::IPropertySet *v20; // r8
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *v21; // rcx
  int v23; // [rsp+20h] [rbp-50h]
  void (__fastcall ***v24)(_QWORD, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **); // [rsp+30h] [rbp-40h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *v25; // [rsp+38h] [rbp-38h] BYREF
  __int64 v26; // [rsp+40h] [rbp-30h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v27; // [rsp+48h] [rbp-28h]
  __int64 v28; // [rsp+50h] [rbp-20h]
  __int64 v29; // [rsp+58h] [rbp-18h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v30; // [rsp+60h] [rbp-10h]
  int v31; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  int v33; // [rsp+A0h] [rbp+30h] BYREF
  HSTRING string; // [rsp+A8h] [rbp+38h] BYREF

  v28 = -2LL;
  if ( (*(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v33) < 0 )
    return 0LL;
  if ( !v33 )
  {
    string = 0LL;
    if ( (*(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, HSTRING *))(*(_QWORD *)a3 + 56LL))(
           a3,
           &string) >= 0 )
      CApplicationManager::_HandleViewCreation(
        this,
        a2,
        (struct Windows::Foundation::Collections::IPropertySet *)string);
    goto LABEL_69;
  }
  if ( v33 == 1 )
  {
    v24 = 0LL;
    if ( (*(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, void (__fastcall ****)(_QWORD, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **)))(*(_QWORD *)a3 + 56LL))(
           a3,
           &v24) >= 0 )
    {
      v25 = 0LL;
      if ( (**(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **))a3)(
             a3,
             &GUID_741390c6_ef1e_43ce_bfc2_6cfb131c012e,
             &v25) >= 0 )
      {
        string = 0LL;
        WindowsDeleteString(0LL);
        string = 0LL;
        if ( (*(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING *))(*(_QWORD *)a2 + 56LL))(
               a2,
               &string) >= 0 )
        {
          v18 = v25;
          StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
          CApplicationManager::_HandleSelectTargetViewForNavigationRequest(this, StringRawBuffer, v20, v18);
        }
        WindowsDeleteString(string);
      }
      v21 = v25;
      if ( v25 )
      {
        v25 = 0LL;
        (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *))(*(_QWORD *)v21 + 16LL))(v21);
      }
    }
    v7 = v24;
LABEL_33:
    if ( v7 )
    {
      v24 = 0LL;
LABEL_71:
      (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
      return 0LL;
    }
    return 0LL;
  }
  if ( v33 != 2 )
  {
    switch ( v33 )
    {
      case 4:
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        v26 = 0LL;
        v27 = a2;
        if ( a2 )
          (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
        CApplicationManager::_HandleTaskWindowDestruction(this, (const struct CTaskWindowFinder *)&v26);
        v16 = v27;
        if ( v27 )
        {
          v27 = 0LL;
          (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v16 + 16LL))(v16);
        }
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        return 0LL;
      case 5:
        string = 0LL;
        if ( (**(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, HSTRING *))a3)(
               a3,
               &GUID_360030af_7930_47a7_a1dd_184464be39de,
               &string) >= 0 )
          CApplicationManager::_HandleViewPropertyChanged(
            this,
            a2,
            (struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs *)string);
        break;
      case 12:
        string = 0LL;
        if ( (**(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, HSTRING *))a3)(
               a3,
               &GUID_ff24ec4d_0f9a_48f8_8083_39f5065b6a49,
               &string) >= 0 )
          (*(void (__fastcall **)(_QWORD, HSTRING))(**((_QWORD **)this + 67) + 104LL))(*((_QWORD *)this + 67), string);
        break;
      case 13:
        string = 0LL;
        if ( (**(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, HSTRING *))a3)(
               a3,
               &GUID_8a11574c_5d5f_48d7_bd8c_d7a801fca248,
               &string) >= 0 )
          (*(void (__fastcall **)(_QWORD, HSTRING))(**((_QWORD **)this + 67) + 112LL))(*((_QWORD *)this + 67), string);
        break;
      case 14:
        string = 0LL;
        if ( (**(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, HSTRING *))a3)(
               a3,
               &GUID_ffc41fc2_6037_4426_8bfb_7716e14343f7,
               &string) >= 0 )
          (*(void (__fastcall **)(_QWORD, HSTRING))(**((_QWORD **)this + 67) + 120LL))(*((_QWORD *)this + 67), string);
        break;
      case 35:
        if ( (`wil::Feature<__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
          wil::Feature<__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop>::GetCachedFeatureEnabledState();
        BYTE4(v26) = 3;
        LODWORD(string) = 0;
        WORD2(string) = WORD2(v26);
        wil_details_FeaturePropertyCache_ReportUsageToService(
          &`wil::Feature<__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop>::GetFeaturePropertyCache'::`2'::data,
          8454932LL,
          &string,
          1LL,
          3);
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        v24 = 0LL;
        v26 = 0LL;
        v27 = a2;
        if ( a2 )
          (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
        v29 = 0LL;
        v30 = a2;
        if ( a2 )
          (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
        v31 = 0;
        CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(this, &v29, &v24, 0LL);
        v6 = v30;
        if ( v30 )
        {
          v30 = 0LL;
          (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v6 + 16LL))(v6);
        }
        if ( a2 )
          (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 16LL))(a2);
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        v7 = v24;
        if ( v24 )
        {
          v25 = 0LL;
          (**v24)(v24, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v25);
          string = 0LL;
          v8 = *(IUnknown **)CWRLObjectWithGITSite::_GetGITSitePtr((char *)this + 40, &v26);
          v9 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&string);
          Service = IUnknown_QueryService(
                      v8,
                      (const GUID *const)&SID_AppCrusher,
                      &GUID_55c8429b_3f9e_4736_96a2_1c56e2dfc883,
                      v9);
          v11 = Service;
          if ( Service < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x152F,
              (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              (const char *)(unsigned int)Service,
              v23);
          v12 = v11 >= 0;
          v13 = v26;
          if ( v26 )
          {
            v26 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          }
          if ( v12 )
            (*(void (__fastcall **)(HSTRING, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *, __int64))(*(_QWORD *)string + 32LL))(
              string,
              v25,
              8LL);
          v14 = string;
          if ( string )
          {
            string = 0LL;
            (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v14 + 16LL))(v14);
          }
          v15 = v25;
          if ( v25 )
          {
            v25 = 0LL;
            (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *))(*(_QWORD *)v15 + 16LL))(v15);
          }
          v7 = v24;
        }
        goto LABEL_33;
      default:
        return 0LL;
    }
LABEL_69:
    v7 = string;
    if ( string )
    {
      string = 0LL;
      goto LABEL_71;
    }
    return 0LL;
  }
  v25 = 0LL;
  if ( (*(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **))(*(_QWORD *)a3 + 56LL))(
         a3,
         &v25) >= 0 )
  {
    string = 0LL;
    if ( (**(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, HSTRING *))a3)(
           a3,
           &GUID_a8d2a90c_a403_4593_95ff_012516ae9351,
           &string) >= 0 )
      CApplicationManager::_HandleViewNavigationRequested(
        this,
        a2,
        v25,
        (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest *)string);
    v17 = string;
    if ( string )
    {
      string = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v17 + 16LL))(v17);
    }
  }
  v7 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    goto LABEL_71;
  }
  return 0LL;
}
