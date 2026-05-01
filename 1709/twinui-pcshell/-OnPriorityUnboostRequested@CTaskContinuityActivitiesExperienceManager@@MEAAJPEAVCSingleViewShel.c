/*
 * XREFs of ?OnPriorityUnboostRequested@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800AB370
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTaskContinuityActivitiesExperienceManager::OnPriorityUnboostRequested(
        CTaskContinuityActivitiesExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v2; // ebx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = *((_DWORD *)this + 2);
  if ( v3 )
  {
    v4 = v3 - 1;
    *((_DWORD *)this + 2) = v4;
    if ( !v4 )
    {
      if ( *((_QWORD *)this + 6) )
      {
        v10 = 0LL;
        v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 6))(
               *((_QWORD *)this + 6),
               &GUID_35f1648c_265f_402c_b575_c9a325451df5,
               &v10);
        v2 = v5;
        if ( v5 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xA4,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
            (const char *)(unsigned int)v5);
        if ( v2 >= 0 )
        {
          v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 56LL))(v10);
          v2 = v6;
          if ( v6 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xA7,
              (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
              (const char *)(unsigned int)v6);
        }
        v7 = v10;
        if ( v10 )
        {
          v10 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        }
        if ( v2 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xAC,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
            (const char *)(unsigned int)v2);
      }
    }
  }
  return (unsigned int)v2;
}
