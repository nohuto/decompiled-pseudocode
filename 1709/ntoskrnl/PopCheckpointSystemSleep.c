/*
 * XREFs of PopCheckpointSystemSleep @ 0x14043A498
 * Callers:
 *     PopDecompressHiberBlocks @ 0x140432B24 (PopDecompressHiberBlocks.c)
 *     PopHiberCheckResume @ 0x1404335B0 (PopHiberCheckResume.c)
 *     PopHiberChecksumHiberFileData @ 0x140433854 (PopHiberChecksumHiberFileData.c)
 *     PopRequestRead @ 0x140434168 (PopRequestRead.c)
 *     PopRequestWrite @ 0x140434590 (PopRequestWrite.c)
 *     PopRestoreHiberContext @ 0x140434AE0 (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x140434F40 (PopSaveHiberContext.c)
 *     PopWriteHiberPages @ 0x140435F04 (PopWriteHiberPages.c)
 *     PoBroadcastSystemState @ 0x140436BFC (PoBroadcastSystemState.c)
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 *     PopInvokeSystemStateHandler @ 0x140439AE4 (PopInvokeSystemStateHandler.c)
 *     PopDispatchSuperfetchNotification @ 0x1406FCC50 (PopDispatchSuperfetchNotification.c)
 *     PopIssueActionRequest @ 0x1406FD0C4 (PopIssueActionRequest.c)
 *     PopResumeApps @ 0x1406FD724 (PopResumeApps.c)
 *     PopResumeServices @ 0x1406FD79C (PopResumeServices.c)
 *     PopSuspendApps @ 0x1406FD980 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x1406FD9D4 (PopSuspendServices.c)
 *     PopNotifyCallbacksPreSleep @ 0x1407012F8 (PopNotifyCallbacksPreSleep.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x14043A58C (PopCheckpointSystemSleepUnsafe.c)
 */

unsigned __int64 __fastcall PopCheckpointSystemSleep(signed int a1)
{
  ULONG_PTR v1; // rbx
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rax
  unsigned __int64 result; // rax

  v1 = a1;
  v2 = __rdtsc();
  if ( PopCheckpointSystemSleepEnabled
    && ((PopCheckpointSystemSleepSimulateFlags & 1) == 0
     || (unsigned int)a1 <= HIBYTE(PopCheckpointSystemSleepSimulateFlags)) )
  {
    if ( PoAllProcIntrDisabled )
    {
      if ( KeGetCurrentPrcb()->Number )
        KeBugCheckEx(0xA0u, 0x10FuLL, a1, 1uLL, 0LL);
      if ( (unsigned __int8)off_140353680[0]() )
        KeBugCheckEx(0xA0u, 0x10FuLL, v1, 2uLL, 0LL);
    }
    else if ( !_InterlockedExchangeAdd(&PopPagingEnabled, 0) )
    {
      KeBugCheckEx(0xA0u, 0x10FuLL, a1, 0LL, 0LL);
    }
    PopCheckpointSystemSleepUnsafe((unsigned int)v1);
  }
  v3 = __rdtsc();
  result = (((unsigned __int64)HIDWORD(v3) << 32) | (unsigned int)v3) - v2;
  qword_140365C50 += result;
  return result;
}
