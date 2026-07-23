/*
 * XREFs of ZwAlpcDeletePortSection @ 0x14017E860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcDeletePortSection(HANDLE PortHandle, ULONG Flags, ALPC_HANDLE SectionHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
