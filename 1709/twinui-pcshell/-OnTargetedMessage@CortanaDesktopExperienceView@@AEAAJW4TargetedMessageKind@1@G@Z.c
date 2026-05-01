/*
 * XREFs of ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1800D6C5C
 * Callers:
 *     ?OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z @ 0x1800D56B0 (-OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CortanaHelpers::AllowCortanaAttractModeAboveLock @ 0x1800D3D6C (CortanaHelpers--AllowCortanaAttractModeAboveLock.c)
 *     CortanaHelpers::IsCortanaInAmbientMode @ 0x1800D3DC4 (CortanaHelpers--IsCortanaInAmbientMode.c)
 *     CortanaHelpers::SetIsAssignedAccess @ 0x1800D3E38 (CortanaHelpers--SetIsAssignedAccess.c)
 *     CortanaHelpers::SetWindowsHelloActive @ 0x1800D3EA4 (CortanaHelpers--SetWindowsHelloActive.c)
 *     CortanaHelpers::ResetTransientAboveLockCachedValues @ 0x1800D3F10 (CortanaHelpers--ResetTransientAboveLockCachedValues.c)
 *     ?NotifyShellModeChanged@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800DA3B4 (-NotifyShellModeChanged@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800DA718 (-DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?GetViewWrapper@CortanaDesktopExperienceView@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x1800DA7E0 (-GetViewWrapper@CortanaDesktopExperienceView@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerInterop@S.c)
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800DA8A0 (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     ?InternalRegisterWithLightDismiss@SingleViewLightDismissHelper@@AEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801DCCD4 (-InternalRegisterWithLightDismiss@SingleViewLightDismissHelper@@AEAAJW4LIGHT_DISMISS_FLAGS@@PEAU.c)
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x1801DCF38 (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     ?LaunchCortanaApp@@YAJPEBGW4CortanaAppLaunchType@@_N@Z @ 0x1801DE758 (-LaunchCortanaApp@@YAJPEBGW4CortanaAppLaunchType@@_N@Z.c)
 *     IsUserAssignedAccessSingleApp @ 0x1801DEA74 (IsUserAssignedAccessSingleApp.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::OnTargetedMessage(__int64 a1, int a2, __int16 a3)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  int v15; // eax
  unsigned int v16; // esi
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // edi
  int v20; // eax
  int v21; // eax
  __int64 v22; // rdi
  _QWORD *ViewWrapper; // rax
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v28; // [rsp+58h] [rbp+20h] BYREF

  if ( !a2 )
  {
    *(_BYTE *)(a1 + 206) = a3 != 0;
    CortanaDesktopExperienceView::NotifyShellModeChanged((CortanaDesktopExperienceView *)a1);
    return 0LL;
  }
  v5 = a2 - 1;
  if ( !v5 )
  {
    CortanaHelpers::ResetTransientAboveLockCachedValues();
    v26 = IsUserAssignedAccessSingleApp(-4LL);
    CortanaHelpers::SetIsAssignedAccess(v26 != 0);
    return 0LL;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( a3 )
    {
      v22 = a1 + 248;
      if ( !*(_QWORD *)(a1 + 248) || !*(_DWORD *)(a1 + 256) )
      {
        ViewWrapper = (_QWORD *)CortanaDesktopExperienceView::GetViewWrapper(a1, &v28);
        v24 = SingleViewLightDismissHelper::InternalRegisterWithLightDismiss(
                v22,
                1795LL,
                (a1 + 32) & -(__int64)(a1 != 0),
                *ViewWrapper);
        if ( v24 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3A,
            (__int64)"shell\\twinui\\experiencemanagers\\corelib\\lightdismisshelper.cpp",
            (const char *)(unsigned int)v24);
        v25 = v28;
        if ( v28 )
        {
          v28 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        }
      }
    }
    else
    {
      SingleViewLightDismissHelper::UnregisterWithLightDismiss((SingleViewLightDismissHelper *)(a1 + 248));
    }
    return 0LL;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( !*(_BYTE *)(a1 + 207) )
    {
      v15 = CortanaDesktopExperienceView::NotifyView(
              (CortanaDesktopExperienceView *)a1,
              L"NotifyLockStatusChanged",
              0LL);
      v16 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x4E9,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
          (const char *)(unsigned int)v15);
        return v16;
      }
    }
    *(_BYTE *)(a1 + 208) = a3 != 0;
    if ( a3 && (*(_BYTE *)(a1 + 203) = 0, CortanaHelpers::AllowCortanaAttractModeAboveLock()) )
    {
      if ( !*(_BYTE *)(a1 + 197) )
      {
        v18 = LaunchCortanaApp(v17);
        v19 = v18;
        if ( v18 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x505,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)(unsigned int)v18);
          return v19;
        }
      }
    }
    else
    {
      if ( *(_BYTE *)(a1 + 208) )
      {
        if ( *(_BYTE *)(a1 + 197) )
          goto LABEL_41;
      }
      else if ( *(_DWORD *)(a1 + 132) != 4 )
      {
        goto LABEL_41;
      }
      v20 = CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)a1);
      if ( v20 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x510,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
          (const char *)(unsigned int)v20);
    }
LABEL_41:
    if ( *(_BYTE *)(a1 + 207) )
    {
      if ( !*(_BYTE *)(a1 + 208) )
      {
        CortanaHelpers::SetWindowsHelloActive();
LABEL_49:
        *(_BYTE *)(a1 + 197) = 0;
        return 0LL;
      }
    }
    else if ( !*(_BYTE *)(a1 + 208) )
    {
      CortanaHelpers::ResetTransientAboveLockCachedValues();
      v21 = IsUserAssignedAccessSingleApp(-4LL);
      CortanaHelpers::SetIsAssignedAccess(v21 != 0);
      if ( *(_BYTE *)(a1 + 209) )
      {
        *(_BYTE *)(a1 + 209) = 0;
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 96) + 64LL))(*(_QWORD *)(a1 + 96));
      }
      goto LABEL_49;
    }
    if ( !*(_BYTE *)(a1 + 209) )
    {
      *(_BYTE *)(a1 + 209) = 1;
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 96) + 56LL))(*(_QWORD *)(a1 + 96));
    }
    goto LABEL_49;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    if ( v8 != 1 )
    {
      v9 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x56C,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)0x8000FFFFLL);
      return v9;
    }
    if ( !a3 )
      return 0LL;
    if ( !*(_BYTE *)(a1 + 208) )
      return 0LL;
    if ( !*(_BYTE *)(a1 + 202) )
      return 0LL;
    if ( CortanaHelpers::IsCortanaInAmbientMode() )
      return 0LL;
    v10 = CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)a1);
    if ( v10 >= 0 )
      return 0LL;
    v11 = 1382LL;
    goto LABEL_14;
  }
  if ( !a3 )
  {
    if ( CortanaHelpers::AllowCortanaAttractModeAboveLock() )
    {
      if ( *(_BYTE *)(a1 + 208) )
      {
        if ( !*(_BYTE *)(a1 + 202) )
        {
          v13 = LaunchCortanaApp(v12);
          v9 = v13;
          if ( v13 < 0 )
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x556,
              (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
              (const char *)(unsigned int)v13);
            return v9;
          }
        }
      }
    }
    return 0LL;
  }
  if ( *(_BYTE *)(a1 + 208) )
  {
    if ( *(_BYTE *)(a1 + 202) )
    {
      if ( !CortanaHelpers::IsCortanaInAmbientMode() )
      {
        v10 = CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)a1);
        if ( v10 < 0 )
        {
          v11 = 1352LL;
LABEL_14:
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)v11,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)(unsigned int)v10);
        }
      }
    }
  }
  return 0LL;
}
