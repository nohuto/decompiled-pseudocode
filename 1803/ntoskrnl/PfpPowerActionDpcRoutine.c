/*
 * XREFs of PfpPowerActionDpcRoutine @ 0x140155C60
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
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
  KxAcquireSpinLock(&qword_1403CD748);
  v6 = *((_DWORD *)v5 + 41);
  if ( v4 )
  {
    if ( qword_1403CD738 && dword_1403CD750 == v6 )
    {
      *((_QWORD *)v5 + 16) = 0LL;
      *((_QWORD *)v5 + 18) = PfpServiceMainThreadUnboost;
      *((_QWORD *)v5 + 19) = v5;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v5 + 4, DelayedWorkQueue);
      v5 = 0LL;
    }
  }
  else if ( dword_1403CD754 == v6 )
  {
    _InterlockedAnd(&dword_1403E27D4, 0xFFFFFFFE);
  }
  KxReleaseSpinLock(&qword_1403CD748);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
}
