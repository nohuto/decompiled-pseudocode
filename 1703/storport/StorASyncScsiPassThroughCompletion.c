/*
 * XREFs of StorASyncScsiPassThroughCompletion @ 0x1C002FB40
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C00661B4 (PortPassThroughExSendAsync.c)
 *     PortPassThroughSendAsync @ 0x1C0066750 (PortPassThroughSendAsync.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorASyncScsiPassThroughCompletion(IRP *a1)
{
  return RaidCompleteRequestEx(a1, 0, a1->IoStatus.Status);
}
