/*
 * XREFs of IopVerifierExAllocatePool_4 @ 0x1401F6E00
 * Callers:
 *     IopEnumerateEnvironmentVariablesTrEE @ 0x140690A00 (IopEnumerateEnvironmentVariablesTrEE.c)
 *     IopGetEnvironmentVariableSysEnv @ 0x140690E20 (IopGetEnvironmentVariableSysEnv.c)
 *     IopGetEnvironmentVariableTrEE @ 0x140690F70 (IopGetEnvironmentVariableTrEE.c)
 *     IopSetEnvironmentVariableSysEnv @ 0x140691580 (IopSetEnvironmentVariableSysEnv.c)
 *     IopSetEnvironmentVariableTrEE @ 0x140691690 (IopSetEnvironmentVariableTrEE.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall IopVerifierExAllocatePool_4(__int64 a1, SIZE_T a2)
{
  if ( ViVerifierDriverAddedThunkListHead )
    return ExAllocatePoolWithTagPriority(
             PagedPool,
             a2,
             0x20206F49u,
             (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    return ExAllocatePoolWithTag(PagedPool, a2, 0x20206F49u);
}
