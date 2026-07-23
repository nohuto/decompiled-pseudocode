/*
 * XREFs of MiReplenishTransitionPageHeatList @ 0x140259210
 * Callers:
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MmCopyToCachedPage @ 0x1401130D0 (MmCopyToCachedPage.c)
 *     MmCheckCachedPageStates @ 0x14011E3C0 (MmCheckCachedPageStates.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

void MiReplenishTransitionPageHeatList()
{
  _SLIST_ENTRY *PoolWithTag; // rax

  while ( LOWORD(stru_1403CC110.Alignment) < 0x40u )
  {
    PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x6C486D4Du);
    if ( !PoolWithTag )
    {
      _InterlockedExchange(&dword_1403CC120, 32);
      return;
    }
    RtlpInterlockedPushEntrySList(&stru_1403CC110, PoolWithTag);
  }
}
