/*
 * XREFs of KeFlushQueuedDpcs @ 0x140004DD0
 * Callers:
 *     KeCleanupThreadState @ 0x14006FA08 (KeCleanupThreadState.c)
 *     CcDeletePartition @ 0x140220D68 (CcDeletePartition.c)
 *     MmPageEntireDriver @ 0x1405BB5B0 (MmPageEntireDriver.c)
 *     IopDeleteDriver @ 0x140605830 (IopDeleteDriver.c)
 *     ExpPartitionDestroy @ 0x1407C56B0 (ExpPartitionDestroy.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x140004F40 (KeGenericProcessorCallback.c)
 *     KiGetDeepIdleProcessors @ 0x140005828 (KiGetDeepIdleProcessors.c)
 *     KeAddProcessorAffinityEx @ 0x140034480 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140034620 (KeEnumerateNextProcessor.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void KeFlushQueuedDpcs(void)
{
  __int64 v0; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v1[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int16 v2; // [rsp+38h] [rbp-C8h]
  _BYTE v3[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v4; // [rsp+48h] [rbp-B8h]
  _BYTE v5[176]; // [rsp+F0h] [rbp-10h] BYREF

  KiGetDeepIdleProcessors(v3, v5);
  v1[1] = v4;
  v1[0] = v3;
  v2 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v0, v1) )
  {
    if ( *(_DWORD *)(KiProcessorBlock[(unsigned int)v0] + 11884) )
      KeAddProcessorAffinityEx(v5, (unsigned int)v0);
  }
  KeGenericProcessorCallback(v5, KiFlushQueuedDpcsWorker, 0LL, 2LL, v0, v1[0]);
}
