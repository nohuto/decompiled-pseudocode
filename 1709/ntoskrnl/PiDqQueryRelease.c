/*
 * XREFs of PiDqQueryRelease @ 0x14054CEF8
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x14054C2A0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqDispatch @ 0x14054C640 (PiDqDispatch.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x14054CFD8 (PiDqObjectManagerUnregisterQuery.c)
 * Callees:
 *     McTemplateK0p @ 0x1401FEE2C (McTemplateK0p.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     PiDqQueryFreeActiveData @ 0x14054CF70 (PiDqQueryFreeActiveData.c)
 */

void __fastcall PiDqQueryRelease(PVOID P)
{
  void *v2; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 53, 0xFFFFFFFF) == 1 )
  {
    if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x400000) != 0 )
      McTemplateK0p((__int64)P, &KMPnPEvt_DevQuery_QueryStop, *((const GUID **)P + 3), P);
    PiDqQueryFreeActiveData(P);
    v2 = (void *)*((_QWORD *)P + 3);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x6370726Bu);
    if ( *((_QWORD *)P + 2) )
      MesHandleFree();
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)P + 1);
    ExFreePoolWithTag(P, 0x58706E50u);
  }
}
