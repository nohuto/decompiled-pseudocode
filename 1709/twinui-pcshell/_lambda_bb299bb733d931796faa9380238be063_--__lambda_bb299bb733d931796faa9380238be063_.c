/*
 * XREFs of _lambda_bb299bb733d931796faa9380238be063_::__lambda_bb299bb733d931796faa9380238be063_ @ 0x18000CA1C
 * Callers:
 *     _CApplicationManager::_AttemptPendingActivationTracking_::_1_::dtor$1 @ 0x1801E6714 (_CApplicationManager--_AttemptPendingActivationTracking_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_bb299bb733d931796faa9380238be063_::__lambda_bb299bb733d931796faa9380238be063_(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    *(_QWORD *)(result + 24) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
