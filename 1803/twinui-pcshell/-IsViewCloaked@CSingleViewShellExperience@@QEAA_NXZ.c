/*
 * XREFs of ?IsViewCloaked@CSingleViewShellExperience@@QEAA_NXZ @ 0x18006C450
 * Callers:
 *     ?IsWindowFullyVisible@CStartExperienceManager@@UEAAJPEAE@Z @ 0x180076A90 (-IsWindowFullyVisible@CStartExperienceManager@@UEAAJPEAE@Z.c)
 * Callees:
 *     ?IsViewVisible@DesktopSingleViewShellExperiencePersonality@@UEAAJPEA_N@Z @ 0x18006E180 (-IsViewVisible@DesktopSingleViewShellExperiencePersonality@@UEAAJPEA_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CSingleViewShellExperience::IsViewCloaked(CSingleViewShellExperience *this)
{
  char v1; // bl
  DesktopSingleViewShellExperiencePersonality *v2; // rcx
  __int64 (__fastcall *v3)(DesktopSingleViewShellExperiencePersonality *__hidden, bool *); // rax
  int IsViewVisible; // eax
  __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v10; // [rsp+30h] [rbp+8h] BYREF

  v1 = 1;
  if ( !*((_QWORD *)this + 3) )
  {
    v6 = 2147549183LL;
    v7 = 202LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)v6,
      v8);
    return v1;
  }
  v2 = (DesktopSingleViewShellExperiencePersonality *)*((_QWORD *)this + 10);
  v3 = *(__int64 (__fastcall **)(DesktopSingleViewShellExperiencePersonality *__hidden, bool *))(*(_QWORD *)v2 + 56LL);
  if ( v3 == DesktopSingleViewShellExperiencePersonality::IsViewVisible )
    IsViewVisible = DesktopSingleViewShellExperiencePersonality::IsViewVisible(v2, &v10);
  else
    IsViewVisible = v3(v2, &v10);
  if ( IsViewVisible < 0 )
  {
    v6 = (unsigned int)IsViewVisible;
    v7 = 204LL;
    goto LABEL_10;
  }
  return !v10;
}
