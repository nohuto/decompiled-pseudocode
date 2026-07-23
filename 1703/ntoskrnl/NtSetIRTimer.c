/*
 * XREFs of NtSetIRTimer @ 0x14003C914
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetIRTimer(HANDLE TimerHandle, PLARGE_INTEGER DueTime)
{
  return ExpSetTimer2(TimerHandle);
}
