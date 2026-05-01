/*
 * XREFs of ?HideView@DesktopSingleViewShellExperiencePersonality@@UEAAJXZ @ 0x18006DF00
 * Callers:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18006B838 (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 * Callees:
 *     ?SetShellCloak@ViewWrapperBase@@UEAAJW4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x18004F9A0 (-SetShellCloak@ViewWrapperBase@@UEAAJW4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DesktopSingleViewShellExperiencePersonality::HideView(
        DesktopSingleViewShellExperiencePersonality *this)
{
  __int64 v1; // rcx
  __int64 (__fastcall *v2)(__int64, unsigned int); // rax
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 2);
  v2 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v1 + 24LL);
  if ( v2 == ViewWrapperBase::SetShellCloak )
    v3 = ViewWrapperBase::SetShellCloak(v1, 1u);
  else
    v3 = v2(v1, 1u);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7E,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\desktopsingleviewshellexperiencepersonality.cpp",
      (const char *)(unsigned int)v3,
      v6);
  return v4;
}
