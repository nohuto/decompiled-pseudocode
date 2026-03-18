/*
 * XREFs of ExpTimeZoneDpcRoutine @ 0x140259F20
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     _local_unwind @ 0x140169A90 (_local_unwind.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine8 @ 0x14018B4C0 (KiCustomAccessRoutine8.c)
 */

void __fastcall ExpTimeZoneDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  _DWORD v5[28]; // [rsp+0h] [rbp-168h] BYREF
  __int64 v6; // [rsp+91h] [rbp-D7h]
  __int64 v7; // [rsp+C9h] [rbp-9Fh]
  unsigned __int64 v8; // [rsp+D9h] [rbp-8Fh]
  _DWORD *v9; // [rsp+150h] [rbp-18h]

  v9 = v5;
  if ( (__int64)DeferredContext >> 47 != -1 && (__int64)DeferredContext >> 47 != 0 )
  {
    v5[12] = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    v8 = SystemArgument1;
    v7 = __ROL8__(DeferredContext, SystemArgument1);
    v6 = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    KiCustomAccessRoutine8((unsigned int *)DeferredContext);
  }
  if ( _InterlockedIncrement((volatile signed __int32 *)DeferredContext) == 1 )
    ExQueueWorkItem(&ExpTimeZoneWorkItem, DelayedWorkQueue);
}
