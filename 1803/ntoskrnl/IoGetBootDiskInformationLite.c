/*
 * XREFs of IoGetBootDiskInformationLite @ 0x14062AC10
 * Callers:
 *     <none>
 * Callees:
 *     IopGetBootDiskInformationLite @ 0x1408A9998 (IopGetBootDiskInformationLite.c)
 */

NTSTATUS __stdcall IoGetBootDiskInformationLite(PBOOTDISK_INFORMATION_LITE *BootDiskInformation)
{
  if ( (unsigned int)InitializationPhase >= 2 )
    return -1073741431;
  else
    return IopGetBootDiskInformationLite(BootDiskInformation);
}
