/*
 * XREFs of ?CreatePersonality@SingleViewShellExperienceEventHandler@@UEAAJPEAVCSingleViewShellExperience@@PEAV?$unique_ptr@VSingleViewShellExperiencePersonality@@U?$default_delete@VSingleViewShellExperiencePersonality@@@wistd@@@wistd@@@Z @ 0x1801DD7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SingleViewShellExperienceEventHandler::CreatePersonality(
        __int64 a1,
        __int64 a2,
        void (__fastcall ****a3)(_QWORD, __int64))
{
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  void (__fastcall ***v7)(_QWORD, __int64); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    v5[1] = a2;
    *v5 = &DesktopSingleViewShellExperiencePersonality::`vftable';
    v5[2] = 0LL;
    v5[3] = 0LL;
    *((_DWORD *)v5 + 8) = 0;
  }
  else
  {
    v6 = 0LL;
  }
  v7 = *a3;
  if ( v6 != *a3 )
  {
    if ( v7 )
      (**v7)(v7, 1LL);
    *a3 = (void (__fastcall ***)(_QWORD, __int64))v6;
  }
  if ( *a3 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE3,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\desktopsingleviewshellexperiencepersonality.cpp",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}
