/*
 * XREFs of ZwEnumerateBootEntries @ 0x14017F9E0
 * Callers:
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x140715C44 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     BiEnumerateBootEntries @ 0x14073747C (BiEnumerateBootEntries.c)
 *     SiGetEspFromFirmware @ 0x1407393DC (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwEnumerateBootEntries(PVOID Buffer, PULONG BufferLength)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(Buffer, BufferLength, v2);
}
