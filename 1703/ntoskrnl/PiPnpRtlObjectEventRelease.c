/*
 * XREFs of PiPnpRtlObjectEventRelease @ 0x140489038
 * Callers:
 *     PiPnpRtlObjectEventCreate @ 0x14048689C (PiPnpRtlObjectEventCreate.c)
 *     PiPnpRtlEndOperation @ 0x140488F04 (PiPnpRtlEndOperation.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1404B8940 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryActionQueueEntryFree @ 0x1404B993C (PiDqQueryActionQueueEntryFree.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PiDmObjectRelease @ 0x140485734 (PiDmObjectRelease.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 */

void __fastcall PiPnpRtlObjectEventRelease(char *P)
{
  unsigned int *v2; // rcx
  void *v3; // rcx
  unsigned int i; // edi
  void *v5; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P, 0xFFFFFFFF) == 1 )
  {
    v2 = (unsigned int *)*((_QWORD *)P + 1);
    if ( v2 )
      PiDmObjectRelease(v2);
    v3 = (void *)*((_QWORD *)P + 2);
    if ( v3 )
      ZwClose(v3);
    if ( (*((_DWORD *)P + 1) & 4) != 0 )
      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(P + 24));
    for ( i = 0; i < *((_DWORD *)P + 19); ++i )
    {
      v5 = *(void **)&P[32 * i + 104];
      if ( v5 )
        ExFreePoolWithTag(v5, 0x41706E50u);
    }
    ExFreePoolWithTag(P, 0x41706E50u);
  }
}
