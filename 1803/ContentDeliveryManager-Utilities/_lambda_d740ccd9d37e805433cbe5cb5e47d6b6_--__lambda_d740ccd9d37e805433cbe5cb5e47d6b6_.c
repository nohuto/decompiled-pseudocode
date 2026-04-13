/*
 * XREFs of _lambda_d740ccd9d37e805433cbe5cb5e47d6b6_::__lambda_d740ccd9d37e805433cbe5cb5e47d6b6_ @ 0x180078350
 * Callers:
 *     _UnlockActionHelper::Execute_::_1_::dtor$2 @ 0x1800C680D (_UnlockActionHelper--Execute_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_d740ccd9d37e805433cbe5cb5e47d6b6_::__lambda_d740ccd9d37e805433cbe5cb5e47d6b6_(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = a1[1];
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( *a1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  return result;
}
