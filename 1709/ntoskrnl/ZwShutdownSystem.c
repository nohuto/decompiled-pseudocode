/*
 * XREFs of ZwShutdownSystem @ 0x140180E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwShutdownSystem(SHUTDOWN_ACTION Action)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&Action);
}
