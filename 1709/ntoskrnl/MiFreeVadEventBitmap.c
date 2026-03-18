/*
 * XREFs of MiFreeVadEventBitmap @ 0x1406E26F4
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1404965C0 (MiAllocateVirtualMemory.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14056A41C (MiAllocateNewSubAllocatedRegion.c)
 *     MiDeletePartialCloneVads @ 0x1406EC69C (MiDeletePartialCloneVads.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400379D0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiGetVadWakeList @ 0x140038190 (MiGetVadWakeList.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
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
