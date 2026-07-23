/*
 * XREFs of ZwQueryBootEntryOrder @ 0x1401805A0
 * Callers:
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x140715C44 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     BiQueryBootEntryOrder @ 0x140738214 (BiQueryBootEntryOrder.c)
 *     SiGetEspFromFirmware @ 0x1407393DC (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryBootEntryOrder(PULONG Ids, PULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
