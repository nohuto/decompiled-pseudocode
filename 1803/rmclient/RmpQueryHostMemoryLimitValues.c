/*
 * XREFs of RmpQueryHostMemoryLimitValues @ 0x18000C394
 * Callers:
 *     RmQueryHostMemoryLimitValues @ 0x18000BF40 (RmQueryHostMemoryLimitValues.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall RmpQueryHostMemoryLimitValues(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800108D8, 8u, 0LL, a1, a2, a3, a4);
}
