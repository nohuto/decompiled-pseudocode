/*
 * XREFs of ndisPdcTaskClientDisableTimeoutDpc @ 0x1C004AEE0
 * Callers:
 *     <none>
 * Callees:
 *     ndisScheduleWorkItemInternal @ 0x1C001A1A0 (ndisScheduleWorkItemInternal.c)
 */

void __fastcall ndisPdcTaskClientDisableTimeoutDpc(
        PVOID SystemSpecific1,
        PVOID FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  ndisScheduleWorkItemInternal((__int64)FunctionContext + 5672);
}
