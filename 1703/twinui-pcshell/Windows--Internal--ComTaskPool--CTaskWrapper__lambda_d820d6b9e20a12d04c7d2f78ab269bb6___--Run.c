/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d820d6b9e20a12d04c7d2f78ab269bb6___::Run @ 0x18005CB50
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d820d6b9e20a12d04c7d2f78ab269bb6___::Run(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(
         *(_QWORD *)(a1 + 16),
         (*(_QWORD *)(a1 + 24) + 72LL) & -(__int64)(*(_QWORD *)(a1 + 24) != 0LL),
         *(unsigned int *)(a1 + 32));
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1348,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)(unsigned int)v1);
}
