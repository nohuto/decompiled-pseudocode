/*
 * XREFs of ?OnApplicationViewChanged@AgileApplicationViewChangeListenerConverter@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18001EBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x18000AEC0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18001D670 (-OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@.c)
 *     ?OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180021470 (-OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 *     ?OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800216A0 (-OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 *     ?OnApplicationViewChanged@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180021750 (-OnApplicationViewChanged@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 *     ?OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800218D0 (-OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHAN.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002BF80 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z @ 0x18008AE5C (-PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@IEAAKXZ @ 0x180095790 (-InternalRelease@-$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIOSTaskCompletion@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F5E40 (--1-$ComPtr@UIOSTaskCompletion@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedDesktopOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18019E400 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedDeskto.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18019F5EC (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedE.c)
 *     ?PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z @ 0x1802BDF9C (-PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_5da5069c1ec2393567e9fe231930dfb9___ @ 0x1802D2744 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_5da5069c1ec2393567e9fe231930dfb9___.c)
 *     ?InternalRelease@?$ComPtr@VCPrivilegedPresentationOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x1802D35A8 (-InternalRelease@-$ComPtr@VCPrivilegedPresentationOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall AgileApplicationViewChangeListenerConverter::OnApplicationViewChanged(
        __int64 a1,
        CWinRTApplicationView *a2,
        unsigned int a3,
        __int64 a4)
{
  CWinRTApplicationView *v7; // r13
  unsigned int v8; // ebx
  int v9; // edi
  int v10; // eax
  int v11; // ecx
  HRESULT ApartmentType; // r14d
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  DWORD CurrentThreadId; // edi
  __int64 v16; // r10
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct IApplicationView *v20; // rdx
  HWND WindowForView; // rax
  unsigned int PropW; // eax
  const struct _GUID *v23; // rdx
  int Instance; // eax
  __int64 v25; // rdx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int cchValue; // [rsp+20h] [rbp-E0h]
  int cchValuea; // [rsp+20h] [rbp-E0h]
  APTTYPEQUALIFIER pAptQualifier[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+38h] [rbp-C8h] BYREF
  APTTYPE pAptType; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+48h] [rbp-B8h] BYREF
  CWinRTApplicationView *v36[3]; // [rsp+50h] [rbp-B0h] BYREF
  HRESULT v37; // [rsp+68h] [rbp-98h]
  WCHAR Filename[264]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2D8h] [rbp+1D8h]

  v36[1] = (CWinRTApplicationView *)-2LL;
  v33 = a1;
  v7 = (CWinRTApplicationView *)(a1 + 48);
  v8 = 0;
  if ( !a1 )
    v7 = 0LL;
  v36[2] = v7;
  v9 = *((_DWORD *)v7 + 11);
  if ( v9 == 2 )
    goto LABEL_19;
  v10 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
  if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
    goto LABEL_18;
  if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
  {
    v11 = (FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1) + 1;
    `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v11;
  }
  else
  {
    v11 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
  }
  if ( v11 != 1 )
    goto LABEL_12;
  if ( v9 == 1 )
  {
    if ( (unsigned int)IsAppCompatModeEnabled(16LL) )
    {
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 2;
      goto LABEL_12;
    }
    v10 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
LABEL_18:
    if ( v10 != 1 )
      goto LABEL_12;
  }
LABEL_19:
  if ( *((_DWORD *)v7 + 10) == -3 )
    goto LABEL_12;
  CurrentThreadId = 0;
  ApartmentType = CoGetApartmentType(&pAptType, pAptQualifier);
  if ( ApartmentType < 0 )
    goto LABEL_26;
  if ( pAptType == APTTYPE_STA )
  {
LABEL_25:
    CurrentThreadId = GetCurrentThreadId();
    goto LABEL_26;
  }
  if ( pAptType == APTTYPE_MTA )
    goto LABEL_26;
  if ( pAptType != APTTYPE_NA )
  {
    if ( pAptType != APTTYPE_MAINSTA )
      goto LABEL_26;
    goto LABEL_25;
  }
  CurrentThreadId = -1;
LABEL_26:
  if ( ApartmentType < 0 )
    goto LABEL_14;
  if ( CurrentThreadId != *((_DWORD *)v7 + 10) )
  {
    ApartmentType = -2147417842;
    goto LABEL_14;
  }
LABEL_12:
  ApartmentType = -2147417842;
  if ( TryEnterCriticalSection((LPCRITICAL_SECTION)v7) )
    ApartmentType = 0;
LABEL_14:
  v37 = ApartmentType;
  if ( ApartmentType < 0 )
  {
    *(_QWORD *)pAptQualifier = 0LL;
    Microsoft::WRL::ComPtr<IApplicationViewChangeListener>::InternalRelease(pAptQualifier);
    v28 = (*(__int64 (__fastcall **)(_QWORD, GUID *, APTTYPEQUALIFIER *))(**(_QWORD **)(v33 + 96) + 24LL))(
            *(_QWORD *)(v33 + 96),
            &GUID_727f9e97_76ee_497b_a942_b6371328485c,
            pAptQualifier);
    v8 = v28;
    if ( v28 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, CWinRTApplicationView *, _QWORD, __int64))(**(_QWORD **)pAptQualifier
                                                                                       + 24LL))(
             *(_QWORD *)pAptQualifier,
             a2,
             a3,
             a4);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4C5,
        (unsigned int)"internal\\sdk\\inc\\wil/com.h",
        (const char *)(unsigned int)v28,
        cchValue);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8A,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
        (const char *)v8,
        cchValuea);
    }
    Microsoft::WRL::ComPtr<IApplicationViewChangeListener>::InternalRelease(pAptQualifier);
    goto LABEL_66;
  }
  v13 = *(_QWORD *)(v33 + 104);
  v14 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v13 + 24LL);
  if ( v14 == SurfaceHubPositioner::OnApplicationViewChanged )
  {
    v8 = SurfaceHubPositioner::OnApplicationViewChanged(*(_QWORD *)(v33 + 104), a2, a3, a4);
    goto LABEL_66;
  }
  if ( v14 == PeoplePaneViewManager::OnApplicationViewChanged )
  {
    v8 = PeoplePaneViewManager::OnApplicationViewChanged(*(_QWORD *)(v33 + 104), a2, a3, a4);
    goto LABEL_66;
  }
  if ( (char *)v14 == (char *)ApplicationViewManagerVisibilityDebouncer::OnApplicationViewChanged )
  {
    v8 = ApplicationViewManagerVisibilityDebouncer::OnApplicationViewChanged(
           *(RTL_SRWLOCK **)(v33 + 104),
           (__int64)a2,
           a3,
           a4);
    goto LABEL_66;
  }
  if ( v14 == CDesktopPositioner::OnApplicationViewChanged )
  {
    v8 = CDesktopPositioner::OnApplicationViewChanged(*(_QWORD *)(v33 + 104), a2, a3, a4);
    goto LABEL_66;
  }
  if ( v14 == HolographicPositioner::OnApplicationViewChanged )
  {
    v8 = HolographicPositioner::OnApplicationViewChanged(*(_QWORD *)(v33 + 104), a2, a3, a4);
    goto LABEL_66;
  }
  if ( (char *)v14 == (char *)CAppTransitionManager::OnApplicationViewChanged )
  {
    if ( a3 == 7 )
      Microsoft::WRL::ComPtr<IApplicationView>::operator=((CWinRTApplicationView **)(v13 + 112), a2);
    goto LABEL_66;
  }
  if ( (char *)v14 != (char *)&ScreenManager::OnApplicationViewChanged )
  {
    if ( (char *)v14 != (char *)&ShellPositionerManager::OnApplicationViewChanged )
    {
      v8 = v14(*(_QWORD *)(v33 + 104), a2, a3, a4);
      goto LABEL_66;
    }
    if ( a3 )
      goto LABEL_66;
    *(_QWORD *)pAptQualifier = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)pAptQualifier);
    if ( (*(int (__fastcall **)(CWinRTApplicationView *, APTTYPEQUALIFIER *))(*(_QWORD *)a2 + 264LL))(a2, pAptQualifier) >= 0 )
    {
LABEL_60:
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)pAptQualifier);
      goto LABEL_66;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)pAptQualifier);
    *(_QWORD *)pAptQualifier = 0LL;
    WindowForView = ApplicationViewHelpers::GetWindowForView(a2, v20);
    if ( WindowForView )
    {
      PropW = (unsigned int)GetPropW(WindowForView, L"ShellPositionerManager:PriorityList");
      if ( PropW )
      {
        Instance = PositionerPriority_CreateInstance(PropW, v23, (void **)pAptQualifier);
        if ( Instance >= 0 )
          goto LABEL_58;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3D6,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)Instance,
          cchValue);
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)pAptQualifier);
    v26 = PositionerPriority_CreateInstance(*(unsigned int *)(v13 + 40), v25, pAptQualifier);
    if ( v26 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x342,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v26,
        cchValue);
      Microsoft::WRL::ComPtr<IOSTaskCompletion>::~ComPtr<IOSTaskCompletion>(pAptQualifier);
      goto LABEL_66;
    }
LABEL_58:
    v27 = (*(__int64 (__fastcall **)(CWinRTApplicationView *, _QWORD))(*(_QWORD *)a2 + 272LL))(
            a2,
            *(_QWORD *)pAptQualifier);
    if ( v27 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x346,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v27,
        cchValue);
      Microsoft::WRL::ComPtr<IOSTaskCompletion>::~ComPtr<IOSTaskCompletion>(pAptQualifier);
      goto LABEL_66;
    }
    goto LABEL_60;
  }
  if ( a3 - 1 <= 1 && *(_QWORD *)(v13 + 280) )
  {
    *(_QWORD *)pAptQualifier = a2;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)pAptQualifier);
    v16 = v13 - 24;
    v33 = v13 - 24;
    if ( v13 != 24 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Microsoft::WRL::FtmBase>::InternalAddRef(v13 - 24);
    v35 = v16;
    if ( v16 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedDesktopOperations,Microsoft::WRL::FtmBase>::AddRef(v16);
    v36[0] = a2;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)v36);
    Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_5da5069c1ec2393567e9fe231930dfb9___(v18, v17, v19, &v35);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v36);
    Microsoft::WRL::ComPtr<CPrivilegedPresentationOperations>::InternalRelease(&v35);
    Microsoft::WRL::ComPtr<CPrivilegedPresentationOperations>::InternalRelease(&v33);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)pAptQualifier);
  }
LABEL_66:
  if ( ApartmentType >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v7);
  return v8;
}
