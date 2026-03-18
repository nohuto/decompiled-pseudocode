/*
 * XREFs of PopCheckpointSystemSleep @ 0x140408338
 * Callers:
 *     PopWriteHiberPages @ 0x140405508 (PopWriteHiberPages.c)
 *     PopSaveHiberContext @ 0x140405800 (PopSaveHiberContext.c)
 *     PopInvokeSystemStateHandler @ 0x140405BB8 (PopInvokeSystemStateHandler.c)
 *     PopRequestWrite @ 0x140406CAC (PopRequestWrite.c)
 *     PopRestoreHiberContext @ 0x140407064 (PopRestoreHiberContext.c)
 *     PopDecompressHiberBlocks @ 0x14040749C (PopDecompressHiberBlocks.c)
 *     PopRequestRead @ 0x140407B98 (PopRequestRead.c)
 *     PopHiberChecksumHiberFileData @ 0x140408114 (PopHiberChecksumHiberFileData.c)
 *     PoBroadcastSystemState @ 0x140408390 (PoBroadcastSystemState.c)
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     PopHiberCheckResume @ 0x140409FA0 (PopHiberCheckResume.c)
 *     PopNotifyCallbacksPreSleep @ 0x1405763B8 (PopNotifyCallbacksPreSleep.c)
 *     PopDispatchSuperfetchNotification @ 0x140576408 (PopDispatchSuperfetchNotification.c)
 *     PopResumeServices @ 0x1405765C8 (PopResumeServices.c)
 *     PopResumeApps @ 0x140576640 (PopResumeApps.c)
 *     PopSuspendServices @ 0x1405766B8 (PopSuspendServices.c)
 *     PopSuspendApps @ 0x140576714 (PopSuspendApps.c)
 *     PopIssueActionRequest @ 0x140576C20 (PopIssueActionRequest.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x14041A768 (PopCheckpointSystemSleepUnsafe.c)
 */

unsigned __int64 __fastcall PopCheckpointSystemSleep(int a1)
{
  ULONG_PTR v1; // rbx
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rax
  unsigned __int64 result; // rax

  v1 = a1;
  v2 = __rdtsc();
  if ( PopCheckpointSystemSleepEnabled
    && ((PopCheckpointSystemSleepSimulateFlags & 1) == 0 || a1 != HIBYTE(PopCheckpointSystemSleepSimulateFlags)) )
  {
    if ( PoAllProcIntrDisabled )
    {
      if ( KeGetCurrentPrcb()->Number )
        KeBugCheckEx(0xA0u, 0x10FuLL, a1, 1uLL, 0LL);
      if ( (unsigned __int8)off_14033B650[0]() )
        KeBugCheckEx(0xA0u, 0x10FuLL, v1, 2uLL, 0LL);
    }
    else if ( !_InterlockedExchangeAdd(&PopPagingEnabled, 0) )
    {
      KeBugCheckEx(0xA0u, 0x10FuLL, a1, 0LL, 0LL);
    }
    PopCheckpointSystemSleepUnsafe((unsigned int)v1);
  }
  if ( (_DWORD)v1 == 41 )
    PopCheckpointSystemSleepEnabled = 0;
  v3 = __rdtsc();
  result = (((unsigned __int64)HIDWORD(v3) << 32) | (unsigned int)v3) - v2;
  qword_14034B5D0 += result;
  return result;
}
