/*
 * XREFs of ACPIDispatchPowerIrpSuccess @ 0x1C004BE80
 * Callers:
 *     ACPIDockIrpQueryPower @ 0x1C00426A0 (ACPIDockIrpQueryPower.c)
 *     ACPIDockIrpSetSystemPower @ 0x1C0042A14 (ACPIDockIrpSetSystemPower.c)
 *     ACPIBusIrpQueryPower @ 0x1C0045EA0 (ACPIBusIrpQueryPower.c)
 *     ACPIBusIrpSetSystemPower @ 0x1C00462EC (ACPIBusIrpSetSystemPower.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIDispatchPowerIrpSuccess(__int64 a1, IRP *a2)
{
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 259LL;
}
