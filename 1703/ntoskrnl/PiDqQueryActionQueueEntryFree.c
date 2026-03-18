/*
 * XREFs of PiDqQueryActionQueueEntryFree @ 0x1404B993C
 * Callers:
 *     PiDqQueryFreeActiveData @ 0x1404B8D48 (PiDqQueryFreeActiveData.c)
 *     PiDqQuerySerializeActionQueue @ 0x1404B95DC (PiDqQuerySerializeActionQueue.c)
 * Callees:
 *     PiDmObjectRelease @ 0x140485734 (PiDmObjectRelease.c)
 *     PiPnpRtlObjectEventRelease @ 0x140489038 (PiPnpRtlObjectEventRelease.c)
 */

void __fastcall PiDqQueryActionQueueEntryFree(_QWORD *a1)
{
  unsigned int *v2; // rcx
  char *v3; // rcx

  v2 = (unsigned int *)a1[2];
  if ( v2 )
    PiDmObjectRelease(v2);
  v3 = (char *)a1[3];
  if ( v3 )
    PiPnpRtlObjectEventRelease(v3);
  ExFreePoolWithTag(a1, 0x58706E50u);
}
