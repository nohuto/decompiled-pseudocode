/*
 * XREFs of CpcNativeInterruptWorker @ 0x1C0025E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CpcNativeInterruptWorker(__int64 a1, struct _IO_WORKITEM *a2)
{
  return CpcGuaranteedNotifyWorker(a1, a2, "Native Interrupt");
}
