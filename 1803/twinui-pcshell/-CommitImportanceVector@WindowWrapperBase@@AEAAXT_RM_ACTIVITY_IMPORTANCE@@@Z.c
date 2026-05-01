/*
 * XREFs of ?CommitImportanceVector@WindowWrapperBase@@AEAAXT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x1801F1FEC
 * Callers:
 *     _lambda_1738cd98f2fee2521f9411d49d851a4e_::operator() @ 0x1801EFD2C (_lambda_1738cd98f2fee2521f9411d49d851a4e_--operator().c)
 *     _lambda_6d00836a8b084132a7e1fa9e799cd88e_::operator() @ 0x1801F04D0 (_lambda_6d00836a8b084132a7e1fa9e799cd88e_--operator().c)
 *     _lambda_795a819b32f774d3329ac417b6862537_::operator() @ 0x1801F0698 (_lambda_795a819b32f774d3329ac417b6862537_--operator().c)
 *     _lambda_86226957380faec138486a0d7bb67cf3_::operator() @ 0x1801F0C08 (_lambda_86226957380faec138486a0d7bb67cf3_--operator().c)
 *     _lambda_a980ae989d2c044e8c882110ed14425d_::operator() @ 0x1801F0EDC (_lambda_a980ae989d2c044e8c882110ed14425d_--operator().c)
 *     _lambda_ebf472f1599809bdbab25f70af63208e_::operator() @ 0x1801F18A4 (_lambda_ebf472f1599809bdbab25f70af63208e_--operator().c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapperBase::CommitImportanceVector(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 312) + 168LL))(*(_QWORD *)(a1 + 312));
  *(_DWORD *)(a1 + 292) = a2;
  v4 = *(_QWORD *)(a1 + 104);
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 88LL))(v4, a2);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        2321LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v5);
  }
}
