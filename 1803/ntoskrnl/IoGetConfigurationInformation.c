/*
 * XREFs of IoGetConfigurationInformation @ 0x140605F90
 * Callers:
 *     IopCreateArcNamesDisk @ 0x1408C4C90 (IopCreateArcNamesDisk.c)
 *     IopCreateArcNamesCd @ 0x1408C4DE0 (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x1408DE714 (IopGetBootDiskInformation.c)
 *     VhdiInitializeBootDisk @ 0x1408E2570 (VhdiInitializeBootDisk.c)
 * Callees:
 *     <none>
 */

PCONFIGURATION_INFORMATION IoGetConfigurationInformation(void)
{
  return (PCONFIGURATION_INFORMATION)&dword_1408617B0;
}
