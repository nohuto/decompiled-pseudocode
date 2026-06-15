/*
 * XREFs of wil::details::lambda_call__lambda_46581a07941190df388cbbe73935297a___::_lambda_call__lambda_46581a07941190df388cbbe73935297a___ @ 0x14003021C
 * Callers:
 *     _CPipeInstance::CreateAPOConnections_::_1_::dtor$1 @ 0x14001FDD4 (_CPipeInstance--CreateAPOConnections_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_46581a07941190df388cbbe73935297a___::_lambda_call__lambda_46581a07941190df388cbbe73935297a___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[16] )
  {
    a1[16] = 0;
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 232LL) + 48LL))(
             *(_QWORD *)(*(_QWORD *)a1 + 232LL),
             **((_QWORD **)a1 + 1));
  }
  return result;
}
