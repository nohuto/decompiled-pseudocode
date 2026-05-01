/*
 * XREFs of ?_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@PEAUIViewEventArgsForNavigationRequest@3456@@Z @ 0x180012768
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180011FE0 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ?ConditionallyNotifyUAOfLaunch@AppActivationPropertySetHelpers@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18000693C (-ConditionallyNotifyUAOfLaunch@AppActivationPropertySetHelpers@@YAJPEBGPEAUIPropertySet@Collecti.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByTaskWindow@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180019BFC (--$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmer.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall CApplicationManager::_HandleViewNavigationRequested(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest *a4)
{
  int First; // edi
  __int64 v9; // rcx
  void *v10; // rcx
  HRESULT v11; // edi
  IUnknown *v12; // rcx
  IUnknown *v13; // rcx
  HRESULT Service; // ebx
  IUnknown *v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  struct Windows::Foundation::Collections::IPropertySet *v18; // r8
  int v19; // eax
  IUnknown *v20; // rcx
  void *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  void (__fastcall ***v24)(_QWORD, GUID *, _QWORD *); // rcx
  IUnknown *punk; // [rsp+20h] [rbp-60h] BYREF
  void (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-58h] BYREF
  void *ppvOut; // [rsp+30h] [rbp-50h] BYREF
  __int64 v28; // [rsp+38h] [rbp-48h] BYREF
  IUnknown *v29; // [rsp+40h] [rbp-40h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-38h] BYREF
  __int64 v31; // [rsp+50h] [rbp-30h]
  __int64 v32; // [rsp+58h] [rbp-28h]
  _QWORD v33[4]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  int v35; // [rsp+B8h] [rbp+38h] BYREF

  v33[2] = -2LL;
  v35 = 0;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v26 = 0LL;
  v33[0] = 0LL;
  v33[1] = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
  pv = 0LL;
  v31 = (__int64)a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
  LODWORD(v32) = 0;
  First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(this, &pv, &v26, 0LL);
  v9 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 16LL))(a2);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( First >= 0 )
  {
    v28 = 0LL;
    (**v26)(v26, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v28);
    v33[0] = 0LL;
    if ( (*(int (__fastcall **)(PVOID, __int64, _QWORD *))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[12].Ptr
                                                         + 56LL))(
           CApplicationManagerUtility::g_pIAMGlobals[12].Ptr,
           v28,
           v33) >= 0 )
    {
      ppvOut = 0LL;
      punk = 0LL;
      v35 = 1;
      (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 7) + 32LL))(
        (char *)this + 56,
        &GUID_00000000_0000_0000_c000_000000000046,
        &punk);
      v10 = ppvOut;
      if ( ppvOut )
      {
        ppvOut = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
      }
      v11 = IUnknown_QueryService(
              punk,
              &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
              &GUID_ff964f56_8baf_4947_9c46_f227ec68ff34,
              &ppvOut);
      v12 = punk;
      if ( punk )
      {
        punk = 0LL;
        ((void (__fastcall *)(IUnknown *))v12->lpVtbl->Release)(v12);
      }
      if ( v11 >= 0
        && (*(int (__fastcall **)(void *, _QWORD, struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)ppvOut + 32LL))(
             ppvOut,
             v33[0],
             a3) >= 0 )
      {
        punk = 0LL;
        v29 = 0LL;
        v35 = 3;
        (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 7) + 32LL))(
          (char *)this + 56,
          &GUID_00000000_0000_0000_c000_000000000046,
          &v29);
        v13 = punk;
        if ( punk )
        {
          punk = 0LL;
          ((void (__fastcall *)(IUnknown *))v13->lpVtbl->Release)(v13);
        }
        Service = IUnknown_QueryService(
                    v29,
                    &GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa,
                    &GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa,
                    (void **)&punk);
        v15 = v29;
        if ( v29 )
        {
          v29 = 0LL;
          ((void (__fastcall *)(IUnknown *))v15->lpVtbl->Release)(v15);
        }
        if ( Service >= 0 )
        {
          v35 = 0;
          if ( ((int (__fastcall *)(IUnknown *, struct Windows::Foundation::Collections::IPropertySet *, int *))punk->lpVtbl[2].Release)(
                 punk,
                 a3,
                 &v35) >= 0 )
          {
            if ( v35 )
            {
              LOBYTE(v16) = 1;
              v17 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest *, __int64))(*(_QWORD *)a4 + 56LL))(
                      a4,
                      v16);
              if ( v17 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x15E9,
                  (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                  (const char *)(unsigned int)v17,
                  (int)punk);
            }
          }
        }
        pv = 0LL;
        v31 = -1LL;
        v32 = -1LL;
        if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v28 + 32LL))(v28, &pv) >= 0 )
        {
          v19 = AppActivationPropertySetHelpers::ConditionallyNotifyUAOfLaunch(
                  (LPCWSTR)pv,
                  (const unsigned __int16 *)a3,
                  v18);
          if ( v19 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x15F5,
              (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              (const char *)(unsigned int)v19,
              (int)punk);
        }
        if ( pv )
        {
          CoTaskMemFree(pv);
          pv = 0LL;
        }
        v31 = 0LL;
        v32 = 0LL;
        v20 = punk;
        if ( punk )
        {
          punk = 0LL;
          ((void (__fastcall *)(IUnknown *))v20->lpVtbl->Release)(v20);
        }
      }
      v21 = ppvOut;
      if ( ppvOut )
      {
        ppvOut = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v21 + 16LL))(v21);
      }
    }
    v22 = v33[0];
    if ( v33[0] )
    {
      v33[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    v23 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
  }
  v24 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v24)[2])(v24);
  }
}
