/*
 * XREFs of ?AddRef@WGIRawInputProvider@@WBA@EAAKXZ @ 0x180005230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WGIRawInputProvider::AddRef(__int64 a1)
{
  return BamoMPCManagerClientProxy::AddRef((BamoMPCManagerClientProxy *)(a1 - 16));
}
