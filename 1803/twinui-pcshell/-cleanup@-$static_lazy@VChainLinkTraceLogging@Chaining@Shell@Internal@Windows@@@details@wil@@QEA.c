/*
 * XREFs of ?cleanup@?$static_lazy@VChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@@details@wil@@QEAAXXZ @ 0x18013239C
 * Callers:
 *     _lambda_75f51455afdd6deeb34ec28b1e80a524_::_lambda_invoker_cdecl_ @ 0x18012C240 (_lambda_75f51455afdd6deeb34ec28b1e80a524_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??_GLockScreenServiceLogging@@UEAAPEAXI@Z @ 0x18016B170 (--_GLockScreenServiceLogging@@UEAAPEAXI@Z.c)
 */

unsigned int __fastcall wil::details::static_lazy<Windows::Internal::Shell::Chaining::ChainLinkTraceLogging>::cleanup(
        __int64 a1)
{
  unsigned int result; // eax
  __int64 fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  fPending = a1;
  result = InitOnceBeginInitialize(
             &`Windows::Internal::Shell::Chaining::ChainLinkTraceLogging::Instance'::`2'::wrapper,
             1u,
             (PBOOL)&fPending,
             &Context);
  if ( result )
  {
    if ( !(_DWORD)fPending )
      return (unsigned int)LockScreenServiceLogging::`scalar deleting destructor'(
                             (LockScreenServiceLogging *)Context,
                             0);
  }
  return result;
}
