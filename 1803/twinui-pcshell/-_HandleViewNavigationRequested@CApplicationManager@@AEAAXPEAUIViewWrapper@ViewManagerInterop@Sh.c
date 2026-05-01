/*
 * XREFs of ?_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@PEAUIViewEventArgsForNavigationRequest@3456@@Z @ 0x180040A10
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180041090 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ?EvaluateHolographicContext@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAH@Z @ 0x1800213D0 (-EvaluateHolographicContext@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAH.c)
 *     ?ActivationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800237C0 (-ActivationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_18002B490.c)
 *     ?GetViewForApplication@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x18002E5C0 (-GetViewForApplication@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIApplicat.c)
 *     ?GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180030CE0 (-GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?MatchByWindow@CImmersiveApp@@UEBA_NAEBVCTaskWindowFinder@@W4MatchByWindowFlags@@@Z @ 0x180049650 (-MatchByWindow@CImmersiveApp@@UEBA_NAEBVCTaskWindowFinder@@W4MatchByWindowFlags@@@Z.c)
 *     ?GetApplicationId@CImmersiveApp@@UEAAJPEAPEAG@Z @ 0x18004D0C0 (-GetApplicationId@CImmersiveApp@@UEAAJPEAPEAG@Z.c)
 *     ?ConditionallyNotifyUAOfLaunch@AppActivationPropertySetHelpers@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18008FB18 (-ConditionallyNotifyUAOfLaunch@AppActivationPropertySetHelpers@@YAJPEBGPEAUIPropertySet@Collecti.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
void __fastcall CApplicationManager::_HandleViewNavigationRequested(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct IUnknown *a3,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest *a4)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest *v4; // r14
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r15
  CImmersiveApp *v10; // rbx
  __int64 (__fastcall *v11)(__int64, LPVOID *, _QWORD); // rax
  char v12; // al
  int v13; // r14d
  __int64 v14; // rcx
  int v15; // ebx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, _QWORD); // rcx
  __int64 v17; // rcx
  RTL_SRWLOCK *Ptr; // rcx
  __int64 (__fastcall *v19)(RTL_SRWLOCK *, struct IImmersiveApplication *, struct IApplicationView **); // rax
  int ViewForApplication; // eax
  RTL_SRWLOCK *v21; // rbx
  __int64 (__fastcall *v22)(RTL_SRWLOCK *, struct _GUID *, void **); // rax
  void *v23; // rcx
  HRESULT Service; // edi
  IUnknown *v25; // rcx
  __int64 (__fastcall *v26)(ShellPositionerManager *, struct IApplicationView *, struct IUnknown *); // rax
  int v27; // eax
  __int64 (__fastcall *v28)(RTL_SRWLOCK *, struct _GUID *, void **); // rax
  IUnknown *v29; // rcx
  HRESULT v30; // ebx
  IUnknown *v31; // rcx
  ULONG (__stdcall *AddRef)(IUnknown *); // rax
  int v33; // eax
  __int64 v34; // rdx
  __int64 (__fastcall *v35)(CImmersiveApp *__hidden, unsigned __int16 **); // rax
  int ApplicationId; // eax
  struct Windows::Foundation::Collections::IPropertySet *v37; // r8
  int v38; // eax
  IUnknown *v39; // rcx
  void *v40; // rcx
  CWinRTApplicationView *v41; // rcx
  void (*v42)(void); // rax
  CImmersiveApp *v43; // rcx
  void (__fastcall ***v44)(_QWORD, GUID *, CImmersiveApp **); // rcx
  int v45; // eax
  int v46; // [rsp+20h] [rbp-60h]
  IUnknown *punk; // [rsp+30h] [rbp-50h] BYREF
  void (__fastcall ***v48)(_QWORD, GUID *, CImmersiveApp **); // [rsp+38h] [rbp-48h] BYREF
  CImmersiveApp *v49; // [rsp+40h] [rbp-40h] BYREF
  IUnknown *v50; // [rsp+48h] [rbp-38h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-30h] BYREF
  __int64 v52; // [rsp+58h] [rbp-28h]
  __int64 v53; // [rsp+60h] [rbp-20h]
  void *ppvOut[3]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  __int64 v56; // [rsp+C0h] [rbp+40h] BYREF
  CWinRTApplicationView *v57; // [rsp+C8h] [rbp+48h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest *v58; // [rsp+D8h] [rbp+58h]

  v58 = a4;
  ppvOut[2] = (void *)-2LL;
  v4 = a4;
  LODWORD(v56) = 0;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v48 = 0LL;
  ppvOut[0] = 0LL;
  ppvOut[1] = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
  pv = 0LL;
  v52 = (__int64)a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
  LODWORD(v53) = 0;
  v48 = 0LL;
  v57 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( *((_QWORD *)this + 79) )
  {
    v50 = 0LL;
    do
    {
      v10 = *(CImmersiveApp **)(*((_QWORD *)this + 78) + 8 * v9);
      v49 = v10;
      if ( v10 )
        (*(void (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v10 + 8LL))(v10);
      v56 = 0LL;
      (**(void (__fastcall ***)(CImmersiveApp *, GUID *, __int64 *))v10)(
        v10,
        &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
        &v56);
      v11 = *(__int64 (__fastcall **)(__int64, LPVOID *, _QWORD))(*(_QWORD *)v56 + 296LL);
      if ( (char *)v11 == (char *)CImmersiveApp::MatchByWindow )
        v12 = CImmersiveApp::MatchByWindow(v56, &pv, (unsigned int)v53);
      else
        v12 = v11(v56, &pv, (unsigned int)v53);
      v13 = -1;
      if ( v12 )
        v13 = 0;
      v14 = v56;
      if ( v56 )
      {
        v56 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      (*(void (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v10 + 16LL))(v10);
      if ( !v13 )
      {
        v8 = v9;
        v15 = 0;
        v4 = v58;
        goto LABEL_17;
      }
      ++v9;
    }
    while ( v9 < *((_QWORD *)this + 79) );
    v4 = v58;
  }
  v15 = -2147319765;
LABEL_17:
  if ( v15 >= 0 )
  {
    v16 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD))(*((_QWORD *)this + 78) + 8 * v8);
    v15 = (**v16)(v16, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v48);
  }
  v17 = v52;
  if ( v52 )
  {
    v52 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 16LL))(a2);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v15 >= 0 )
  {
    v49 = 0LL;
    (**v48)(v48, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v49);
    v57 = 0LL;
    Ptr = (RTL_SRWLOCK *)CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    v19 = (__int64 (__fastcall *)(RTL_SRWLOCK *, struct IImmersiveApplication *, struct IApplicationView **))*((_QWORD *)Ptr->Ptr + 7);
    if ( v19 == CApplicationViewManager::GetViewForApplication )
      ViewForApplication = CApplicationViewManager::GetViewForApplication(Ptr, v49, &v57);
    else
      ViewForApplication = v19(Ptr, v49, &v57);
    if ( ViewForApplication >= 0 )
    {
      ppvOut[0] = 0LL;
      v21 = (RTL_SRWLOCK *)((char *)this + 48);
      punk = 0LL;
      LODWORD(v56) = 2;
      v22 = *(__int64 (__fastcall **)(RTL_SRWLOCK *, struct _GUID *, void **))(*((_QWORD *)this + 6) + 32LL);
      if ( v22 == CWRLObjectWithGITSite::GetSite )
        CWRLObjectWithGITSite::GetSite(v21, &GUID_00000000_0000_0000_c000_000000000046, (void **)&punk);
      else
        v22(v21, &GUID_00000000_0000_0000_c000_000000000046, (void **)&punk);
      v23 = ppvOut[0];
      if ( ppvOut[0] )
      {
        ppvOut[0] = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v23 + 16LL))(v23);
      }
      Service = IUnknown_QueryService(
                  punk,
                  &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
                  &GUID_ff964f56_8baf_4947_9c46_f227ec68ff34,
                  ppvOut);
      v25 = punk;
      if ( punk )
      {
        punk = 0LL;
        ((void (__fastcall *)(IUnknown *))v25->lpVtbl->Release)(v25);
      }
      if ( Service >= 0 )
      {
        v26 = *(__int64 (__fastcall **)(ShellPositionerManager *, struct IApplicationView *, struct IUnknown *))(*(_QWORD *)ppvOut[0] + 32LL);
        v27 = v26 == ShellPositionerManager::ActivationRequested
            ? ShellPositionerManager::ActivationRequested((ShellPositionerManager *)ppvOut[0], v57, a3)
            : v26((ShellPositionerManager *)ppvOut[0], v57, a3);
        if ( v27 >= 0 )
        {
          punk = 0LL;
          v50 = 0LL;
          LODWORD(v56) = 9;
          v28 = (__int64 (__fastcall *)(RTL_SRWLOCK *, struct _GUID *, void **))*((_QWORD *)v21->Ptr + 4);
          if ( v28 == CWRLObjectWithGITSite::GetSite )
            CWRLObjectWithGITSite::GetSite(v21, &GUID_00000000_0000_0000_c000_000000000046, (void **)&v50);
          else
            v28(v21, &GUID_00000000_0000_0000_c000_000000000046, (void **)&v50);
          v29 = punk;
          if ( punk )
          {
            punk = 0LL;
            ((void (__fastcall *)(IUnknown *))v29->lpVtbl->Release)(v29);
          }
          v30 = IUnknown_QueryService(
                  v50,
                  &GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa,
                  &GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa,
                  (void **)&punk);
          v31 = v50;
          if ( v50 )
          {
            v50 = 0LL;
            ((void (__fastcall *)(IUnknown *))v31->lpVtbl->Release)(v31);
          }
          if ( v30 >= 0 )
          {
            LODWORD(v56) = 0;
            AddRef = punk->lpVtbl[3].AddRef;
            v33 = (char *)AddRef == (char *)HolographicPositioner::EvaluateHolographicContext
                ? HolographicPositioner::EvaluateHolographicContext(
                    (HolographicPositioner *)punk,
                    (__int64 (__fastcall ***)(struct IApplicationView *, GUID *, CWinRTApplicationView **))v57,
                    a3,
                    (int *)&v56)
                : ((__int64 (__fastcall *)(IUnknown *, CWinRTApplicationView *, struct IUnknown *, __int64 *))AddRef)(
                    punk,
                    v57,
                    a3,
                    &v56);
            if ( v33 >= 0 )
            {
              if ( (_DWORD)v56 )
              {
                LOBYTE(v34) = 1;
                v45 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest *, __int64))(*(_QWORD *)v4 + 56LL))(
                        v4,
                        v34);
                if ( v45 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x16A8,
                    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                    (const char *)(unsigned int)v45,
                    v46);
              }
            }
          }
          pv = 0LL;
          v52 = -1LL;
          v53 = -1LL;
          v35 = *(__int64 (__fastcall **)(CImmersiveApp *__hidden, unsigned __int16 **))(*(_QWORD *)v49 + 32LL);
          if ( v35 == CImmersiveApp::GetApplicationId )
            ApplicationId = CImmersiveApp::GetApplicationId(v49, (unsigned __int16 **)&pv);
          else
            ApplicationId = v35(v49, (unsigned __int16 **)&pv);
          if ( ApplicationId >= 0 )
          {
            v38 = AppActivationPropertySetHelpers::ConditionallyNotifyUAOfLaunch(
                    (LPCWSTR)pv,
                    (const unsigned __int16 *)a3,
                    v37);
            if ( v38 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x16B4,
                (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                (const char *)(unsigned int)v38,
                v46);
          }
          if ( pv )
          {
            CoTaskMemFree(pv);
            pv = 0LL;
          }
          v52 = 0LL;
          v53 = 0LL;
          v39 = punk;
          if ( punk )
          {
            punk = 0LL;
            ((void (__fastcall *)(IUnknown *))v39->lpVtbl->Release)(v39);
          }
        }
      }
      v40 = ppvOut[0];
      if ( ppvOut[0] )
      {
        ppvOut[0] = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v40 + 16LL))(v40);
      }
    }
    v41 = v57;
    if ( v57 )
    {
      v57 = 0LL;
      v42 = *(void (**)(void))(*(_QWORD *)v41 + 16LL);
      if ( (char *)v42 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release(v41);
      else
        v42();
    }
    v43 = v49;
    if ( v49 )
    {
      v49 = 0LL;
      (*(void (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v43 + 16LL))(v43);
    }
  }
  v44 = v48;
  if ( v48 )
  {
    v48 = 0LL;
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, CImmersiveApp **)))(*v44)[2])(v44);
  }
}
