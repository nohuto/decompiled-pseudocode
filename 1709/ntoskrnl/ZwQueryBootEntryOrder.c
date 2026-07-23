/*
 * XREFs of ZwQueryBootEntryOrder @ 0x14017FF60
 * Callers:
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x14075536C (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     BiQueryBootEntryOrder @ 0x14077C88C (BiQueryBootEntryOrder.c)
 *     SiGetEspFromFirmware @ 0x14077DC34 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryBootEntryOrder(PULONG Ids, PULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
