/*
 * XREFs of FsRtlIsNtstatusExpected @ 0x1400C6690
 * Callers:
 *     CcPerformReadAhead @ 0x140045EB4 (CcPerformReadAhead.c)
 *     CcAsyncReadPrefetch @ 0x140098ACC (CcAsyncReadPrefetch.c)
 *     FsRtlCancelNotify @ 0x1400B6BD0 (FsRtlCancelNotify.c)
 *     CcMdlWriteComplete2 @ 0x1400CB7B4 (CcMdlWriteComplete2.c)
 *     CcGetVacbMiss @ 0x1400DD440 (CcGetVacbMiss.c)
 *     CcInitializeCacheMapEx @ 0x1400DF8F0 (CcInitializeCacheMapEx.c)
 *     CcSetFileSizesEx @ 0x1400E0340 (CcSetFileSizesEx.c)
 *     CcAcquireByteRangeForWrite @ 0x1400E0910 (CcAcquireByteRangeForWrite.c)
 *     CcMapAndCopyInToCache @ 0x140112290 (CcMapAndCopyInToCache.c)
 *     CcCopyBytesToUserBuffer @ 0x14011FF30 (CcCopyBytesToUserBuffer.c)
 *     FsRtlNormalizeNtstatus @ 0x140144BF0 (FsRtlNormalizeNtstatus.c)
 *     CcLockSystemCacheBuffer @ 0x140220198 (CcLockSystemCacheBuffer.c)
 *     RawDispatch @ 0x1404948A0 (RawDispatch.c)
 *     FsRtlNotifyFilterReportChange @ 0x14055A7D0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x14055B570 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlCopyRead @ 0x140713E90 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x140714110 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x1407148C0 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140714B20 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsNtstatusExpected(NTSTATUS Exception)
{
  bool v1; // zf

  if ( Exception > -1073741676 )
  {
    if ( Exception == -1073741674 || Exception == -1073741654 || Exception == -1073740791 )
      return 0;
    v1 = Exception == -1073740768;
    goto LABEL_6;
  }
  if ( Exception != -1073741676 )
  {
    if ( Exception == 0x80000000 )
      return 1;
    if ( Exception > -2147483645 && Exception != -1073741819 && Exception != -1073741795 )
    {
      if ( Exception <= -1073741755 )
        return 1;
      if ( Exception > -1073741753 )
      {
        v1 = Exception == -1073741684;
LABEL_6:
        if ( !v1 )
          return 1;
      }
    }
  }
  return 0;
}
