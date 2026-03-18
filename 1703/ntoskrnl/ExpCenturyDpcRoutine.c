/*
 * XREFs of ExpCenturyDpcRoutine @ 0x1400045B0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     _local_unwind @ 0x140169A90 (_local_unwind.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine9 @ 0x14018B580 (KiCustomAccessRoutine9.c)
 */

void __fastcall ExpCenturyDpcRoutine(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  _DWORD v5[30]; // [rsp+0h] [rbp-158h] BYREF
  __int64 v6; // [rsp+7Ah] [rbp-DEh]
  __int64 v7; // [rsp+C2h] [rbp-96h]
  unsigned __int64 v8; // [rsp+CAh] [rbp-8Eh]
  _DWORD *v9; // [rsp+138h] [rbp-20h]

  v9 = v5;
  if ( DeferredContext >> 47 != -1 && DeferredContext >> 47 != 0 )
  {
    v5[12] = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    v8 = SystemArgument1;
    v7 = __ROL8__(DeferredContext, SystemArgument1);
    v6 = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    KiCustomAccessRoutine9(DeferredContext);
  }
  if ( _InterlockedIncrement((volatile signed __int32 *)DeferredContext) == 1 )
    ExQueueWorkItem(&ExpCenturyWorkItem, DelayedWorkQueue);
}
