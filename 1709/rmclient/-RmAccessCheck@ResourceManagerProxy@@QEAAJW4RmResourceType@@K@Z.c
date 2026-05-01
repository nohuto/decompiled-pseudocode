/*
 * XREFs of ?RmAccessCheck@ResourceManagerProxy@@QEAAJW4RmResourceType@@K@Z @ 0x1800012E8
 * Callers:
 *     RmAccessCheck @ 0x1800012B0 (RmAccessCheck.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ResourceManagerProxy::RmAccessCheck(__int64 a1, int a2, int a3)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 3u, 0LL, *(_QWORD *)(a1 + 16), a2, a3);
}
