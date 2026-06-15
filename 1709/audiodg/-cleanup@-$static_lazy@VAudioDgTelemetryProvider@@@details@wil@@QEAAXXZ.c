/*
 * XREFs of ?cleanup@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAXXZ @ 0x140035DD0
 * Callers:
 *     _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_ @ 0x140034C10 (_lambda_5306e8013c9084f1ba6b78d0c08c093f_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

int __fastcall wil::details::static_lazy<AudioDgTelemetryProvider>::cleanup(__int64 a1)
{
  int result; // eax
  __int64 fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  fPending = a1;
  result = InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 1u, (PBOOL)&fPending, &Context);
  if ( result )
  {
    if ( !(_DWORD)fPending )
      return (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)Context + 24LL))(Context, 0LL);
  }
  return result;
}
