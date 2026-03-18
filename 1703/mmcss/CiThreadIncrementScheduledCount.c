/*
 * XREFs of CiThreadIncrementScheduledCount @ 0x1C000ACC0
 * Callers:
 *     CiProcessSuspend @ 0x1C0001010 (CiProcessSuspend.c)
 *     CiThreadCreate @ 0x1C000A7C0 (CiThreadCreate.c)
 * Callees:
 *     CiSystemThrottleNdis @ 0x1C000B760 (CiSystemThrottleNdis.c)
 */

__int64 __fastcall CiThreadIncrementScheduledCount(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = *(_QWORD *)(a1 + 64);
  if ( (*(_BYTE *)(result + 3) & 1) != 0 )
  {
    ExAcquirePushLockExclusiveEx(&WPP_MAIN_CB.Queue, 0LL);
    WPP_MAIN_CB.Queue.ListEntry.Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
    if ( ++LODWORD(WPP_MAIN_CB.DeviceExtension) == 1 )
    {
      LOBYTE(v2) = 1;
      CiSystemThrottleNdis(v2);
    }
    WPP_MAIN_CB.Queue.ListEntry.Blink = 0LL;
    return ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Queue, 0LL);
  }
  return result;
}
