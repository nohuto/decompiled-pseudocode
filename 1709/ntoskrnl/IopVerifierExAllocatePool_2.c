/*
 * XREFs of IopVerifierExAllocatePool_2 @ 0x1401FBB70
 * Callers:
 *     NtSetEaFile @ 0x14044F5E0 (NtSetEaFile.c)
 *     NtQueryEaFile @ 0x140572CD0 (NtQueryEaFile.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140081330 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
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
