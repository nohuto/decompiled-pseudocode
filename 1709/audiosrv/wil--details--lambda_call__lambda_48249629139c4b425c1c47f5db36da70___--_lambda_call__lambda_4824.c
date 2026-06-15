/*
 * XREFs of wil::details::lambda_call__lambda_48249629139c4b425c1c47f5db36da70___::_lambda_call__lambda_48249629139c4b425c1c47f5db36da70___ @ 0x18008A378
 * Callers:
 *     _CVADServer::NotifyStreamSuspensionStateChanged_::_1_::dtor$2 @ 0x1800399D0 (_CVADServer--NotifyStreamSuspensionStateChanged_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_48249629139c4b425c1c47f5db36da70___::_lambda_call__lambda_48249629139c4b425c1c47f5db36da70___(
        __int64 a1)
{
  __int64 result; // rax
  _BYTE *v2; // rcx

  result = 0LL;
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    v2 = *(_BYTE **)a1;
    if ( v2[440] )
      return (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v2 + 96LL))(v2);
  }
  return result;
}
