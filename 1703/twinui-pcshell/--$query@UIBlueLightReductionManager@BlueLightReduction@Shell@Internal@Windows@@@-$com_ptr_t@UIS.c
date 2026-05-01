/*
 * XREFs of ??$query@UIBlueLightReductionManager@BlueLightReduction@Shell@Internal@Windows@@@?$com_ptr_t@UIServiceHostComponent@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIBlueLightReductionManager@BlueLightReduction@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800844BC
 * Callers:
 *     _lambda_48cc6f863b0e3f3e9e6c1e2aabb2ab6f_::operator() @ 0x180083DDC (_lambda_48cc6f863b0e3f3e9e6c1e2aabb2ab6f_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c2cf7c6b9060da334c300199a815b5d4___::Run @ 0x180084CA0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c2cf7c6b9060da334c300199a815b5d4___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_057997b9bbf85cf4f9ee751d30e1f3a6___::Run @ 0x180084E40 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_057997b9bbf85cf4f9ee751d30e1f3a6___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f8ed3535b9be488def6348833eca1e9b___::Run @ 0x180084FD0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f8ed3535b9be488def6348833eca1e9b___--Run.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IServiceHostComponent,wil::err_exception_policy>::query<Windows::Internal::Shell::BlueLightReduction::IBlueLightReductionManager>(
        _QWORD *a1,
        __int64 a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_05357b73_71a8_4328_801f_d28e07a3d3ff, a2);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x15CA,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v3);
    JUMPOUT(0x180084509LL);
  }
  return a2;
}
