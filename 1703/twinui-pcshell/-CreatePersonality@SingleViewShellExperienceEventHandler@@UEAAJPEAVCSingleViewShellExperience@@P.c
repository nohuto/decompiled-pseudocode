/*
 * XREFs of ?CreatePersonality@SingleViewShellExperienceEventHandler@@UEAAJPEAVCSingleViewShellExperience@@PEAV?$unique_ptr@VSingleViewShellExperiencePersonality@@U?$default_delete@VSingleViewShellExperiencePersonality@@@wistd@@@wistd@@@Z @ 0x18018E3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_unique_nothrow@VDesktopSingleViewShellExperiencePersonality@@AEAPEAVCSingleViewShellExperience@@@wil@@YA?AV?$unique_ptr@VDesktopSingleViewShellExperiencePersonality@@U?$default_delete@VDesktopSingleViewShellExperiencePersonality@@@wistd@@@wistd@@AEAPEAVCSingleViewShellExperience@@@Z @ 0x18018E60C (--$make_unique_nothrow@VDesktopSingleViewShellExperiencePersonality@@AEAPEAVCSingleViewShellExpe.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SingleViewShellExperienceEventHandler::CreatePersonality(
        __int64 a1,
        __int64 a2,
        void (__fastcall ****a3)(_QWORD, __int64))
{
  _QWORD *unique; // rax
  void (__fastcall ***v5)(_QWORD, __int64); // rdi
  void (__fastcall ***v6)(_QWORD, __int64); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF
  void (__fastcall ***v10)(_QWORD, __int64); // [rsp+40h] [rbp+18h] BYREF

  v9 = a2;
  unique = (_QWORD *)wil::make_unique_nothrow<DesktopSingleViewShellExperiencePersonality,CSingleViewShellExperience * &>(
                       &v10,
                       &v9);
  v5 = (void (__fastcall ***)(_QWORD, __int64))*unique;
  *unique = 0LL;
  v6 = *a3;
  if ( v5 != *a3 )
  {
    if ( v6 )
      (**v6)(v6, 1LL);
    *a3 = v5;
  }
  if ( v10 )
    (**v10)(v10, 1LL);
  if ( *a3 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE3,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\desktopsingleviewshellexperiencepersonality.cpp",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}
