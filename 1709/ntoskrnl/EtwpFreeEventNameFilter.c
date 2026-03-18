/*
 * XREFs of EtwpFreeEventNameFilter @ 0x140750FEC
 * Callers:
 *     EtwpFreeFilterInfo @ 0x1404EE99C (EtwpFreeFilterInfo.c)
 *     EtwpUpdateFilterData @ 0x1404EEF40 (EtwpUpdateFilterData.c)
 *     EtwpAllocateEventNameFilter @ 0x140750064 (EtwpAllocateEventNameFilter.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeEventNameFilter(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[4];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
}
