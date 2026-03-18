/*
 * XREFs of IoGetConfigurationInformation @ 0x1405E54C0
 * Callers:
 *     IopCreateArcNamesDisk @ 0x1408454C4 (IopCreateArcNamesDisk.c)
 *     IopCreateArcNamesCd @ 0x140851E2C (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x140869F24 (IopGetBootDiskInformation.c)
 *     VhdiInitializeBootDisk @ 0x14086D810 (VhdiInitializeBootDisk.c)
 * Callees:
 *     <none>
 */

PCONFIGURATION_INFORMATION IoGetConfigurationInformation(void)
{
  return (PCONFIGURATION_INFORMATION)&dword_1407F3710;
}
