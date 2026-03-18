/*
 * XREFs of MiContractWsSwapPageFile @ 0x140444648
 * Callers:
 *     MmInSwapWorkingSet @ 0x140003E0C (MmInSwapWorkingSet.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140226E40 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MmCleanProcessAddressSpace @ 0x1404D2F70 (MmCleanProcessAddressSpace.c)
 *     MmInSwapVirtualAddresses @ 0x1406EC92C (MmInSwapVirtualAddresses.c)
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x140023404 (ExQueueWorkItemToPartition.c)
 *     MiNumberWsSwapPagefiles @ 0x1400F0408 (MiNumberWsSwapPagefiles.c)
 *     MiWsSwapPageFileNumber @ 0x14012BD8C (MiWsSwapPageFileNumber.c)
 */

unsigned __int64 __fastcall MiContractWsSwapPageFile(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // r11
  __int64 v3; // r11
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  unsigned __int64 v6; // rtt

  result = MiNumberWsSwapPagefiles(a1);
  if ( (_DWORD)result )
  {
    result = MiWsSwapPageFileNumber(v2);
    v4 = *(_QWORD **)(v3 + 8LL * (unsigned int)result + 5792);
    if ( v4[3] >= 0x10000uLL && v4[6] >= 0x10000uLL )
    {
      result = *v4 - 0x10000LL;
      if ( result >= v4[2] )
      {
        result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v3 + 1104), 1, 0);
        if ( !(_DWORD)result )
        {
          v5 = *(_QWORD *)(v3 + 168);
          _m_prefetchw((const void *)(v5 + 24));
          result = *(_QWORD *)(v5 + 24);
          while ( result + 1 > 1 )
          {
            v6 = result;
            result = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 24), result + 1, result);
            if ( v6 == result )
              return ExQueueWorkItemToPartition(v3 + 1072, 3, 0xFFFFFFFF, *(_QWORD *)(v3 + 168));
          }
          if ( result )
            __fastfail(0xEu);
          _InterlockedExchange((volatile __int32 *)(v3 + 1104), 0);
        }
      }
    }
  }
  return result;
}
