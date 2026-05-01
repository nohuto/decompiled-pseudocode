/*
 * XREFs of ?BringToForeground@DesktopSingleViewShellExperiencePersonality@@UEAAJXZ @ 0x18006E1E0
 * Callers:
 *     ?BringToForeground@CSingleViewShellExperience@@QEAAJXZ @ 0x1800697EC (-BringToForeground@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18006A07C (-ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18006A25C (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ?SetForegroundWindow@ViewWrapperBase@@UEAAJXZ @ 0x18004FBF0 (-SetForegroundWindow@ViewWrapperBase@@UEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DesktopSingleViewShellExperiencePersonality::BringToForeground(
        DesktopSingleViewShellExperiencePersonality *this)
{
  ViewWrapperBase *v1; // rcx
  __int64 (*v2)(void); // rax
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (ViewWrapperBase *)*((_QWORD *)this + 2);
  v2 = *(__int64 (**)(void))(*(_QWORD *)v1 + 56LL);
  if ( (char *)v2 == (char *)ViewWrapperBase::SetForegroundWindow )
    v3 = ViewWrapperBase::SetForegroundWindow(v1);
  else
    v3 = v2();
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x95,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\desktopsingleviewshellexperiencepersonality.cpp",
      (const char *)(unsigned int)v3,
      v6);
  return v4;
}
