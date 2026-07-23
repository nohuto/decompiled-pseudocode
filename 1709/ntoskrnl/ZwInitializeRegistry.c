/*
 * XREFs of ZwInitializeRegistry @ 0x14017F7C0
 * Callers:
 *     NtInitializeRegistry @ 0x1405AD498 (NtInitializeRegistry.c)
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
