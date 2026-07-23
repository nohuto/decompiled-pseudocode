/*
 * XREFs of ZwRegisterThreadTerminatePort @ 0x140180520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRegisterThreadTerminatePort(HANDLE TerminationPort)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TerminationPort);
}
