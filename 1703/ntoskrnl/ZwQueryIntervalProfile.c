/*
 * XREFs of ZwQueryIntervalProfile @ 0x1401807C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryIntervalProfile(KPROFILE_SOURCE ProfileSource, PULONG Interval)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&ProfileSource);
}
