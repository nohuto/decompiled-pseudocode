/*
 * XREFs of CpcNativeInterruptWorker @ 0x1C0021B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CpcNativeInterruptWorker(__int64 a1, __int64 a2)
{
  return CpcGuaranteedNotifyWorker(a1, a2, "Native Interrupt");
}
