/*
 * XREFs of wil::details::ScopeExitFn__lambda_46818ec810044a4765cde12cca0092dd___::_ScopeExitFn__lambda_46818ec810044a4765cde12cca0092dd___ @ 0x180099D44
 * Callers:
 *     _BuildDeviceGraphForStream_::_1_::dtor$2 @ 0x1800690C8 (_BuildDeviceGraphForStream_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

RPC_STATUS __fastcall wil::details::ScopeExitFn__lambda_46818ec810044a4765cde12cca0092dd___::_ScopeExitFn__lambda_46818ec810044a4765cde12cca0092dd___(
        __int64 a1)
{
  RPC_STATUS result; // eax

  if ( *(_BYTE *)(a1 + 1) )
  {
    *(_BYTE *)(a1 + 1) = 0;
    return RpcRevertToSelf();
  }
  return result;
}
