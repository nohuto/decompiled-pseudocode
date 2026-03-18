/*
 * XREFs of ZwEnumerateBootEntries @ 0x14017F380
 * Callers:
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x14075536C (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     BiEnumerateBootEntries @ 0x14077BA34 (BiEnumerateBootEntries.c)
 *     SiGetEspFromFirmware @ 0x14077DC34 (SiGetEspFromFirmware.c)
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
