/*
 * XREFs of FsRtlIsNtstatusExpected @ 0x1400308D0
 * Callers:
 *     FsRtlCancelNotify @ 0x140018DC0 (FsRtlCancelNotify.c)
 *     CcPerformReadAhead @ 0x1400215AC (CcPerformReadAhead.c)
 *     CcMdlWriteComplete2 @ 0x140036100 (CcMdlWriteComplete2.c)
 *     CcMapAndCopyInToCache @ 0x14009EF20 (CcMapAndCopyInToCache.c)
 *     CcGetVacbMiss @ 0x1400A9104 (CcGetVacbMiss.c)
 *     CcSetFileSizesEx @ 0x1400AA8C0 (CcSetFileSizesEx.c)
 *     CcInitializeCacheMapEx @ 0x1400AD640 (CcInitializeCacheMapEx.c)
 *     CcAsyncReadPrefetch @ 0x1401174FC (CcAsyncReadPrefetch.c)
 *     CcAcquireByteRangeForWrite @ 0x14011B330 (CcAcquireByteRangeForWrite.c)
 *     FsRtlNormalizeNtstatus @ 0x140131DD0 (FsRtlNormalizeNtstatus.c)
 *     RawDispatch @ 0x1404219E0 (RawDispatch.c)
 *     FsRtlNotifyFilterReportChange @ 0x140431400 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x140432250 (FsRtlNotifyFilterReportChangeLite.c)
 *     FsRtlCopyRead @ 0x1406842F0 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x140684570 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x140684D30 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140684F90 (FsRtlPrepareMdlWriteDev.c)
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
