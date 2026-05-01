/*
 * XREFs of ?OnPriorityUnboostRequested@CWelcomeScreenExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B30C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$OnPriorityUnboostProcessed@AEAJAEAI@WelcomeScreenExperienceManagerTelemetry@@SAXAEAJAEAI@Z @ 0x1800B4A40 (--$OnPriorityUnboostProcessed@AEAJAEAI@WelcomeScreenExperienceManagerTelemetry@@SAXAEAJAEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWelcomeScreenExperienceManager::OnPriorityUnboostRequested(
        CWelcomeScreenExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v2; // ebx
  _DWORD *v3; // rdi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v11 = 0;
  v3 = (_DWORD *)((char *)this + 32);
  v4 = *((_DWORD *)this + 8);
  if ( v4 )
  {
    v5 = v4 - 1;
    *v3 = v5;
    if ( !v5 )
    {
      if ( *((_QWORD *)this + 12) )
      {
        v12 = 0LL;
        v6 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 12))(
               *((_QWORD *)this + 12),
               &GUID_a4946191_41b4_45aa_bc6a_ad2f4351596c,
               &v12);
        v2 = v6;
        if ( v6 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xA4,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\welcomescreenexperiencemanager.cpp",
            (const char *)(unsigned int)v6);
        v11 = v2;
        if ( v2 >= 0 )
        {
          v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 56LL))(v12);
          v2 = v7;
          if ( v7 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xA7,
              (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\welcomescreenexperiencemanager.cpp",
              (const char *)(unsigned int)v7);
          v11 = v2;
        }
        v8 = v12;
        if ( v12 )
        {
          v12 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        }
      }
    }
  }
  WelcomeScreenExperienceManagerTelemetry::OnPriorityUnboostProcessed<long &,unsigned int &>(&v11, v3);
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAD,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\welcomescreenexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  return (unsigned int)v2;
}
