/*
 * XREFs of StorASyncScsiPassThroughCompletion @ 0x1C0030950
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C0069B00 (PortPassThroughExSendAsync.c)
 *     PortPassThroughSendAsync @ 0x1C006A0A4 (PortPassThroughSendAsync.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall StorASyncScsiPassThroughCompletion(IRP *a1)
{
  return RaidCompleteRequestEx(a1, 0, a1->IoStatus.Status);
}
