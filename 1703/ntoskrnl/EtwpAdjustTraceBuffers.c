/*
 * XREFs of EtwpAdjustTraceBuffers @ 0x14011D770
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpAdjustSiloTraceBuffers @ 0x140087DD0 (EtwpAdjustSiloTraceBuffers.c)
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PspGetNextSilo @ 0x14054B0C4 (PspGetNextSilo.c)
 */

void EtwpAdjustTraceBuffers()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 NextSilo; // rax
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v5; // rsi
  __int64 v6; // rcx
  PSLIST_ENTRY v7; // rax

  if ( EtwpHostSiloState && !*(_DWORD *)(EtwpHostSiloState + 5036) )
  {
    EtwpAdjustSiloTraceBuffers(EtwpHostSiloState);
    v1 = 0LL;
    while ( 1 )
    {
      LOBYTE(v0) = 1;
      NextSilo = PspGetNextSilo(v1, v0);
      v3 = NextSilo;
      if ( !NextSilo )
        break;
      CurrentThread = KeGetCurrentThread();
      v5 = *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160];
      *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160] = NextSilo;
      v6 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
      if ( v6 && !*(_DWORD *)(v6 + 5036) )
        EtwpAdjustSiloTraceBuffers(v6);
      v1 = v3;
      *(_QWORD *)&KeGetCurrentThread()[1].WaitBlockFill11[160] = v5;
    }
    if ( dword_14036EA64 > 2 * (int)KeNumberProcessors_0 * dword_14036EA60 )
    {
      do
      {
        v7 = RtlpInterlockedPopEntrySList(&EtwpStackLookAsideList);
        if ( !v7 )
          break;
        ExFreePoolWithTag(v7, 0);
      }
      while ( _InterlockedDecrement(&dword_14036EA64) > 2 * (int)KeNumberProcessors_0 * dword_14036EA60 );
    }
    _InterlockedExchange(&EtwpBufferAdjustmentActive, 0);
  }
}
