/*
 * XREFs of CcScheduleLazyWriteScan @ 0x140118B04
 * Callers:
 *     CcCanIWrite @ 0x14000D980 (CcCanIWrite.c)
 *     CcRescheduleLazyWriteScan @ 0x14002F8F0 (CcRescheduleLazyWriteScan.c)
 *     CcSetDirtyInMask @ 0x1400A2DB0 (CcSetDirtyInMask.c)
 *     CcWriteBehindInternal @ 0x1400AACD0 (CcWriteBehindInternal.c)
 *     CcDecrementOpenCount @ 0x1400AB490 (CcDecrementOpenCount.c)
 *     CcChargeDirtyPages @ 0x1400AD3C8 (CcChargeDirtyPages.c)
 *     CcNotifyOfMappedWrite @ 0x1400B00A8 (CcNotifyOfMappedWrite.c)
 *     CcSetDirtyPinnedData @ 0x140118BA0 (CcSetDirtyPinnedData.c)
 *     CcUninitializeCacheMap @ 0x140119B80 (CcUninitializeCacheMap.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x140131770 (CcWaitForCurrentLazyWriterActivity.c)
 *     CcAddDirtyPagesToExternalCache @ 0x1401512C0 (CcAddDirtyPagesToExternalCache.c)
 *     CcCoalescingCallBack @ 0x1401DD4D0 (CcCoalescingCallBack.c)
 *     CcDeferWrite @ 0x1401DD930 (CcDeferWrite.c)
 * Callees:
 *     CcNotifyWriteBehindInternal @ 0x14002FDA4 (CcNotifyWriteBehindInternal.c)
 *     KiSetTimerEx @ 0x14004D040 (KiSetTimerEx.c)
 */

char __fastcall CcScheduleLazyWriteScan(__int64 a1, char a2, char a3)
{
  char v5; // cl
  char result; // al
  char v7; // dl

  v5 = CcCoalescingState;
  if ( !CcCoalescingState || a2 )
  {
    if ( a3 )
    {
      v7 = 8;
    }
    else
    {
      result = -CcCoalescingState;
      v7 = CcCoalescingState != 0 ? 16 : 4;
    }
    if ( a2 )
    {
      result = CcNotifyWriteBehindInternal((struct _KEVENT *)a1, v7);
    }
    else
    {
      if ( *(_BYTE *)(a1 + 664) )
        goto LABEL_6;
      result = KiSetTimerEx(a1 + 600, CcFirstDelay, 0, 0, a1 + 536);
    }
    v5 = CcCoalescingState;
LABEL_6:
    if ( !v5 )
      *(_BYTE *)(a1 + 664) = 1;
  }
  return result;
}
