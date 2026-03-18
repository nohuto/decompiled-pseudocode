/*
 * XREFs of MiContractWsSwapPageFile @ 0x1404C90EC
 * Callers:
 *     MmInSwapWorkingSet @ 0x14007D3E4 (MmInSwapWorkingSet.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14021A770 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MmCleanProcessAddressSpace @ 0x14047ABC0 (MmCleanProcessAddressSpace.c)
 *     MmInSwapVirtualAddresses @ 0x1406BF65C (MmInSwapVirtualAddresses.c)
 * Callees:
 *     MiWsSwapPageFileNumber @ 0x14007D3A8 (MiWsSwapPageFileNumber.c)
 *     MiNumberWsSwapPagefiles @ 0x140083F14 (MiNumberWsSwapPagefiles.c)
 */

void __fastcall MiContractWsSwapPageFile(__int64 a1)
{
  __int64 v1; // r11
  unsigned int v2; // eax
  __int64 v3; // r11
  _QWORD *v4; // rcx

  if ( (unsigned int)MiNumberWsSwapPagefiles(a1) )
  {
    v2 = MiWsSwapPageFileNumber(v1);
    v4 = *(_QWORD **)(v3 + 8LL * v2 + 5600);
    if ( v4[3] >= 0x10000uLL
      && v4[6] >= 0x10000uLL
      && (unsigned __int64)(*v4 - 0x10000LL) >= v4[2]
      && !_InterlockedCompareExchange((volatile signed __int32 *)(v3 + 1152), 1, 0) )
    {
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v3 + 1120), NormalWorkQueue);
    }
  }
}
