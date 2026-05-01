/*
 * XREFs of wil::details::ScopeExitFn__lambda_1b4b3fc86c8e1c92deac99190c8f66ae___::_ScopeExitFn__lambda_1b4b3fc86c8e1c92deac99190c8f66ae___ @ 0x18016D180
 * Callers:
 *     _TouchKeyboardExperienceManager::_OnViewCreated_::_1_::dtor$2 @ 0x1801A4F1E (_TouchKeyboardExperienceManager--_OnViewCreated_--_1_--dtor$2.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_1b4b3fc86c8e1c92deac99190c8f66ae___::_ScopeExitFn__lambda_1b4b3fc86c8e1c92deac99190c8f66ae___(
        _BYTE *a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[8] )
  {
    a1[8] = 0;
    v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(***(_QWORD ***)a1 + 336LL))(**(_QWORD **)a1, 0LL);
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x32B,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v1);
  }
}
