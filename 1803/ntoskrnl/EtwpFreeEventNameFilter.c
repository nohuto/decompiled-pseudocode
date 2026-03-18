/*
 * XREFs of EtwpFreeEventNameFilter @ 0x1407B1D2C
 * Callers:
 *     EtwpUpdateFilterData @ 0x14058CE40 (EtwpUpdateFilterData.c)
 *     EtwpFreeFilterInfo @ 0x14058D9F0 (EtwpFreeFilterInfo.c)
 *     EtwpAllocateEventNameFilter @ 0x1407B0D2C (EtwpAllocateEventNameFilter.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeEventNameFilter(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[4];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
}
