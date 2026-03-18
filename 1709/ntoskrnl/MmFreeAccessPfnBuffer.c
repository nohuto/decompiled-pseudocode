/*
 * XREFs of MmFreeAccessPfnBuffer @ 0x140011CE0
 * Callers:
 *     MiReturnCcAccessLog @ 0x140007EDC (MiReturnCcAccessLog.c)
 *     MiQueuePageAccessLog @ 0x140007F3C (MiQueuePageAccessLog.c)
 *     PfpReturnAccessBuffer @ 0x1400107F0 (PfpReturnAccessBuffer.c)
 *     MiEmptyPageAccessLog @ 0x140011730 (MiEmptyPageAccessLog.c)
 *     PfTAccessTracingCleanup @ 0x1404312A0 (PfTAccessTracingCleanup.c)
 *     PfpFlushBuffers @ 0x140455670 (PfpFlushBuffers.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140071350 (ObDereferenceObjectDeferDelete.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall MmFreeAccessPfnBuffer(_QWORD *P, char a2)
{
  void *v3; // rcx

  if ( !*((_DWORD *)P + 2) )
  {
    v3 = (void *)P[7];
    if ( (unsigned __int64)v3 > 1 )
    {
      if ( a2 )
        ObDereferenceObjectDeferDelete(v3);
      else
        ObfDereferenceObject(v3);
    }
  }
  ExFreePoolWithTag(P, 0);
}
