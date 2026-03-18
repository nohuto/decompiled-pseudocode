/*
 * XREFs of PfSnEndProcessTrace @ 0x140455060
 * Callers:
 *     PfSnOperationProcess @ 0x140447278 (PfSnOperationProcess.c)
 *     PspExitProcess @ 0x1404FCEF4 (PspExitProcess.c)
 *     PfSnFailProcessTrace @ 0x1406F4650 (PfSnFailProcessTrace.c)
 * Callees:
 *     PfSnReferenceProcessTrace @ 0x140012760 (PfSnReferenceProcessTrace.c)
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     memcmp @ 0x14015F370 (memcmp.c)
 */

__int64 __fastcall PfSnEndProcessTrace(__int64 a1, signed __int32 a2, const void *a3)
{
  struct _EX_RUNDOWN_REF *v5; // rax
  unsigned int v6; // ebx
  struct _EX_RUNDOWN_REF *v7; // rdi

  v5 = PfSnReferenceProcessTrace(a1);
  v6 = 0;
  v7 = v5;
  if ( v5 )
  {
    if ( !a3 || !memcmp(a3, &v5[3], 0x40uLL) )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)&v7[50], a2, 0) )
        v6 = -1073741431;
      else
        ExQueueWorkItem((PWORK_QUEUE_ITEM)&v7[46], DelayedWorkQueue);
    }
    else
    {
      v6 = -1073741198;
    }
    ExReleaseRundownProtection_0(v7 + 45);
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v6;
}
