/*
 * XREFs of ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180186948
 * Callers:
 *     ?OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z @ 0x180186680 (-OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewWrapper@CortanaDesktopExperienceView@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x180061AA8 (-GetViewWrapper@CortanaDesktopExperienceView@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerInterop@S.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x180092CB4 (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z @ 0x180149878 (-_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z.c)
 *     CortanaHelpers::AllowCortanaAttractModeAboveLock @ 0x18018502C (CortanaHelpers--AllowCortanaAttractModeAboveLock.c)
 *     ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180185700 (-DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     CortanaHelpers::IsCortanaInAmbientMode @ 0x180185F10 (CortanaHelpers--IsCortanaInAmbientMode.c)
 *     ?NotifyShellModeChanged@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18018618C (-NotifyShellModeChanged@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     CortanaHelpers::SetIsAssignedAccess @ 0x1801873E8 (CortanaHelpers--SetIsAssignedAccess.c)
 *     CortanaHelpers::SetWindowsHelloActive @ 0x1801874B8 (CortanaHelpers--SetWindowsHelloActive.c)
 *     ?RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180309580 (-RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDi.c)
 *     ?LaunchCortanaApp@@YAJPEBGW4CortanaAppLaunchType@@_N@Z @ 0x18030ABA4 (-LaunchCortanaApp@@YAJPEBGW4CortanaAppLaunchType@@_N@Z.c)
 *     IsUserAssignedAccessSingleApp @ 0x18030AE84 (IsUserAssignedAccessSingleApp.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::OnTargetedMessage(__int64 a1, int a2, __int16 a3)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  int v13; // eax
  unsigned int v14; // edi
  int v15; // eax
  int v16; // eax
  bool v17; // sf
  __int64 v18; // rcx
  void (*v19)(void); // rax
  _QWORD *v20; // rdi
  __int64 *ViewWrapper; // rax
  int v22; // eax
  bool v23; // sf
  __int64 v24; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v26; // [rsp+58h] [rbp+10h] BYREF
  __int64 v27; // [rsp+68h] [rbp+20h] BYREF

  if ( !a2 )
  {
    *(_BYTE *)(a1 + 205) = a3 != 0;
    CortanaDesktopExperienceView::NotifyShellModeChanged((CortanaDesktopExperienceView *)a1);
    return 0LL;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v26 = 0;
    v22 = _RegSetKeyValue(
            HKEY_CURRENT_USER,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
            L"AnyAboveLockAppsActive",
            4u,
            (BYTE *)&v26,
            4u);
    v23 = v22 < 0;
    if ( v22 > 0 )
    {
      v22 = (unsigned __int16)v22 | 0x80070000;
      v23 = v22 < 0;
    }
    if ( v23 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        140LL,
        (__int64)"internal\\shell\\private\\inc\\cortanahelpers.h",
        (const char *)(unsigned int)v22);
    CortanaHelpers::SetWindowsHelloActive();
    LOBYTE(v24) = (unsigned int)IsUserAssignedAccessSingleApp(-4LL) != 0;
    CortanaHelpers::SetIsAssignedAccess(v24);
    return 0LL;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v20 = (_QWORD *)(a1 + 248);
    if ( a3 )
    {
      if ( !*v20 || !*(_DWORD *)(a1 + 256) )
      {
        ViewWrapper = CortanaDesktopExperienceView::GetViewWrapper(a1, &v27);
        SingleViewLightDismissHelper::RegisterWithLightDismiss(
          v20,
          1795LL,
          (a1 + 32) & -(__int64)(a1 != 0),
          *ViewWrapper);
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v27);
      }
    }
    else
    {
      SingleViewLightDismissHelper::UnregisterWithLightDismiss((SingleViewLightDismissHelper *)(a1 + 248));
    }
    return 0LL;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    *(_BYTE *)(a1 + 207) = a3 != 0;
    if ( !a3 )
      goto LABEL_68;
    *(_BYTE *)(a1 + 203) = 0;
    if ( *(_BYTE *)(a1 + 206) )
      *(_BYTE *)(a1 + 210) = 1;
    if ( CortanaHelpers::AllowCortanaAttractModeAboveLock() )
    {
      if ( !*(_BYTE *)(a1 + 197) )
      {
        v13 = LaunchCortanaApp();
        v14 = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x530,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)(unsigned int)v13);
          return v14;
        }
      }
    }
    else
    {
LABEL_68:
      if ( *(_BYTE *)(a1 + 207) )
      {
        if ( *(_BYTE *)(a1 + 197) )
          goto LABEL_40;
      }
      else if ( *(_DWORD *)(a1 + 132) != 4 )
      {
        goto LABEL_40;
      }
      v15 = CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)a1);
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          1339LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
          (const char *)(unsigned int)v15);
    }
LABEL_40:
    if ( *(_BYTE *)(a1 + 206) )
    {
      if ( !*(_BYTE *)(a1 + 207) )
      {
        CortanaHelpers::SetWindowsHelloActive();
        goto LABEL_53;
      }
    }
    else if ( !*(_BYTE *)(a1 + 207) )
    {
      v26 = 0;
      v16 = _RegSetKeyValue(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
              L"AnyAboveLockAppsActive",
              4u,
              (BYTE *)&v26,
              4u);
      v17 = v16 < 0;
      if ( v16 > 0 )
      {
        v16 = (unsigned __int16)v16 | 0x80070000;
        v17 = v16 < 0;
      }
      if ( v17 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          140LL,
          (__int64)"internal\\shell\\private\\inc\\cortanahelpers.h",
          (const char *)(unsigned int)v16);
      CortanaHelpers::SetWindowsHelloActive();
      LOBYTE(v18) = (unsigned int)IsUserAssignedAccessSingleApp(-4LL) != 0;
      CortanaHelpers::SetIsAssignedAccess(v18);
      if ( !*(_BYTE *)(a1 + 208) )
        goto LABEL_53;
      *(_BYTE *)(a1 + 208) = 0;
      v19 = *(void (**)(void))(**(_QWORD **)(a1 + 96) + 64LL);
      goto LABEL_52;
    }
    if ( !*(_BYTE *)(a1 + 208) )
    {
      *(_BYTE *)(a1 + 208) = 1;
      v19 = *(void (**)(void))(**(_QWORD **)(a1 + 96) + 56LL);
LABEL_52:
      v19();
    }
LABEL_53:
    *(_BYTE *)(a1 + 197) = 0;
    return 0LL;
  }
  v7 = (unsigned int)(v6 - 1);
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 != 1 )
    {
      v8 = -2147418113;
      v9 = 1431LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v8);
      return (unsigned int)v8;
    }
    if ( !a3 )
      return 0LL;
    if ( !*(_BYTE *)(a1 + 207) )
      return 0LL;
    if ( !*(_BYTE *)(a1 + 202) )
      return 0LL;
    if ( CortanaHelpers::IsCortanaInAmbientMode(a1, v7) )
      return 0LL;
    v10 = CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)a1);
    if ( v10 >= 0 )
      return 0LL;
    v11 = 1425LL;
    goto LABEL_14;
  }
  if ( !a3 )
  {
    if ( CortanaHelpers::AllowCortanaAttractModeAboveLock() )
    {
      if ( *(_BYTE *)(a1 + 207) )
      {
        if ( !*(_BYTE *)(a1 + 202) )
        {
          v8 = LaunchCortanaApp();
          if ( v8 < 0 )
          {
            v9 = 1409LL;
            goto LABEL_26;
          }
        }
      }
    }
    return 0LL;
  }
  if ( *(_BYTE *)(a1 + 207) )
  {
    if ( *(_BYTE *)(a1 + 202) )
    {
      if ( !CortanaHelpers::IsCortanaInAmbientMode(a1, v7) )
      {
        v10 = CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)a1);
        if ( v10 < 0 )
        {
          v11 = 1395LL;
LABEL_14:
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            v11,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)(unsigned int)v10);
        }
      }
    }
  }
  return 0LL;
}
