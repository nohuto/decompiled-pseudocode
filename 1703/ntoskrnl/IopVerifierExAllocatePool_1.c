/*
 * XREFs of IopVerifierExAllocatePool_1 @ 0x14004B4A8
 * Callers:
 *     IopAllocateFileObjectExtension @ 0x1400478A0 (IopAllocateFileObjectExtension.c)
 *     IopSetLockOperationProcess @ 0x14004F2B0 (IopSetLockOperationProcess.c)
 *     IopGetSetSpecificExtension @ 0x140050EF0 (IopGetSetSpecificExtension.c)
 *     NtUnlockFile @ 0x14043BA90 (NtUnlockFile.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall IopVerifierExAllocatePool_1(__int64 a1, SIZE_T a2)
{
  if ( ViVerifierDriverAddedThunkListHead )
    return ExAllocatePoolWithTagPriority(
             NonPagedPoolNx,
             a2,
             0x20206F49u,
             (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    return ExAllocatePoolWithTag(NonPagedPoolNx, a2, 0x20206F49u);
}
