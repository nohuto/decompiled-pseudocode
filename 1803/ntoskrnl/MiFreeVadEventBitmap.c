/*
 * XREFs of MiFreeVadEventBitmap @ 0x14074D260
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1405BA858 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateChildVads @ 0x1405BF6F8 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x140756210 (MiDeletePartialCloneVads.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400F0EE0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiGetVadWakeList @ 0x1400FD750 (MiGetVadWakeList.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeVadEventBitmap(struct _KPROCESS *a1, __int64 a2, unsigned int a3)
{
  __int64 *VadWakeList; // rax
  __int64 *v5; // rbx

  VadWakeList = MiGetVadWakeList(a2, a3);
  v5 = VadWakeList;
  if ( VadWakeList )
  {
    PsReturnProcessNonPagedPoolQuota(
      a1,
      8 * (((unsigned __int64)VadWakeList[1] >> 6) + ((VadWakeList[1] & 0x3F) != 0) + 9LL));
    ExFreePoolWithTag(v5, 0);
  }
}
