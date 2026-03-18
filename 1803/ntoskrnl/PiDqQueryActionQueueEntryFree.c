/*
 * XREFs of PiDqQueryActionQueueEntryFree @ 0x14050D608
 * Callers:
 *     PiDqQuerySerializeActionQueue @ 0x14050D2A0 (PiDqQuerySerializeActionQueue.c)
 *     PiDqQueryFreeActiveData @ 0x140573470 (PiDqQueryFreeActiveData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PiDmObjectRelease @ 0x1405078AC (PiDmObjectRelease.c)
 *     PiPnpRtlObjectEventRelease @ 0x140509B1C (PiPnpRtlObjectEventRelease.c)
 */

void __fastcall PiDqQueryActionQueueEntryFree(_QWORD *P)
{
  unsigned int *v2; // rcx
  char *v3; // rcx

  v2 = (unsigned int *)P[2];
  if ( v2 )
    PiDmObjectRelease(v2);
  v3 = (char *)P[3];
  if ( v3 )
    PiPnpRtlObjectEventRelease(v3);
  ExFreePoolWithTag(P, 0x58706E50u);
}
