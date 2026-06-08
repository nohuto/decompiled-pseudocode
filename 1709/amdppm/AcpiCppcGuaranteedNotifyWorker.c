/*
 * XREFs of AcpiCppcGuaranteedNotifyWorker @ 0x1C001E5A0
 * Callers:
 *     <none>
 * Callees:
 *     CpcGuaranteedNotifyWorker @ 0x1C0024D3C (CpcGuaranteedNotifyWorker.c)
 */

__int64 __fastcall AcpiCppcGuaranteedNotifyWorker(__int64 a1, __int64 a2)
{
  return CpcGuaranteedNotifyWorker(a1, a2, "Notify 0x83");
}
