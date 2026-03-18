/*
 * XREFs of IopVerifierExAllocatePool_2 @ 0x1401F5D34
 * Callers:
 *     NtQueryEaFile @ 0x14043F120 (NtQueryEaFile.c)
 *     NtSetEaFile @ 0x14068D200 (NtSetEaFile.c)
 * Callees:
 *     <none>
 */

PVOID IopVerifierExAllocatePool_2()
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
