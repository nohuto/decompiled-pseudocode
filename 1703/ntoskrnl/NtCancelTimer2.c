/*
 * XREFs of NtCancelTimer2 @ 0x14003B624
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCancelTimer2(HANDLE TimerHandle, PT2_CANCEL_PARAMETERS Parameters)
{
  return ExpSetTimer2(TimerHandle);
}
