/*
 * XREFs of ?SetWindowBand@DesktopSingleViewShellExperiencePersonality@@UEAAJW4ZBID@@@Z @ 0x18006DFB0
 * Callers:
 *     ?SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z @ 0x18006C090 (-SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z.c)
 * Callees:
 *     ?SetWindowBand@ViewWrapperBase@@UEAAJK@Z @ 0x18004FA40 (-SetWindowBand@ViewWrapperBase@@UEAAJK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DesktopSingleViewShellExperiencePersonality::SetWindowBand(__int64 a1, unsigned int a2)
{
  ViewWrapperBase *v2; // rcx
  __int64 (*v3)(void); // rax
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(ViewWrapperBase **)(a1 + 16);
  v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 40LL);
  if ( (char *)v3 == (char *)ViewWrapperBase::SetWindowBand )
    v4 = ViewWrapperBase::SetWindowBand(v2, a2);
  else
    v4 = v3();
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x74,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\desktopsingleviewshellexperiencepersonality.cpp",
      (const char *)(unsigned int)v4,
      v7);
  return v5;
}
