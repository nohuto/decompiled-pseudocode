/*
 * XREFs of wil::details::functor_wrapper_void__lambda_9d431f67882e8320ed6c7d65bd25f21d__&___ptr64_::Run @ 0x1800854F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UIServiceHostComponent@@@wil@@YA?AV?$com_ptr_t@UIServiceHostComponent@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1800843E4 (--$ActivateInstance@UIServiceHostComponent@@@wil@@YA-AV-$com_ptr_t@UIServiceHostComponent@@Uerr_.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::functor_wrapper_void__lambda_9d431f67882e8320ed6c7d65bd25f21d______ptr64_::Run(
        __int64 a1)
{
  __int64 *v1; // rbx
  __int64 *v2; // rax
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(__int64 **)(a1 + 8);
  v2 = (__int64 *)wil::ActivateInstance<IServiceHostComponent>((__int64)&v7);
  v3 = *v1;
  v4 = *v2;
  *v2 = 0LL;
  v5 = *(_QWORD *)(v3 + 136);
  *(_QWORD *)(v3 + 136) = v4;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return 0LL;
}
