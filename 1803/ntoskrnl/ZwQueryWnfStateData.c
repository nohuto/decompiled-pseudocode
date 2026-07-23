/*
 * XREFs of ZwQueryWnfStateData @ 0x1401AA020
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x14028E630 (RtlRaiseCustomSystemEventTrigger.c)
 *     PopBatteryWorker @ 0x140610630 (PopBatteryWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryWnfStateData(
        PCWNF_STATE_NAME StateName,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        PWNF_CHANGE_STAMP ChangeStamp,
        PVOID Buffer,
        PULONG BufferSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(StateName);
}
