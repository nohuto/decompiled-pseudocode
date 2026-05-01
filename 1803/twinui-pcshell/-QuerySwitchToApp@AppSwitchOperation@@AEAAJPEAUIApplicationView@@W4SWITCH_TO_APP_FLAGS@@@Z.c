/*
 * XREFs of ?QuerySwitchToApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x1802D5748
 * Callers:
 *     ?QueryAppToAppSwitch@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01PEAW4FinalizeLayoutFlags@@@Z @ 0x1802D5274 (-QueryAppToAppSwitch@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREF.c)
 *     ?ReverseAppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4REVERSE_APP_SWITCH_FLAGS@@@Z @ 0x1802D5D50 (-ReverseAppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4REVERSE_APP_SWITCH_FLAGS.c)
 *     ?SwitchToApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x1802D5E50 (-SwitchToApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18007DE0C (-IsBiDiLocale@@YAHK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x180284024 (-GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 *     ?ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x180305064 (-ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x18031117C (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x180311788 (-_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE.c)
 */

__int64 __fastcall AppSwitchOperation::QuerySwitchToApp(__int64 a1, struct IApplicationView *a2, char a3)
{
  LANGID ThreadUILanguage; // ax
  bool v7; // r15
  int ViewLayoutBehaviorFlags; // ebx
  __int64 v9; // rdx
  int v11; // eax
  const struct LAYOUT_ENVIRONMENT_DETAILS *v12; // rdx
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 *v18; // rcx
  __int64 *v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  bool v22; // zf
  __int64 (__fastcall *v23)(__int64, __int64); // rax
  int v24; // eax
  __int64 *v25; // rcx
  __int64 v26; // r10
  int v27; // eax
  __int64 v28; // rbx
  int v29; // eax
  __int64 v30; // rbx
  int v31; // eax
  __int64 v32; // rdx
  int v33; // eax
  __int64 *v34; // rcx
  __int64 v35; // r10
  __int64 v36; // rbx
  int v37; // eax
  __int64 v38; // rdx
  int v39[2]; // [rsp+30h] [rbp-50h] BYREF
  int v40[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v41; // [rsp+40h] [rbp-40h]
  _BYTE v42[40]; // [rsp+48h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  ThreadUILanguage = GetThreadUILanguage();
  v7 = (unsigned int)IsBiDiLocale(ThreadUILanguage) != 0;
  ViewLayoutBehaviorFlags = GetViewLayoutBehaviorFlags(a2, (enum APP_LAYOUT_ITEM_BEHAVIOR_FLAGS *)v40);
  if ( ViewLayoutBehaviorFlags < 0 )
  {
    v9 = 224LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
      (const char *)(unsigned int)ViewLayoutBehaviorFlags);
    return (unsigned int)ViewLayoutBehaviorFlags;
  }
  (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 64) + 24LL))(*(_QWORD *)(a1 + 64), v42);
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 88LL))(*(_QWORD *)(a1 + 64), 2LL);
  if ( (v40[0] & 2) != 0 )
  {
    if ( v11 )
    {
      *(_QWORD *)v39 = 0LL;
      v13 = *(_QWORD *)(a1 + 64);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v39);
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v13 + 112LL))(
              v13,
              0LL,
              2LL,
              &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
              v39);
      ViewLayoutBehaviorFlags = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xED,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
          (const char *)(unsigned int)v14);
LABEL_14:
        v18 = (__int64 *)v39;
LABEL_15:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
        return (unsigned int)ViewLayoutBehaviorFlags;
      }
      *(_QWORD *)v40 = 0LL;
      v15 = *(_QWORD *)v39;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)v40);
      v16 = (*(__int64 (__fastcall **)(__int64, GUID *, int *))(*(_QWORD *)v15 + 48LL))(
              v15,
              &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
              v40);
      ViewLayoutBehaviorFlags = v16;
      if ( v16 < 0 )
      {
        v17 = 240LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
          (const char *)(unsigned int)v16);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)v40);
        goto LABEL_14;
      }
      v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IApplicationView *, __int64))(**(_QWORD **)(a1 + 64)
                                                                                          + 248LL))(
              *(_QWORD *)(a1 + 64),
              *(_QWORD *)v40,
              a2,
              2LL);
      ViewLayoutBehaviorFlags = v16;
      if ( v16 < 0 )
      {
        v17 = 242LL;
        goto LABEL_13;
      }
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)v40);
      v19 = (__int64 *)v39;
      goto LABEL_17;
    }
    if ( ImmersiveApplicationLayout::ComputeLayoutEnvMaxApps((ImmersiveApplicationLayout *)v42, v12) == 1 )
    {
      ViewLayoutBehaviorFlags = CAppLayoutOperation::_MakeViewFullScreen(a1 + 24, a2, 5LL);
      if ( ViewLayoutBehaviorFlags < 0 )
      {
        v9 = 247LL;
        goto LABEL_3;
      }
    }
    else if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 80LL))(
                *(_QWORD *)(a1 + 64),
                1LL) != 2 )
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 80LL))(*(_QWORD *)(a1 + 64), 1LL);
      v21 = *(_QWORD *)(a1 + 64);
      v22 = v20 == 1;
      v23 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 80LL);
      if ( v22 )
      {
        v24 = v23(v21, 4LL);
        v25 = *(__int64 **)(a1 + 64);
        v26 = *v25;
        if ( v24 == 1 )
        {
          ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(__int64 *, _QWORD, struct IApplicationView *, __int64))(v26 + 248))(
                                      v25,
                                      0LL,
                                      a2,
                                      2LL);
          if ( ViewLayoutBehaviorFlags < 0 )
          {
            v9 = 261LL;
            goto LABEL_3;
          }
        }
        else
        {
          ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(__int64 *, struct IApplicationView *, bool, __int64, _QWORD))(v26 + 232))(
                                      v25,
                                      a2,
                                      !v7,
                                      2LL,
                                      0LL);
          if ( ViewLayoutBehaviorFlags < 0 )
          {
            v9 = 265LL;
            goto LABEL_3;
          }
        }
      }
      else
      {
        if ( !(unsigned int)v23(v21, 4LL) )
        {
          ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 64)
                                                                                              + 240LL))(
                                      *(_QWORD *)(a1 + 64),
                                      0LL,
                                      0LL,
                                      0LL);
          if ( ViewLayoutBehaviorFlags < 0 )
          {
            v9 = 275LL;
            goto LABEL_3;
          }
        }
        ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, bool, __int64, _QWORD))(**(_QWORD **)(a1 + 64) + 232LL))(
                                    *(_QWORD *)(a1 + 64),
                                    a2,
                                    !v7,
                                    2LL,
                                    0LL);
        if ( ViewLayoutBehaviorFlags < 0 )
        {
          v9 = 277LL;
          goto LABEL_3;
        }
      }
      ViewLayoutBehaviorFlags = CAppLayoutOperation::_FinalizeLayout(a1 + 24, 9LL);
      if ( ViewLayoutBehaviorFlags < 0 )
      {
        v9 = 284LL;
        goto LABEL_3;
      }
    }
  }
  else if ( v11 )
  {
    v27 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 80LL))(*(_QWORD *)(a1 + 64), 1LL);
    v28 = *(_QWORD *)(a1 + 64);
    if ( v27 == 2 )
    {
      *(_QWORD *)v40 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v40);
      v29 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v28 + 112LL))(
              v28,
              0LL,
              1LL,
              &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
              v40);
      ViewLayoutBehaviorFlags = v29;
      if ( v29 >= 0 )
      {
        *(_QWORD *)v39 = 0LL;
        v30 = *(_QWORD *)v40;
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)v39);
        v31 = (*(__int64 (__fastcall **)(__int64, GUID *, int *))(*(_QWORD *)v30 + 48LL))(
                v30,
                &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
                v39);
        ViewLayoutBehaviorFlags = v31;
        if ( v31 >= 0 )
        {
          v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IApplicationView *, __int64))(**(_QWORD **)(a1 + 64)
                                                                                              + 248LL))(
                  *(_QWORD *)(a1 + 64),
                  *(_QWORD *)v39,
                  a2,
                  1LL);
          ViewLayoutBehaviorFlags = v31;
          if ( v31 >= 0 )
          {
            Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)v39);
            v19 = (__int64 *)v40;
LABEL_17:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v19);
            return 0LL;
          }
          v32 = 299LL;
        }
        else
        {
          v32 = 298LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v32,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
          (const char *)(unsigned int)v31);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)v39);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x127,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
          (const char *)(unsigned int)v29);
      }
      v18 = (__int64 *)v40;
      goto LABEL_15;
    }
    v33 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v28 + 80LL))(*(_QWORD *)(a1 + 64), 4LL);
    v34 = *(__int64 **)(a1 + 64);
    v35 = *v34;
    if ( v33 != 1 )
    {
      ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(__int64 *, struct IApplicationView *, bool, __int64, _QWORD))(v35 + 232))(
                                  v34,
                                  a2,
                                  v7,
                                  1LL,
                                  0LL);
      if ( ViewLayoutBehaviorFlags < 0 )
      {
        v9 = 309LL;
        goto LABEL_3;
      }
      *(_QWORD *)v39 = 0LL;
      v36 = *(_QWORD *)(a1 + 64);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v39);
      v37 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v36 + 112LL))(
              v36,
              0LL,
              2LL,
              &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
              v39);
      ViewLayoutBehaviorFlags = v37;
      if ( v37 >= 0 )
      {
        *(_QWORD *)v40 = 0LL;
        v41 = 0LL;
        (*(void (__fastcall **)(_QWORD, _QWORD, int *))(**(_QWORD **)v39 + 104LL))(*(_QWORD *)v39, 0LL, v40);
        v37 = CAppLayoutOperation::_FinalizeLayout(a1 + 24, 9LL);
        ViewLayoutBehaviorFlags = v37;
        if ( v37 >= 0 )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v39);
          return 0LL;
        }
        v38 = 319LL;
      }
      else
      {
        v38 = 313LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v38,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
        (const char *)(unsigned int)v37);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v39);
      return (unsigned int)ViewLayoutBehaviorFlags;
    }
    ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(__int64 *, _QWORD, struct IApplicationView *, __int64))(v35 + 248))(
                                v34,
                                0LL,
                                a2,
                                1LL);
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v9 = 304LL;
      goto LABEL_3;
    }
  }
  else if ( (a3 & 4) != 0
         || (*(int (__fastcall **)(_QWORD, _QWORD, int *))(**(_QWORD **)(a1 + 64) + 168LL))(
              *(_QWORD *)(a1 + 64),
              0LL,
              v40) < 0 )
  {
    ViewLayoutBehaviorFlags = CAppLayoutOperation::_MakeViewFullScreen(a1 + 24, a2, 5LL);
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v9 = 329LL;
      goto LABEL_3;
    }
  }
  else
  {
    ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IApplicationView *, __int64))(**(_QWORD **)(a1 + 64) + 248LL))(
                                *(_QWORD *)(a1 + 64),
                                0LL,
                                a2,
                                1LL);
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v9 = 335LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
