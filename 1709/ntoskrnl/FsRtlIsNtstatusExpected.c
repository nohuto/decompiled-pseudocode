/*
 * XREFs of FsRtlIsNtstatusExpected @ 0x140126700
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14001C320 (CcMapAndCopyInToCache.c)
 *     CcPerformReadAhead @ 0x140020ED4 (CcPerformReadAhead.c)
 *     CcInitializeCacheMapEx @ 0x1400636F0 (CcInitializeCacheMapEx.c)
 *     CcSetFileSizesEx @ 0x140089D90 (CcSetFileSizesEx.c)
 *     CcGetVacbMiss @ 0x1400A3D50 (CcGetVacbMiss.c)
 *     CcAsyncReadPrefetch @ 0x1400BBA90 (CcAsyncReadPrefetch.c)
 *     CcAcquireByteRangeForWrite @ 0x1400F2DD0 (CcAcquireByteRangeForWrite.c)
 *     FsRtlCancelNotify @ 0x1401086F0 (FsRtlCancelNotify.c)
 *     CcMdlWriteComplete2 @ 0x14012F234 (CcMdlWriteComplete2.c)
 *     FsRtlNormalizeNtstatus @ 0x1401E79E0 (FsRtlNormalizeNtstatus.c)
 *     FsRtlNotifyFilterReportChange @ 0x14044CD00 (FsRtlNotifyFilterReportChange.c)
 *     RawDispatch @ 0x140547000 (RawDispatch.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140567030 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlCopyRead @ 0x1406AF6E0 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x1406AF960 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x1406B0120 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x1406B0380 (FsRtlPrepareMdlWriteDev.c)
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
