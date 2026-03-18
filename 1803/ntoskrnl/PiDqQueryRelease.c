/*
 * XREFs of PiDqQueryRelease @ 0x1405733F8
 * Callers:
 *     PiDqDispatch @ 0x14050B510 (PiDqDispatch.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x140573384 (PiDqObjectManagerUnregisterQuery.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1405DD500 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     McTemplateK0p @ 0x14023B79C (McTemplateK0p.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PiDqQueryFreeActiveData @ 0x140573470 (PiDqQueryFreeActiveData.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
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
