/*
 * XREFs of ndisInitModeTimeoutDpc @ 0x1C0016F90
 * Callers:
 *     <none>
 * Callees:
 *     ndisScheduleWorkItemInternal @ 0x1C001A1A0 (ndisScheduleWorkItemInternal.c)
 */

void __fastcall ndisInitModeTimeoutDpc(
        PVOID SystemSpecific1,
        char *FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  ndisScheduleWorkItemInternal(FunctionContext + 2912);
}
