/*
 * XREFs of RtlSetTimer @ 0x18010B2B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __cdecl RtlSetTimer(
        HANDLE TimerQueueHandle,
        PHANDLE Handle,
        WAITORTIMERCALLBACKFUNC Function,
        PVOID Context,
        ULONG DueTime,
        ULONG Period,
        ULONG Flags)
{
  return RtlCreateTimer(TimerQueueHandle, Handle, Function, Context, DueTime, Period, Flags);
}
