/*
 * XREFs of ?CanTransitionFromStart@CortanaSharedExperienceManager@@UEAAJPEAE@Z @ 0x180067FB0
 * Callers:
 *     ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x180079178 (-ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z @ 0x180066260 (-CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::CanTransitionFromStart(
        CortanaSharedExperienceManager *this,
        unsigned __int8 *a2)
{
  CortanaDesktopExperienceView *v2; // rcx
  __int64 (__fastcall *v3)(CortanaDesktopExperienceView *, unsigned __int8 *); // rax
  int CanTransitionFromStart; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (CortanaDesktopExperienceView *)*((_QWORD *)this + 58);
  v3 = *(__int64 (__fastcall **)(CortanaDesktopExperienceView *, unsigned __int8 *))(*(_QWORD *)v2 + 24LL);
  if ( v3 == CortanaDesktopExperienceView::CanTransitionFromStart )
    CanTransitionFromStart = CortanaDesktopExperienceView::CanTransitionFromStart(v2, a2);
  else
    CanTransitionFromStart = v3(v2, a2);
  v5 = CanTransitionFromStart;
  if ( CanTransitionFromStart < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x148,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)CanTransitionFromStart,
      -2);
  return v5;
}
