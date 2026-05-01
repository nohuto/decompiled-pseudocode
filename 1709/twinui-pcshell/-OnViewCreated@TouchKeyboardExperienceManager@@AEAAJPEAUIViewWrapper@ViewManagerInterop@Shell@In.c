/*
 * XREFs of ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x18019D214
 * Callers:
 *     ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18019C780 (-OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@I@std@@QEAA@AEBV01@@Z @ 0x1800EB52C (--0-$shared_ptr@I@std@@QEAA@AEBV01@@Z.c)
 *     ?CreateAppFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAPEAUIApplicationFrameWrapper@@@Z @ 0x18019CE2C (-CreateAppFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAPEAUIApplicationFrameWrapper@@@Z.c)
 *     ?InitializeChromeOptionsAndGetTitleBar@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAPEAUIApplicationFrameTitleBar@@@Z @ 0x18019CFFC (-InitializeChromeOptionsAndGetTitleBar@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFram.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SuspendInputAppDesktop@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18019E6D4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SuspendInputAppDesktop@@@wil.c)
 *     wil::ResultFromException__lambda_1195b550ee03e899c4c093f0587694a4___ @ 0x18019EAD4 (wil--ResultFromException__lambda_1195b550ee03e899c4c093f0587694a4___.c)
 *     ??$MakeAgileCallback@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@PEAVTouchKeyboardExperienceManager@@P84@EAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@3@PEAUIClientWindowReadyForPresentationChangedEventArgs@6783@@Z@wil@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@$$QEAPEAVTouchKeyboardExperienceManager@@$$QEAP84@EAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@6789@@Z@Z @ 0x18019EAF4 (--$MakeAgileCallback@U-$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Inter.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801DB6E4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall TouchKeyboardExperienceManager::OnViewCreated(
        RTL_SRWLOCK *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct EventRegistrationToken a3)
{
  RTL_SRWLOCK *v4; // r15
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v5; // rdx
  int (__fastcall *****Ptr)(_QWORD, GUID *, __int64 *); // rbx
  int (__fastcall *****v7)(_QWORD, GUID *, __int64 *); // rsi
  ExperienceManagerUtils *v8; // rdi
  bool v9; // r12
  HWND v10; // rax
  int TitleBar; // eax
  TouchKeyboardExperienceManager *v13; // rcx
  unsigned int v14; // edi
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rcx
  ExperienceManagerUtils *v18; // rbx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  volatile signed __int32 *v25; // rbx
  struct IApplicationFrameTitleBar *v26; // rcx
  struct IApplicationFrameWrapper *v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  volatile signed __int32 *v31; // rbx
  struct IApplicationFrameTitleBar *v32; // rcx
  struct IApplicationFrameWrapper *v33; // rcx
  struct IApplicationFrameWrapper *v34; // [rsp+30h] [rbp-D0h] BYREF
  struct IApplicationFrameTitleBar *v35; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+48h] [rbp-B8h] BYREF
  volatile signed __int32 *v38; // [rsp+50h] [rbp-B0h]
  __int128 v39; // [rsp+60h] [rbp-A0h]
  _QWORD v40[2]; // [rsp+70h] [rbp-90h] BYREF
  char v41; // [rsp+80h] [rbp-80h]
  _QWORD v42[4]; // [rsp+88h] [rbp-78h] BYREF
  bool v43; // [rsp+A8h] [rbp-58h]
  __int64 v44; // [rsp+B0h] [rbp-50h]
  RTL_SRWLOCK *v45; // [rsp+B8h] [rbp-48h]
  int (__fastcall *****v46)(_QWORD, GUID *, __int64 *); // [rsp+C0h] [rbp-40h]
  int (__fastcall *****v47)(_QWORD, GUID *, __int64 *); // [rsp+C8h] [rbp-38h]
  int (__fastcall *****v48)(_QWORD, GUID *, __int64 *); // [rsp+D0h] [rbp-30h]
  ExperienceManagerUtils *v49; // [rsp+D8h] [rbp-28h]
  _OWORD v50[2]; // [rsp+E0h] [rbp-20h] BYREF
  char v51; // [rsp+100h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]
  int v53; // [rsp+160h] [rbp+60h] BYREF
  __int16 v54; // [rsp+164h] [rbp+64h]
  ExperienceManagerUtils *v55; // [rsp+168h] [rbp+68h] BYREF
  __int64 value; // [rsp+170h] [rbp+70h]
  __int64 v57; // [rsp+178h] [rbp+78h] BYREF

  value = a3.value;
  v55 = a2;
  v44 = -2LL;
  v4 = this + 48;
  AcquireSRWLockShared(this + 48);
  v45 = v4;
  Ptr = (int (__fastcall *****)(_QWORD, GUID *, __int64 *))this[50].Ptr;
  v46 = Ptr;
  v7 = (int (__fastcall *****)(_QWORD, GUID *, __int64 *))this[49].Ptr;
  v47 = v7;
  v8 = v55;
  while ( v7 != Ptr && !(unsigned int)SHIsSameObject(**v7, (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v8) )
    v7 += 2;
  v48 = (int (__fastcall *****)(_QWORD, GUID *, __int64 *))this[50].Ptr;
  v9 = this[49].Ptr == v48;
  if ( v4 )
    ReleaseSRWLockShared(v4);
  if ( v7 != v48 )
    return 0LL;
  v10 = ExperienceManagerUtils::WindowFromViewWrapper(v55, v5);
  if ( v10 && !SetPropW(v10, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4FE,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  v40[1] = &v55;
  v41 = 1;
  v34 = 0LL;
  v35 = 0LL;
  TitleBar = TouchKeyboardExperienceManager::CreateAppFrameWrapper((TouchKeyboardExperienceManager *)this, &v34);
  v14 = TitleBar;
  if ( TitleBar >= 0 )
  {
    TitleBar = TouchKeyboardExperienceManager::InitializeChromeOptionsAndGetTitleBar(v13, v34, &v35);
    v14 = TitleBar;
    if ( TitleBar < 0 )
    {
      v15 = 1290LL;
      goto LABEL_23;
    }
    TitleBar = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, __int64))(*(_QWORD *)v34 + 48LL))(v34, 3LL);
    v14 = TitleBar;
    if ( TitleBar < 0 )
    {
      v15 = 1293LL;
      goto LABEL_23;
    }
    v16 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, _QWORD))(*(_QWORD *)v34 + 128LL))(v34, 0LL);
    if ( v16 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x50E,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v16);
    TitleBar = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, ExperienceManagerUtils *))(*(_QWORD *)v34 + 104LL))(
                 v34,
                 v55);
    v14 = TitleBar;
    if ( TitleBar < 0 )
    {
      v15 = 1296LL;
      goto LABEL_23;
    }
    v42[0] = this;
    v42[1] = &v55;
    v42[2] = &v34;
    v42[3] = &v35;
    v43 = v9;
    TitleBar = wil::ResultFromException__lambda_1195b550ee03e899c4c093f0587694a4___(v42);
    v14 = TitleBar;
    if ( TitleBar < 0 )
    {
      v15 = 1310LL;
      goto LABEL_23;
    }
    std::shared_ptr<unsigned int>::shared_ptr<unsigned int>(&v37, (__int64 *)this[50].Ptr - 2);
    v17 = 0LL;
    v57 = 0LL;
    v18 = v55;
    v49 = v55;
    if ( v55 )
    {
      (*(void (__fastcall **)(ExperienceManagerUtils *))(*(_QWORD *)v55 + 8LL))(v55);
      v17 = v57;
    }
    if ( v17 )
    {
      v57 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    v19 = (**(__int64 (__fastcall ***)(ExperienceManagerUtils *, GUID *, __int64 *))v18)(
            v18,
            &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
            &v57);
    v14 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x524,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v19);
LABEL_40:
      (*(void (__fastcall **)(ExperienceManagerUtils *))(*(_QWORD *)v18 + 16LL))(v18);
      v24 = v57;
      if ( v57 )
      {
        v57 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
      v25 = v38;
      if ( v38 )
      {
        if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
          if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
        }
      }
      goto LABEL_46;
    }
    *(_QWORD *)&v39 = TouchKeyboardExperienceManager::OnClientWindowReadyForPresentationChanged;
    DWORD2(v39) = 0;
    v50[0] = v39;
    v40[0] = this;
    wil::MakeAgileCallback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,TouchKeyboardExperienceManager *,long (TouchKeyboardExperienceManager::*)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *)>(
      &v36,
      v40,
      v50);
    v20 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v57 + 80LL))(v57, v36, v37 + 24);
    v14 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x529,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v20);
LABEL_38:
      v23 = v36;
      if ( v36 )
      {
        v36 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      }
      goto LABEL_40;
    }
    *(_QWORD *)&v39 = &v57;
    *((_QWORD *)&v39 + 1) = &v37;
    v50[1] = v39;
    v51 = 1;
    *(_DWORD *)(v37 + 36) = (((char *)this[50].Ptr - (char *)this[49].Ptr) >> 4) - 1;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_SuspendInputAppDesktop>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_SuspendInputAppDesktop>::GetCachedFeatureEnabledState();
    LODWORD(value) = 0;
    BYTE4(value) = 0;
    v53 = 0;
    v54 = WORD2(value);
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_SuspendInputAppDesktop>::GetFeaturePropertyCache'::`2'::data,
      0xBCFA15u,
      (const struct FEATURE_LOGGED_TRAITS *)&v53,
      0,
      3);
    v21 = (*(__int64 (__fastcall **)(ExperienceManagerUtils *, __int64))(*(_QWORD *)v55 + 336LL))(v55, 4LL);
    v14 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x53A,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v21);
      v22 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v57 + 88LL))(v57, *(_QWORD *)(v37 + 24));
      if ( v22 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x52C,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v22);
      *(_QWORD *)&v39 = 0LL;
      *(_QWORD *)(v37 + 24) = 0LL;
      goto LABEL_38;
    }
    v41 = 0;
    v29 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
    (*(void (__fastcall **)(ExperienceManagerUtils *))(*(_QWORD *)v18 + 16LL))(v18);
    v30 = v57;
    if ( v57 )
    {
      v57 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    }
    v31 = v38;
    if ( v38 )
    {
      if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v31)(v31);
        if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
      }
    }
    v32 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(struct IApplicationFrameTitleBar *))(*(_QWORD *)v32 + 16LL))(v32);
    }
    v33 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(struct IApplicationFrameWrapper *))(*(_QWORD *)v33 + 16LL))(v33);
    }
    return 0LL;
  }
  v15 = 1289LL;
LABEL_23:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v15,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)TitleBar);
LABEL_46:
  v26 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(struct IApplicationFrameTitleBar *))(*(_QWORD *)v26 + 16LL))(v26);
  }
  v27 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(struct IApplicationFrameWrapper *))(*(_QWORD *)v27 + 16LL))(v27);
  }
  v28 = (*(__int64 (__fastcall **)(ExperienceManagerUtils *, _QWORD))(*(_QWORD *)v55 + 336LL))(v55, 0LL);
  if ( v28 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x504,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v28);
  return v14;
}
