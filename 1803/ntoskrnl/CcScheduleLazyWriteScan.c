/*
 * XREFs of CcScheduleLazyWriteScan @ 0x1400DAE70
 * Callers:
 *     CcCanIWrite @ 0x140089AA0 (CcCanIWrite.c)
 *     CcRescheduleLazyWriteScan @ 0x1400C4F70 (CcRescheduleLazyWriteScan.c)
 *     CcUninitializeCacheMap @ 0x1400DCA00 (CcUninitializeCacheMap.c)
 *     CcWriteBehindInternal @ 0x1400DE8B0 (CcWriteBehindInternal.c)
 *     CcDecrementOpenCount @ 0x1400DF768 (CcDecrementOpenCount.c)
 *     CcInitializeCacheMapEx @ 0x1400DF8F0 (CcInitializeCacheMapEx.c)
 *     CcSetDirtyPinnedData @ 0x1400E2C90 (CcSetDirtyPinnedData.c)
 *     CcChargeDirtyPages @ 0x1400E3214 (CcChargeDirtyPages.c)
 *     CcSetDirtyInMask @ 0x1400E3310 (CcSetDirtyInMask.c)
 *     CcNotifyOfMappedWrite @ 0x140133730 (CcNotifyOfMappedWrite.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x14014D16C (CcWaitForCurrentLazyWriterActivityInternal.c)
 *     CcAddDirtyPagesToExternalCache @ 0x14015BC70 (CcAddDirtyPagesToExternalCache.c)
 *     CcCoalescingCallBackHelper @ 0x14021F9C0 (CcCoalescingCallBackHelper.c)
 *     CcDeferWrite @ 0x14021FEA0 (CcDeferWrite.c)
 *     CcDeleteSectionsForPartition @ 0x140220EE8 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     KiSetTimerEx @ 0x14005AB60 (KiSetTimerEx.c)
 *     CcNotifyWriteBehindInternal @ 0x1400C525C (CcNotifyWriteBehindInternal.c)
 */

char __fastcall CcScheduleLazyWriteScan(__int64 a1, char a2, char a3)
{
  char result; // al
  char v6; // dl

  result = *(_BYTE *)(a1 + 900);
  if ( !result || a2 )
  {
    if ( a3 )
    {
      v6 = 8;
    }
    else
    {
      result = -result;
      v6 = result != 0 ? 16 : 4;
    }
    if ( a2 )
    {
      result = CcNotifyWriteBehindInternal((struct _KEVENT *)a1, v6);
    }
    else if ( !*(_BYTE *)(a1 + 592) )
    {
      result = KiSetTimerEx(a1 + 528, CcFirstDelay, 0, 0, a1 + 464);
    }
    if ( !*(_BYTE *)(a1 + 900) )
      *(_BYTE *)(a1 + 592) = 1;
  }
  return result;
}
