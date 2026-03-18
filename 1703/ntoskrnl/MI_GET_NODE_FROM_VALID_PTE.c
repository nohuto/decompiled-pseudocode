/*
 * XREFs of MI_GET_NODE_FROM_VALID_PTE @ 0x14021EDAC
 * Callers:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x14010F680 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     MmDeleteKernelStack @ 0x140110020 (MmDeleteKernelStack.c)
 * Callees:
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MI_GET_NODE_FROM_VALID_PTE(__int64 a1)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = MI_READ_PTE_LOCK_FREE(a1);
  return *(_QWORD *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v2) - 0x57FFFFFFFD8LL) >> 58;
}
