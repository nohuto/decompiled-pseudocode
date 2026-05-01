/*
 * XREFs of HamTerminateSelfOnProcessExit @ 0x18000D310
 * Callers:
 *     <none>
 * Callees:
 *     HamRpcCltTerminateSelfOnRequiredProcessExit @ 0x180007A34 (HamRpcCltTerminateSelfOnRequiredProcessExit.c)
 */

CLIENT_CALL_RETURN __fastcall HamTerminateSelfOnProcessExit(__int64 *a1, __int64 a2, int a3, unsigned __int8 a4)
{
  return HamRpcCltTerminateSelfOnRequiredProcessExit(*a1, a2, a3, a4);
}
