/*
 * XREFs of _lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_::__lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_ @ 0x180006CE8
 * Callers:
 *     _Windows::Internal::ComTaskPoolHandler::FireCompletion_::_1_::dtor$1 @ 0x1800C1E62 (_Windows--Internal--ComTaskPoolHandler--FireCompletion_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_::__lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
