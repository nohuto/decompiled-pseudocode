/*
 * XREFs of CcInitializeCacheManager @ 0x1407FE20C
 * Callers:
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExGenRandom @ 0x14004F864 (ExGenRandom.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140134F20 (ExInitializeNPagedLookasideListInternal.c)
 *     CcInitializePartition @ 0x140161450 (CcInitializePartition.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExInitializeSystemLookasideList @ 0x14040F89C (ExInitializeSystemLookasideList.c)
 *     MmGetNumberOfPhysicalPages @ 0x140437454 (MmGetNumberOfPhysicalPages.c)
 *     PsCreateSystemThread @ 0x140567970 (PsCreateSystemThread.c)
 *     FsRtlIsMobileOS @ 0x140575A80 (FsRtlIsMobileOS.c)
 *     CcInitializeProcessor @ 0x14059E748 (CcInitializeProcessor.c)
 *     PoRegisterCoalescingCallback @ 0x1405A8B90 (PoRegisterCoalescingCallback.c)
 *     CcInitializeBcbProfiler @ 0x1407DC30C (CcInitializeBcbProfiler.c)
 *     CcInitializeVacbs @ 0x1408191EC (CcInitializeVacbs.c)
 */

char CcInitializeCacheManager()
{
  int v0; // edi
  PVOID PoolWithTag; // rax
  unsigned int v7; // ebx
  unsigned __int64 v8; // rbx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE ThreadHandle; // [rsp+A0h] [rbp+20h] BYREF

  v0 = (unsigned __int8)dword_1403E3134;
  CcMaxNestingLevel = 2;
  CcMaxAsyncReadWorkerThreads = 100;
  if ( (_BYTE)dword_1403E3134 )
  {
    CcMaxNumberCompleteAsyncReadExWorkItems = 500;
  }
  else
  {
    CcMaxAsyncReadWorkerThreads = 50;
    if ( FsRtlIsMobileOS() )
      CcMaxAsyncReadWorkerThreads = 10;
    CcMaxNumberCompleteAsyncReadExWorkItems = 50;
    if ( FsRtlIsMobileOS() )
      CcMaxNumberCompleteAsyncReadExWorkItems = 9;
  }
  if ( !CcInitializePartition(CcSystemPartition) )
    KeBugCheckEx(0x34u, 0x4023DuLL, 0LL, 0LL, 0LL);
  CcSystemPartitionDirtyPageStatistics = (__int64)&qword_14036F9A0;
  CcSystemPartitionDirtyPageThresholds = (__int64)qword_14036F9B8;
  CcInitializeBcbProfiler();
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8uLL, 0x58637044u);
  if ( PoolWithTag )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    ExGenRandom(0);
    _RAX = 2147483656LL;
    __asm { cpuid }
  }
  CcBcbTrimNotificationListLock.Count = 1;
  CcBcbTrimNotificationListLock.Owner = 0LL;
  CcBcbTrimNotificationListLock.Contention = 0;
  CcIdleDelayTick = 0x989680 / KeMaximumIncrement;
  qword_14036B4D8 = (__int64)&CcVolumeCacheMapList;
  CcVolumeCacheMapList = (__int64)&CcVolumeCacheMapList;
  CcBcbTrimNotificationListLock.Event.Header.WaitListHead.Blink = &CcBcbTrimNotificationListLock.Event.Header.WaitListHead;
  CcBcbTrimNotificationListLock.Event.Header.WaitListHead.Flink = &CcBcbTrimNotificationListLock.Event.Header.WaitListHead;
  qword_14036B528 = (__int64)&CcBcbTrimNotificationList;
  CcBcbTrimNotificationList = (__int64)&CcBcbTrimNotificationList;
  qword_14036B570 = (__int64)&qword_14036B568;
  qword_14036B568 = (__int64)&qword_14036B568;
  LOWORD(CcBcbTrimNotificationListLock.Event.Header.Lock) = 1;
  CcBcbTrimNotificationListLock.Event.Header.Size = 6;
  CcBcbTrimNotificationListLock.Event.Header.SignalState = 0;
  CcLowPriWorkerThread = 0LL;
  CcLowPriSharedCacheMap = 0LL;
  CcLowPriOldCpuPriority = 32;
  CcLowPriOldIoPriority = 5;
  CcLowPriorityWorkerThreadLock = 0LL;
  CcPeriodicEvent = 1;
  byte_14036B562 = 6;
  dword_14036B564 = 0;
  if ( !dword_14036F810 )
  {
    if ( v0 )
    {
      CcMaxLazyWritePages = 0x2000;
      CcExtraWBThreadDelay = 5000000;
    }
    else
    {
      CcMaxLazyWritePages = 256;
      CcExtraWBThreadDelay = 10000000;
    }
    CcAggressiveZeroThreshold = 4;
  }
  CcAggressiveZeroCount = 0;
  qword_14036B590 = (__int64)&qword_14036B588;
  qword_14036B588 = (__int64)&qword_14036B588;
  CcCoalescingFlushEvent = 1;
  byte_14036B582 = 6;
  dword_14036B584 = 0;
  ExInitializeSystemLookasideList(
    (__int64)&CcTwilightLookasideList,
    512,
    136,
    1800889155,
    v0 != 0 ? 256 : 128,
    (__int64)&ExSystemLookasideListHead);
  CcMaxWorklessLazywriteScans = 1;
  v7 = 0;
  for ( CcMaxZeroTransferSize = v0 != 0 ? 0x2000000 : 0x100000; v7 < (unsigned int)KeNumberProcessors_0; ++v7 )
  {
    if ( (int)CcInitializeProcessor(KiProcessorBlock[v7]) < 0 )
      KeBugCheckEx(0x34u, 0x2E1uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  CcDbgNumberOfFailedWorkQueueEntryAllocations = 0;
  ExInitializeNPagedLookasideListInternal((__int64)&CcBitmapLookasideList, 0LL, 0LL, 512, 1024, 1833067331, 0, 0);
  CcDbgNumberOfFailedBitmapAllocations = 0;
  ExInitializeNPagedLookasideListInternal((__int64)&CcVacbLevelLookasideList, 0LL, 0LL, 512, 1032, 1817600835, 0, 0);
  ExInitializeNPagedLookasideListInternal(
    (__int64)&CcVacbLevelWithBcbListHeadsLookasideList,
    0LL,
    0LL,
    512,
    2056,
    1817600835,
    0,
    0);
  CcExternalCacheListLock = 0LL;
  qword_14036B5B8 = (__int64)&CcExternalCacheList;
  CcExternalCacheList = (__int64)&CcExternalCacheList;
  CcInitializeVacbs();
  ObjectAttributes.Length = 48;
  memset(&ObjectAttributes.RootDirectory, 0, 20);
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( PsCreateSystemThread(
         &ThreadHandle,
         0x1FFFFFu,
         &ObjectAttributes,
         0LL,
         0LL,
         (PKSTART_ROUTINE)CcQueueLazyWriteScanThread,
         CcSystemPartition) < 0 )
    return 0;
  ZwClose(ThreadHandle);
  v8 = (unsigned int)CcRemoteFileDPInlineFlushThreshold;
  if ( CcRemoteFileDPInlineFlushThreshold != -1
    && ((unsigned int)CcRemoteFileDPInlineFlushThreshold < 0x8000 || v8 > MmGetNumberOfPhysicalPages(0)) )
  {
    CcRemoteFileDPInlineFlushThreshold = 1310720;
  }
  CcTestControlData = 0LL;
  qword_14036B448 = 0LL;
  qword_14036B450 = 0LL;
  if ( (int)PoRegisterCoalescingCallback(
              (unsigned __int64)CcCoalescingCallBack,
              1,
              (struct _EX_RUNDOWN_REF **)&CcCoalescingRegistration,
              0LL) < 0 )
    KeBugCheckEx(0x34u, 0x361uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  CcInitializationComplete = 1;
  return 1;
}
