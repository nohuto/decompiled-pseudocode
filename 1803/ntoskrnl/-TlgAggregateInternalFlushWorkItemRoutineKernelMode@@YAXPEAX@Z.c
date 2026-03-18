/*
 * XREFs of ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x14052D700
 * Callers:
 *     <none>
 * Callees:
 *     EnableFlushTimer @ 0x1400844D0 (EnableFlushTimer.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     LookUpTableFlushComplete @ 0x14052D76C (LookUpTableFlushComplete.c)
 *     LookUpTableFlushPartial @ 0x14052D964 (LookUpTableFlushPartial.c)
 */

void __fastcall TlgAggregateInternalFlushWorkItemRoutineKernelMode(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( *((_BYTE *)a1 + 372) )
  {
    *((_BYTE *)a1 + 372) = 0;
    LookUpTableFlushComplete(a1, a2, a3);
  }
  else
  {
    LookUpTableFlushPartial(a1, a2, a3, a4);
  }
  if ( *((_DWORD *)a1 + 64) )
    EnableFlushTimer(*((_QWORD *)a1 + 45));
  if ( _InterlockedCompareExchange16((volatile signed __int16 *)(*((_QWORD *)a1 + 33) + 56LL), 0, 1) == 2 )
    KeSetEvent((PRKEVENT)(*((_QWORD *)a1 + 33) + 32LL), 0, 0);
}
