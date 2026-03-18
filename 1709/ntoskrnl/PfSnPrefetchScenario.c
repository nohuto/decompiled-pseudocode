/*
 * XREFs of PfSnPrefetchScenario @ 0x140452E48
 * Callers:
 *     PfSnBeginScenario @ 0x140453178 (PfSnBeginScenario.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExWaitForRundownProtectionRelease @ 0x1400A9850 (ExWaitForRundownProtectionRelease.c)
 *     KeQueryPriorityThread @ 0x140100BB0 (KeQueryPriorityThread.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PfSnAsyncContextInitialize @ 0x140452EEC (PfSnAsyncContextInitialize.c)
 */

__int64 __fastcall PfSnPrefetchScenario(void *a1, unsigned int a2)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  struct _WORK_QUEUE_ITEM *v5; // rdi
  KPRIORITY PriorityThread; // eax
  unsigned int v7; // edi
  struct _EX_RUNDOWN_REF RunRef; // [rsp+30h] [rbp+8h] BYREF

  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xF8uLL, 0x61506343u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    PfSnAsyncContextInitialize(PoolWithTag, a1, &RunRef, (a2 >> 4) & 1);
    a1 = 0LL;
    ExAcquireRundownProtection_0(&RunRef);
    PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
    ExQueueWorkItem(v5, (WORK_QUEUE_TYPE)(PriorityThread + 32));
    v7 = 0;
    ExWaitForRundownProtectionRelease(&RunRef);
  }
  else
  {
    v7 = -1073741670;
  }
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
  return v7;
}
