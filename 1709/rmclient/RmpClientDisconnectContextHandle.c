/*
 * XREFs of RmpClientDisconnectContextHandle @ 0x18000C960
 * Callers:
 *     RmpClientConnectionCleanup @ 0x18000C900 (RmpClientConnectionCleanup.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpClientDisconnectContextHandle(void *a1)
{
  void *ContextHandle; // [rsp+30h] [rbp+8h] BYREF
  CLIENT_CALL_RETURN v2; // [rsp+38h] [rbp+10h]

  ContextHandle = a1;
  v2.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180010B70, 1u, 0LL, &ContextHandle).Pointer;
  if ( ContextHandle )
    RpcSsDestroyClientContext(&ContextHandle);
}
