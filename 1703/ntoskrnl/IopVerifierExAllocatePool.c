/*
 * XREFs of IopVerifierExAllocatePool @ 0x140031B44
 * Callers:
 *     NtQueryVolumeInformationFile @ 0x1404812E0 (NtQueryVolumeInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x140574C30 (NtSetVolumeInformationFile.c)
 * Callees:
 *     <none>
 */

PVOID IopVerifierExAllocatePool()
{
  if ( ViVerifierDriverAddedThunkListHead )
    return ExAllocatePoolWithTagPriority(
             NonPagedPoolNx,
             0x18uLL,
             0x20206F49u,
             (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    return ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x20206F49u);
}
