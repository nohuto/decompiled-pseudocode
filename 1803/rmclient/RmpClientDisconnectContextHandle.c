/*
 * XREFs of RmpClientDisconnectContextHandle @ 0x18000C2D4
 * Callers:
 *     RmpClientConnectionCleanup @ 0x18000C1DC (RmpClientConnectionCleanup.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpClientDisconnectContextHandle(void *a1)
{
  void *ContextHandle; // [rsp+30h] [rbp+8h] BYREF
  CLIENT_CALL_RETURN v2; // [rsp+38h] [rbp+10h]

  ContextHandle = a1;
  v2.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800108D8, 1u, 0LL, &ContextHandle).Pointer;
  if ( ContextHandle )
    RpcSsDestroyClientContext(&ContextHandle);
}
