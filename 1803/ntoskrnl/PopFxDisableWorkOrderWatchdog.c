/*
 * XREFs of PopFxDisableWorkOrderWatchdog @ 0x140077884
 * Callers:
 *     PopFxPluginWork @ 0x1400777B0 (PopFxPluginWork.c)
 * Callees:
 *     KeCancelTimer @ 0x14005A760 (KeCancelTimer.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     PopFxBugCheck @ 0x140274BF4 (PopFxBugCheck.c)
 */

void __fastcall PopFxDisableWorkOrderWatchdog(__int64 *BugCheckParameter2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 *v5; // rcx
  __int64 **v6; // rax
  char v7; // al

  if ( BugCheckParameter2 )
  {
    if ( !KeCancelTimer((PKTIMER)(BugCheckParameter2 + 2)) )
      PopFxBugCheck(0x618uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter2[21], 0LL);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopWorkOrderLock, 0LL);
    BugCheckParameter2[21] = 0LL;
    BugCheckParameter2[19] = 0LL;
    v5 = (__int64 *)*BugCheckParameter2;
    if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2
      || (v6 = (__int64 **)BugCheckParameter2[1], *v6 != BugCheckParameter2) )
    {
      __fastfail(3u);
    }
    *v6 = v5;
    v5[1] = (__int64)v6;
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopWorkOrderLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopWorkOrderLock, v2, v3, v4);
    KeAbPostRelease((ULONG_PTR)&PopWorkOrderLock);
  }
}
