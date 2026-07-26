/*
 * XREFs of ndisPdcTaskClientDisableTimeoutDpc @ 0x1C004C690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisPdcTaskClientDisableTimeoutDpc(
        PVOID SystemSpecific1,
        PVOID FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  ndisScheduleWorkItemInternal((__int64)FunctionContext + 5752);
}
