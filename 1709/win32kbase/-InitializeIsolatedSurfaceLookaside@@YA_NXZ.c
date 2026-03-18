/*
 * XREFs of ?InitializeIsolatedSurfaceLookaside@@YA_NXZ @ 0x1C00A9D28
 * Callers:
 *     HmgCreate @ 0x1C006F330 (HmgCreate.c)
 * Callees:
 *     <none>
 */

bool InitializeIsolatedSurfaceLookaside(void)
{
  struct _LOOKASIDE_LIST_EX *PoolWithTag; // rax

  PoolWithTag = (struct _LOOKASIDE_LIST_EX *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x60uLL, 0x35306847u);
  g_pIsolatedSurfaceLookaside = &PoolWithTag->L.ListHead;
  if ( PoolWithTag )
    LOBYTE(PoolWithTag) = ExInitializeLookasideListEx(
                            PoolWithTag,
                            IsolatedSurfaceLookasideListAllocateEx,
                            IsolatedSurfaceLookasideListFreeEx,
                            PagedPoolSession,
                            2u,
                            0x278uLL,
                            0x35306847u,
                            0x100u) >= 0;
  return (char)PoolWithTag;
}
