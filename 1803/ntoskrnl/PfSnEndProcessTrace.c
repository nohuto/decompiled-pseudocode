/*
 * XREFs of PfSnEndProcessTrace @ 0x14048C130
 * Callers:
 *     PfSnOperationProcess @ 0x14048C2D0 (PfSnOperationProcess.c)
 *     PspExitProcess @ 0x14050FEC8 (PspExitProcess.c)
 *     PfSnFailProcessTrace @ 0x1405C45A4 (PfSnFailProcessTrace.c)
 * Callees:
 *     PfSnReferenceProcessTrace @ 0x14008DE70 (PfSnReferenceProcessTrace.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     memcmp @ 0x140189130 (memcmp.c)
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
    ExReleaseRundownProtection(v7 + 45);
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v6;
}
