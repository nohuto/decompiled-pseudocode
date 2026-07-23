/*
 * XREFs of ZwEnumerateBootEntries @ 0x1401A8FA0
 * Callers:
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1407BBE3C (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     BiEnumerateBootEntries @ 0x1407E446C (BiEnumerateBootEntries.c)
 *     SiGetEspFromFirmware @ 0x1407E6630 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwEnumerateBootEntries(PVOID Buffer, PULONG BufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Buffer);
}
