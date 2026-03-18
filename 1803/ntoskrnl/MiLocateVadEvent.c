/*
 * XREFs of MiLocateVadEvent @ 0x1401147D0
 * Callers:
 *     MiUserFault @ 0x14001B870 (MiUserFault.c)
 *     MiCheckUserVirtualAddress @ 0x14003E2E0 (MiCheckUserVirtualAddress.c)
 *     MiFreeVadRange @ 0x1400719E4 (MiFreeVadRange.c)
 *     MiDeletePartialVad @ 0x140071BC0 (MiDeletePartialVad.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1400AE1C8 (MiCaptureWriteWatchDirtyBit.c)
 *     MiCloneVads @ 0x140140C44 (MiCloneVads.c)
 *     MiMarkMdlComplete @ 0x1402582B8 (MiMarkMdlComplete.c)
 *     MmFreeVirtualMemory @ 0x1404AD570 (MmFreeVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x1404D7010 (MiUnmapViewOfSection.c)
 *     MiFreeToSubAllocatedRegion @ 0x140562CBC (MiFreeToSubAllocatedRegion.c)
 *     MiMarkPrivateImageCfgBits @ 0x140574F8C (MiMarkPrivateImageCfgBits.c)
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1405B5C20 (MmQueryVirtualMemory.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1405BA858 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateChildVads @ 0x1405BF6F8 (MiAllocateChildVads.c)
 *     MiGetReadyInPageBlock @ 0x14074D190 (MiGetReadyInPageBlock.c)
 *     MiCopyLargeVad @ 0x140755448 (MiCopyLargeVad.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall MiLocateVadEvent(__int64 a1, int a2)
{
  __int64 **result; // rax

  for ( result = *(__int64 ***)(a1 + 56); result && (a2 & (_DWORD)result[8]) == 0; result = (__int64 **)*result )
    ;
  return result;
}
