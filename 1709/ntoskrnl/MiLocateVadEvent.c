/*
 * XREFs of MiLocateVadEvent @ 0x14010C834
 * Callers:
 *     NtGetWriteWatch @ 0x140031CA0 (NtGetWriteWatch.c)
 *     MiFreeVadRange @ 0x140032AC0 (MiFreeVadRange.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiCloneVads @ 0x1400E6F20 (MiCloneVads.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1400E9684 (MiCaptureWriteWatchDirtyBit.c)
 *     MiCheckUserVirtualAddress @ 0x140109820 (MiCheckUserVirtualAddress.c)
 *     MiMarkMdlComplete @ 0x14021C168 (MiMarkMdlComplete.c)
 *     MiAllocateVirtualMemory @ 0x1404965C0 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x140497DA0 (MmQueryVirtualMemory.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14056A41C (MiAllocateNewSubAllocatedRegion.c)
 *     MiFreeToSubAllocatedRegion @ 0x14056A828 (MiFreeToSubAllocatedRegion.c)
 *     MiMarkPrivateImageCfgBits @ 0x1405873F8 (MiMarkPrivateImageCfgBits.c)
 *     MiGetReadyInPageBlock @ 0x1406E2624 (MiGetReadyInPageBlock.c)
 *     MiCopyLargeVad @ 0x1406EB9F8 (MiCopyLargeVad.c)
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
