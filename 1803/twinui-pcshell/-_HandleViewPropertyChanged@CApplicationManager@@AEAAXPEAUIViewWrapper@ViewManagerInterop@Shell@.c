/*
 * XREFs of ?_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewPropertyChangedArgs@3456@@Z @ 0x18003EE20
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180041090 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FrameworkViewTypeChanged@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1800241A0 (-FrameworkViewTypeChanged@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4FRAMEWORK_VIEW_TY.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_18002B490.c)
 *     ?GetViewForApplication@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x18002E5C0 (-GetViewForApplication@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIApplicat.c)
 *     ?GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180030CE0 (-GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?IsEqualByView@CTaskWindow@@UEBA_NPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180047D90 (-IsEqualByView@CTaskWindow@@UEBA_NPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ?MatchByWindow@CImmersiveApp@@UEBA_NAEBVCTaskWindowFinder@@W4MatchByWindowFlags@@@Z @ 0x180049650 (-MatchByWindow@CImmersiveApp@@UEBA_NAEBVCTaskWindowFinder@@W4MatchByWindowFlags@@@Z.c)
 *     ?GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x18004B2C0 (-GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@P.c)
 *     ?GetPropertyAsUInt@ViewWrapperBase@@UEAAJPEAUHSTRING__@@PEAI@Z @ 0x180050930 (-GetPropertyAsUInt@ViewWrapperBase@@UEAAJPEAUHSTRING__@@PEAI@Z.c)
 *     ?get_PropertyKey@ViewEventArgsForPropertyChanged@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180087620 (-get_PropertyKey@ViewEventArgsForPropertyChanged@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByTaskWindow@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1800F082C (--$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmer.c)
 */

// Hidden C++ exception states: #wind=17
void __fastcall CApplicationManager::_HandleViewPropertyChanged(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs *a3)
{
  int (*v6)(ViewEventArgsForPropertyChanged *__hidden, HSTRING *); // rax
  int PropertyKey; // eax
  HRESULT v8; // eax
  HRESULT v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r12
  __int64 v12; // r15
  void *v13; // rbx
  __int64 (__fastcall *v14)(struct IImmersiveApplication *, HSTRING_HEADER *, _QWORD); // rax
  char v15; // al
  int v16; // esi
  struct IImmersiveApplication *v17; // rcx
  int v18; // ebx
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v20; // rcx
  __int64 (__fastcall *v21)(__int64, __int64, GUID *, CTaskWindow **); // rax
  int WindowsInternal; // eax
  bool (__fastcall *v23)(CTaskWindow *__hidden, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *); // rax
  RTL_SRWLOCK *Ptr; // rcx
  __int64 (__fastcall *v26)(RTL_SRWLOCK *, struct IImmersiveApplication *, struct IApplicationView **); // rax
  int ViewForApplication; // eax
  HRESULT v28; // eax
  __int64 (__fastcall *v29)(ViewWrapperBase *__hidden, HSTRING, unsigned int *); // rax
  unsigned int *v30; // r8
  HSTRING v31; // rdx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v32; // rcx
  int PropertyAsUInt; // eax
  unsigned int v34; // edi
  RTL_SRWLOCK *v35; // rcx
  __int64 (__fastcall *v36)(RTL_SRWLOCK *, struct _GUID *, void **); // rax
  void *v37; // rcx
  HRESULT v38; // ebx
  IUnknown *v39; // rcx
  __int64 (__fastcall *v40)(__int64, CWinRTApplicationView *, unsigned int); // rax
  void *v41; // rcx
  CWinRTApplicationView *v42; // rcx
  void (*v43)(void); // rax
  struct IImmersiveApplication *v44; // rcx
  CTaskWindow *v45; // rcx
  __int64 v46; // rcx
  bool v47; // bl
  CTaskWindow *v48; // [rsp+30h] [rbp-69h] BYREF
  __int64 v49; // [rsp+38h] [rbp-61h] BYREF
  INT32 result; // [rsp+40h] [rbp-59h] BYREF
  unsigned int v51; // [rsp+44h] [rbp-55h] BYREF
  void *ppvOut; // [rsp+48h] [rbp-51h] BYREF
  CWinRTApplicationView *v53; // [rsp+50h] [rbp-49h] BYREF
  struct IImmersiveApplication *v54; // [rsp+58h] [rbp-41h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v55; // [rsp+60h] [rbp-39h] BYREF
  HSTRING string1; // [rsp+68h] [rbp-31h] BYREF
  IUnknown *punk; // [rsp+70h] [rbp-29h] BYREF
  int v58; // [rsp+78h] [rbp-21h]
  __int64 v59; // [rsp+80h] [rbp-19h]
  __int64 v60; // [rsp+88h] [rbp-11h]
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v61; // [rsp+90h] [rbp-9h]
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp-1h] BYREF
  HSTRING string; // [rsp+B0h] [rbp+17h] BYREF

  v59 = -2LL;
  v58 = 0;
  WindowsDeleteString(0LL);
  string1 = 0LL;
  v6 = *(int (**)(ViewEventArgsForPropertyChanged *__hidden, HSTRING *))(*(_QWORD *)a3 + 48LL);
  if ( v6 == ViewEventArgsForPropertyChanged::get_PropertyKey )
    PropertyKey = ViewEventArgsForPropertyChanged::get_PropertyKey(a3, &string1);
  else
    PropertyKey = ((__int64 (__fastcall *)(struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs *, HSTRING *))v6)(
                    a3,
                    &string1);
  if ( PropertyKey < 0 )
    goto LABEL_68;
  string = 0LL;
  v8 = WindowsCreateStringReference(L"BackVisible", 0xBu, &hstringHeader, &string);
  if ( v8 < 0 )
  {
    RaiseException(v8, 1u, 0, 0LL);
    JUMPOUT(0x1800C8E98LL);
  }
  if ( WindowsCompareStringOrdinal(string1, string, &result) >= 0 && !result )
  {
    string = 0LL;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v48 = 0LL;
    v54 = 0LL;
    v55 = a2;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v55);
    hstringHeader.Reserved.Reserved1 = 0LL;
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = a2;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&hstringHeader.Reserved.Reserved2[8]);
    *(_DWORD *)&hstringHeader.Reserved.Reserved2[16] = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v48);
    v47 = (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(
                 this,
                 &hstringHeader,
                 &v48,
                 0LL) >= 0;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&hstringHeader.Reserved.Reserved2[8]);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v55);
    if ( v47 )
      (*(void (__fastcall **)(CTaskWindow *))(*(_QWORD *)v48 + 208LL))(v48);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v48);
  }
  string = 0LL;
  v9 = WindowsCreateStringReference(L"FrameworkViewType", 0x11u, &hstringHeader, &string);
  if ( v9 < 0 )
  {
    RaiseException(v9, 1u, 0, 0LL);
LABEL_75:
    v49 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    goto LABEL_15;
  }
  if ( WindowsCompareStringOrdinal(string1, string, &result) < 0 || result )
    goto LABEL_68;
  string = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v49 = 0LL;
  v60 = 0LL;
  v61 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
  hstringHeader.Reserved.Reserved1 = 0LL;
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
  *(_DWORD *)&hstringHeader.Reserved.Reserved2[16] = 0;
  v10 = v49;
  if ( v49 )
    goto LABEL_75;
LABEL_15:
  v49 = 0LL;
  punk = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( *((_QWORD *)this + 79) )
  {
    v53 = 0LL;
    while ( 1 )
    {
      v13 = *(void **)(*((_QWORD *)this + 78) + 8 * v12);
      ppvOut = v13;
      if ( v13 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 8LL))(v13);
      v54 = 0LL;
      (**(void (__fastcall ***)(void *, GUID *, struct IImmersiveApplication **))v13)(
        v13,
        &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
        &v54);
      v14 = *(__int64 (__fastcall **)(struct IImmersiveApplication *, HSTRING_HEADER *, _QWORD))(*(_QWORD *)v54 + 296LL);
      if ( (char *)v14 == (char *)CImmersiveApp::MatchByWindow )
        v15 = CImmersiveApp::MatchByWindow(v54, &hstringHeader, *(unsigned int *)&hstringHeader.Reserved.Reserved2[16]);
      else
        v15 = v14(v54, &hstringHeader, *(unsigned int *)&hstringHeader.Reserved.Reserved2[16]);
      v16 = -1;
      if ( v15 )
        v16 = 0;
      v17 = v54;
      if ( v54 )
      {
        v54 = 0LL;
        (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v17 + 16LL))(v17);
      }
      (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 16LL))(v13);
      if ( !v16 )
        break;
      if ( (unsigned __int64)++v12 >= *((_QWORD *)this + 79) )
        goto LABEL_78;
    }
    v11 = v12;
    v18 = 0;
  }
  else
  {
LABEL_78:
    v18 = -2147319765;
  }
  if ( v18 >= 0 )
  {
    v19 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 78) + 8 * v11);
    v18 = (**v19)(v19, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v49);
  }
  v20 = *(_QWORD *)&hstringHeader.Reserved.Reserved2[8];
  if ( *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] )
  {
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 16LL))(a2);
  v48 = 0LL;
  if ( v18 >= 0 )
  {
    v21 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, CTaskWindow **))(*(_QWORD *)v49 + 352LL);
    if ( (char *)v21 == (char *)CImmersiveApp::GetWindowsInternal )
      WindowsInternal = CImmersiveApp::GetWindowsInternal(v49, 2LL, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, &v48);
    else
      WindowsInternal = v21(v49, 2LL, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, &v48);
    v18 = WindowsInternal;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v18 < 0 )
    goto LABEL_64;
  v23 = *(bool (__fastcall **)(CTaskWindow *__hidden, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v48 + 48LL);
  if ( !(v23 == CTaskWindow::IsEqualByView ? CTaskWindow::IsEqualByView(v48, a2) : v23(v48, a2)) )
    goto LABEL_64;
  v54 = 0LL;
  (**(void (__fastcall ***)(__int64, GUID *, struct IImmersiveApplication **))v49)(
    v49,
    &GUID_8b14e88b_5663_4caf_b196_c31479262831,
    &v54);
  v53 = 0LL;
  Ptr = (RTL_SRWLOCK *)CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  v26 = (__int64 (__fastcall *)(RTL_SRWLOCK *, struct IImmersiveApplication *, struct IApplicationView **))*((_QWORD *)Ptr->Ptr + 7);
  if ( v26 == CApplicationViewManager::GetViewForApplication )
    ViewForApplication = CApplicationViewManager::GetViewForApplication(Ptr, v54, &v53);
  else
    ViewForApplication = v26(Ptr, v54, &v53);
  if ( ViewForApplication >= 0 )
  {
    v51 = 0;
    string = 0LL;
    v28 = WindowsCreateStringReference(L"FrameworkViewType", 0x11u, &hstringHeader, &string);
    if ( v28 < 0 )
    {
      RaiseException(v28, 1u, 0, 0LL);
    }
    else
    {
      v29 = *(__int64 (__fastcall **)(ViewWrapperBase *__hidden, HSTRING, unsigned int *))(*(_QWORD *)a2 + 360LL);
      v30 = &v51;
      v31 = string;
      v32 = a2;
      if ( v29 == ViewWrapperBase::GetPropertyAsUInt )
      {
        PropertyAsUInt = ViewWrapperBase::GetPropertyAsUInt(a2, string, &v51);
        goto LABEL_47;
      }
    }
    PropertyAsUInt = v29(v32, v31, v30);
LABEL_47:
    if ( PropertyAsUInt >= 0 )
    {
      v34 = v51;
      ppvOut = 0LL;
      v35 = (RTL_SRWLOCK *)((char *)this + 48);
      punk = 0LL;
      v58 = 8;
      v36 = *(__int64 (__fastcall **)(RTL_SRWLOCK *, struct _GUID *, void **))(*((_QWORD *)this + 6) + 32LL);
      if ( v36 == CWRLObjectWithGITSite::GetSite )
        CWRLObjectWithGITSite::GetSite(v35, &GUID_00000000_0000_0000_c000_000000000046, (void **)&punk);
      else
        v36(v35, &GUID_00000000_0000_0000_c000_000000000046, (void **)&punk);
      v37 = ppvOut;
      if ( ppvOut )
      {
        ppvOut = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v37 + 16LL))(v37);
      }
      v38 = IUnknown_QueryService(
              punk,
              &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
              &GUID_d452bf19_b505_4b1c_8182_1cc821a13092,
              &ppvOut);
      v39 = punk;
      if ( punk )
      {
        punk = 0LL;
        ((void (__fastcall *)(IUnknown *))v39->lpVtbl->Release)(v39);
      }
      if ( v38 >= 0 )
      {
        v40 = *(__int64 (__fastcall **)(__int64, CWinRTApplicationView *, unsigned int))(*(_QWORD *)ppvOut + 24LL);
        if ( v40 == ShellPositionerManager::FrameworkViewTypeChanged )
          ShellPositionerManager::FrameworkViewTypeChanged((__int64)ppvOut, v53, v34);
        else
          v40((__int64)ppvOut, v53, v34);
      }
      v41 = ppvOut;
      if ( ppvOut )
      {
        ppvOut = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v41 + 16LL))(v41);
      }
    }
  }
  v42 = v53;
  if ( v53 )
  {
    v53 = 0LL;
    v43 = *(void (**)(void))(*(_QWORD *)v42 + 16LL);
    if ( (char *)v43 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release(v42);
    else
      v43();
  }
  v44 = v54;
  if ( v54 )
  {
    v54 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v44 + 16LL))(v44);
  }
LABEL_64:
  v45 = v48;
  if ( v48 )
  {
    v48 = 0LL;
    (*(void (__fastcall **)(CTaskWindow *))(*(_QWORD *)v45 + 16LL))(v45);
  }
  v46 = v49;
  if ( v49 )
  {
    v49 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
  }
LABEL_68:
  WindowsDeleteString(string1);
}
