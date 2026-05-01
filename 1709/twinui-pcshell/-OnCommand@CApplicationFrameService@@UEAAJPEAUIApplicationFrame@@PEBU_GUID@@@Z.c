/*
 * XREFs of ?OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z @ 0x18004EAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18002026C (-Stop@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180020D0C (--1-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180020F30 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProv.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFrameByWindow@CApplicationFrameService@@UEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x18004E530 (-GetFrameByWindow@CApplicationFrameService@@UEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z.c)
 *     ?_SnapApplicationToLocation@CApplicationFrameService@@AEAAJPEAUIImmersiveApplication@@W4SNAP_LOCATION@@@Z @ 0x18004FE3C (-_SnapApplicationToLocation@CApplicationFrameService@@AEAAJPEAUIImmersiveApplication@@W4SNAP_LOC.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_CoreWindowResizeEvent_Desktop@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18005078C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_CoreWindowResizeEvent_Deskto.c)
 *     ?StartActivity@TitleBarButtonCloseRequested@CAppManagerTelemetry@@QEAAXXZ @ 0x180051308 (-StartActivity@TitleBarButtonCloseRequested@CAppManagerTelemetry@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationFrameService::OnCommand(
        CApplicationFrameService *this,
        struct IApplicationFrame *a2,
        const struct _GUID *a3)
{
  int FrameByWindow; // r14d
  struct IApplicationFrameProxy *v6; // rbx
  int v7; // eax
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  BOOL v12; // edi
  int v13; // eax
  struct IApplicationFrameProxy *v14; // rcx
  RTL_SRWLOCK *v15; // rbx
  struct IApplicationFrameProxy *v16; // rcx
  __int64 (__fastcall ***v17)(_QWORD, GUID *, struct IApplicationFrameProxy **); // rcx
  __int64 (__fastcall ***v18)(_QWORD, GUID *, struct IApplicationFrameProxy **); // rcx
  __int64 (__fastcall ***v20)(_QWORD, GUID *, struct IApplicationFrameProxy **); // [rsp+30h] [rbp-D0h] BYREF
  struct IApplicationFrameProxy *v21; // [rsp+38h] [rbp-C8h] BYREF
  HWND v22[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v23[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v24; // [rsp+70h] [rbp-90h]
  int *v25; // [rsp+78h] [rbp-88h]
  int *v26; // [rsp+80h] [rbp-80h]
  int v27; // [rsp+88h] [rbp-78h] BYREF
  char v28; // [rsp+8Ch] [rbp-74h]
  int v29; // [rsp+B0h] [rbp-50h] BYREF
  const char *v30; // [rsp+B8h] [rbp-48h]
  __int64 v31; // [rsp+C0h] [rbp-40h]
  char v32; // [rsp+C8h] [rbp-38h]
  __int64 v33; // [rsp+D0h] [rbp-30h]
  _BYTE v34[144]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v35; // [rsp+168h] [rbp+68h]
  __int64 v36; // [rsp+170h] [rbp+70h]
  __int64 v37; // [rsp+178h] [rbp+78h]
  __int64 v38; // [rsp+180h] [rbp+80h]
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  v22[1] = (HWND)-2LL;
  if ( !*((_QWORD *)this + 18) )
    return 0LL;
  v20 = 0LL;
  FrameByWindow = (*(__int64 (__fastcall **)(struct IApplicationFrame *, HWND *))(*(_QWORD *)a2 + 24LL))(a2, v22);
  if ( FrameByWindow < 0 )
    goto LABEL_91;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v21 = 0LL;
  FrameByWindow = CApplicationFrameService::GetFrameByWindow(
                    (CApplicationFrameService *)((char *)this - 8),
                    (struct IApplicationFrameProxy **)v22[0],
                    &v21);
  v6 = v21;
  if ( FrameByWindow >= 0 )
    FrameByWindow = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationFrameProxy *, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IApplicationFrameProxy **)))(**((_QWORD **)this + 16) + 48LL))(
                      *((_QWORD *)this + 16),
                      v21,
                      &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                      &v20);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v6 )
    (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( FrameByWindow < 0 )
  {
LABEL_91:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x3B2,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
      (const char *)(unsigned int)FrameByWindow);
  }
  else
  {
    if ( *(_QWORD *)&a3->Data1 == ApplicationFrameCloseCommand && *(_QWORD *)a3->Data4 == 0x575B26E93947F081LL )
    {
      v23[1] = 0LL;
      v23[2] = v23;
      v23[3] = 0LL;
      v24 = 0;
      v25 = &v29;
      v26 = &v27;
      v27 = 0;
      v28 = 0;
      v32 = 0;
      v29 = 0;
      v30 = "TitleBarButtonCloseRequested";
      v31 = 0LL;
      v33 = 1LL;
      v35 = 0LL;
      v36 = 0LL;
      memset(v34, 0, sizeof(v34));
      v37 = 0LL;
      v38 = 0LL;
      v23[0] = &CAppManagerTelemetry::TitleBarButtonCloseRequested::`vftable';
      CAppManagerTelemetry::TitleBarButtonCloseRequested::StartActivity((CAppManagerTelemetry::TitleBarButtonCloseRequested *)v23);
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 18) + 112LL))(
             *((_QWORD *)this + 18),
             v20,
             1LL);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3B7,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
          (const char *)(unsigned int)v7);
      wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        (__int64)v23,
        0);
      v23[0] = &CAppManagerTelemetry::TitleBarButtonCloseRequested::`vftable';
      wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v23);
      wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v23);
      goto LABEL_89;
    }
    if ( *(_QWORD *)&a3->Data1 == ApplicationFrameMinimizeCommand && *(_QWORD *)a3->Data4 == 0x68800BB0DB37499ALL )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 18) + 120LL))(
             *((_QWORD *)this + 18),
             v20,
             1LL);
      v9 = retaddr;
      if ( v8 >= 0 )
        goto LABEL_89;
      v10 = 956LL;
      goto LABEL_88;
    }
    if ( *(_QWORD *)&a3->Data1 == ApplicationFrameRestoreCommand && *(_QWORD *)a3->Data4 == 0x43C1CD8F609CB0B9LL
      || *(_QWORD *)&a3->Data1 == ApplicationFrameMaximizeCommand && *(_QWORD *)a3->Data4 == 0xBAF459B87B7D7FADuLL )
    {
      goto LABEL_89;
    }
    if ( (*(_QWORD *)&a3->Data1 != ApplicationFrameEnteredSizeMoveCommand
       || *(_QWORD *)a3->Data4 != 0xE7CB35A4FECBF2AEuLL)
      && (*(_QWORD *)&a3->Data1 != ApplicationFrameExitedSizeMoveCommand || *(_QWORD *)a3->Data4 != 0x789E03E893229A8ALL) )
    {
      if ( *(_QWORD *)&a3->Data1 == ApplicationFrameActionsCommand && *(_QWORD *)a3->Data4 == 0xAD274CE2F92C9EA7uLL )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 18) + 24LL))(
               *((_QWORD *)this + 18),
               v20,
               1LL);
        v9 = retaddr;
        if ( v8 >= 0 )
          goto LABEL_89;
        v10 = 984LL;
      }
      else if ( *(_QWORD *)&a3->Data1 == ApplicationFrameAppBarCommand && *(_QWORD *)a3->Data4 == 0xD4BDEDDB69037AABuLL )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 18) + 32LL))(
               *((_QWORD *)this + 18),
               v20,
               1LL);
        v9 = retaddr;
        if ( v8 >= 0 )
          goto LABEL_89;
        v10 = 988LL;
      }
      else if ( *(_QWORD *)&a3->Data1 == ApplicationFrameSearchCommand && *(_QWORD *)a3->Data4 == 0xCC3A288AB9231881uLL )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 18) + 40LL))(
               *((_QWORD *)this + 18),
               v20,
               1LL);
        v9 = retaddr;
        if ( v8 >= 0 )
          goto LABEL_89;
        v10 = 992LL;
      }
      else if ( *(_QWORD *)&a3->Data1 == ApplicationFrameShareCommand && *(_QWORD *)a3->Data4 == 0x53BF8027BA4C1EABLL )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 18) + 48LL))(
               *((_QWORD *)this + 18),
               v20,
               1LL);
        v9 = retaddr;
        if ( v8 >= 0 )
          goto LABEL_89;
        v10 = 996LL;
      }
      else if ( *(_QWORD *)&a3->Data1 == ApplicationFramePrintCommand && *(_QWORD *)a3->Data4 == 0xE4859AF16A55A58EuLL )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 18) + 56LL))(
               *((_QWORD *)this + 18),
               v20,
               1LL);
        v9 = retaddr;
        if ( v8 >= 0 )
          goto LABEL_89;
        v10 = 1000LL;
      }
      else if ( *(_QWORD *)&a3->Data1 == ApplicationFrameTapAndSendCommand
             && *(_QWORD *)a3->Data4 == 0xEE886DAE545B1C9BuLL )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 18) + 64LL))(
               *((_QWORD *)this + 18),
               v20,
               1LL);
        v9 = retaddr;
        if ( v8 >= 0 )
          goto LABEL_89;
        v10 = 1004LL;
      }
      else if ( *(_QWORD *)&a3->Data1 == ApplicationFrameSettingsCommand && *(_QWORD *)a3->Data4 == 0xE24967B55ED51BCLL )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 18) + 72LL))(
               *((_QWORD *)this + 18),
               v20,
               1LL);
        v9 = retaddr;
        if ( v8 >= 0 )
          goto LABEL_89;
        v10 = 1008LL;
      }
      else if ( *(_QWORD *)&a3->Data1 == ApplicationFrameFullScreenCommand
             && *(_QWORD *)a3->Data4 == 0x30269B0F10A7889FLL )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 18) + 80LL))(
               *((_QWORD *)this + 18),
               v20,
               1LL);
        v9 = retaddr;
        if ( v8 >= 0 )
          goto LABEL_89;
        v10 = 1012LL;
      }
      else if ( *(_QWORD *)&a3->Data1 == ApplicationFrameExitFullScreenCommand
             && *(_QWORD *)a3->Data4 == 0xB2E04A65B7B0C7B7uLL )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 18) + 104LL))(
               *((_QWORD *)this + 18),
               v20,
               1LL);
        v9 = retaddr;
        if ( v8 >= 0 )
          goto LABEL_89;
        v10 = 1016LL;
      }
      else if ( *(_QWORD *)&a3->Data1 == ApplicationFrameAnnotateCommand && *(_QWORD *)a3->Data4 == 0x400BB63ABEA97CA4LL )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 18) + 88LL))(
               *((_QWORD *)this + 18),
               v20,
               1LL);
        v9 = retaddr;
        if ( v8 >= 0 )
          goto LABEL_89;
        v10 = 1020LL;
      }
      else if ( *(_QWORD *)&a3->Data1 == ApplicationFrameBackCommand && *(_QWORD *)a3->Data4 == 0x37530565A7963B8FLL )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 18) + 96LL))(
               *((_QWORD *)this + 18),
               v20,
               1LL);
        v9 = retaddr;
        if ( v8 >= 0 )
          goto LABEL_89;
        v10 = 1024LL;
      }
      else if ( *(_QWORD *)&a3->Data1 == ApplicationFrameSnapLeftCommand && *(_QWORD *)a3->Data4 == 0x255BC252F81743AELL )
      {
        v8 = CApplicationFrameService::_SnapApplicationToLocation((char *)this - 48, v20, 0LL);
        v9 = retaddr;
        if ( v8 >= 0 )
          goto LABEL_89;
        v10 = 1028LL;
      }
      else
      {
        if ( *(_QWORD *)&a3->Data1 != ApplicationFrameSnapRightCommand )
          goto LABEL_89;
        if ( *(_QWORD *)a3->Data4 != 0x55331EAB62563487LL )
          goto LABEL_89;
        v8 = CApplicationFrameService::_SnapApplicationToLocation((char *)this - 48, v20, 1LL);
        v9 = retaddr;
        if ( v8 >= 0 )
          goto LABEL_89;
        v10 = 1032LL;
      }
LABEL_88:
      wil::details::in1diag3::_Log_Hr(
        v9,
        (void *)v10,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
        (const char *)(unsigned int)v8);
LABEL_89:
      v17 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct IApplicationFrameProxy **)))(*v17)[2])(v17);
      }
      return 0LL;
    }
    if ( (`wil::Feature<__WilFeatureTraits_Feature_CoreWindowResizeEvent_Desktop>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_CoreWindowResizeEvent_Desktop>::GetCachedFeatureEnabledState();
    LODWORD(v22[0]) = 0;
    BYTE4(v22[0]) = 3;
    LODWORD(v21) = 0;
    WORD2(v21) = WORD2(v22[0]);
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_CoreWindowResizeEvent_Desktop>::GetFeaturePropertyCache'::`2'::data,
      0x4C11C4u,
      (const struct FEATURE_LOGGED_TRAITS *)&v21,
      1,
      3);
    v11 = *(_QWORD *)&a3->Data1 - ApplicationFrameEnteredSizeMoveCommand;
    if ( *(_QWORD *)&a3->Data1 == ApplicationFrameEnteredSizeMoveCommand )
      v11 = *(_QWORD *)a3->Data4 + 0x1834CA5B01340D52LL;
    v12 = v11 == 0;
    v21 = 0LL;
    v13 = (**v20)(v20, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v21);
    FrameByWindow = v13;
    if ( v13 >= 0 )
    {
      v15 = CApplicationManagerUtility::g_pIAMGlobals;
      v22[0] = (HWND)CApplicationManagerUtility::g_pIAMGlobals;
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      (*(void (__fastcall **)(struct IApplicationFrameProxy *, BOOL))(*(_QWORD *)v21 + 608LL))(v21, v12);
      if ( v15 )
        ReleaseSRWLockExclusive(v15);
      v16 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v16 + 16LL))(v16);
      }
      goto LABEL_89;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x3D0,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
      (const char *)(unsigned int)v13);
    v14 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  v18 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct IApplicationFrameProxy **)))(*v18)[2])(v18);
  }
  return (unsigned int)FrameByWindow;
}
