/*
 * XREFs of ?OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800ACC70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x18008D6D4 (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ??IRoVariant@@QEAA?AVOutRef@0@XZ @ 0x18008D7CC (--IRoVariant@@QEAA-AVOutRef@0@XZ.c)
 *     ?ExperienceManager_OnViewPropertiesChanging_IsQuickConnectViewServiceReady@ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAAXXZ @ 0x1800A9EC4 (-ExperienceManager_OnViewPropertiesChanging_IsQuickConnectViewServiceReady@ExperienceManager_OnV.c)
 *     ?ExperienceManager_OnViewPropertiesChanging_WindowResize@ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAAXXZ @ 0x1800A9F44 (-ExperienceManager_OnViewPropertiesChanging_WindowResize@ExperienceManager_OnViewPropertiesChang.c)
 *     ??1?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800AB6EC (--1-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800AD344 (-UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x1800ADB24 (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 *     ?Destroy@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800AE724 (-Destroy@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800AEE48 (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ??$Start@$$V@ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@SA?AV01@XZ @ 0x1800AFD14 (--$Start@$$V@ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@SA-AV01@XZ.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18018C300 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CQuickConnectExperienceManager::OnViewPropertiesChanging(
        CQuickConnectExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rbx
  _QWORD *v7; // rsi
  HRESULT v8; // eax
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v11; // rdx
  HWND v12; // rsi
  __int64 v13; // rcx
  int WindowService; // eax
  __int64 v15; // rbx
  _QWORD *v16; // rsi
  HRESULT v17; // eax
  __int64 v18; // rbx
  _QWORD *v19; // rsi
  HRESULT v20; // eax
  unsigned __int64 v21; // r9
  __int64 v22; // rdx
  const WCHAR *StringRawBuffer; // rax
  int updated; // eax
  const WCHAR *v25; // rax
  const WCHAR *v26; // rax
  __int64 v27; // rcx
  __int64 v29; // [rsp+38h] [rbp-D0h] BYREF
  HSTRING v30; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A8h]
  __int64 v34; // [rsp+68h] [rbp-A0h] BYREF
  char *v35; // [rsp+70h] [rbp-98h]
  __int64 v36; // [rsp+78h] [rbp-90h] BYREF
  int v37; // [rsp+80h] [rbp-88h]
  __int64 v38; // [rsp+88h] [rbp-80h]
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp-78h] BYREF
  HSTRING string[2]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v41[40]; // [rsp+B8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+230h] [rbp+128h]

  v38 = -2LL;
  QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::Start<>((QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging *)v41);
  v31 = 0LL;
  v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 4))(
         *((_QWORD *)a2 + 4),
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v31);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2AA,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_58;
  }
  v36 = 0LL;
  v37 = 0;
  v6 = v31;
  v7 = RoVariant::operator&((__int64)&v36, &v30);
  string[0] = 0LL;
  v8 = WindowsCreateStringReference(L"IsQuickConnectViewServiceReady", 0x1Eu, &hstringHeader, string);
  if ( v8 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8);
  (*(void (__fastcall **)(__int64, HSTRING, _QWORD *))(*(_QWORD *)v6 + 48LL))(v6, string[0], v7 + 1);
  string[0] = 0LL;
  RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&v30);
  if ( !v36 )
    goto LABEL_21;
  LOBYTE(v29) = 0;
  if ( v37 != 7 )
  {
    v5 = -2147316576;
    if ( v37 < 0 )
      v5 = v37;
    goto LABEL_11;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v36 + 144LL))(v36, &v29);
  if ( v5 >= 0 )
  {
    if ( (_BYTE)v29 )
    {
      QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::ExperienceManager_OnViewPropertiesChanging_IsQuickConnectViewServiceReady((QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging *)v41);
      v12 = ExperienceManagerUtils::WindowFromViewWrapper(*((ExperienceManagerUtils **)this + 6), v11);
      v13 = *((_QWORD *)this + 33);
      if ( v13 )
      {
        *((_QWORD *)this + 33) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      WindowService = CoreQueryWindowService(
                        v12,
                        &GUID_4aaaff25_9e49_4ab5_b2af_c798c01c536c,
                        &GUID_4aaaff25_9e49_4ab5_b2af_c798c01c536c,
                        (char *)this + 264);
      v5 = WindowService;
      if ( WindowService < 0 )
      {
        v10 = 705LL;
LABEL_19:
        v9 = (unsigned int)WindowService;
        goto LABEL_20;
      }
      WindowService = CQuickConnectExperienceManager::CheckAndPopulateContact((CQuickConnectExperienceManager *)((char *)this - 48));
      v5 = WindowService;
      if ( WindowService < 0 )
      {
        v10 = 708LL;
        goto LABEL_19;
      }
    }
LABEL_21:
    v34 = 0LL;
    LODWORD(v35) = 0;
    v15 = v31;
    v16 = RoVariant::operator&((__int64)&v34, &v30);
    string[0] = 0LL;
    v17 = WindowsCreateStringReference(L"Title", 5u, &hstringHeader, string);
    if ( v17 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17);
    (*(void (__fastcall **)(__int64, HSTRING, _QWORD *))(*(_QWORD *)v15 + 48LL))(v15, string[0], v16 + 1);
    string[0] = 0LL;
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&v30);
    if ( v34 )
    {
      WindowsDeleteString(*((HSTRING *)this + 40));
      *((_QWORD *)this + 40) = 0LL;
      if ( (_DWORD)v35 != 7 )
      {
        v5 = -2147316576;
        if ( (int)v35 < 0 )
          v5 = (int)v35;
        goto LABEL_29;
      }
      v5 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v34 + 152LL))(v34, (char *)this + 320);
      if ( v5 < 0 )
      {
LABEL_29:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x2CD,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)v5);
LABEL_52:
        if ( v34 && (((_DWORD)v35 - 3) & 0xFFFFFFFB) == 0 )
          (*(void (**)(void))(*(_QWORD *)v34 + 16LL))();
        goto LABEL_55;
      }
    }
    v32 = 0LL;
    LODWORD(v33) = 0;
    v18 = v31;
    v19 = RoVariant::operator&((__int64)&v32, &v30);
    string[0] = 0LL;
    v20 = WindowsCreateStringReference(L"EventType", 9u, &hstringHeader, string);
    if ( v20 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v20);
    (*(void (__fastcall **)(__int64, HSTRING, _QWORD *))(*(_QWORD *)v18 + 48LL))(v18, string[0], v19 + 1);
    string[0] = 0LL;
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&v30);
    if ( v32 )
    {
      v30 = 0LL;
      WindowsDeleteString(0LL);
      v30 = 0LL;
      if ( (_DWORD)v33 != 7 )
      {
        v5 = -2147316576;
        if ( (int)v33 < 0 )
          v5 = v33;
        goto LABEL_38;
      }
      v5 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v32 + 152LL))(v32, &v30);
      if ( v5 < 0 )
      {
LABEL_38:
        v21 = (unsigned int)v5;
        v22 = 728LL;
LABEL_42:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v22,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)v21);
        WindowsDeleteString(v30);
LABEL_49:
        if ( v32 && (((_DWORD)v33 - 3) & 0xFFFFFFFB) == 0 )
          (*(void (**)(void))(*(_QWORD *)v32 + 16LL))();
        goto LABEL_52;
      }
      StringRawBuffer = WindowsGetStringRawBuffer(v30, 0LL);
      if ( CompareStringOrdinal(StringRawBuffer, -1, L"WindowResize", -1, 0) == 2 )
      {
        QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::ExperienceManager_OnViewPropertiesChanging_WindowResize((QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging *)v41);
        updated = CQuickConnectExperienceManager::UpdateWindowPosition(
                    (CQuickConnectExperienceManager *)((char *)this - 48),
                    a2);
        v5 = updated;
        if ( updated < 0 )
        {
          v21 = (unsigned int)updated;
          v22 = 733LL;
          goto LABEL_42;
        }
      }
      else
      {
        v25 = WindowsGetStringRawBuffer(v30, 0LL);
        if ( CompareStringOrdinal(v25, -1, L"DisableReturnFocus", -1, 0) == 2 )
        {
          *((_BYTE *)this + 360) = 1;
        }
        else
        {
          v26 = WindowsGetStringRawBuffer(v30, 0LL);
          if ( CompareStringOrdinal(v26, -1, L"EnableReturnFocus", -1, 0) == 2 )
            *((_BYTE *)this + 360) = 0;
        }
      }
      WindowsDeleteString(v30);
    }
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v41);
    v5 = 0;
    goto LABEL_49;
  }
LABEL_11:
  v9 = (unsigned int)v5;
  v10 = 692LL;
LABEL_20:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
    (const char *)v9);
LABEL_55:
  if ( v36 && ((v37 - 3) & 0xFFFFFFFB) == 0 )
    (*(void (**)(void))(*(_QWORD *)v36 + 16LL))();
LABEL_58:
  v27 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  v41[0] = &QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::`vftable';
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v41);
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v41);
  return (unsigned int)v5;
}
