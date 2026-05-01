/*
 * XREFs of ?OnPriorityBoostRequested@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800AB270
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTaskContinuityActivitiesExperienceManager::OnPriorityBoostRequested(
        CTaskContinuityActivitiesExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v2; // ebx
  int v3; // eax
  int v4; // eax
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  ++*((_DWORD *)this + 2);
  v2 = 0;
  if ( *((_DWORD *)this + 2) && *((_QWORD *)this + 6) )
  {
    v8 = 0LL;
    v3 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 6))(
           *((_QWORD *)this + 6),
           &GUID_35f1648c_265f_402c_b575_c9a325451df5,
           &v8);
    v2 = v3;
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x89,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
    if ( v2 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8);
      v2 = v4;
      if ( v4 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8C,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
          (const char *)(unsigned int)v4);
    }
    v5 = v8;
    if ( v8 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x90,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x96,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
    }
  }
  return (unsigned int)v2;
}
