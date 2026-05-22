/*
 * XREFs of ?AddRef@BamoMPCManagerClientProxy@@UEAAKXZ @ 0x1800031C0
 * Callers:
 *     ?AddRef@WGIRawInputProvider@@WBA@EAAKXZ @ 0x180005230 (-AddRef@WGIRawInputProvider@@WBA@EAAKXZ.c)
 *     ?AddRef@BamoTestCommandsStub@@W7EAAKXZ @ 0x180005270 (-AddRef@BamoTestCommandsStub@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoMPCManagerClientProxy::AddRef(BamoMPCManagerClientProxy *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}
