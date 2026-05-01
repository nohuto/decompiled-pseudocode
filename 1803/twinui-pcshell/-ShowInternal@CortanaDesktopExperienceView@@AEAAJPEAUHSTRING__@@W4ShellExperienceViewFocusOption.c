/*
 * XREFs of ?ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x18006351C
 * Callers:
 *     ?Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180065EE0 (-Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Sh.c)
 *     ?ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z @ 0x180065F90 (-ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z.c)
 * Callees:
 *     ?Relaunch@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180063600 (-Relaunch@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experienc.c)
 *     ?Activate@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@@Z @ 0x180068140 (-Activate@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOpti.c)
 *     ?get_Ready@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAE@Z @ 0x1800682D0 (-get_Ready@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAE@Z.c)
 *     ??$CortanaExperienceManager_CortanaTaskbarState@K@CortanaProactiveTelemetry@@SAX$$QEAK@Z @ 0x180074B10 (--$CortanaExperienceManager_CortanaTaskbarState@K@CortanaProactiveTelemetry@@SAX$$QEAK@Z.c)
 *     ??$CortanaExperienceManager_CortanaTabletMode@AEA_N@CortanaProactiveTelemetry@@SAXAEA_N@Z @ 0x180074C54 (--$CortanaExperienceManager_CortanaTabletMode@AEA_N@CortanaProactiveTelemetry@@SAXAEA_N@Z.c)
 *     ?GetSearchboxTaskbarMode@@YA?AW4SearchboxTaskbarMode@@XZ @ 0x180085D24 (-GetSearchboxTaskbarMode@@YA-AW4SearchboxTaskbarMode@@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ShowInternal(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  TwinUI::Cortana::ShellExperienceView *v8; // rcx
  __int64 (__fastcall *v9)(TwinUI::Cortana::ShellExperienceView *__hidden, unsigned __int8 *); // rax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  __int64 (__fastcall *v13)(__int64, __int64, _QWORD); // rax
  int v14; // eax
  int v16; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int SearchboxTaskbarMode; // [rsp+40h] [rbp+18h] BYREF

  SearchboxTaskbarMode = GetSearchboxTaskbarMode();
  CortanaProactiveTelemetry::CortanaExperienceManager_CortanaTaskbarState<unsigned long>(&SearchboxTaskbarMode);
  CortanaProactiveTelemetry::CortanaExperienceManager_CortanaTabletMode<bool &>(a1 + 205);
  v8 = *(TwinUI::Cortana::ShellExperienceView **)(a1 + 144);
  LOBYTE(SearchboxTaskbarMode) = 0;
  if ( v8 )
  {
    v9 = *(__int64 (__fastcall **)(TwinUI::Cortana::ShellExperienceView *__hidden, unsigned __int8 *))(*(_QWORD *)v8 + 72LL);
    v10 = v9 == TwinUI::Cortana::ShellExperienceView::get_Ready
        ? TwinUI::Cortana::ShellExperienceView::get_Ready(v8, (unsigned __int8 *)&SearchboxTaskbarMode)
        : v9(v8, (unsigned __int8 *)&SearchboxTaskbarMode);
    if ( v10 >= 0 )
    {
      if ( (_BYTE)SearchboxTaskbarMode )
      {
        v11 = CortanaDesktopExperienceView::Relaunch(a1, a2, a4);
        if ( v11 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x774,
            (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)(unsigned int)v11,
            v16);
      }
    }
  }
  v12 = *(_QWORD *)(a1 + 144);
  v13 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v12 + 88LL);
  if ( v13 == TwinUI::Cortana::ShellExperienceView::Activate )
    v14 = TwinUI::Cortana::ShellExperienceView::Activate(v12, a2, a3);
  else
    v14 = v13(v12, a2, a3);
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x777,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v14,
      v16);
  return 0LL;
}
