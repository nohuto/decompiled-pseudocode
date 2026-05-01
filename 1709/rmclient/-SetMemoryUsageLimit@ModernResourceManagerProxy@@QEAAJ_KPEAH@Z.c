/*
 * XREFs of ?SetMemoryUsageLimit@ModernResourceManagerProxy@@QEAAJ_KPEAH@Z @ 0x18000CFF0
 * Callers:
 *     ?TrySetAppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJ_KPEAE@Z @ 0x18000C6A0 (-TrySetAppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJ_KPEAE@Z.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ModernResourceManagerProxy::SetMemoryUsageLimit(
        ModernResourceManagerProxy *this,
        __int64 a2,
        int *a3)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 1u, 0LL, *((_QWORD *)this + 2), a2, a3);
}
