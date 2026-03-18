/*
 * XREFs of MiFreeVadEventBitmap @ 0x1406B6404
 * Callers:
 *     MiAllocateNewSubAllocatedRegion @ 0x1404C85E0 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 *     MiDeletePartialCloneVad @ 0x1406BF360 (MiDeletePartialCloneVad.c)
 * Callees:
 *     MiGetVadWakeList @ 0x1400DAF90 (MiGetVadWakeList.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400DB850 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeVadEventBitmap(struct _KPROCESS *a1, __int64 a2, int a3)
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
