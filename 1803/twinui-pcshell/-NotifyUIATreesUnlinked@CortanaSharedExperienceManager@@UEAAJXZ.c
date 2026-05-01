/*
 * XREFs of ?NotifyUIATreesUnlinked@CortanaSharedExperienceManager@@UEAAJXZ @ 0x180067F60
 * Callers:
 *     ?LinkUIATrees@XamlLauncher@@AEAAX_N@Z @ 0x1800779B8 (-LinkUIATrees@XamlLauncher@@AEAAX_N@Z.c)
 * Callees:
 *     ?OnUIATreesUnlinked@CortanaDesktopExperienceView@@UEAAJXZ @ 0x180066230 (-OnUIATreesUnlinked@CortanaDesktopExperienceView@@UEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::NotifyUIATreesUnlinked(CortanaSharedExperienceManager *this)
{
  CortanaDesktopExperienceView *v1; // rcx
  __int64 (__fastcall *v2)(CortanaDesktopExperienceView *); // rax
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (CortanaDesktopExperienceView *)*((_QWORD *)this + 58);
  v2 = *(__int64 (__fastcall **)(CortanaDesktopExperienceView *))(*(_QWORD *)v1 + 56LL);
  if ( v2 == CortanaDesktopExperienceView::OnUIATreesUnlinked )
    v3 = CortanaDesktopExperienceView::OnUIATreesUnlinked(v1);
  else
    v3 = v2(v1);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15C,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v3,
      -2);
  return v4;
}
