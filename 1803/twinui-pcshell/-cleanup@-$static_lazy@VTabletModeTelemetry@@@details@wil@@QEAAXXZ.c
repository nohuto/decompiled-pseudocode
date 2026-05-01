/*
 * XREFs of ?cleanup@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAAXXZ @ 0x1802CFADC
 * Callers:
 *     _lambda_51d33002daa63bfc4d65f85f7f956340_::_lambda_invoker_cdecl_ @ 0x1802C32B0 (_lambda_51d33002daa63bfc4d65f85f7f956340_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??_EImmersiveIconsLogging@@UEAAPEAXI@Z @ 0x18028DC50 (--_EImmersiveIconsLogging@@UEAAPEAXI@Z.c)
 */

unsigned int __fastcall wil::details::static_lazy<TabletModeTelemetry>::cleanup(__int64 a1)
{
  unsigned int result; // eax
  __int64 fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  fPending = a1;
  result = InitOnceBeginInitialize(&`TabletModeTelemetry::Instance'::`2'::wrapper, 1u, (PBOOL)&fPending, &Context);
  if ( result )
  {
    if ( !(_DWORD)fPending )
      return (unsigned int)ImmersiveIconsLogging::`vector deleting destructor'((ImmersiveIconsLogging *)Context, 0);
  }
  return result;
}
