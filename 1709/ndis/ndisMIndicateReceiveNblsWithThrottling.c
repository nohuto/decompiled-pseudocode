/*
 * XREFs of ndisMIndicateReceiveNblsWithThrottling @ 0x1C006A120
 * Callers:
 *     <none>
 * Callees:
 *     ndisMIndicateSplitNblChain @ 0x1C006A170 (ndisMIndicateSplitNblChain.c)
 *     ndisMQueueReceiveNetBufferLists @ 0x1C006A864 (ndisMQueueReceiveNetBufferLists.c)
 *     ndisPeriodicReceivesGetMaxNblCount @ 0x1C006A8EC (ndisPeriodicReceivesGetMaxNblCount.c)
 */

__int64 __fastcall ndisMIndicateReceiveNblsWithThrottling(
        struct _NDIS_MINIPORT_BLOCK *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  int MaxNblCount; // eax
  int v7; // r8d
  int v8; // r9d
  int v9; // r10d
  int v10; // r11d

  if ( (a5 & 1) != 0 || KeGetCurrentIrql() )
    return ndisMQueueReceiveNetBufferLists(a1, a5);
  MaxNblCount = ndisPeriodicReceivesGetMaxNblCount();
  return ndisMIndicateSplitNblChain(v9, a2, v7, v8, v10, MaxNblCount);
}
