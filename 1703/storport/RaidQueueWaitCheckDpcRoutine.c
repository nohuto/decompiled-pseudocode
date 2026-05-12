/*
 * XREFs of RaidQueueWaitCheckDpcRoutine @ 0x1C002F730
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterCheckWaitTimeout @ 0x1C002BBC4 (RaidAdapterCheckWaitTimeout.c)
 */

void __fastcall RaidQueueWaitCheckDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  _DWORD *v4; // rcx

  v4 = (_DWORD *)DeferredContext[8];
  if ( v4 )
  {
    if ( !*v4 )
      RaidAdapterCheckWaitTimeout((__int64)v4);
  }
}
