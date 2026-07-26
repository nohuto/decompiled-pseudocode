/*
 * XREFs of ndisInitModeTimeoutDpc @ 0x1C0022FD0
 * Callers:
 *     <none>
 * Callees:
 *     ndisScheduleWorkItemInternal @ 0x1C0022FEC (ndisScheduleWorkItemInternal.c)
 */

void __fastcall ndisInitModeTimeoutDpc(
        PVOID SystemSpecific1,
        char *FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  ndisScheduleWorkItemInternal(FunctionContext + 2912);
}
