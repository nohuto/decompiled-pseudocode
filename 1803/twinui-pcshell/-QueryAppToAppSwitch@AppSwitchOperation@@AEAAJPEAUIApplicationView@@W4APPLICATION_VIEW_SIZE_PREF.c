/*
 * XREFs of ?QueryAppToAppSwitch@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01PEAW4FinalizeLayoutFlags@@@Z @ 0x1802D5274
 * Callers:
 *     ?AppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01@Z @ 0x1802D4EF0 (-AppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENC.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18007DE0C (-IsBiDiLocale@@YAHK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x180284024 (-GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 *     ?QuerySwitchToApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x1802D5748 (-QuerySwitchToApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 *     ?ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x180305064 (-ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x18030FF04 (-_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@.c)
 */

__int64 __fastcall AppSwitchOperation::QueryAppToAppSwitch(
        __int64 a1,
        __int64 a2,
        int a3,
        struct IApplicationView *a4,
        __int64 a5,
        _DWORD *a6)
{
  int ViewLayoutBehaviorFlags; // edi
  __int64 v11; // rdx
  const struct LAYOUT_ENVIRONMENT_DETAILS *v13; // rdx
  unsigned int v14; // edi
  int SwitchToApp; // ebx
  __int64 v16; // rdx
  __int64 *v17; // rcx
  __int64 v18; // rax
  LANGID ThreadUILanguage; // ax
  int v20; // eax
  __int64 v21; // rbx
  BOOL v22; // edi
  int v23; // eax
  __int64 v24; // rbx
  int v25; // eax
  int v26; // [rsp+30h] [rbp-50h] BYREF
  CWinRTApplicationView *v27; // [rsp+38h] [rbp-48h] BYREF
  __int64 v28; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v29[40]; // [rsp+48h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  *a6 = 0;
  ViewLayoutBehaviorFlags = GetViewLayoutBehaviorFlags(a4, (enum APP_LAYOUT_ITEM_BEHAVIOR_FLAGS *)&v26);
  if ( ViewLayoutBehaviorFlags < 0 )
  {
    v11 = 353LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
      (const char *)(unsigned int)ViewLayoutBehaviorFlags);
    return (unsigned int)ViewLayoutBehaviorFlags;
  }
  (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 64) + 24LL))(*(_QWORD *)(a1 + 64), v29);
  v14 = ImmersiveApplicationLayout::ComputeLayoutEnvMaxApps((ImmersiveApplicationLayout *)v29, v13);
  if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 184LL))(*(_QWORD *)(a1 + 64), a2)
    || (v26 & 2) != 0 && v14 != 1 )
  {
    SwitchToApp = AppSwitchOperation::QuerySwitchToApp(a1, a4, 0LL);
    if ( SwitchToApp < 0 )
    {
      v16 = 432LL;
      goto LABEL_10;
    }
    return 0LL;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 80LL))(*(_QWORD *)(a1 + 64), 4LL) )
  {
    SwitchToApp = AppSwitchOperation::QuerySwitchToApp(a1, a4, 0LL);
    if ( SwitchToApp < 0 )
    {
      v16 = 368LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
        (const char *)(unsigned int)SwitchToApp);
      return (unsigned int)SwitchToApp;
    }
    return 0LL;
  }
  v17 = *(__int64 **)(a1 + 64);
  v18 = *v17;
  if ( a3 == 5 )
  {
    ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(__int64 *, __int64, struct IApplicationView *, __int64))(v18 + 248))(
                                v17,
                                a2,
                                a4,
                                1LL);
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v11 = 375LL;
      goto LABEL_3;
    }
    goto LABEL_23;
  }
  if ( !(*(unsigned int (**)(void))(v18 + 48))() )
  {
    SwitchToApp = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, int *))(**(_QWORD **)(a1 + 64) + 152LL))(
                    *(_QWORD *)(a1 + 64),
                    a2,
                    0LL,
                    &v26);
    if ( SwitchToApp < 0 )
    {
      v16 = 409LL;
      goto LABEL_10;
    }
    v21 = *(_QWORD *)(a1 + 64);
    v22 = v26 == 0;
    v28 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    v23 = (*(__int64 (__fastcall **)(__int64, BOOL, GUID *, __int64 *))(*(_QWORD *)v21 + 96LL))(
            v21,
            v22,
            &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
            &v28);
    SwitchToApp = v23;
    if ( v23 >= 0 )
    {
      v27 = 0LL;
      v24 = v28;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v27);
      (*(void (__fastcall **)(__int64, GUID *, CWinRTApplicationView **))(*(_QWORD *)v24 + 48LL))(
        v24,
        &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
        &v27);
      v25 = (*(__int64 (__fastcall **)(_QWORD, CWinRTApplicationView *, struct IApplicationView *, __int64))(**(_QWORD **)(a1 + 64) + 248LL))(
              *(_QWORD *)(a1 + 64),
              v27,
              a4,
              1LL);
      SwitchToApp = v25;
      if ( v25 >= 0 )
      {
        CAppLayoutOperation::_AddAnimationData(a1 + 24, v27, 5LL);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v27);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A5,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
        (const char *)(unsigned int)v25);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v27);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19F,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
        (const char *)(unsigned int)v23);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    return (unsigned int)SwitchToApp;
  }
  if ( v14 <= 1 )
  {
    ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IApplicationView *, __int64))(**(_QWORD **)(a1 + 64) + 248LL))(
                                *(_QWORD *)(a1 + 64),
                                a2,
                                a4,
                                1LL);
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v11 = 396LL;
      goto LABEL_3;
    }
LABEL_23:
    CAppLayoutOperation::_AddAnimationData(a1 + 24, a2, 5LL);
    return 0LL;
  }
  ThreadUILanguage = GetThreadUILanguage();
  v20 = IsBiDiLocale(ThreadUILanguage);
  SwitchToApp = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, bool, __int64, _QWORD))(**(_QWORD **)(a1 + 64) + 232LL))(
                  *(_QWORD *)(a1 + 64),
                  a4,
                  v20 == 0,
                  1LL,
                  0LL);
  if ( SwitchToApp < 0 )
  {
    v16 = 390LL;
    goto LABEL_10;
  }
  *a6 |= 2u;
  return 0LL;
}
