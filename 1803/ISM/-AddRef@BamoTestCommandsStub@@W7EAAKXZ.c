/*
 * XREFs of ?AddRef@BamoTestCommandsStub@@W7EAAKXZ @ 0x180005270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoTestCommandsStub::AddRef(__int64 a1)
{
  return BamoMPCManagerClientProxy::AddRef((BamoMPCManagerClientProxy *)(a1 - 8));
}
