/*
 * XREFs of CcScheduleLazyWriteScan @ 0x14001E568
 * Callers:
 *     CcSetDirtyPinnedData @ 0x14001B660 (CcSetDirtyPinnedData.c)
 *     CcChargeDirtyPages @ 0x14001BBB4 (CcChargeDirtyPages.c)
 *     CcSetDirtyInMask @ 0x14001DA30 (CcSetDirtyInMask.c)
 *     CcDecrementOpenCount @ 0x14006365C (CcDecrementOpenCount.c)
 *     CcInitializeCacheMapEx @ 0x1400636F0 (CcInitializeCacheMapEx.c)
 *     CcUninitializeCacheMap @ 0x140066BF0 (CcUninitializeCacheMap.c)
 *     CcWriteBehindInternal @ 0x14008A070 (CcWriteBehindInternal.c)
 *     CcRescheduleLazyWriteScan @ 0x1400E0BCC (CcRescheduleLazyWriteScan.c)
 *     CcNotifyOfMappedWrite @ 0x1400EF1C8 (CcNotifyOfMappedWrite.c)
 *     CcCanIWrite @ 0x1400F4620 (CcCanIWrite.c)
 *     CcAddDirtyPagesToExternalCache @ 0x14014B8C0 (CcAddDirtyPagesToExternalCache.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x14015A53C (CcWaitForCurrentLazyWriterActivityInternal.c)
 *     CcCoalescingCallBackHelper @ 0x1401E01B0 (CcCoalescingCallBackHelper.c)
 *     CcDeferWrite @ 0x1401E08A0 (CcDeferWrite.c)
 *     CcDeleteSectionsForPartition @ 0x1401E22D8 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     KiSetTimerEx @ 0x1400E1F70 (KiSetTimerEx.c)
 *     CcNotifyWriteBehindInternal @ 0x140125F3C (CcNotifyWriteBehindInternal.c)
 */

char __fastcall CcScheduleLazyWriteScan(__int64 a1, char a2, char a3)
{
  char result; // al
  __int64 v6; // rdx

  result = *(_BYTE *)(a1 + 900);
  if ( !result || a2 )
  {
    if ( a3 )
    {
      v6 = 8LL;
    }
    else
    {
      result = -result;
      v6 = result != 0 ? 16 : 4;
    }
    if ( a2 )
    {
      result = CcNotifyWriteBehindInternal(a1, v6);
    }
    else if ( !*(_BYTE *)(a1 + 592) )
    {
      result = KiSetTimerEx((int)a1 + 528, CcFirstDelay, 0, 0, a1 + 464);
    }
    if ( !*(_BYTE *)(a1 + 900) )
      *(_BYTE *)(a1 + 592) = 1;
  }
  return result;
}
