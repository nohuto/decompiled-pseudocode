/*
 * XREFs of ExpUpdateTimerConfiguration @ 0x140015418
 * Callers:
 *     ExpUpdateTimerResolution @ 0x14000A118 (ExpUpdateTimerResolution.c)
 *     NtSetSystemInformation @ 0x140469CA0 (NtSetSystemInformation.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x14008EC40 (KeAddProcessorAffinityEx.c)
 *     KeGenericProcessorCallback @ 0x1400A8F40 (KeGenericProcessorCallback.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall ExpUpdateTimerConfiguration(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v7[3]; // [rsp+20h] [rbp-F8h] BYREF
  unsigned int v8; // [rsp+38h] [rbp-E0h]
  _DWORD v9[44]; // [rsp+40h] [rbp-D8h] BYREF

  v9[0] = 1310721;
  memset(&v9[1], 0, 0xA4uLL);
  KeAddProcessorAffinityEx(v9, (unsigned int)KiClockTimerOwner);
  v7[0] = a1;
  v7[1] = a2;
  v7[2] = a3;
  ((void (__fastcall *)(_DWORD *, __int64 (__fastcall *)(), _QWORD *, __int64))KeGenericProcessorCallback)(
    v9,
    ExpUpdateTimerConfigurationWorker,
    v7,
    1LL);
  return v8;
}
