/*
 * XREFs of ?cleanup@?$static_lazy@VCommonStartTelemetryLogging@@@details@wil@@QEAAXXZ @ 0x18022A8C0
 * Callers:
 *     _lambda_d4015babfde9ac14d130539030d425b5_::_lambda_invoker_cdecl_ @ 0x180224ED0 (_lambda_d4015babfde9ac14d130539030d425b5_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall wil::details::static_lazy<CommonStartTelemetryLogging>::cleanup(__int64 a1)
{
  int result; // eax
  __int64 fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  fPending = a1;
  result = InitOnceBeginInitialize(
             &`CommonStartTelemetryLogging::Instance'::`2'::wrapper,
             1u,
             (PBOOL)&fPending,
             &Context);
  if ( result )
  {
    if ( !(_DWORD)fPending )
      return (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)Context + 24LL))(Context, 0LL);
  }
  return result;
}
