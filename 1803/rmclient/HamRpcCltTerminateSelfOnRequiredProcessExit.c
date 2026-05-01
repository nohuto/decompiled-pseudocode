/*
 * XREFs of HamRpcCltTerminateSelfOnRequiredProcessExit @ 0x180007A34
 * Callers:
 *     HamTerminateSelfOnProcessExit @ 0x18000D310 (HamTerminateSelfOnProcessExit.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamRpcCltTerminateSelfOnRequiredProcessExit(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned __int8 a4)
{
  int v6; // [rsp+30h] [rbp-18h]

  v6 = a4;
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800108A8, 0xCu, 0LL, a1, a2, a3, v6);
}
