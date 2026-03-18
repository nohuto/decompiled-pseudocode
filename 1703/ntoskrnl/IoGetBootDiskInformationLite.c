/*
 * XREFs of IoGetBootDiskInformationLite @ 0x1405A3370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoGetBootDiskInformationLite(PBOOTDISK_INFORMATION_LITE *BootDiskInformation)
{
  if ( (unsigned int)InitializationPhase < 2 )
    return IopGetBootDiskInformationLite(BootDiskInformation);
  else
    return -1073741431;
}
