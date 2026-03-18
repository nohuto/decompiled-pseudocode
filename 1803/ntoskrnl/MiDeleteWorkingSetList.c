/*
 * XREFs of MiDeleteWorkingSetList @ 0x14007040C
 * Callers:
 *     MiDeleteSessionAddressSpace @ 0x140153D40 (MiDeleteSessionAddressSpace.c)
 *     MmDeleteProcessAddressSpace @ 0x1405128C0 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteWorkingSetList(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 16);
  if ( v2 )
  {
    if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
      ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
