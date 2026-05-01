/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c2cf7c6b9060da334c300199a815b5d4___::Run @ 0x180084CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIBlueLightReductionManager@BlueLightReduction@Shell@Internal@Windows@@@?$com_ptr_t@UIServiceHostComponent@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIBlueLightReductionManager@BlueLightReduction@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800844BC (--$query@UIBlueLightReductionManager@BlueLightReduction@Shell@Internal@Windows@@@-$com_ptr_t@UIS.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c2cf7c6b9060da334c300199a815b5d4___::Run(
        __int64 a1)
{
  _QWORD *v1; // rax
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v1 = (_QWORD *)wil::com_ptr_t<IServiceHostComponent,wil::err_exception_policy>::query<Windows::Internal::Shell::BlueLightReduction::IBlueLightReductionManager>(
                   (_QWORD *)(*(_QWORD *)(a1 + 16) + 136LL),
                   (__int64)&v4);
  v2 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 64LL))(*v1);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x11F,
      (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
      (const char *)(unsigned int)v2);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
}
