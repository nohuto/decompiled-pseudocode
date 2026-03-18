/*
 * XREFs of KeFlushQueuedDpcs @ 0x1400DE0B0
 * Callers:
 *     KeCleanupThreadState @ 0x1400B88CC (KeCleanupThreadState.c)
 *     CcDeletePartition @ 0x1401E2158 (CcDeletePartition.c)
 *     MmPageEntireDriver @ 0x140516A90 (MmPageEntireDriver.c)
 *     IopDeleteDriver @ 0x14059DED0 (IopDeleteDriver.c)
 *     ExpPartitionDestroy @ 0x14075E934 (ExpPartitionDestroy.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x14008EC40 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14008F8D0 (KeEnumerateNextProcessor.c)
 *     KeGenericProcessorCallback @ 0x1400A8F40 (KeGenericProcessorCallback.c)
 *     KiGetDeepIdleProcessors @ 0x1400DE17C (KiGetDeepIdleProcessors.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void KeFlushQueuedDpcs(void)
{
  int v0; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int16 *v1[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int16 v2; // [rsp+38h] [rbp-C8h]
  _BYTE v3[8]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 *v4; // [rsp+48h] [rbp-B8h]
  unsigned __int16 *v5[22]; // [rsp+F0h] [rbp-10h] BYREF

  KiGetDeepIdleProcessors(v3, v5);
  v1[1] = v4;
  v1[0] = (unsigned __int16 *)v3;
  v2 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v0, v1) )
  {
    if ( *(_DWORD *)(KiProcessorBlock[v0] + 11884) )
      KeAddProcessorAffinityEx(v5, v0);
  }
  KeGenericProcessorCallback(v5, (void (__fastcall *)(struct _KPRCB *, __int64))KiFlushQueuedDpcsWorker, 0LL, 2);
}
