/*
 * XREFs of IoGetConfigurationInformation @ 0x14059BB80
 * Callers:
 *     IopCreateArcNamesCd @ 0x1407F6A7C (IopCreateArcNamesCd.c)
 *     IopCreateArcNamesDisk @ 0x1407F872C (IopCreateArcNamesDisk.c)
 *     IopGetBootDiskInformation @ 0x140832E04 (IopGetBootDiskInformation.c)
 *     VhdiInitializeBootDisk @ 0x1408365E0 (VhdiInitializeBootDisk.c)
 * Callees:
 *     <none>
 */

PCONFIGURATION_INFORMATION IoGetConfigurationInformation(void)
{
  return (PCONFIGURATION_INFORMATION)&dword_1407AC6B0;
}
