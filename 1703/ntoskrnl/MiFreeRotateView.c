/*
 * XREFs of MiFreeRotateView @ 0x1406B62F4
 * Callers:
 *     MiDeletePartialVad @ 0x140016CB0 (MiDeletePartialVad.c)
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiGetVadWakeList @ 0x1400DAF90 (MiGetVadWakeList.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeRotateView(__int64 a1)
{
  __int64 *VadWakeList; // rax
  __int64 *v2; // rbx
  void *v3; // rcx

  VadWakeList = MiGetVadWakeList(a1, 8);
  v2 = VadWakeList;
  if ( VadWakeList )
  {
    v3 = (void *)VadWakeList[1];
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    ExFreePoolWithTag(v2, 0);
  }
}
