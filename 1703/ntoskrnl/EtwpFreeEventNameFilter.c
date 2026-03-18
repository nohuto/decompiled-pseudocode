/*
 * XREFs of EtwpFreeEventNameFilter @ 0x140712F20
 * Callers:
 *     EtwpFreeFilterInfo @ 0x140553DFC (EtwpFreeFilterInfo.c)
 *     EtwpUpdateFilterData @ 0x140554514 (EtwpUpdateFilterData.c)
 *     EtwpAllocateEventNameFilter @ 0x1405C1A20 (EtwpAllocateEventNameFilter.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeEventNameFilter(_QWORD *a1)
{
  void *v2; // rcx

  v2 = (void *)a1[4];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(a1, 0);
}
