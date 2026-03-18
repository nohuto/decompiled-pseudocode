/*
 * XREFs of IopVerifierExAllocatePool_0 @ 0x1400325BC
 * Callers:
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall IopVerifierExAllocatePool_0(POOL_TYPE a1, SIZE_T a2)
{
  if ( ViVerifierDriverAddedThunkListHead )
    return ExAllocatePoolWithTagPriority(a1, a2, 0x20206F49u, (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    return ExAllocatePoolWithTag(a1, a2, 0x20206F49u);
}
