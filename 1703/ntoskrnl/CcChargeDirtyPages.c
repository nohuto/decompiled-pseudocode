/*
 * XREFs of CcChargeDirtyPages @ 0x1400AD3C8
 * Callers:
 *     CcSetDirtyInMask @ 0x1400A2DB0 (CcSetDirtyInMask.c)
 *     CcSetDirtyPinnedData @ 0x140118BA0 (CcSetDirtyPinnedData.c)
 *     CcAddDirtyPagesToExternalCache @ 0x1401512C0 (CcAddDirtyPagesToExternalCache.c)
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x140118B04 (CcScheduleLazyWriteScan.c)
 */

__int64 __fastcall CcChargeDirtyPages(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _QWORD *v4; // rbx

  if ( a1 )
    v4 = *(_QWORD **)(a1 + 528);
  else
    v4 = &CcSystemPartition;
  v4[84] += a4;
  if ( a2 )
    *(_DWORD *)(a2 + 8) += a4;
  if ( a3 )
    *(_DWORD *)(a3 + 32) += a4;
  if ( a1 )
  {
    *(_DWORD *)(a1 + 112) += a4;
    *(_QWORD *)(*(_QWORD *)(a1 + 504) + 32LL) += a4;
    if ( (*(_DWORD *)(a1 + 152) & 0x1000000) != 0 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 240) + 24LL) += a4;
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 240) + 136LL) == -1LL )
        *(_QWORD *)(*(_QWORD *)(a1 + 240) + 136LL) = MEMORY[0xFFFFF78000000320];
    }
  }
  if ( CcCoalescingState && v4[84] >= 0x2000uLL )
  {
    LOBYTE(a2) = 1;
    CcScheduleLazyWriteScan(v4, a2, 0LL);
  }
  if ( *((_BYTE *)v4 + 268) )
  {
    CcScheduleLazyWriteScan(v4, 0LL, 0LL);
    *((_BYTE *)v4 + 268) = 0;
  }
  return CcAdjustWriteBehindThreadPoolIfNeeded(v4, 0LL);
}
