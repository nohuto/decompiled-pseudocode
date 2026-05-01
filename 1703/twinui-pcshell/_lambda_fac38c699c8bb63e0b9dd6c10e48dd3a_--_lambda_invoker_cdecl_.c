/*
 * XREFs of _lambda_fac38c699c8bb63e0b9dd6c10e48dd3a_::_lambda_invoker_cdecl_ @ 0x18010C3B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_fac38c699c8bb63e0b9dd6c10e48dd3a_::_lambda_invoker_cdecl_(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 80) + 280LL))(*(_QWORD *)(a1 + 80), *(_QWORD *)(a1 + 128));
  v2 = *(_QWORD *)(a1 + 112);
  if ( v2 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 72LL))(v2, a1 + 16);
  v5 = 0LL;
  if ( *(_QWORD *)(a1 + 96)
    && (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 96))(
         *(_QWORD *)(a1 + 96),
         &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08,
         &v5) >= 0 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 80LL))(v5, a1);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 64LL))(v5, a1 + 8);
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 232LL))(*(_QWORD *)(a1 + 80));
  v3 = v5;
  if ( v5 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return 0LL;
}
