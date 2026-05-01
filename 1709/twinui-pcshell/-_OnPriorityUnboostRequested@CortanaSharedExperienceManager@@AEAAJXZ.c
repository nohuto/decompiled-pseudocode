/*
 * XREFs of ?_OnPriorityUnboostRequested@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800A31F0
 * Callers:
 *     ?_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1800A2F70 (-_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetViewWrapper@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x1800A2F04 (-_GetViewWrapper@CortanaSharedExperienceManager@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerIntero.c)
 *     ??$OnPriorityUnboostProcessed@AEAJAEAI@CortanaProactiveTelemetry@@SAXAEAJAEAI@Z @ 0x1800A80F8 (--$OnPriorityUnboostProcessed@AEAJAEAI@CortanaProactiveTelemetry@@SAXAEAJAEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaSharedExperienceManager::_OnPriorityUnboostRequested(CortanaSharedExperienceManager *this)
{
  _DWORD *v1; // rdi
  int v2; // eax
  int v3; // ebx
  __int64 (__fastcall ***v4)(_QWORD, GUID *, _QWORD *); // rcx
  int v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  int v10; // [rsp+50h] [rbp+20h] BYREF
  __int64 v11; // [rsp+58h] [rbp+28h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp+30h] BYREF

  v1 = (_DWORD *)((char *)this + 508);
  v2 = *((_DWORD *)this + 127);
  if ( v2 )
    *v1 = v2 - 1;
  v3 = 0;
  v10 = 0;
  if ( !*v1 )
  {
    CortanaSharedExperienceManager::_GetViewWrapper((__int64)this, &v12);
    v4 = v12;
    if ( v12 )
    {
      v11 = 0LL;
      v5 = (**v12)(v12, &GUID_35f1648c_265f_402c_b575_c9a325451df5, &v11);
      v3 = v5;
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x523,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
          (const char *)(unsigned int)v5);
      v10 = v3;
      if ( v3 >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 56LL))(v11);
        v3 = v6;
        if ( v6 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x526,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
            (const char *)(unsigned int)v6);
        v10 = v3;
      }
      v7 = v11;
      if ( v11 )
      {
        v11 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      v4 = v12;
    }
    if ( v4 )
    {
      v12 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v4)[2])(v4);
    }
  }
  CortanaProactiveTelemetry::OnPriorityUnboostProcessed<long &,unsigned int &>(&v10, v1);
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x41C,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
  return (unsigned int)v3;
}
