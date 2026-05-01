/*
 * XREFs of ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1800C4DE4
 * Callers:
 *     ?OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z @ 0x1800C3890 (-OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CortanaHelpers::AllowCortanaAttractModeAboveLock @ 0x1800C222C (CortanaHelpers--AllowCortanaAttractModeAboveLock.c)
 *     CortanaHelpers::IsCortanaInAmbientMode @ 0x1800C2284 (CortanaHelpers--IsCortanaInAmbientMode.c)
 *     CortanaHelpers::SetIsAssignedAccess @ 0x1800C22FC (CortanaHelpers--SetIsAssignedAccess.c)
 *     CortanaHelpers::SetWindowsHelloActive @ 0x1800C2368 (CortanaHelpers--SetWindowsHelloActive.c)
 *     CortanaHelpers::ResetTransientAboveLockCachedValues @ 0x1800C23D4 (CortanaHelpers--ResetTransientAboveLockCachedValues.c)
 *     ?NotifyShellModeChanged@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800C7F78 (-NotifyShellModeChanged@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800C82DC (-DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?GetViewWrapper@CortanaDesktopExperienceView@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x1800C83A8 (-GetViewWrapper@CortanaDesktopExperienceView@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerInterop@S.c)
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800C8468 (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     ?InternalRegisterWithLightDismiss@SingleViewLightDismissHelper@@AEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18018D9A4 (-InternalRegisterWithLightDismiss@SingleViewLightDismissHelper@@AEAAJW4LIGHT_DISMISS_FLAGS@@PEAU.c)
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x18018DC08 (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     ?LaunchCortanaApp@@YAJPEBGW4CortanaAppLaunchType@@_N@Z @ 0x180190D88 (-LaunchCortanaApp@@YAJPEBGW4CortanaAppLaunchType@@_N@Z.c)
 *     _anonymous_namespace_::queryLockdownMode @ 0x1801912DC (_anonymous_namespace_--queryLockdownMode.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::OnTargetedMessage(__int64 a1, int a2, __int16 a3)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  __int64 v8; // rdx
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
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rdi
  _QWORD *ViewWrapper; // rax
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx
  int LockdownMode; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v30; // [rsp+58h] [rbp+20h] BYREF

  if ( !a2 )
  {
    *(_BYTE *)(a1 + 204) = a3 != 0;
    CortanaDesktopExperienceView::NotifyShellModeChanged((CortanaDesktopExperienceView *)a1);
    return 0LL;
  }
  v5 = a2 - 1;
  if ( !v5 )
  {
    CortanaHelpers::ResetTransientAboveLockCachedValues();
    LockdownMode = anonymous_namespace_::queryLockdownMode(v27);
    CortanaHelpers::SetIsAssignedAccess(LockdownMode == 2);
    return 0LL;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( a3 )
    {
      v23 = a1 + 248;
      if ( !*(_QWORD *)(a1 + 248) || !*(_DWORD *)(a1 + 256) )
      {
        ViewWrapper = (_QWORD *)CortanaDesktopExperienceView::GetViewWrapper(a1, &v30);
        v25 = SingleViewLightDismissHelper::InternalRegisterWithLightDismiss(
                v23,
                1795LL,
                (a1 + 32) & -(__int64)(a1 != 0),
                *ViewWrapper);
        if ( v25 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3A,
            (__int64)"shell\\twinui\\experiencemanagers\\corelib\\lightdismisshelper.cpp",
            (const char *)(unsigned int)v25);
        v26 = v30;
        if ( v30 )
        {
          v30 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
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
    if ( !*(_BYTE *)(a1 + 205) )
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
          (void *)0x4D5,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
          (const char *)(unsigned int)v15);
        return v16;
      }
    }
    *(_BYTE *)(a1 + 206) = a3 != 0;
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
            (void *)0x4F1,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)(unsigned int)v18);
          return v19;
        }
      }
    }
    else
    {
      if ( *(_BYTE *)(a1 + 206) )
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
          (void *)0x4FC,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
          (const char *)(unsigned int)v20);
    }
LABEL_41:
    if ( *(_BYTE *)(a1 + 205) )
    {
      if ( !*(_BYTE *)(a1 + 206) )
      {
        CortanaHelpers::SetWindowsHelloActive();
LABEL_49:
        *(_BYTE *)(a1 + 197) = 0;
        return 0LL;
      }
    }
    else if ( !*(_BYTE *)(a1 + 206) )
    {
      CortanaHelpers::ResetTransientAboveLockCachedValues();
      v22 = anonymous_namespace_::queryLockdownMode(v21);
      CortanaHelpers::SetIsAssignedAccess(v22 == 2);
      if ( *(_BYTE *)(a1 + 207) )
      {
        *(_BYTE *)(a1 + 207) = 0;
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 96) + 64LL))(*(_QWORD *)(a1 + 96));
      }
      goto LABEL_49;
    }
    if ( !*(_BYTE *)(a1 + 207) )
    {
      *(_BYTE *)(a1 + 207) = 1;
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 96) + 56LL))(*(_QWORD *)(a1 + 96));
    }
    goto LABEL_49;
  }
  v8 = (unsigned int)(v7 - 1);
  if ( (_DWORD)v8 )
  {
    if ( (_DWORD)v8 != 1 )
    {
      v9 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x558,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)0x8000FFFFLL);
      return v9;
    }
    if ( !a3 )
      return 0LL;
    if ( !*(_BYTE *)(a1 + 206) )
      return 0LL;
    if ( !*(_BYTE *)(a1 + 202) )
      return 0LL;
    if ( CortanaHelpers::IsCortanaInAmbientMode(a1, v8) )
      return 0LL;
    v10 = CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)a1);
    if ( v10 >= 0 )
      return 0LL;
    v11 = 1362LL;
    goto LABEL_14;
  }
  if ( !a3 )
  {
    if ( CortanaHelpers::AllowCortanaAttractModeAboveLock() )
    {
      if ( *(_BYTE *)(a1 + 206) )
      {
        if ( !*(_BYTE *)(a1 + 202) )
        {
          v13 = LaunchCortanaApp(v12);
          v9 = v13;
          if ( v13 < 0 )
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x542,
              (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
              (const char *)(unsigned int)v13);
            return v9;
          }
        }
      }
    }
    return 0LL;
  }
  if ( *(_BYTE *)(a1 + 206) )
  {
    if ( *(_BYTE *)(a1 + 202) )
    {
      if ( !CortanaHelpers::IsCortanaInAmbientMode(a1, v8) )
      {
        v10 = CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)a1);
        if ( v10 < 0 )
        {
          v11 = 1332LL;
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
