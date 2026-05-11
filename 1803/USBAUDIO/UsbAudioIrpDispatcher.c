/*
 * XREFs of UsbAudioIrpDispatcher @ 0x1C0017EC0
 * Callers:
 *     <none>
 * Callees:
 *     IsSidebandIrp @ 0x1C0006E64 (IsSidebandIrp.c)
 *     SidebandDispatchIrp @ 0x1C0007050 (SidebandDispatchIrp.c)
 */

NTSTATUS __fastcall UsbAudioIrpDispatcher(PDEVICE_OBJECT FunctionalDeviceObject, struct _IRP *a2)
{
  if ( (unsigned int)IsSidebandIrp(FunctionalDeviceObject, (__int64)a2) )
    return SidebandDispatchIrp(FunctionalDeviceObject, a2);
  else
    return KsDispatchIrp(FunctionalDeviceObject, a2);
}
