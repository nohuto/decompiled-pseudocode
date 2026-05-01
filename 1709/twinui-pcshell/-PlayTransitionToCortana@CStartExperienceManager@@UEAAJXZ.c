/*
 * XREFs of ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x1800B8DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_GetPropertyValueFactory@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAUIPropertyValueStatics@Foundation@4@@Z @ 0x18003D1E8 (-_GetPropertyValueFactory@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAUIProperty.c)
 *     ?_SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyValue@Foundation@4@@Z @ 0x18003D258 (-_SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyV.c)
 *     ?SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z @ 0x18003D338 (-SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046238 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BMA@AA @ 0x18009D86C (--_9IPropertyValue@Foundation@Windows@@$BMA@AA.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009D91C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SetDouble@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@N@Z @ 0x1800B58AC (-SetDouble@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@N@Z.c)
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N1PEAPEAUHMONITOR__@@@Z @ 0x1800B8010 (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ?Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@1@Z @ 0x1801D0EBC (-Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundat.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801DB6E4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CStartExperienceManager::PlayTransitionToCortana(
        ExperienceManagerUtils **this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  const char *v3; // r9
  char v4; // si
  struct CSingleViewShellExperience *v5; // rdx
  int MonitorInformation; // eax
  int v7; // ebx
  HRESULT v8; // eax
  int v9; // eax
  int v10; // ecx
  HSTRING v11; // rdi
  Windows::Internal::ShellHelpers::PropertySetHelper *v12; // rcx
  int PropertyValueFactory; // eax
  struct Windows::Foundation::IPropertyValueStatics *v14; // rcx
  int v15; // eax
  __int64 (__fastcall ***v16)(_QWORD, GUID *, struct tagRECT *); // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 (__fastcall ***v19)(_QWORD, GUID *, struct tagRECT *); // rcx
  struct Windows::Foundation::IPropertyValueStatics *v20; // rcx
  unsigned __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // eax
  bool v25; // zf
  char v26; // bl
  __int64 v27; // rax
  __int64 v28; // rax
  struct Windows::Foundation::Collections::IPropertySet *v29; // r9
  struct Windows::Foundation::Collections::IPropertySet *v30; // rcx
  bool v32[8]; // [rsp+48h] [rbp-C0h] BYREF
  struct Windows::Foundation::IPropertyValueStatics *v33; // [rsp+50h] [rbp-B8h] BYREF
  __int64 (__fastcall ***v34)(_QWORD, GUID *, struct tagRECT *); // [rsp+58h] [rbp-B0h]
  __int64 v35; // [rsp+60h] [rbp-A8h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v36; // [rsp+68h] [rbp-A0h] BYREF
  struct tagRECT v37; // [rsp+70h] [rbp-98h] BYREF
  HMONITOR hMonitor; // [rsp+80h] [rbp-88h] BYREF
  HWND hWnd[2]; // [rsp+88h] [rbp-80h] BYREF
  char v40; // [rsp+98h] [rbp-70h]
  int v41; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD *v42; // [rsp+A8h] [rbp-60h]
  int v43; // [rsp+B0h] [rbp-58h]
  __int64 v44; // [rsp+B8h] [rbp-50h]
  HSTRING_HEADER hstringHeader; // [rsp+C0h] [rbp-48h] BYREF
  HSTRING string; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v47[2]; // [rsp+E0h] [rbp-28h] BYREF
  _BYTE v48[32]; // [rsp+F0h] [rbp-18h] BYREF
  struct tagMONITORINFO mi; // [rsp+110h] [rbp+8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  v44 = -2LL;
  v47[1] = 0LL;
  v47[0] = 0LL;
  v41 = 19;
  v42 = v47;
  v43 = 16;
  hWnd[0] = ExperienceManagerUtils::WindowFromViewWrapper(this[36], a2);
  if ( !(unsigned int)SetWindowCompositionAttribute(hWnd[0], &v41) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x48E,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      v3);
  EnableWindow(hWnd[0], 0);
  hWnd[1] = (HWND)hWnd;
  v4 = 1;
  v40 = 1;
  MonitorInformation = CStartExperienceManager::GetMonitorInformation(
                         (CStartExperienceManager *)(this - 5),
                         v5,
                         &v37,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v35,
                         v32,
                         (struct tagRECT *)&hstringHeader,
                         &hMonitor);
  v7 = MonitorInformation;
  if ( MonitorInformation < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x4A0,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)MonitorInformation);
    goto LABEL_53;
  }
  v36 = 0LL;
  string = 0LL;
  v8 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
  if ( v8 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8);
    __debugbreak();
  }
  v9 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         (__int64)string,
         (__int64 *)&v36);
  v7 = v9;
  if ( v9 >= 0 )
  {
    hstringHeader.Reserved.Reserved1 = v36;
    if ( v36 )
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v36 + 8LL))(v36);
    mi.cbSize = 40;
    memset(&mi.rcMonitor, 0, 0x24uLL);
    if ( !GetMonitorInfoW(hMonitor, &mi) )
    {
      v7 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4AE,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)0x8000FFFFLL);
      goto LABEL_49;
    }
    HIDWORD(hMonitor) = *((_DWORD *)this + 149);
    v10 = 344;
    if ( mi.rcMonitor.right - mi.rcMonitor.left < 1196 )
      v10 = 320;
    *(float *)&hMonitor = (float)v10 + 48.0;
    v11 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                         (__int64)v48,
                         (const WCHAR **)&off_1802147E0)
                     + 24);
    v33 = 0LL;
    PropertyValueFactory = Windows::Internal::ShellHelpers::PropertySetHelper::_GetPropertyValueFactory(v12, &v33);
    v7 = PropertyValueFactory;
    if ( PropertyValueFactory >= 0 )
    {
      v34 = 0LL;
      v15 =  Windows::Foundation::IPropertyValue::`vcall'{192,{flat}}((__int64)v33);
      v7 = v15;
      if ( v15 >= 0 )
      {
        *(_QWORD *)&v37.left = 0LL;
        v17 = (**v34)(v34, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, &v37);
        v7 = v17;
        if ( v17 >= 0 )
        {
          v7 = Windows::Internal::ShellHelpers::PropertySetHelper::_SetPropVal(
                 (Windows::Internal::ShellHelpers::PropertySetHelper *)&hstringHeader,
                 v11,
                 *(struct Windows::Foundation::IPropertyValue **)&v37.left);
          v18 = *(_QWORD *)&v37.left;
          if ( v7 >= 0 )
          {
            if ( *(_QWORD *)&v37.left )
            {
              *(_QWORD *)&v37.left = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
            }
            v19 = v34;
            if ( v34 )
            {
              v34 = 0LL;
              ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct tagRECT *)))(*v19)[2])(v19);
            }
            v20 = v33;
            if ( v33 )
            {
              v33 = 0LL;
              (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValueStatics *))(*(_QWORD *)v20 + 16LL))(v20);
            }
            v7 = 0;
LABEL_35:
            if ( v7 >= 0 )
            {
              v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                      (__int64)v48,
                      (const WCHAR **)&off_1802147E8);
              v24 = Windows::Internal::ShellHelpers::PropertySetHelper::SetDouble(
                      (Windows::Internal::ShellHelpers::PropertySetHelper *)&hstringHeader,
                      *(HSTRING *)(v23 + 24),
                      48.0);
              v7 = v24;
              if ( v24 >= 0 )
              {
                if ( v32[0] )
                  v25 = (_DWORD)v35 == 0;
                else
                  v25 = (_DWORD)v35 == 2;
                v26 = !v25;
                v27 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                        (__int64)v48,
                        (const WCHAR **)&off_1802147D8);
                v24 = Windows::Internal::ShellHelpers::PropertySetHelper::SetBoolean(
                        (Windows::Internal::ShellHelpers::PropertySetHelper *)&hstringHeader,
                        *(HSTRING *)(v27 + 24),
                        v26);
                v7 = v24;
                if ( v24 >= 0 )
                {
                  v28 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                          (__int64)v48,
                          (const WCHAR **)&off_180214828);
                  v24 = CSingleViewShellExperience::Reactivate(
                          (CSingleViewShellExperience *)(this + 33),
                          *(HSTRING *)(v28 + 24),
                          v36,
                          v29);
                  v7 = v24;
                  if ( v24 >= 0 )
                  {
                    *((_BYTE *)this + 600) = 1;
                    v4 = 0;
                    v40 = 0;
                    v7 = 0;
LABEL_49:
                    if ( hstringHeader.Reserved.Reserved1 )
                      (*(void (__fastcall **)(PVOID))(*(_QWORD *)hstringHeader.Reserved.Reserved1 + 16LL))(hstringHeader.Reserved.Reserved1);
                    goto LABEL_51;
                  }
                  v22 = 1236LL;
                }
                else
                {
                  v22 = 1231LL;
                }
              }
              else
              {
                v22 = 1209LL;
              }
              v21 = (unsigned int)v24;
            }
            else
            {
              v21 = (unsigned int)v7;
              v22 = 1206LL;
            }
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)v22,
              (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
              (const char *)v21);
            goto LABEL_49;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x54,
            (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
            (const char *)(unsigned int)v17);
          v18 = *(_QWORD *)&v37.left;
        }
        if ( v18 )
        {
          *(_QWORD *)&v37.left = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x52,
          (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
          (const char *)(unsigned int)v15);
      }
      v16 = v34;
      if ( v34 )
      {
        v34 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct tagRECT *)))(*v16)[2])(v16);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x50,
        (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
        (const char *)(unsigned int)PropertyValueFactory);
    }
    v14 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValueStatics *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    goto LABEL_35;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x4A6,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
    (const char *)(unsigned int)v9);
LABEL_51:
  v30 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v30 + 16LL))(v30);
  }
LABEL_53:
  if ( v4 )
    EnableWindow(hWnd[0], 1);
  return (unsigned int)v7;
}
