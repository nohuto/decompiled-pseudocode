/*
 * XREFs of CpcNativeInterruptWorker @ 0x1C0029620
 * Callers:
 *     <none>
 * Callees:
 *     CpcGuaranteedNotifyWorker @ 0x1C00291B0 (CpcGuaranteedNotifyWorker.c)
 */

void __fastcall CpcNativeInterruptWorker(__int64 DeviceObject, struct _IO_WORKITEM *Context)
{
  CpcGuaranteedNotifyWorker(DeviceObject, Context, "Native Interrupt");
}
