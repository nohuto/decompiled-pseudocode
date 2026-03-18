/*
 * XREFs of ACPIFilterIrpQueryCapabilities @ 0x1C00928D0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIIrpSetPagableCompletionRoutineAndForward @ 0x1C00928FC (ACPIIrpSetPagableCompletionRoutineAndForward.c)
 */

__int64 __fastcall ACPIFilterIrpQueryCapabilities(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  return ACPIIrpSetPagableCompletionRoutineAndForward(a1, a2, 1, 1, 0);
}
