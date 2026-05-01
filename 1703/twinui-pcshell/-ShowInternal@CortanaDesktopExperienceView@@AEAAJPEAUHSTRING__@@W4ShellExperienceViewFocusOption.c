/*
 * XREFs of ?ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x1800C6710
 * Callers:
 *     ?Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1800C3450 (-Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Sh.c)
 *     ?ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z @ 0x1800C3650 (-ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSearchboxTaskbarMode@@YA?AW4SearchboxTaskbarMode@@XZ @ 0x180097CDC (-GetSearchboxTaskbarMode@@YA-AW4SearchboxTaskbarMode@@XZ.c)
 *     ??$CortanaExperienceManager_CortanaTaskbarState@K@CortanaProactiveTelemetry@@SAX$$QEAK@Z @ 0x18009EE50 (--$CortanaExperienceManager_CortanaTaskbarState@K@CortanaProactiveTelemetry@@SAX$$QEAK@Z.c)
 *     ??$CortanaExperienceManager_CortanaTabletMode@AEA_N@CortanaProactiveTelemetry@@SAXAEA_N@Z @ 0x18009EEEC (--$CortanaExperienceManager_CortanaTabletMode@AEA_N@CortanaProactiveTelemetry@@SAXAEA_N@Z.c)
 *     ?NotifyAppWithTransitionType@CortanaDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x1800C7DA4 (-NotifyAppWithTransitionType@CortanaDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@E.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ShowInternal(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rcx
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int SearchboxTaskbarMode; // [rsp+30h] [rbp+8h] BYREF

  SearchboxTaskbarMode = GetSearchboxTaskbarMode();
  CortanaProactiveTelemetry::CortanaExperienceManager_CortanaTaskbarState<unsigned long>(&SearchboxTaskbarMode);
  CortanaProactiveTelemetry::CortanaExperienceManager_CortanaTabletMode<bool &>(a1 + 204);
  v8 = *(_QWORD *)(a1 + 144);
  LOBYTE(SearchboxTaskbarMode) = 0;
  if ( v8
    && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 72LL))(v8, &SearchboxTaskbarMode) >= 0
    && (_BYTE)SearchboxTaskbarMode )
  {
    v9 = CortanaDesktopExperienceView::NotifyAppWithTransitionType(a1, L"NotifyRelaunch", a4, a2);
    v10 = v9;
    if ( v9 >= 0 )
      v10 = 0;
    else
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x6D5,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v9);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x701,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v10);
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 144) + 88LL))(
          *(_QWORD *)(a1 + 144),
          a2,
          a3);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x704,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v11);
  return 0LL;
}
