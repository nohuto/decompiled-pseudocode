/*
 * XREFs of ZwCreateIRTimer @ 0x14017ED60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateIRTimer(PHANDLE TimerHandle, ACCESS_MASK DesiredAccess)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle);
}
