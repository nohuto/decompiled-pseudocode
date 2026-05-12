/*
 * XREFs of StorASyncScsiPassThroughCompletion @ 0x1C002BFE0
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C00689F0 (PortPassThroughExSendAsync.c)
 *     PortPassThroughSendAsync @ 0x1C0068F98 (PortPassThroughSendAsync.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall StorASyncScsiPassThroughCompletion(IRP *a1)
{
  return RaidCompleteRequestEx(a1, 0, a1->IoStatus.Status);
}
