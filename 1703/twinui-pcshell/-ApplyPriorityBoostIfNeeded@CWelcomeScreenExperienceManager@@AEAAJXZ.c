/*
 * XREFs of ?ApplyPriorityBoostIfNeeded@CWelcomeScreenExperienceManager@@AEAAJXZ @ 0x1800B2F6C
 * Callers:
 *     ?OnViewCreated@CWelcomeScreenExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B2CB0 (-OnViewCreated@CWelcomeScreenExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnPriorityBoostRequested@CWelcomeScreenExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B3080 (-OnPriorityBoostRequested@CWelcomeScreenExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$OnPriorityBoostProcessed@AEAJAEAI@WelcomeScreenExperienceManagerTelemetry@@SAXAEAJAEAI@Z @ 0x1800B49A0 (--$OnPriorityBoostProcessed@AEAJAEAI@WelcomeScreenExperienceManagerTelemetry@@SAXAEAJAEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWelcomeScreenExperienceManager::ApplyPriorityBoostIfNeeded(CWelcomeScreenExperienceManager *this)
{
  int v1; // ebx
  char *v2; // rdi
  int v3; // eax
  int v4; // eax
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v8 = 0;
  v2 = (char *)this + 96;
  if ( *((_DWORD *)this + 24) && *((_QWORD *)this + 20) )
  {
    v9 = 0LL;
    v3 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 20))(
           *((_QWORD *)this + 20),
           &GUID_a4946191_41b4_45aa_bc6a_ad2f4351596c,
           &v9);
    v1 = v3;
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x88,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\welcomescreenexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
    v8 = v1;
    if ( v1 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 48LL))(v9);
      v1 = v4;
      if ( v4 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8B,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\welcomescreenexperiencemanager.cpp",
          (const char *)(unsigned int)v4);
      v8 = v1;
    }
    v5 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  WelcomeScreenExperienceManagerTelemetry::OnPriorityBoostProcessed<long &,unsigned int &>(&v8, v2);
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x90,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\welcomescreenexperiencemanager.cpp",
      (const char *)(unsigned int)v1);
  return (unsigned int)v1;
}
