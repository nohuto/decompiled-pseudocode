/*
 * XREFs of IopVerifierExAllocatePool_4 @ 0x1401FCC48
 * Callers:
 *     IopEnumerateEnvironmentVariablesTrEE @ 0x1406BC6F0 (IopEnumerateEnvironmentVariablesTrEE.c)
 *     IopGetEnvironmentVariableSysEnv @ 0x1406BCB60 (IopGetEnvironmentVariableSysEnv.c)
 *     IopGetEnvironmentVariableTrEE @ 0x1406BCCB0 (IopGetEnvironmentVariableTrEE.c)
 *     IopSetEnvironmentVariableSysEnv @ 0x1406BD2D0 (IopSetEnvironmentVariableSysEnv.c)
 *     IopSetEnvironmentVariableTrEE @ 0x1406BD3E0 (IopSetEnvironmentVariableTrEE.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140081330 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
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
