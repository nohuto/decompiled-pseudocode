/*
 * XREFs of CpcNativeInterruptWorker @ 0x1C0024D20
 * Callers:
 *     <none>
 * Callees:
 *     CpcGuaranteedNotifyWorker @ 0x1C0024D3C (CpcGuaranteedNotifyWorker.c)
 */

void __fastcall CpcNativeInterruptWorker(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  CpcGuaranteedNotifyWorker(DeviceObject, Context, "Native Interrupt");
}
