/*
 * XREFs of PopCoalescingInitialize @ 0x14080C6EC
 * Callers:
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     PopUpdateDiskIdleTimeoutSetting @ 0x1405A880C (PopUpdateDiskIdleTimeoutSetting.c)
 *     PoRegisterCoalescingCallback @ 0x1405A8B90 (PoRegisterCoalescingCallback.c)
 */

__int64 PopCoalescingInitialize()
{
  __int64 result; // rax

  PopCoalescingState &= 0xF0u;
  PopCoalescingCallbackWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopCoalescingCallbackWorker;
  PopCoalescingCallbackWorkItem.Parameter = 0LL;
  PopCoalescingCallbackWorkItem.List.Flink = 0LL;
  result = PoRegisterCoalescingCallback(
             (unsigned __int64)xHalTimerWatchdogStop,
             0,
             (struct _EX_RUNDOWN_REF **)&PopCoalescingRegistration,
             0LL);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)&PopCoalescingTimer.Header.Lock = 8LL;
    PopCoalescingTimer.Header.WaitListHead.Blink = &PopCoalescingTimer.Header.WaitListHead;
    PopCoalescingTimer.Header.WaitListHead.Flink = &PopCoalescingTimer.Header.WaitListHead;
    qword_14034BFB8 = (__int64)PopCoalesingTimerDpcCallback;
    PopCoalescingTimer.DueTime.QuadPart = 0LL;
    *(_QWORD *)&PopCoalescingTimer.Processor = 0LL;
    PopCoalescingTimerDpc = 275;
    qword_14034BFC0 = 0LL;
    qword_14034BFD8 = 0LL;
    qword_14034BFB0 = 0LL;
    return PopUpdateDiskIdleTimeoutSetting();
  }
  return result;
}
