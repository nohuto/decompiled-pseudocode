/*
 * XREFs of PfpPowerActionDpcRoutine @ 0x14013DB70
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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
  KxAcquireSpinLock(&qword_14036DEC8);
  v6 = *((_DWORD *)v5 + 41);
  if ( v4 )
  {
    if ( qword_14036DEB8 && dword_14036DED0 == v6 )
    {
      *((_QWORD *)v5 + 16) = 0LL;
      *((_QWORD *)v5 + 18) = PfpServiceMainThreadUnboost;
      *((_QWORD *)v5 + 19) = v5;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v5 + 4, DelayedWorkQueue);
      v5 = 0LL;
    }
  }
  else if ( dword_14036DED4 == v6 )
  {
    _InterlockedAnd(&dword_140382C14, 0xFFFFFFFE);
  }
  KxReleaseSpinLock(&qword_14036DEC8);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
}
