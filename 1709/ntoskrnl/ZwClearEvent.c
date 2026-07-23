/*
 * XREFs of ZwClearEvent @ 0x14017E080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwClearEvent(HANDLE EventHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
