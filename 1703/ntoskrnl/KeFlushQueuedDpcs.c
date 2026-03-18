/*
 * XREFs of KeFlushQueuedDpcs @ 0x14006D5B0
 * Callers:
 *     KeCleanupThreadState @ 0x14008AA90 (KeCleanupThreadState.c)
 *     MmPageEntireDriver @ 0x1404B24D0 (MmPageEntireDriver.c)
 *     IopDeleteDriver @ 0x1405CFCE0 (IopDeleteDriver.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x1400459E0 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140047790 (KeAddProcessorAffinityEx.c)
 *     KiGetDeepIdleProcessors @ 0x14006D67C (KiGetDeepIdleProcessors.c)
 *     KeGenericProcessorCallback @ 0x1401117A4 (KeGenericProcessorCallback.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void KeFlushQueuedDpcs(void)
{
  int v0; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int16 *v1[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int16 v2; // [rsp+38h] [rbp-C8h]
  _BYTE v3[8]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 *v4; // [rsp+48h] [rbp-B8h]
  _WORD v5[88]; // [rsp+F0h] [rbp-10h] BYREF

  KiGetDeepIdleProcessors(v3, v5);
  v1[1] = v4;
  v1[0] = (unsigned __int16 *)v3;
  v2 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v0, v1) )
  {
    if ( *(_DWORD *)(KiProcessorBlock[v0] + 11884) )
      KeAddProcessorAffinityEx(v5, v0);
  }
  KeGenericProcessorCallback(v5, KiFlushQueuedDpcsWorker, 0LL, 2LL);
}
