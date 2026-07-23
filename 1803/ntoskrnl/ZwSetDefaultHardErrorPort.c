/*
 * XREFs of ZwSetDefaultHardErrorPort @ 0x1401AA560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetDefaultHardErrorPort(HANDLE PortHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
