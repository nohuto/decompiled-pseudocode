/*
 * XREFs of ExpUpdateTimerConfiguration @ 0x14012CDF4
 * Callers:
 *     ExpUpdateTimerResolution @ 0x14012CCDC (ExpUpdateTimerResolution.c)
 *     NtSetSystemInformation @ 0x140562590 (NtSetSystemInformation.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140047790 (KeAddProcessorAffinityEx.c)
 *     KeGenericProcessorCallback @ 0x1401117A4 (KeGenericProcessorCallback.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall ExpUpdateTimerConfiguration(
        struct _SINGLE_LIST_ENTRY *a1,
        struct _SINGLE_LIST_ENTRY *a2,
        struct _SINGLE_LIST_ENTRY *a3)
{
  struct _SINGLE_LIST_ENTRY v7[3]; // [rsp+20h] [rbp-F8h] BYREF
  unsigned int v8; // [rsp+38h] [rbp-E0h]
  _DWORD v9[44]; // [rsp+40h] [rbp-D8h] BYREF

  v9[0] = 1310721;
  memset(&v9[1], 0, 0xA4uLL);
  KeAddProcessorAffinityEx(v9, KiClockTimerOwner);
  v7[0].Next = a1;
  v7[1].Next = a2;
  v7[2].Next = a3;
  KeGenericProcessorCallback(
    (unsigned __int16 *)v9,
    (void (__fastcall *)(struct _KPRCB *, struct _SINGLE_LIST_ENTRY *))ExpUpdateTimerConfigurationWorker,
    v7,
    1LL);
  return v8;
}
