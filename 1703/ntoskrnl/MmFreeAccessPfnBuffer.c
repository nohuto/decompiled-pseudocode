/*
 * XREFs of MmFreeAccessPfnBuffer @ 0x14005F1B8
 * Callers:
 *     MiReturnCcAccessLog @ 0x140006794 (MiReturnCcAccessLog.c)
 *     MiEmptyPageAccessLog @ 0x140006990 (MiEmptyPageAccessLog.c)
 *     MiQueuePageAccessLog @ 0x140006E9C (MiQueuePageAccessLog.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400D8800 (MiTrimOrAgeWorkingSet.c)
 *     PfpReturnAccessBuffer @ 0x140226FA0 (PfpReturnAccessBuffer.c)
 *     PfTAccessTracingCleanup @ 0x14040E304 (PfTAccessTracingCleanup.c)
 *     PfpFlushBuffers @ 0x140496650 (PfpFlushBuffers.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x1400E19E0 (ObDereferenceObjectDeferDelete.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 */

void __fastcall MmFreeAccessPfnBuffer(__int64 a1, char a2)
{
  void *v3; // rcx

  if ( !*(_DWORD *)(a1 + 8) )
  {
    v3 = *(void **)(a1 + 56);
    if ( (unsigned __int64)v3 > 1 )
    {
      if ( a2 )
        ObDereferenceObjectDeferDelete(v3);
      else
        ObfDereferenceObject(v3);
    }
  }
  ExFreePoolWithTag((PVOID)a1, 0);
}
