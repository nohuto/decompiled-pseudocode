/*
 * XREFs of ?ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18006A07C
 * Callers:
 *     ?OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x180069600 (-OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowSta.c)
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18006ABC8 (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ?OnViewShown@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800686A0 (-OnViewShown@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x180069954 (-UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?ShowView@DesktopSingleViewShellExperiencePersonality@@UEAAJXZ @ 0x18006DEC0 (-ShowView@DesktopSingleViewShellExperiencePersonality@@UEAAJXZ.c)
 *     ?BringToForeground@DesktopSingleViewShellExperiencePersonality@@UEAAJXZ @ 0x18006E1E0 (-BringToForeground@DesktopSingleViewShellExperiencePersonality@@UEAAJXZ.c)
 *     ?OnViewShown@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180077630 (-OnViewShown@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18007B3C0 (-OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18007B480 (-OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x180091368 (-NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewMa.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::ShowView(__int64 a1, char a2)
{
  int v4; // ebp
  int v5; // eax
  int v6; // edi
  DesktopSingleViewShellExperiencePersonality *v7; // rcx
  __int64 (__fastcall *v8)(DesktopSingleViewShellExperiencePersonality *__hidden); // rax
  int v9; // eax
  CStartExperienceManager *v10; // rcx
  __int64 (__fastcall *v11)(TwinUI::Cortana::ShellExperienceView *, struct CSingleViewShellExperience *); // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // edi
  CActionCenterExperienceManager *v17; // rcx
  __int64 (__fastcall *v18)(CActionCenterExperienceManager *__hidden, struct CSingleViewShellExperience *); // rax
  int v19; // eax
  DesktopSingleViewShellExperiencePersonality *v20; // rcx
  __int64 (*v21)(void); // rax
  int v22; // eax
  __int64 v23; // rdx
  int v24; // eax
  int v25; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v25 = -2;
  v4 = a2 & 2;
  if ( (a2 & 2) == 0 )
  {
    v17 = *(CActionCenterExperienceManager **)(a1 + 88);
    v18 = *(__int64 (__fastcall **)(CActionCenterExperienceManager *__hidden, struct CSingleViewShellExperience *))(*(_QWORD *)v17 + 32LL);
    v19 = v18 == CActionCenterExperienceManager::OnViewUncloaking
        ? CActionCenterExperienceManager::OnViewUncloaking(v17, (struct CSingleViewShellExperience *)a1)
        : v18(v17, (struct CSingleViewShellExperience *)a1);
    v15 = v19;
    if ( v19 < 0 )
    {
      v23 = 847LL;
LABEL_37:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v23,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)v15,
        v25);
      goto LABEL_15;
    }
  }
  *(_DWORD *)(a1 + 40) = 2;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  if ( *(_DWORD *)(a1 + 72) )
  {
    *(_DWORD *)(a1 + 72) = 4;
    goto LABEL_4;
  }
  v5 = ShellExperienceHelpers::NavigationLevelOverrideHelper::NavigateView(a1 + 72, *(_QWORD *)(a1 + 24), 4LL);
  v6 = v5;
  if ( v5 >= 0 )
  {
LABEL_4:
    v6 = 0;
    goto LABEL_5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7E,
    (unsigned int)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
    (const char *)(unsigned int)v5,
    -2);
LABEL_5:
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x356,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v6,
      v25);
  if ( (a2 & 1) != 0
    || ((v7 = *(DesktopSingleViewShellExperiencePersonality **)(a1 + 80),
         v8 = *(__int64 (__fastcall **)(DesktopSingleViewShellExperiencePersonality *__hidden))(*(_QWORD *)v7 + 72LL),
         v8 != DesktopSingleViewShellExperiencePersonality::BringToForeground)
      ? (v9 = ((__int64 (*)(void))v8)())
      : (v9 = DesktopSingleViewShellExperiencePersonality::BringToForeground(v7)),
        v9 >= 0
     || (wil::details::in1diag3::_Log_Hr(
           retaddr,
           (void *)0x359,
           (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
           (const char *)(unsigned int)v9,
           v25),
         (a2 & 4) == 0)) )
  {
    if ( !v4 )
    {
      v20 = *(DesktopSingleViewShellExperiencePersonality **)(a1 + 80);
      v21 = *(__int64 (**)(void))(*(_QWORD *)v20 + 40LL);
      if ( (char *)v21 == (char *)DesktopSingleViewShellExperiencePersonality::ShowView )
        v22 = DesktopSingleViewShellExperiencePersonality::ShowView(v20);
      else
        v22 = v21();
      v15 = v22;
      if ( v22 < 0 )
      {
        v23 = 869LL;
        goto LABEL_37;
      }
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 40LL))(*(_QWORD *)(a1 + 88), a1);
    }
    v10 = *(CStartExperienceManager **)(a1 + 88);
    v11 = *(__int64 (__fastcall **)(TwinUI::Cortana::ShellExperienceView *, struct CSingleViewShellExperience *))(*(_QWORD *)v10 + 56LL);
    if ( v11 == CStartExperienceManager::OnViewShown )
    {
      CStartExperienceManager::OnViewShown(v10, (struct CSingleViewShellExperience *)a1);
    }
    else if ( v11 == TwinUI::Cortana::ShellExperienceView::OnViewShown )
    {
      TwinUI::Cortana::ShellExperienceView::OnViewShown(v10, (struct CSingleViewShellExperience *)a1);
    }
    else if ( v11 == CActionCenterExperienceManager::OnViewShown )
    {
      CActionCenterExperienceManager::OnViewShown(v10, (struct CSingleViewShellExperience *)a1);
    }
    else
    {
      v11(v10, (struct CSingleViewShellExperience *)a1);
    }
  }
  else
  {
    v24 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 72LL))(*(_QWORD *)(a1 + 88), a1);
    if ( v24 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x35C,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v24,
        v25);
  }
  v15 = 0;
LABEL_15:
  CSingleViewShellExperience::UnboostDiskIo((CSingleViewShellExperience *)a1, v12, v13, v14, v25);
  return v15;
}
