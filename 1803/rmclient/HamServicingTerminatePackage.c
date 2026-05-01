/*
 * XREFs of HamServicingTerminatePackage @ 0x180006680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamServicingTerminatePackage(_QWORD *a1, __int64 a2)
{
  int v3; // [rsp+28h] [rbp-30h]
  int v4; // [rsp+30h] [rbp-28h]

  v4 = 1024;
  v3 = 1;
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800109A0, 6u, 0LL, *a1, a2, v3, v4);
}
