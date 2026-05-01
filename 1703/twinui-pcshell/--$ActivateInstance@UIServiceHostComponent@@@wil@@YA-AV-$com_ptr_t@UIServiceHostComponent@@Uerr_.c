/*
 * XREFs of ??$ActivateInstance@UIServiceHostComponent@@@wil@@YA?AV?$com_ptr_t@UIServiceHostComponent@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1800843E4
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_9d431f67882e8320ed6c7d65bd25f21d__&___ptr64_::Run @ 0x1800854F0 (wil--details--functor_wrapper_void__lambda_9d431f67882e8320ed6c7d65bd25f21d__-___ptr64_--Run.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005B114 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$query@UIServiceHostComponent@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIServiceHostComponent@@Uerr_exception_policy@wil@@@1@XZ @ 0x180084834 (--$query@UIServiceHostComponent@@@-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::ActivateInstance<IServiceHostComponent>(__int64 a1)
{
  HSTRING_HEADER *v2; // rdi
  int v3; // eax
  __int64 v5; // [rsp+20h] [rbp-58h] BYREF
  int v6; // [rsp+28h] [rbp-50h]
  const WCHAR *v7[3]; // [rsp+30h] [rbp-48h] BYREF
  HSTRING_HEADER v8; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v7[2] = (const WCHAR *)-2LL;
  v6 = 0;
  v7[0] = L"Windows.Internal.Shell.BlueLightReduction.BlueLightReductionManager";
  v2 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v8, v7);
  v5 = 0LL;
  v3 = RoActivateInstance(v2[1].Reserved.Reserved1, &v5);
  if ( v3 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x667,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v3);
  wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<IServiceHostComponent>(&v5, a1);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return a1;
}
