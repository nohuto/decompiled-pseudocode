/*
 * XREFs of PfpPowerActionDpcRoutine @ 0x140239670
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall PfpPowerActionDpcRoutine(
        struct _KDPC *Dpc,
        _DWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v4; // ebx
  PVOID v5; // rdi
  int v6; // eax

  v4 = DeferredContext[40];
  v5 = DeferredContext;
  KxAcquireSpinLock(&qword_14038D328);
  v6 = *((_DWORD *)v5 + 41);
  if ( v4 )
  {
    if ( dword_14038D330 == v6 && qword_14038D318 )
    {
      *((_QWORD *)v5 + 16) = 0LL;
      *((_QWORD *)v5 + 18) = PfpServiceMainThreadUnboost;
      *((_QWORD *)v5 + 19) = v5;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v5 + 4, DelayedWorkQueue);
      v5 = 0LL;
    }
  }
  else if ( dword_14038D334 == v6 )
  {
    _InterlockedAnd(&dword_14039E914, 0xFFFFFFFE);
  }
  KxReleaseSpinLock(&qword_14038D328);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
}
