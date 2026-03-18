/*
 * XREFs of IopVerifierExAllocatePool_3 @ 0x1401F65E4
 * Callers:
 *     IopErrorLogThread @ 0x1405812A0 (IopErrorLogThread.c)
 *     IopErrorLogQueueRequest @ 0x140690160 (IopErrorLogQueueRequest.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall IopVerifierExAllocatePool_3(POOL_TYPE a1, SIZE_T a2)
{
  if ( ViVerifierDriverAddedThunkListHead )
    return ExAllocatePoolWithTagPriority(a1, a2, 0x20206F49u, (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    return ExAllocatePoolWithTag(a1, a2, 0x20206F49u);
}
