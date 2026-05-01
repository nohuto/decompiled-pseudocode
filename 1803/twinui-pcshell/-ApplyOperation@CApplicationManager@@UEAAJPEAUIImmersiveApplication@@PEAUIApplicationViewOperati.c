/*
 * XREFs of ?ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperation@@@Z @ 0x180044D30
 * Callers:
 *     ?ApplyOperation@CWinRTApplicationView@@UEAAJPEAUIApplicationViewOperation@@@Z @ 0x18001BC60 (-ApplyOperation@CWinRTApplicationView@@UEAAJPEAUIApplicationViewOperation@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewTitlebarConfiguration@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800261E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_1800261E0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewOperation@@UIApplicationViewTabOperation@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180026F20 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicati.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800287F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicati.c)
 *     ?GetApplicationState@CImmersiveApp@@UEBA?AW4IMM_APP_STATE@@XZ @ 0x1800499C0 (-GetApplicationState@CImmersiveApp@@UEBA-AW4IMM_APP_STATE@@XZ.c)
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180049F20 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?SetPreferredAspectRatioHint@CImmersiveApp@@UEAAJUtagSIZE@@@Z @ 0x18004BE60 (-SetPreferredAspectRatioHint@CImmersiveApp@@UEAAJUtagSIZE@@@Z.c)
 *     ?SetSizeConstraintOverridesLogical@CImmersiveApp@@UEAAJUtagSIZE@@0@Z @ 0x18004BE90 (-SetSizeConstraintOverridesLogical@CImmersiveApp@@UEAAJUtagSIZE@@0@Z.c)
 *     ?SetSizeConstraintOverridesPhysical@CImmersiveApp@@UEAAJUtagSIZE@@0@Z @ 0x18004BEB0 (-SetSizeConstraintOverridesPhysical@CImmersiveApp@@UEAAJUtagSIZE@@0@Z.c)
 *     ?IsEqualByApp@CImmersiveApp@@UEAAJPEAUIImmersiveApplication@@PEAH@Z @ 0x18004C810 (-IsEqualByApp@CImmersiveApp@@UEAAJPEAUIImmersiveApplication@@PEAH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPosition@ApplicationViewOperation@@UEAAJPEAPEAUIApplicationViewPosition@@@Z @ 0x180089530 (-GetPosition@ApplicationViewOperation@@UEAAJPEAPEAUIApplicationViewPosition@@@Z.c)
 *     ?GetVisibility@ApplicationViewOperation@@UEAAJPEAH@Z @ 0x1800895C0 (-GetVisibility@ApplicationViewOperation@@UEAAJPEAH@Z.c)
 *     ?GetChromeOptions@ApplicationViewOperation@@UEAAJPEAW4APPLICATION_FRAME_CHROME_OPTIONS@@0@Z @ 0x1800895E0 (-GetChromeOptions@ApplicationViewOperation@@UEAAJPEAW4APPLICATION_FRAME_CHROME_OPTIONS@@0@Z.c)
 *     ?GetViewStateData@ApplicationViewOperation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x180089600 (-GetViewStateData@ApplicationViewOperation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z.c)
 *     ?GetZOrderBand@ApplicationViewOperation@@UEAAJPEAK@Z @ 0x180089640 (-GetZOrderBand@ApplicationViewOperation@@UEAAJPEAK@Z.c)
 *     ?GetTitlebarConfiguration@ApplicationViewOperation@@UEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180089660 (-GetTitlebarConfiguration@ApplicationViewOperation@@UEAAJPEAPEAUIApplicationViewTitlebarConfigur.c)
 *     ?GetSizeConstraintOverridesPhysical@ApplicationViewOperation@@UEAAJPEAUtagSIZE@@0@Z @ 0x1800896B0 (-GetSizeConstraintOverridesPhysical@ApplicationViewOperation@@UEAAJPEAUtagSIZE@@0@Z.c)
 *     ?GetSizeConstraintOverridesLogical@ApplicationViewOperation@@UEAAJPEAUtagSIZE@@0@Z @ 0x1800896D0 (-GetSizeConstraintOverridesLogical@ApplicationViewOperation@@UEAAJPEAUtagSIZE@@0@Z.c)
 *     ?GetPreferredAspectRatioHint@ApplicationViewOperation@@UEAAJPEAUtagSIZE@@@Z @ 0x1800896F0 (-GetPreferredAspectRatioHint@ApplicationViewOperation@@UEAAJPEAUtagSIZE@@@Z.c)
 *     ?get_Tab@ApplicationViewOperation@@UEAAJPEAPEAUIInspectable@@@Z @ 0x180089710 (-get_Tab@ApplicationViewOperation@@UEAAJPEAPEAUIInspectable@@@Z.c)
 *     ?get_ShouldReconnectTitleBar@ApplicationViewOperation@@UEAAJPEAH@Z @ 0x180089750 (-get_ShouldReconnectTitleBar@ApplicationViewOperation@@UEAAJPEAH@Z.c)
 *     ?get_ShouldRecreateTitleBar@ApplicationViewOperation@@UEAAJPEAH@Z @ 0x180089760 (-get_ShouldRecreateTitleBar@ApplicationViewOperation@@UEAAJPEAH@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x1800F12F0 (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     ??$As@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180102060 (--$As@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CApplicationManager::ApplyOperation(
        CApplicationManager *this,
        struct IImmersiveApplication *a2,
        struct IApplicationViewOperation *a3)
{
  __int64 (__fastcall *v6)(ApplicationViewOperation *__hidden, unsigned int *); // rax
  int ZOrderBand; // eax
  int v8; // ecx
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(ApplicationViewOperation *__hidden, int *); // rax
  int Visibility; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(ApplicationViewOperation *__hidden, struct APPLICATION_VIEW_DATA_UPDATE *); // rax
  int ViewStateData; // eax
  __int64 (__fastcall *v15)(ApplicationViewOperation *__hidden, struct IApplicationViewPosition **); // rax
  __int64 (__fastcall *v16)(ApplicationViewOperation *__hidden, struct IApplicationViewTitlebarConfiguration **); // rax
  __int64 (__fastcall **v17)(struct IApplicationViewOperation *, GUID *, ApplicationViewOperation **); // rsi
  __int64 (__fastcall *v18)(ApplicationViewOperation *__hidden, enum APPLICATION_FRAME_CHROME_OPTIONS *, enum APPLICATION_FRAME_CHROME_OPTIONS *); // rax
  int ChromeOptions; // eax
  bool v20; // bl
  int v21; // eax
  int v22; // r14d
  char v23; // r12
  __int64 (__fastcall *v24)(ApplicationViewOperation *__hidden, struct IInspectable **); // rax
  int Tab; // eax
  int v26; // r14d
  ApplicationViewOperation *v27; // rbx
  __int64 (__fastcall *v28)(ApplicationViewOperation *__hidden, int *); // rax
  int ShouldRecreateTitleBar; // eax
  __int64 (__fastcall *v30)(ApplicationViewOperation *__hidden, int *); // rax
  int ShouldReconnectTitleBar; // eax
  struct IInspectable *v32; // rcx
  CImmersiveApp *v33; // rcx
  CApplicationManager *v34; // r13
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // r15
  __int64 v37; // rbx
  int v38; // r14d
  ULONG (__stdcall *AddRef)(IInspectable *); // rax
  struct IInspectable *v40; // rcx
  int v41; // ebx
  __int64 (__fastcall ***v42)(_QWORD, GUID *, CImmersiveApp **); // rcx
  struct IImmersiveApplication *v43; // r15
  __int64 (__fastcall *v44)(ApplicationViewOperation *__hidden, struct tagSIZE *, struct tagSIZE *); // rax
  int SizeConstraintOverridesPhysical; // eax
  __int64 (__fastcall *v46)(CImmersiveApp *__hidden, struct tagSIZE, struct tagSIZE); // rax
  int v47; // eax
  __int64 (__fastcall *v48)(ApplicationViewOperation *__hidden, struct tagSIZE *, struct tagSIZE *); // rax
  int SizeConstraintOverridesLogical; // eax
  __int64 (__fastcall *v50)(CImmersiveApp *__hidden, struct tagSIZE, struct tagSIZE); // rax
  int v51; // eax
  __int64 (__fastcall *v52)(ApplicationViewOperation *__hidden, struct tagSIZE *); // rax
  int PreferredAspectRatioHint; // eax
  __int64 (__fastcall *v54)(CImmersiveApp *__hidden, struct tagSIZE); // rax
  int v55; // eax
  CImmersiveApp *v56; // rdi
  unsigned int v57; // r14d
  int v58; // edx
  bool v59; // cf
  __int64 (__fastcall *v60)(_QWORD); // rax
  int v61; // eax
  __int64 (__fastcall *v62)(CImmersiveApp *); // rax
  char v63; // al
  CImmersiveApp *v64; // rcx
  ApplicationViewOperation *v65; // rcx
  CImmersiveApp *v66; // rcx
  struct IApplicationViewTitlebarConfiguration *v67; // rcx
  void (*v68)(void); // rax
  struct IApplicationViewPosition *v69; // rcx
  void (*v70)(void); // rax
  struct tagSIZE v72; // rax
  CImmersiveApp *v73; // rbx
  __int64 v74; // rdx
  int v75; // [rsp+20h] [rbp-E0h]
  CImmersiveApp *v76; // [rsp+60h] [rbp-A0h] BYREF
  struct IInspectable *v77; // [rsp+68h] [rbp-98h] BYREF
  int v78; // [rsp+70h] [rbp-90h] BYREF
  int v79; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v80; // [rsp+78h] [rbp-88h] BYREF
  int v81; // [rsp+7Ch] [rbp-84h]
  ApplicationViewOperation *v82; // [rsp+80h] [rbp-80h] BYREF
  struct IApplicationViewTitlebarConfiguration *v83; // [rsp+88h] [rbp-78h] BYREF
  struct IApplicationViewPosition *v84; // [rsp+90h] [rbp-70h] BYREF
  int v85; // [rsp+98h] [rbp-68h] BYREF
  int v86; // [rsp+9Ch] [rbp-64h]
  struct tagSIZE v87; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v88; // [rsp+A8h] [rbp-58h] BYREF
  CImmersiveApp *v89; // [rsp+B0h] [rbp-50h]
  __int16 v90; // [rsp+B8h] [rbp-48h]
  struct IImmersiveApplication *v91; // [rsp+C0h] [rbp-40h]
  struct tagSIZE v92; // [rsp+C8h] [rbp-38h] BYREF
  struct tagSIZE v93; // [rsp+D0h] [rbp-30h] BYREF
  struct tagSIZE v94; // [rsp+D8h] [rbp-28h] BYREF
  struct tagSIZE v95; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v96; // [rsp+E8h] [rbp-18h]
  CApplicationManager *v97; // [rsp+F0h] [rbp-10h]
  __int64 v98; // [rsp+F8h] [rbp-8h]
  struct IImmersiveApplication *v99; // [rsp+100h] [rbp+0h]
  __int64 v100; // [rsp+108h] [rbp+8h]
  __int64 v101; // [rsp+110h] [rbp+10h]
  __int64 v102; // [rsp+118h] [rbp+18h]
  _BYTE v103[40]; // [rsp+120h] [rbp+20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v98 = -2LL;
  v91 = a2;
  v97 = this;
  v6 = *(__int64 (__fastcall **)(ApplicationViewOperation *__hidden, unsigned int *))(*(_QWORD *)a3 + 152LL);
  if ( v6 == ApplicationViewOperation::GetZOrderBand )
    ZOrderBand = ApplicationViewOperation::GetZOrderBand(a3, &v80);
  else
    ZOrderBand = v6(a3, &v80);
  if ( ZOrderBand < 0 )
  {
    v80 = 0;
  }
  else if ( v80 > 0x11 || (v8 = 131346, !_bittest(&v8, v80)) )
  {
    v41 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x786,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)0x80070057LL,
      v75);
    return (unsigned int)v41;
  }
  v81 = 0;
  v9 = *(_QWORD *)a3;
  v10 = *(__int64 (__fastcall **)(ApplicationViewOperation *__hidden, int *))(*(_QWORD *)a3 + 104LL);
  if ( v10 == ApplicationViewOperation::GetVisibility )
  {
    Visibility = ApplicationViewOperation::GetVisibility(a3, &v85);
  }
  else
  {
    Visibility = v10(a3, &v85);
    v9 = *(_QWORD *)a3;
  }
  v12 = v9;
  if ( Visibility >= 0 )
  {
    v81 = 1;
    if ( !v85 )
      v81 = 2;
  }
  v13 = *(__int64 (__fastcall **)(ApplicationViewOperation *__hidden, struct APPLICATION_VIEW_DATA_UPDATE *))(v9 + 136);
  if ( v13 == ApplicationViewOperation::GetViewStateData )
  {
    ViewStateData = ApplicationViewOperation::GetViewStateData(a3, (struct APPLICATION_VIEW_DATA_UPDATE *)v103);
  }
  else
  {
    ViewStateData = v13(a3, (struct APPLICATION_VIEW_DATA_UPDATE *)v103);
    v12 = *(_QWORD *)a3;
  }
  v86 = ViewStateData >= 0;
  v84 = 0LL;
  v15 = *(__int64 (__fastcall **)(ApplicationViewOperation *__hidden, struct IApplicationViewPosition **))(v12 + 88);
  if ( v15 == ApplicationViewOperation::GetPosition )
    ApplicationViewOperation::GetPosition(a3, &v84);
  else
    v15(a3, &v84);
  v83 = 0LL;
  v16 = *(__int64 (__fastcall **)(ApplicationViewOperation *__hidden, struct IApplicationViewTitlebarConfiguration **))(*(_QWORD *)a3 + 168LL);
  if ( v16 == ApplicationViewOperation::GetTitlebarConfiguration )
    ApplicationViewOperation::GetTitlebarConfiguration(a3, &v83);
  else
    v16(a3, &v83);
  v88 = 0LL;
  v89 = 0LL;
  v90 = 0;
  v17 = *(__int64 (__fastcall ***)(struct IApplicationViewOperation *, GUID *, ApplicationViewOperation **))a3;
  v18 = *(__int64 (__fastcall **)(ApplicationViewOperation *__hidden, enum APPLICATION_FRAME_CHROME_OPTIONS *, enum APPLICATION_FRAME_CHROME_OPTIONS *))(*(_QWORD *)a3 + 120LL);
  if ( v18 == ApplicationViewOperation::GetChromeOptions )
  {
    ChromeOptions = ApplicationViewOperation::GetChromeOptions(
                      a3,
                      (enum APPLICATION_FRAME_CHROME_OPTIONS *)&v88,
                      (enum APPLICATION_FRAME_CHROME_OPTIONS *)((char *)&v88 + 4));
  }
  else
  {
    ChromeOptions = v18(
                      a3,
                      (enum APPLICATION_FRAME_CHROME_OPTIONS *)&v88,
                      (enum APPLICATION_FRAME_CHROME_OPTIONS *)((char *)&v88 + 4));
    v17 = *(__int64 (__fastcall ***)(struct IApplicationViewOperation *, GUID *, ApplicationViewOperation **))a3;
  }
  v20 = ChromeOptions >= 0;
  v82 = 0LL;
  if ( (char *)*v17 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewOperation,Windows::Internal::ComposableShell::Tabs::IApplicationViewTabOperation,Microsoft::WRL::FtmBase>::QueryInterface )
    v21 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewOperation,Windows::Internal::ComposableShell::Tabs::IApplicationViewTabOperation,Microsoft::WRL::FtmBase>::QueryInterface(
            (__int64)a3,
            (__int64)&GUID_abc3a46a_162a_4244_bf76_49364432cda1,
            &v82);
  else
    v21 = (*v17)(a3, &GUID_abc3a46a_162a_4244_bf76_49364432cda1, &v82);
  v22 = v21;
  if ( v21 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x7AF,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v21,
      v75);
  v23 = v20;
  if ( v22 >= 0 )
  {
    v77 = 0LL;
    v24 = *(__int64 (__fastcall **)(ApplicationViewOperation *__hidden, struct IInspectable **))(*(_QWORD *)v82 + 48LL);
    if ( v24 == ApplicationViewOperation::get_Tab )
      Tab = ApplicationViewOperation::get_Tab(v82, &v77);
    else
      Tab = v24(v82, &v77);
    v26 = Tab;
    if ( Tab < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x7B2,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)Tab,
        v75);
    v23 = v20;
    if ( v26 >= 0 && v77 )
    {
      v76 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Internal::ComposableShell::Tabs::IShellTab>(
                  &v77,
                  &v76) >= 0 )
      {
        v72 = (struct tagSIZE)v89;
        v73 = v76;
        if ( v89 != v76 )
        {
          if ( v76 )
          {
            (*(void (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v76 + 8LL))(v76);
            v72 = (struct tagSIZE)v89;
          }
          v87 = v72;
          v89 = v73;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v87);
        }
        v23 = 1;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v76);
    }
    v79 = 0;
    v27 = v82;
    v28 = *(__int64 (__fastcall **)(ApplicationViewOperation *__hidden, int *))(*(_QWORD *)v82 + 80LL);
    if ( v28 == ApplicationViewOperation::get_ShouldRecreateTitleBar )
    {
      ShouldRecreateTitleBar = ApplicationViewOperation::get_ShouldRecreateTitleBar(v82, &v79);
    }
    else
    {
      ShouldRecreateTitleBar = v28(v82, &v79);
      v27 = v82;
    }
    if ( ShouldRecreateTitleBar < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x7BD,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)ShouldRecreateTitleBar,
        v75);
      v27 = v82;
    }
    else if ( v79 )
    {
      HIBYTE(v90) = 1;
      v23 = 1;
    }
    v78 = 0;
    v30 = *(__int64 (__fastcall **)(ApplicationViewOperation *__hidden, int *))(*(_QWORD *)v27 + 64LL);
    if ( v30 == ApplicationViewOperation::get_ShouldReconnectTitleBar )
      ShouldReconnectTitleBar = ApplicationViewOperation::get_ShouldReconnectTitleBar(v27, &v78);
    else
      ShouldReconnectTitleBar = v30(v27, &v78);
    if ( ShouldReconnectTitleBar < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x7C4,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)ShouldReconnectTitleBar,
        v75);
    }
    else if ( v78 )
    {
      LOBYTE(v90) = 1;
      v23 = 1;
    }
    v32 = v77;
    if ( v77 )
    {
      v77 = 0LL;
      ((void (__fastcall *)(struct IInspectable *))v32->lpVtbl->Release)(v32);
    }
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  BYTE1(v79) = 1;
  v33 = 0LL;
  v76 = 0LL;
  v99 = a2;
  if ( a2 )
  {
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 8LL))(a2);
    v33 = v76;
  }
  if ( v33 )
  {
    v76 = 0LL;
    (*(void (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v33 + 16LL))(v33);
  }
  v34 = (CApplicationManager *)((char *)this - 216);
  v76 = 0LL;
  v100 = 0LL;
  v35 = 0LL;
  v96 = 0LL;
  v36 = 0LL;
  if ( *((_QWORD *)v34 + 79) )
  {
    v101 = 0LL;
    do
    {
      v37 = *(_QWORD *)(*((_QWORD *)v34 + 78) + 8 * v36);
      v102 = v37;
      if ( v37 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 8LL))(v37);
      v38 = -1;
      v77 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, struct IInspectable **))v37)(
             v37,
             &GUID_8b14e88b_5663_4caf_b196_c31479262831,
             &v77) >= 0 )
      {
        AddRef = v77->lpVtbl[2].AddRef;
        if ( (char *)AddRef == (char *)CImmersiveApp::IsEqualByApp )
          CImmersiveApp::IsEqualByApp((CImmersiveApp *)v77, v91, &v78);
        else
          ((void (__fastcall *)(struct IInspectable *, struct IImmersiveApplication *, int *))AddRef)(v77, v91, &v78);
        v38 = (v78 != 0) - 1;
      }
      v40 = v77;
      if ( v77 )
      {
        v77 = 0LL;
        ((void (__fastcall *)(struct IInspectable *))v40->lpVtbl->Release)(v40);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
      if ( !v38 )
      {
        v35 = v36;
        v41 = 0;
        goto LABEL_56;
      }
      ++v36;
    }
    while ( v36 < *((_QWORD *)v34 + 79) );
    v35 = v96;
  }
  v41 = -2147319765;
LABEL_56:
  if ( v41 >= 0 )
  {
    v42 = *(__int64 (__fastcall ****)(_QWORD, GUID *, CImmersiveApp **))(*((_QWORD *)v34 + 78) + 8 * v35);
    v41 = (**v42)(v42, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v76);
  }
  v43 = v91;
  if ( v91 )
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v91 + 16LL))(v91);
  if ( v41 < 0 )
  {
    v74 = 2006LL;
  }
  else
  {
    v44 = *(__int64 (__fastcall **)(ApplicationViewOperation *__hidden, struct tagSIZE *, struct tagSIZE *))(*(_QWORD *)a3 + 200LL);
    if ( v44 == ApplicationViewOperation::GetSizeConstraintOverridesPhysical )
      SizeConstraintOverridesPhysical = ApplicationViewOperation::GetSizeConstraintOverridesPhysical(a3, &v93, &v92);
    else
      SizeConstraintOverridesPhysical = v44(a3, &v93, &v92);
    v41 = SizeConstraintOverridesPhysical;
    if ( SizeConstraintOverridesPhysical < 0 )
    {
      v74 = 2011LL;
    }
    else
    {
      v46 = *(__int64 (__fastcall **)(CImmersiveApp *__hidden, struct tagSIZE, struct tagSIZE))(*(_QWORD *)v76 + 560LL);
      if ( v46 == CImmersiveApp::SetSizeConstraintOverridesPhysical )
        v47 = CImmersiveApp::SetSizeConstraintOverridesPhysical(v76, v93, v92);
      else
        v47 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v46)(v76, v93, v92);
      v41 = v47;
      if ( v47 < 0 )
      {
        v74 = 2012LL;
      }
      else
      {
        v48 = *(__int64 (__fastcall **)(ApplicationViewOperation *__hidden, struct tagSIZE *, struct tagSIZE *))(*(_QWORD *)a3 + 216LL);
        if ( v48 == ApplicationViewOperation::GetSizeConstraintOverridesLogical )
          SizeConstraintOverridesLogical = ApplicationViewOperation::GetSizeConstraintOverridesLogical(a3, &v95, &v94);
        else
          SizeConstraintOverridesLogical = v48(a3, &v95, &v94);
        v41 = SizeConstraintOverridesLogical;
        if ( SizeConstraintOverridesLogical < 0 )
        {
          v74 = 2016LL;
        }
        else
        {
          v50 = *(__int64 (__fastcall **)(CImmersiveApp *__hidden, struct tagSIZE, struct tagSIZE))(*(_QWORD *)v76
                                                                                                  + 568LL);
          if ( v50 == CImmersiveApp::SetSizeConstraintOverridesLogical )
            v51 = CImmersiveApp::SetSizeConstraintOverridesLogical(v76, v95, v94);
          else
            v51 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v50)(v76, v95, v94);
          v41 = v51;
          if ( v51 < 0 )
          {
            v74 = 2017LL;
          }
          else
          {
            v52 = *(__int64 (__fastcall **)(ApplicationViewOperation *__hidden, struct tagSIZE *))(*(_QWORD *)a3 + 232LL);
            if ( v52 == ApplicationViewOperation::GetPreferredAspectRatioHint )
              PreferredAspectRatioHint = ApplicationViewOperation::GetPreferredAspectRatioHint(a3, &v87);
            else
              PreferredAspectRatioHint = v52(a3, &v87);
            if ( PreferredAspectRatioHint >= 0
              && ((v54 = *(__int64 (__fastcall **)(CImmersiveApp *__hidden, struct tagSIZE))(*(_QWORD *)v76 + 592LL),
                   v54 != CImmersiveApp::SetPreferredAspectRatioHint)
                ? (v55 = ((__int64 (__fastcall *)(_QWORD, _QWORD))v54)(v76, v87))
                : (v55 = CImmersiveApp::SetPreferredAspectRatioHint(v76, v87)),
                  v41 = v55,
                  v55 < 0) )
            {
              v74 = 2023LL;
            }
            else
            {
              v56 = v76;
              v57 = v80;
              v58 = *((_DWORD *)v97 + 152);
              v59 = (_BYTE)v86 != 0;
              LOBYTE(v86) = -(char)v86;
              v60 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v76 + 256LL);
              v75 = v81;
              if ( v60 == CImmersiveApp::SetViewPosition )
                v61 = CImmersiveApp::SetViewPosition(v76);
              else
                v61 = ((__int64 (__fastcall *)(CImmersiveApp *, struct IApplicationViewPosition *, unsigned __int64, struct IApplicationViewTitlebarConfiguration *, int, int, _QWORD, unsigned __int64, int, unsigned int))v60)(
                        v76,
                        v84,
                        (unsigned __int64)v103 & -(__int64)v59,
                        v83,
                        v81,
                        v58,
                        0LL,
                        (unsigned __int64)&v88 & -(__int64)(v23 != 0),
                        1,
                        v80);
              v41 = v61;
              if ( v61 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0xF39,
                  (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                  (const char *)(unsigned int)v61,
                  v75);
              }
              else
              {
                if ( v57 )
                {
                  v62 = *(__int64 (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v56 + 280LL);
                  v63 = (char *)v62 == (char *)CImmersiveApp::GetApplicationState
                      ? CImmersiveApp::GetApplicationState(v56)
                      : v62(v56);
                  if ( (v63 & 2) != 0 )
                  {
                    v77 = 0LL;
                    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v77);
                    if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(v34, (struct ISyncIAMEventHandler **)&v77) >= 0 )
                    {
                      v75 = v57;
                      ((void (__fastcall *)(struct IInspectable *, _QWORD, unsigned __int64, struct IImmersiveApplication *))v77->lpVtbl->GetIids)(
                        v77,
                        0LL,
                        ((unsigned __int64)v34 + 248) & -(__int64)(v34 != 0LL),
                        v43);
                    }
                    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v77);
                  }
                }
                v41 = 0;
              }
              if ( v41 >= 0 )
              {
                v64 = v76;
                if ( v76 )
                {
                  v76 = 0LL;
                  (*(void (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v64 + 16LL))(v64);
                }
                ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
                v41 = 0;
                goto LABEL_91;
              }
              v74 = 2037LL;
            }
          }
        }
      }
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v74,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)(unsigned int)v41,
    v75);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v76);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
LABEL_91:
  v65 = v82;
  if ( v82 )
  {
    v82 = 0LL;
    (*(void (__fastcall **)(ApplicationViewOperation *))(*(_QWORD *)v65 + 16LL))(v65);
  }
  v66 = v89;
  if ( v89 )
  {
    v89 = 0LL;
    (*(void (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v66 + 16LL))(v66);
  }
  v67 = v83;
  if ( v83 )
  {
    v83 = 0LL;
    v68 = *(void (**)(void))(*(_QWORD *)v67 + 16LL);
    if ( (char *)v68 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>::Release(
        (__int64)v67,
        (volatile int *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>::Release);
    else
      v68();
  }
  v69 = v84;
  if ( v84 )
  {
    v84 = 0LL;
    v70 = *(void (**)(void))(*(_QWORD *)v69 + 16LL);
    if ( (char *)v70 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::Release(
        (__int64)v69,
        (volatile int *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::Release);
    else
      v70();
  }
  return (unsigned int)v41;
}
