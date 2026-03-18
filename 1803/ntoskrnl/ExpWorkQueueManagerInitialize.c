/*
 * XREFs of ExpWorkQueueManagerInitialize @ 0x1406476EC
 * Callers:
 *     ExpPartitionInitialize @ 0x140647350 (ExpPartitionInitialize.c)
 * Callees:
 *     KeSelectIdealProcessor @ 0x14006B868 (KeSelectIdealProcessor.c)
 *     KeQueryNodeActiveAffinity @ 0x14007ED60 (KeQueryNodeActiveAffinity.c)
 *     KeInitializeTimer2 @ 0x140086040 (KeInitializeTimer2.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     KeInitializeTimerEx @ 0x1401325F0 (KeInitializeTimerEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall ExpWorkQueueManagerInitialize(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF

  memset(a1, 0, 0x118uLL);
  *a1 = a2;
  a1[1] = a3;
  KeInitializeEvent((PRKEVENT)(a1 + 2), SynchronizationEvent, 0);
  KeInitializeTimerEx((PKTIMER)(a1 + 5), SynchronizationTimer);
  KeInitializeEvent((PRKEVENT)(a1 + 13), SynchronizationEvent, 0);
  KeInitializeTimer2((__int64)(a1 + 16));
  KeQueryNodeActiveAffinity(*(_WORD *)(a1[1] + 146LL), &Affinity, 0LL);
  result = KeSelectIdealProcessor(a1[1], (__int64)&Affinity, 0LL);
  *((_DWORD *)a1 + 69) = result;
  return result;
}
