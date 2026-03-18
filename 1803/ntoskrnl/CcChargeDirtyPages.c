/*
 * XREFs of CcChargeDirtyPages @ 0x1400E3214
 * Callers:
 *     CcSetDirtyPinnedData @ 0x1400E2C90 (CcSetDirtyPinnedData.c)
 *     CcAddDirtyPagesToExternalCache @ 0x14015BC70 (CcAddDirtyPagesToExternalCache.c)
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x1400DAE70 (CcScheduleLazyWriteScan.c)
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1400E3DD0 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 */

__int64 __fastcall CcChargeDirtyPages(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // rsi
  __int64 Partition; // rbx

  v4 = a4;
  if ( a1 )
    Partition = CcGetPartition((_QWORD *)a1, a2);
  else
    Partition = *((_QWORD *)PspSystemPartition + 1);
  *(_QWORD *)(Partition + 600) += v4;
  if ( a2 )
    *(_DWORD *)(a2 + 8) += v4;
  if ( a3 )
    *(_DWORD *)(a3 + 32) += v4;
  if ( a1 )
  {
    *(_DWORD *)(a1 + 112) += v4;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 504) + 32LL), v4);
    if ( (*(_DWORD *)(a1 + 152) & 0x1000000) != 0 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 240) + 24LL), v4);
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 240) + 136LL) == -1LL )
        *(_QWORD *)(*(_QWORD *)(a1 + 240) + 136LL) = MEMORY[0xFFFFF78000000320];
    }
  }
  if ( *(_BYTE *)(Partition + 900) && *(_QWORD *)(Partition + 600) >= 0x2000uLL )
    CcScheduleLazyWriteScan(Partition, 1, 0);
  if ( *(_BYTE *)(Partition + 140) )
  {
    CcScheduleLazyWriteScan(Partition, 0, 0);
    *(_BYTE *)(Partition + 140) = 0;
  }
  return CcAdjustWriteBehindThreadPoolIfNeeded(Partition, 0LL, a3);
}
