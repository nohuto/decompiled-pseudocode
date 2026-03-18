/*
 * XREFs of PiDqQueryRelease @ 0x1404B8DE0
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x1404B8940 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x1404B8CD4 (PiDqObjectManagerUnregisterQuery.c)
 *     PiDqDispatch @ 0x1404B9020 (PiDqDispatch.c)
 * Callees:
 *     Template_p @ 0x1401F9090 (Template_p.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PiDqQueryFreeActiveData @ 0x1404B8D48 (PiDqQueryFreeActiveData.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 */

void __fastcall PiDqQueryRelease(PVOID P)
{
  void *v2; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 53, 0xFFFFFFFF) == 1 )
  {
    if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x400000) != 0 )
      Template_p((__int64)P, &KMPnPEvt_DevQuery_QueryStop, *((const GUID **)P + 3), P);
    PiDqQueryFreeActiveData((__int64)P);
    v2 = (void *)*((_QWORD *)P + 3);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x6370726Bu);
    if ( *((_QWORD *)P + 2) )
      MesHandleFree();
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)P + 1);
    ExFreePoolWithTag(P, 0x58706E50u);
  }
}
