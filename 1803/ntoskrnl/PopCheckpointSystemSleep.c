/*
 * XREFs of PopCheckpointSystemSleep @ 0x140473498
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 *     PoBroadcastSystemState @ 0x140472204 (PoBroadcastSystemState.c)
 *     PopInvokeSystemStateHandler @ 0x140472BF4 (PopInvokeSystemStateHandler.c)
 *     PopRestoreHiberContext @ 0x1404734E4 (PopRestoreHiberContext.c)
 *     PopWriteHiberPages @ 0x140473A24 (PopWriteHiberPages.c)
 *     PopDecompressHiberBlocks @ 0x140473C3C (PopDecompressHiberBlocks.c)
 *     PopSaveHiberContext @ 0x140473E20 (PopSaveHiberContext.c)
 *     PopRequestWrite @ 0x1404743B4 (PopRequestWrite.c)
 *     PopHiberChecksumHiberFileData @ 0x1404747D8 (PopHiberChecksumHiberFileData.c)
 *     PopHiberCheckResume @ 0x140475210 (PopHiberCheckResume.c)
 *     PopRequestRead @ 0x1404865F4 (PopRequestRead.c)
 *     PopIssueActionRequest @ 0x1405EBF50 (PopIssueActionRequest.c)
 *     PopSuspendApps @ 0x1405EC3E4 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x1405EC44C (PopSuspendServices.c)
 *     PopResumeApps @ 0x1405EC4BC (PopResumeApps.c)
 *     PopResumeServices @ 0x1405EC548 (PopResumeServices.c)
 *     PopDispatchSuperfetchNotification @ 0x1405EC5D4 (PopDispatchSuperfetchNotification.c)
 *     PopNotifyCallbacksPreSleep @ 0x1405EC638 (PopNotifyCallbacksPreSleep.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x1404874A4 (PopCheckpointSystemSleepUnsafe.c)
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
      if ( (unsigned __int8)off_140398A20[0]() )
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
  qword_1403AA4F0 += result;
  return result;
}
