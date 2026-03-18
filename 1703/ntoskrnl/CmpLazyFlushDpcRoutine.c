/*
 * XREFs of CmpLazyFlushDpcRoutine @ 0x140037910
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine5 @ 0x14018B040 (KiCustomAccessRoutine5.c)
 */

void __fastcall CmpLazyFlushDpcRoutine(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  if ( DeferredContext >> 47 != -1 && DeferredContext >> 47 != 0 )
  {
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    KiCustomAccessRoutine5(DeferredContext);
  }
  KxAcquireSpinLock((PKSPIN_LOCK)(DeferredContext + 152));
  if ( CmpHoldLazyFlush )
    *(_QWORD *)(DeferredContext + 168) = 0LL;
  else
    KeSetEvent((PRKEVENT)(DeferredContext + 128), 0, 0);
  KxReleaseSpinLock((PKSPIN_LOCK)(DeferredContext + 152));
}
