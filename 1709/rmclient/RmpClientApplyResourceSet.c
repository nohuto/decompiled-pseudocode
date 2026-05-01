/*
 * XREFs of RmpClientApplyResourceSet @ 0x180006060
 * Callers:
 *     RmApplyResourceSet @ 0x180006050 (RmApplyResourceSet.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall RmpClientApplyResourceSet(__int64 a1, __int64 a2)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180010B70, 5u, 0LL, *(_QWORD *)(a1 + 16), a2);
}
