/*
 * XREFs of MiDeleteWorkingSetList @ 0x140062C50
 * Callers:
 *     MiDeleteSessionAddressSpace @ 0x14013E414 (MiDeleteSessionAddressSpace.c)
 *     MmDeleteProcessAddressSpace @ 0x1404998CC (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteWorkingSetList(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 16);
  if ( v2 )
  {
    if ( (*(_BYTE *)(a1 + 192) & 7) == 0 )
      ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
