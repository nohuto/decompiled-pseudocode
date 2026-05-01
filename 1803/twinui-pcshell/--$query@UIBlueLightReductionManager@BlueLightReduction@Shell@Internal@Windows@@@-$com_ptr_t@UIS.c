/*
 * XREFs of ??$query@UIBlueLightReductionManager@BlueLightReduction@Shell@Internal@Windows@@@?$com_ptr_t@UIServiceHostComponent@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIBlueLightReductionManager@BlueLightReduction@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18009E0BC
 * Callers:
 *     _lambda_3c9f3b8741062b29cb4eaa4663372faf_::operator() @ 0x180143CCC (_lambda_3c9f3b8741062b29cb4eaa4663372faf_--operator().c)
 *     _lambda_b2212f9215be390023faf1a5e441b28f_::operator() @ 0x180143E30 (_lambda_b2212f9215be390023faf1a5e441b28f_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4bf2a686c855b7805576ec8be1e41ab5___::Run @ 0x180144900 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4bf2a686c855b7805576ec8be1e41ab5___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e0e603aadff4f9d897edc83f0683be4a___::Run @ 0x180144980 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e0e603aadff4f9d897edc83f0683be4a___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::com_ptr_t<IServiceHostComponent,wil::err_exception_policy>::query<Windows::Internal::Shell::BlueLightReduction::IBlueLightReductionManager>(
        _QWORD *a1,
        __int64 a2)
{
  int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_05357b73_71a8_4328_801f_d28e07a3d3ff, a2);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x163B,
      (unsigned int)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v3,
      v5);
    __debugbreak();
  }
  return a2;
}
