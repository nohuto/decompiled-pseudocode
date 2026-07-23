/*
 * XREFs of ZwInitializeRegistry @ 0x1401A93E0
 * Callers:
 *     NtInitializeRegistry @ 0x14061371C (NtInitializeRegistry.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwInitializeRegistry(USHORT Flag)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Flag);
}
