/*
 * XREFs of PopInitializePreSleepNotifications @ 0x1406274FC
 * Callers:
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 PopInitializePreSleepNotifications()
{
  unsigned int v0; // eax
  __int64 result; // rax

  v0 = PopPreSleepNotificationSeconds;
  if ( (unsigned int)PopPreSleepNotificationSeconds < 0x78 )
  {
    v0 = 120;
    PopPreSleepNotificationSeconds = 120;
  }
  if ( v0 > 0xE10 )
  {
    v0 = 3600;
    PopPreSleepNotificationSeconds = 3600;
  }
  dword_1403A7DD4 = v0;
  result = (unsigned int)_InterlockedExchange(&dword_1403A7CC0, 0);
  qword_1403A7CB8 = 0LL;
  PopPreSleepNotifyWorkItem = 0LL;
  qword_1403A7CB0 = (__int64)PopPreSleepNotifyWorker;
  return result;
}
