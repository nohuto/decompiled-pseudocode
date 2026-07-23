/*
 * XREFs of ZwInitiatePowerAction @ 0x1401A9400
 * Callers:
 *     PoShutdownBugCheck @ 0x140762AF0 (PoShutdownBugCheck.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwInitiatePowerAction(
        POWER_ACTION SystemAction,
        SYSTEM_POWER_STATE MinSystemState,
        ULONG Flags,
        BOOLEAN Asynchronous)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&SystemAction);
}
