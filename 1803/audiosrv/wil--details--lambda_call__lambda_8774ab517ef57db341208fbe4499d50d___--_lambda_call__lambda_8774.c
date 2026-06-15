/*
 * XREFs of wil::details::lambda_call__lambda_8774ab517ef57db341208fbe4499d50d___::_lambda_call__lambda_8774ab517ef57db341208fbe4499d50d___ @ 0x1800C04C0
 * Callers:
 *     _CVADServer::NotifyStreamSuspensionStateChanged_::_1_::dtor$1 @ 0x1800C2247 (_CVADServer--NotifyStreamSuspensionStateChanged_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_8774ab517ef57db341208fbe4499d50d___::_lambda_call__lambda_8774ab517ef57db341208fbe4499d50d___(
        _BYTE *a1)
{
  __int64 result; // rax

  result = (__int64)a1;
  if ( a1[16] )
  {
    a1[16] = 0;
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 168LL) + 304LL))(
             *(_QWORD *)(*(_QWORD *)a1 + 168LL),
             *(_QWORD *)(*(_QWORD *)a1 + 192LL),
             **((unsigned __int8 **)a1 + 1));
  }
  return result;
}
