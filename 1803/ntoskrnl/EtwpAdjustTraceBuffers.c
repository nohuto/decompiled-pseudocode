/*
 * XREFs of EtwpAdjustTraceBuffers @ 0x1400D3DA0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpAdjustSiloTraceBuffers @ 0x1400D3FB4 (EtwpAdjustSiloTraceBuffers.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PspGetNextSilo @ 0x140535274 (PspGetNextSilo.c)
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
  PSLIST_ENTRY v8; // rax

  if ( EtwpHostSiloState && !*(_DWORD *)(EtwpHostSiloState + 4044) )
  {
    EtwpAdjustSiloTraceBuffers();
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
      if ( v6 && !*(_DWORD *)(v6 + 4044) )
        EtwpAdjustSiloTraceBuffers();
      v1 = v3;
      *(_QWORD *)&KeGetCurrentThread()[1].WaitBlockFill11[160] = v5;
    }
    if ( dword_1403D0EE4 > 2 * (int)KeNumberProcessors_0 * dword_1403D0EE0 )
    {
      do
      {
        v7 = RtlpInterlockedPopEntrySList(&EtwpStackLookAsideList);
        if ( !v7 )
          break;
        ExFreePoolWithTag(v7, 0);
      }
      while ( _InterlockedDecrement(&dword_1403D0EE4) > 2 * (int)KeNumberProcessors_0 * dword_1403D0EE0 );
    }
    if ( dword_1403D0F04 > 2 * (int)KeNumberProcessors_0 * dword_1403D0F00 )
    {
      do
      {
        v8 = RtlpInterlockedPopEntrySList(&EtwpLastBranchLookAsideList);
        if ( !v8 )
          break;
        ExFreePoolWithTag(v8, 0);
      }
      while ( _InterlockedDecrement(&dword_1403D0F04) > 2 * (int)KeNumberProcessors_0 * dword_1403D0F00 );
    }
    _InterlockedExchange(&EtwpBufferAdjustmentActive, 0);
  }
}
