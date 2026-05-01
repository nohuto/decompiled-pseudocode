/*
 * XREFs of ?OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800C5A20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x18008FD24 (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ?StartActivity@ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAAXXZ @ 0x1800C2964 (-StartActivity@ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?ExperienceManager_OnViewPropertiesChanging_IsQuickConnectViewServiceReady@ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAAXXZ @ 0x1800C2A90 (-ExperienceManager_OnViewPropertiesChanging_IsQuickConnectViewServiceReady@ExperienceManager_OnV.c)
 *     ?ExperienceManager_OnViewPropertiesChanging_WindowResize@ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAAXXZ @ 0x1800C2B10 (-ExperienceManager_OnViewPropertiesChanging_WindowResize@ExperienceManager_OnViewPropertiesChang.c)
 *     ??1?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800C4204 (--1-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800C6168 (-UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x1800C6AB8 (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 *     ?Destroy@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800C7694 (-Destroy@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800C7DB8 (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801DB6E4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CQuickConnectExperienceManager::OnViewPropertiesChanging(
        CQuickConnectExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rbx
  HRESULT v7; // eax
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v10; // rdx
  HWND v11; // rsi
  __int64 v12; // rcx
  int WindowService; // eax
  __int64 v14; // rbx
  HRESULT v15; // eax
  __int64 v16; // rbx
  HRESULT v17; // eax
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  const WCHAR *StringRawBuffer; // rax
  int updated; // eax
  const WCHAR *v22; // rax
  const WCHAR *v23; // rax
  __int64 v24; // rcx
  __int64 v26; // [rsp+38h] [rbp-D0h] BYREF
  HSTRING v27; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A8h]
  __int64 v32; // [rsp+68h] [rbp-A0h] BYREF
  char *v33; // [rsp+70h] [rbp-98h]
  __int64 v34; // [rsp+78h] [rbp-90h] BYREF
  int v35; // [rsp+80h] [rbp-88h]
  __int64 v36; // [rsp+88h] [rbp-80h]
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp-78h] BYREF
  HSTRING string[2]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v39[4]; // [rsp+B8h] [rbp-50h] BYREF
  int v40; // [rsp+D8h] [rbp-30h]
  int *v41; // [rsp+E0h] [rbp-28h]
  int *v42; // [rsp+E8h] [rbp-20h]
  int v43; // [rsp+F0h] [rbp-18h] BYREF
  char v44; // [rsp+F4h] [rbp-14h]
  int v45; // [rsp+118h] [rbp+10h] BYREF
  const char *v46; // [rsp+120h] [rbp+18h]
  __int64 v47; // [rsp+128h] [rbp+20h]
  char v48; // [rsp+130h] [rbp+28h]
  __int64 v49; // [rsp+138h] [rbp+30h]
  _BYTE v50[144]; // [rsp+140h] [rbp+38h] BYREF
  __int64 v51; // [rsp+1D0h] [rbp+C8h]
  __int64 v52; // [rsp+1D8h] [rbp+D0h]
  __int64 v53; // [rsp+1E0h] [rbp+D8h]
  __int64 v54; // [rsp+1E8h] [rbp+E0h]
  wil::details::in1diag3 *retaddr; // [rsp+230h] [rbp+128h]

  v36 = -2LL;
  v39[1] = 0LL;
  v39[2] = v39;
  v39[3] = 0LL;
  v40 = 0;
  v41 = &v45;
  v42 = &v43;
  v43 = 0;
  v44 = 0;
  v48 = 0;
  v45 = 0;
  v46 = "ExperienceManager_OnViewPropertiesChanging";
  v47 = 0LL;
  v49 = 1LL;
  v51 = 0LL;
  v52 = 0LL;
  memset(v50, 0, sizeof(v50));
  v53 = 0LL;
  v54 = 0LL;
  v39[0] = &QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::`vftable';
  QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::StartActivity((QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging *)v39);
  v29 = 0LL;
  v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 4))(
         *((_QWORD *)a2 + 4),
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v29);
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
  v34 = 0LL;
  v35 = 0;
  v6 = v29;
  v27 = (HSTRING)&v34;
  v28 = 0LL;
  string[0] = 0LL;
  v7 = WindowsCreateStringReference(L"IsQuickConnectViewServiceReady", 0x1Eu, &hstringHeader, string);
  if ( v7 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
  (*(void (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v6 + 48LL))(v6, string[0], &v28);
  string[0] = 0LL;
  RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&v27);
  if ( !v34 )
    goto LABEL_21;
  LOBYTE(v26) = 0;
  if ( v35 != 7 )
  {
    v5 = -2147316576;
    if ( v35 < 0 )
      v5 = v35;
    goto LABEL_11;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v34 + 144LL))(v34, &v26);
  if ( v5 >= 0 )
  {
    if ( (_BYTE)v26 )
    {
      QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::ExperienceManager_OnViewPropertiesChanging_IsQuickConnectViewServiceReady((QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging *)v39);
      v11 = ExperienceManagerUtils::WindowFromViewWrapper(*((ExperienceManagerUtils **)this + 6), v10);
      v12 = *((_QWORD *)this + 33);
      if ( v12 )
      {
        *((_QWORD *)this + 33) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      WindowService = CoreQueryWindowService(
                        v11,
                        &GUID_4aaaff25_9e49_4ab5_b2af_c798c01c536c,
                        &GUID_4aaaff25_9e49_4ab5_b2af_c798c01c536c,
                        (char *)this + 264);
      v5 = WindowService;
      if ( WindowService < 0 )
      {
        v9 = 705LL;
LABEL_19:
        v8 = (unsigned int)WindowService;
        goto LABEL_20;
      }
      WindowService = CQuickConnectExperienceManager::CheckAndPopulateContact((CQuickConnectExperienceManager *)((char *)this - 48));
      v5 = WindowService;
      if ( WindowService < 0 )
      {
        v9 = 708LL;
        goto LABEL_19;
      }
    }
LABEL_21:
    v32 = 0LL;
    LODWORD(v33) = 0;
    v14 = v29;
    v27 = (HSTRING)&v32;
    v28 = 0LL;
    string[0] = 0LL;
    v15 = WindowsCreateStringReference(L"Title", 5u, &hstringHeader, string);
    if ( v15 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v15);
    (*(void (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v14 + 48LL))(v14, string[0], &v28);
    string[0] = 0LL;
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&v27);
    if ( v32 )
    {
      WindowsDeleteString(*((HSTRING *)this + 40));
      *((_QWORD *)this + 40) = 0LL;
      if ( (_DWORD)v33 != 7 )
      {
        v5 = -2147316576;
        if ( (int)v33 < 0 )
          v5 = (int)v33;
        goto LABEL_29;
      }
      v5 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v32 + 152LL))(v32, (char *)this + 320);
      if ( v5 < 0 )
      {
LABEL_29:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x2CD,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)v5);
LABEL_52:
        if ( v32 && (((_DWORD)v33 - 3) & 0xFFFFFFFB) == 0 )
          (*(void (**)(void))(*(_QWORD *)v32 + 16LL))();
        goto LABEL_55;
      }
    }
    v30 = 0LL;
    LODWORD(v31) = 0;
    v16 = v29;
    v27 = (HSTRING)&v30;
    v28 = 0LL;
    string[0] = 0LL;
    v17 = WindowsCreateStringReference(L"EventType", 9u, &hstringHeader, string);
    if ( v17 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17);
    (*(void (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v16 + 48LL))(v16, string[0], &v28);
    string[0] = 0LL;
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&v27);
    if ( v30 )
    {
      v27 = 0LL;
      WindowsDeleteString(0LL);
      v27 = 0LL;
      if ( (_DWORD)v31 != 7 )
      {
        v5 = -2147316576;
        if ( (int)v31 < 0 )
          v5 = v31;
        goto LABEL_38;
      }
      v5 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v30 + 152LL))(v30, &v27);
      if ( v5 < 0 )
      {
LABEL_38:
        v18 = (unsigned int)v5;
        v19 = 728LL;
LABEL_42:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v19,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)v18);
        WindowsDeleteString(v27);
LABEL_49:
        if ( v30 && (((_DWORD)v31 - 3) & 0xFFFFFFFB) == 0 )
          (*(void (**)(void))(*(_QWORD *)v30 + 16LL))();
        goto LABEL_52;
      }
      StringRawBuffer = WindowsGetStringRawBuffer(v27, 0LL);
      if ( CompareStringOrdinal(StringRawBuffer, -1, L"WindowResize", -1, 0) == 2 )
      {
        QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::ExperienceManager_OnViewPropertiesChanging_WindowResize((QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging *)v39);
        updated = CQuickConnectExperienceManager::UpdateWindowPosition(
                    (CQuickConnectExperienceManager *)((char *)this - 48),
                    a2);
        v5 = updated;
        if ( updated < 0 )
        {
          v18 = (unsigned int)updated;
          v19 = 733LL;
          goto LABEL_42;
        }
      }
      else
      {
        v22 = WindowsGetStringRawBuffer(v27, 0LL);
        if ( CompareStringOrdinal(v22, -1, L"DisableReturnFocus", -1, 0) == 2 )
        {
          *((_BYTE *)this + 360) = 1;
        }
        else
        {
          v23 = WindowsGetStringRawBuffer(v27, 0LL);
          if ( CompareStringOrdinal(v23, -1, L"EnableReturnFocus", -1, 0) == 2 )
            *((_BYTE *)this + 360) = 0;
        }
      }
      WindowsDeleteString(v27);
    }
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v39);
    v5 = 0;
    goto LABEL_49;
  }
LABEL_11:
  v8 = (unsigned int)v5;
  v9 = 692LL;
LABEL_20:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
    (const char *)v8);
LABEL_55:
  if ( v34 && ((v35 - 3) & 0xFFFFFFFB) == 0 )
    (*(void (**)(void))(*(_QWORD *)v34 + 16LL))();
LABEL_58:
  v24 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  v39[0] = &QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::`vftable';
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v39);
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v39);
  return (unsigned int)v5;
}
