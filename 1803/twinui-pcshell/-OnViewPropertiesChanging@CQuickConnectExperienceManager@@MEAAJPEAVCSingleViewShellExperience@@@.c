/*
 * XREFs of ?OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18017CA20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800787A4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F81A0 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x1800F9DC8 (--1RoVariant@@QEAA@XZ.c)
 *     ??0RoVariant@@QEAA@PEAUIInspectable@@_N@Z @ 0x1800F9E00 (--0RoVariant@@QEAA@PEAUIInspectable@@_N@Z.c)
 *     ?GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z @ 0x1800F9EC0 (-GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z.c)
 *     ?GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z @ 0x18016EB4C (-GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18017A154 (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflector_ea_18017A154.c)
 *     ??1ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAA@XZ @ 0x18017A5D4 (--1ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x18017AB4C (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 *     ?ExperienceManager_OnViewPropertiesChanging_IsQuickConnectViewServiceReady@ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAAXXZ @ 0x18017B724 (-ExperienceManager_OnViewPropertiesChanging_IsQuickConnectViewServiceReady@ExperienceManager_OnV.c)
 *     ?ExperienceManager_OnViewPropertiesChanging_WindowResize@ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAAXXZ @ 0x18017B7A0 (-ExperienceManager_OnViewPropertiesChanging_WindowResize@ExperienceManager_OnViewPropertiesChang.c)
 *     ?StartActivity@ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAAXXZ @ 0x18017DCCC (-StartActivity@ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18017DFFC (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18017F688 (-UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall CQuickConnectExperienceManager::OnViewPropertiesChanging(
        CQuickConnectExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  HSTRING v7; // rcx
  int Boolean; // eax
  __int64 v9; // rdx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rbx
  HSTRING *v13; // rbx
  HSTRING v14; // rcx
  int v15; // eax
  __int64 v16; // rbx
  HSTRING *v17; // rbx
  HSTRING v18; // rcx
  int updated; // eax
  __int64 v20; // rdx
  const WCHAR *StringRawBuffer; // rax
  const WCHAR *v22; // rax
  const WCHAR *v23; // rax
  unsigned __int8 v25[8]; // [rsp+38h] [rbp-D0h] BYREF
  HSTRING string; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+48h] [rbp-C0h]
  HSTRING *v28; // [rsp+50h] [rbp-B8h] BYREF
  struct IInspectable *v29; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A8h] BYREF
  HSTRING *v31; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+70h] [rbp-98h]
  HSTRING *v33; // [rsp+78h] [rbp-90h] BYREF
  int v34; // [rsp+80h] [rbp-88h]
  HSTRING v35; // [rsp+88h] [rbp-80h] BYREF
  int v36; // [rsp+90h] [rbp-78h]
  __int64 v37; // [rsp+98h] [rbp-70h]
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v39; // [rsp+B8h] [rbp-50h]
  _QWORD v40[40]; // [rsp+C8h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+240h] [rbp+138h]

  v37 = -2LL;
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v40,
    (__int64)"ExperienceManager_OnViewPropertiesChanging");
  v40[0] = &QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::`vftable';
  QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::StartActivity((QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging *)v40);
  v30 = 0LL;
  v4 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
         (_QWORD *)a2 + 4,
         &v30);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v35 = 0LL;
    v36 = 0;
    v6 = v30;
    v28 = &v35;
    v29 = 0LL;
    v39 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"IsQuickConnectViewServiceReady",
      0x1Fu,
      0x1Eu);
    (*(void (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v6 + 48LL))(v6, v39, &v29);
    v39 = 0LL;
    RoVariant::RoVariant((RoVariant *)&string, v29);
    v7 = v35;
    v35 = string;
    string = v7;
    LODWORD(v7) = v36;
    v36 = v27;
    LODWORD(v27) = (_DWORD)v7;
    RoVariant::~RoVariant((RoVariant *)&string);
    if ( v35 )
    {
      v25[0] = 0;
      v28 = (HSTRING *)v35;
      LODWORD(v29) = v36;
      Boolean = RoVariant::Accessor::GetBoolean((RoVariant::Accessor *)&v28, v25);
      v5 = Boolean;
      if ( Boolean < 0 )
      {
        v9 = 692LL;
LABEL_11:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)Boolean);
LABEL_30:
        RoVariant::~RoVariant((RoVariant *)&v35);
        goto LABEL_31;
      }
      if ( v25[0] )
      {
        QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::ExperienceManager_OnViewPropertiesChanging_IsQuickConnectViewServiceReady((QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging *)v40);
        v11 = ExperienceManagerUtils::WindowFromViewWrapper(*((ExperienceManagerUtils **)this + 6), v10);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 33);
        Boolean = CoreQueryWindowService(
                    v11,
                    &GUID_4aaaff25_9e49_4ab5_b2af_c798c01c536c,
                    &GUID_4aaaff25_9e49_4ab5_b2af_c798c01c536c,
                    (char *)this + 264);
        v5 = Boolean;
        if ( Boolean < 0 )
        {
          v9 = 705LL;
          goto LABEL_11;
        }
        Boolean = CQuickConnectExperienceManager::CheckAndPopulateContact((CQuickConnectExperienceManager *)((char *)this - 48));
        v5 = Boolean;
        if ( Boolean < 0 )
        {
          v9 = 708LL;
          goto LABEL_11;
        }
      }
    }
    v33 = 0LL;
    v34 = 0;
    v12 = v30;
    v28 = (HSTRING *)&v33;
    v29 = 0LL;
    v39 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Title", 6u, 5u);
    (*(void (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v12 + 48LL))(v12, v39, &v29);
    v39 = 0LL;
    v13 = v28;
    RoVariant::RoVariant((RoVariant *)&string, v29);
    v14 = *v13;
    *v13 = string;
    string = v14;
    LODWORD(v14) = *((_DWORD *)v13 + 2);
    *((_DWORD *)v13 + 2) = v27;
    LODWORD(v27) = (_DWORD)v14;
    RoVariant::~RoVariant((RoVariant *)&string);
    if ( v33 )
    {
      WindowsDeleteString(*((HSTRING *)this + 40));
      *((_QWORD *)this + 40) = 0LL;
      v28 = v33;
      LODWORD(v29) = v34;
      v15 = RoVariant::Accessor::GetString((RoVariant::Accessor *)&v28, (HSTRING *)this + 40);
      v5 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2CD,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)v15);
LABEL_29:
        RoVariant::~RoVariant((RoVariant *)&v33);
        goto LABEL_30;
      }
    }
    v31 = 0LL;
    LODWORD(v32) = 0;
    v16 = v30;
    v28 = (HSTRING *)&v31;
    v29 = 0LL;
    v39 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"EventType", 0xAu, 9u);
    (*(void (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v16 + 48LL))(v16, v39, &v29);
    v39 = 0LL;
    v17 = v28;
    RoVariant::RoVariant((RoVariant *)&string, v29);
    v18 = *v17;
    *v17 = string;
    string = v18;
    LODWORD(v18) = *((_DWORD *)v17 + 2);
    *((_DWORD *)v17 + 2) = v27;
    LODWORD(v27) = (_DWORD)v18;
    RoVariant::~RoVariant((RoVariant *)&string);
    if ( v31 )
    {
      string = 0LL;
      WindowsDeleteString(0LL);
      string = 0LL;
      v28 = v31;
      LODWORD(v29) = v32;
      updated = RoVariant::Accessor::GetString((RoVariant::Accessor *)&v28, &string);
      v5 = updated;
      if ( updated < 0 )
      {
        v20 = 728LL;
LABEL_21:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v20,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)updated);
        WindowsDeleteString(string);
LABEL_28:
        RoVariant::~RoVariant((RoVariant *)&v31);
        goto LABEL_29;
      }
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      if ( CompareStringOrdinal(StringRawBuffer, -1, L"WindowResize", -1, 0) == 2 )
      {
        QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::ExperienceManager_OnViewPropertiesChanging_WindowResize((QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging *)v40);
        updated = CQuickConnectExperienceManager::UpdateWindowPosition(
                    (CQuickConnectExperienceManager *)((char *)this - 48),
                    a2);
        v5 = updated;
        if ( updated < 0 )
        {
          v20 = 733LL;
          goto LABEL_21;
        }
      }
      else
      {
        v22 = WindowsGetStringRawBuffer(string, 0LL);
        if ( CompareStringOrdinal(v22, -1, L"DisableReturnFocus", -1, 0) == 2 )
        {
          *((_BYTE *)this + 360) = 1;
        }
        else
        {
          v23 = WindowsGetStringRawBuffer(string, 0LL);
          if ( CompareStringOrdinal(v23, -1, L"EnableReturnFocus", -1, 0) == 2 )
            *((_BYTE *)this + 360) = 0;
        }
      }
      WindowsDeleteString(string);
    }
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v40);
    v5 = 0;
    goto LABEL_28;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2AA,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_31:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
  QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::~ExperienceManager_OnViewPropertiesChanging((QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging *)v40);
  return v5;
}
