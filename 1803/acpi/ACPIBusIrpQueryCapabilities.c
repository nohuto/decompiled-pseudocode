/*
 * XREFs of ACPIBusIrpQueryCapabilities @ 0x1C0076E40
 * Callers:
 *     <none>
 * Callees:
 *     ACPIIrpInvokeDispatchRoutine @ 0x1C00740FC (ACPIIrpInvokeDispatchRoutine.c)
 */

__int64 __fastcall ACPIBusIrpQueryCapabilities(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  return ACPIIrpInvokeDispatchRoutine(
           a1,
           a2,
           a3,
           (__int64 (__fastcall *)(ULONG_PTR, IRP *, _QWORD, _QWORD))ACPIBusAndFilterIrpQueryCapabilities,
           1);
}
