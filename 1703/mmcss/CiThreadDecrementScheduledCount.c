/*
 * XREFs of CiThreadDecrementScheduledCount @ 0x1C000B650
 * Callers:
 *     CiProcessSuspend @ 0x1C0001010 (CiProcessSuspend.c)
 *     CiThreadCleanup @ 0x1C000B390 (CiThreadCleanup.c)
 * Callees:
 *     CiSystemThrottleNdis @ 0x1C000B760 (CiSystemThrottleNdis.c)
 */

__int64 __fastcall CiThreadDecrementScheduledCount(__int64 a1)
{
  __int64 result; // rax
  struct _LIST_ENTRY *CurrentThread; // rax
  bool v3; // zf

  result = *(_QWORD *)(a1 + 64);
  if ( (*(_BYTE *)(result + 3) & 1) != 0 )
  {
    ExAcquirePushLockExclusiveEx(&WPP_MAIN_CB.Queue, 0LL);
    CurrentThread = (struct _LIST_ENTRY *)KeGetCurrentThread();
    v3 = LODWORD(WPP_MAIN_CB.DeviceExtension)-- == 1;
    WPP_MAIN_CB.Queue.ListEntry.Blink = CurrentThread;
    if ( v3 )
      CiSystemThrottleNdis(0LL);
    WPP_MAIN_CB.Queue.ListEntry.Blink = 0LL;
    return ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Queue, 0LL);
  }
  return result;
}
