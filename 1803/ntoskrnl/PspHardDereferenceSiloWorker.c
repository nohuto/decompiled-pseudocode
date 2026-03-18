/*
 * XREFs of PspHardDereferenceSiloWorker @ 0x140283E60
 * Callers:
 *     PsReleaseSiloHardReference @ 0x140283E10 (PsReleaseSiloHardReference.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1405325F8 (PspEvaluateAndNotifyEmptyJob.c)
 *     NtSetInformationJobObject @ 0x140532FE4 (NtSetInformationJobObject.c)
 *     PspJobClose @ 0x1405797B0 (PspJobClose.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 */

void __fastcall PspHardDereferenceSiloWorker(__int64 a1)
{
  signed __int64 v2; // rdi

  if ( !a1 )
    NT_ASSERT("!PsIsHostSilo(Silo)");
  if ( (*(_DWORD *)(a1 + 1304) & 0x40000000) == 0 )
    NT_ASSERT("PspJobIsSilo(Silo)");
  v2 = _InterlockedDecrement64((volatile signed __int64 *)(a1 + 1504));
  if ( !v2 )
  {
    ObfReferenceObjectWithTag((PVOID)a1, 0x746C6644u);
    *(_QWORD *)(a1 + 1512) = 0LL;
    *(_QWORD *)(a1 + 1528) = PspCompleteHardDereferenceSiloDeferred;
    *(_QWORD *)(a1 + 1536) = a1;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 1512), DelayedWorkQueue);
  }
  if ( v2 == -1 )
    NT_ASSERT("Count != -1");
}
