/*
 * XREFs of PopCoalescingInitialize @ 0x140848F38
 * Callers:
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 * Callees:
 *     PopUpdateDiskIdleTimeoutSetting @ 0x1405CC0B0 (PopUpdateDiskIdleTimeoutSetting.c)
 *     PoRegisterCoalescingCallback @ 0x1405CC440 (PoRegisterCoalescingCallback.c)
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
    qword_140366958 = (__int64)PopCoalesingTimerDpcCallback;
    PopCoalescingTimer.DueTime.QuadPart = 0LL;
    *(_QWORD *)&PopCoalescingTimer.Processor = 0LL;
    PopCoalescingTimerDpc = 275;
    qword_140366960 = 0LL;
    qword_140366978 = 0LL;
    qword_140366950 = 0LL;
    return PopUpdateDiskIdleTimeoutSetting();
  }
  return result;
}
