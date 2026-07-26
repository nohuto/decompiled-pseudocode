/*
 * XREFs of ndisInitModeTimeoutDpc @ 0x1C001D8C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisInitModeTimeoutDpc(
        PVOID SystemSpecific1,
        char *FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  ndisScheduleWorkItemInternal(FunctionContext + 2912);
}
