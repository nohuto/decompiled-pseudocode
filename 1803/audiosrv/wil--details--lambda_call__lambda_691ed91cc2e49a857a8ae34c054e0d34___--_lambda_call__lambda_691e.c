/*
 * XREFs of wil::details::lambda_call__lambda_691ed91cc2e49a857a8ae34c054e0d34___::_lambda_call__lambda_691ed91cc2e49a857a8ae34c054e0d34___ @ 0x1800A836C
 * Callers:
 *     _CAudioSession::RegisterOwnerProcess_::_1_::dtor$1 @ 0x1800AC83A (_CAudioSession--RegisterOwnerProcess_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_691ed91cc2e49a857a8ae34c054e0d34___::_lambda_call__lambda_691ed91cc2e49a857a8ae34c054e0d34___(
        _QWORD **a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)**a1 + 32LL))(**a1, a1[1]);
  }
  return result;
}
