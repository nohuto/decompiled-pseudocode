/*
 * XREFs of ?AudioDGRpcIfCallback@@YAJPEAX0@Z @ 0x14001B950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioDGRpcIfCallback(void *a1, void *a2)
{
  unsigned int Type; // [rsp+40h] [rbp+18h] BYREF

  if ( I_RpcBindingInqTransportType(a2, &Type) )
    return 5LL;
  else
    return Type != 4 ? 5 : 0;
}
