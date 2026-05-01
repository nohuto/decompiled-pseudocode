/*
 * XREFs of ?SetPosition@DesktopSingleViewShellExperiencePersonality@@UEAAJPEBUtagRECT@@@Z @ 0x18006DE80
 * Callers:
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x18006C054 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?SetPosition@ViewWrapperBase@@UEAAJPEBUtagRECT@@@Z @ 0x18004F960 (-SetPosition@ViewWrapperBase@@UEAAJPEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DesktopSingleViewShellExperiencePersonality::SetPosition(
        DesktopSingleViewShellExperiencePersonality *this,
        const struct tagRECT *a2)
{
  ViewWrapperBase *v2; // rcx
  __int64 (__fastcall *v3)(ViewWrapperBase *, const struct tagRECT *); // rax
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (ViewWrapperBase *)*((_QWORD *)this + 2);
  v3 = *(__int64 (__fastcall **)(ViewWrapperBase *, const struct tagRECT *))(*(_QWORD *)v2 + 32LL);
  if ( v3 == ViewWrapperBase::SetPosition )
    v4 = ViewWrapperBase::SetPosition(v2, a2);
  else
    v4 = v3(v2, a2);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD6,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\desktopsingleviewshellexperiencepersonality.cpp",
      (const char *)(unsigned int)v4,
      v7);
  return v5;
}
