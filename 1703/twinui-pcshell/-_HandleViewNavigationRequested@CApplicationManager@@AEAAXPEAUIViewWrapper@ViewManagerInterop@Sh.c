/*
 * XREFs of ?_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@PEAUIViewEventArgsForNavigationRequest@3456@@Z @ 0x180012070
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180011910 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ?ConditionallyNotifyUAOfLaunch@AppActivationPropertySetHelpers@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800068FC (-ConditionallyNotifyUAOfLaunch@AppActivationPropertySetHelpers@@YAJPEBGPEAUIPropertySet@Collecti.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByTaskWindow@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1800189BC (--$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmer.c)
 *     ?_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180025750 (-_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall CApplicationManager::_HandleViewNavigationRequested(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest *a4)
{
  int First; // esi
  __int64 v9; // rcx
  char *v10; // rbx
  IUnknown **GITSitePtr; // rdi
  void *v12; // rcx
  HRESULT v13; // edi
  __int64 v14; // rcx
  IUnknown **v15; // rbx
  void *v16; // rcx
  HRESULT v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // eax
  struct Windows::Foundation::Collections::IPropertySet *v21; // r8
  int v22; // eax
  void *v23; // rcx
  void *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  void (__fastcall ***v27)(_QWORD, GUID *, _QWORD *); // rcx
  void (__fastcall ***v28)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-50h] BYREF
  void *v29; // [rsp+28h] [rbp-48h] BYREF
  void *ppvOut; // [rsp+30h] [rbp-40h] BYREF
  __int64 v31; // [rsp+38h] [rbp-38h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-30h] BYREF
  __int64 v33; // [rsp+48h] [rbp-28h]
  __int64 v34; // [rsp+50h] [rbp-20h]
  _QWORD v35[3]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  __int64 v37; // [rsp+A8h] [rbp+38h] BYREF

  v35[2] = -2LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v28 = 0LL;
  v35[0] = 0LL;
  v35[1] = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
  pv = 0LL;
  v33 = (__int64)a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
  LODWORD(v34) = 0;
  First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(this, &pv, &v28, 0LL);
  v9 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 16LL))(a2);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( First >= 0 )
  {
    v31 = 0LL;
    (**v28)(v28, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v31);
    v35[0] = 0LL;
    if ( (*(int (__fastcall **)(PVOID, __int64, _QWORD *))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[12].Ptr
                                                         + 56LL))(
           CApplicationManagerUtility::g_pIAMGlobals[12].Ptr,
           v31,
           v35) >= 0 )
    {
      ppvOut = 0LL;
      v10 = (char *)this + 40;
      GITSitePtr = (IUnknown **)CWRLObjectWithGITSite::_GetGITSitePtr((char *)this + 40, &v37);
      v12 = ppvOut;
      if ( ppvOut )
      {
        ppvOut = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
      }
      v13 = IUnknown_QueryService(
              *GITSitePtr,
              &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
              &GUID_ff964f56_8baf_4947_9c46_f227ec68ff34,
              &ppvOut);
      v14 = v37;
      if ( v37 )
      {
        v37 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      if ( v13 >= 0
        && (*(int (__fastcall **)(void *, _QWORD, struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)ppvOut + 32LL))(
             ppvOut,
             v35[0],
             a3) >= 0 )
      {
        v29 = 0LL;
        v15 = (IUnknown **)CWRLObjectWithGITSite::_GetGITSitePtr(v10, &v37);
        v16 = v29;
        if ( v29 )
        {
          v29 = 0LL;
          (*(void (__fastcall **)(void *))(*(_QWORD *)v16 + 16LL))(v16);
        }
        v17 = IUnknown_QueryService(
                *v15,
                &GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa,
                &GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa,
                &v29);
        v18 = v37;
        if ( v37 )
        {
          v37 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
        if ( v17 >= 0 )
        {
          LODWORD(v37) = 0;
          if ( (*(int (__fastcall **)(void *, struct Windows::Foundation::Collections::IPropertySet *, __int64 *))(*(_QWORD *)v29 + 64LL))(
                 v29,
                 a3,
                 &v37) >= 0 )
          {
            if ( (_DWORD)v37 )
            {
              LOBYTE(v19) = 1;
              v20 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest *, __int64))(*(_QWORD *)a4 + 56LL))(
                      a4,
                      v19);
              if ( v20 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x1597,
                  (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                  (const char *)(unsigned int)v20,
                  (int)v28);
            }
          }
        }
        pv = 0LL;
        v33 = -1LL;
        v34 = -1LL;
        if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v31 + 32LL))(v31, &pv) >= 0 )
        {
          v22 = AppActivationPropertySetHelpers::ConditionallyNotifyUAOfLaunch(
                  (LPCWSTR)pv,
                  (const unsigned __int16 *)a3,
                  v21);
          if ( v22 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x15A3,
              (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              (const char *)(unsigned int)v22,
              (int)v28);
        }
        if ( pv )
        {
          CoTaskMemFree(pv);
          pv = 0LL;
        }
        v33 = 0LL;
        v34 = 0LL;
        v23 = v29;
        if ( v29 )
        {
          v29 = 0LL;
          (*(void (__fastcall **)(void *))(*(_QWORD *)v23 + 16LL))(v23);
        }
      }
      v24 = ppvOut;
      if ( ppvOut )
      {
        ppvOut = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v24 + 16LL))(v24);
      }
    }
    v25 = v35[0];
    if ( v35[0] )
    {
      v35[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    v26 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
  }
  v27 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v27)[2])(v27);
  }
}
