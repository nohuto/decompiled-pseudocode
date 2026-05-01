/*
 * XREFs of ?KeepAlive@CSingleViewShellExperience@@QEAAJXZ @ 0x180182BEC
 * Callers:
 *     ?KeepAlive@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x1800C1760 (-KeepAlive@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSingleViewShellExperience::KeepAlive(CSingleViewShellExperience *this)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 3);
  if ( *((_DWORD *)this + 18) )
  {
    *((_DWORD *)this + 18) = 4;
  }
  else
  {
    v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 336LL))(v2, 4LL);
    v4 = v3;
    if ( v3 >= 0 )
    {
      *((_DWORD *)this + 19) = 4;
      v4 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x63,
        (__int64)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
        (const char *)(unsigned int)v3);
    }
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x7E,
        (__int64)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
        (const char *)(unsigned int)v4);
      goto LABEL_9;
    }
  }
  v4 = 0;
LABEL_9:
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x36F,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v4);
  return 0LL;
}
