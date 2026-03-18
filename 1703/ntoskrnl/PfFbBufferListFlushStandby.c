/*
 * XREFs of PfFbBufferListFlushStandby @ 0x14005F298
 * Callers:
 *     PfpFlushEventBuffers @ 0x1404962F0 (PfpFlushEventBuffers.c)
 *     PfGetCompletedTrace @ 0x140498110 (PfGetCompletedTrace.c)
 *     PfSnEndTrace @ 0x14056637C (PfSnEndTrace.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x14005F1F8 (PfFbBufferListInsertInFree.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     RtlpInterlockedFlushSList @ 0x1401894F0 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

void __fastcall PfFbBufferListFlushStandby(_SLIST_ENTRY *RunRef)
{
  PSLIST_ENTRY v2; // rdi
  PSLIST_ENTRY v3; // rsi

  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)RunRef) )
  {
    v2 = RtlpInterlockedFlushSList((PSLIST_HEADER)&RunRef[2]);
    while ( v2 )
    {
      v3 = v2;
      v2 = v2->Next;
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)RunRef) )
        ((void (__fastcall *)(PSLIST_ENTRY))RunRef[6].Next)(v3);
      else
        PfFbBufferListInsertInFree(RunRef, v3, LODWORD(v3[2].Next) - (_DWORD)v3, *((_DWORD *)&v3[2].Next + 3), 0);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)RunRef);
  }
}
