/*
 * XREFs of ZwSetTimerResolution @ 0x140180D80
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x14000DDE8 (ExCleanTimerResolutionRequest.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetTimerResolution(ULONG RequestedResolution, BOOLEAN SetOrUnset, PULONG ActualResolution)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&RequestedResolution);
}
