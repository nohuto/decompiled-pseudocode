/*
 * XREFs of MiLocateVadEvent @ 0x1400CE790
 * Callers:
 *     MiCloneVads @ 0x1400018B8 (MiCloneVads.c)
 *     MiFreeVadRange @ 0x140016C10 (MiFreeVadRange.c)
 *     NtResetWriteWatch @ 0x14001DB40 (NtResetWriteWatch.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14002CA88 (MiCaptureWriteWatchDirtyBit.c)
 *     MiCheckUserVirtualAddress @ 0x14007C120 (MiCheckUserVirtualAddress.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     NtGetWriteWatch @ 0x140101A00 (NtGetWriteWatch.c)
 *     MiMarkMdlComplete @ 0x140214128 (MiMarkMdlComplete.c)
 *     MiMarkPrivateImageCfgBits @ 0x14044169C (MiMarkPrivateImageCfgBits.c)
 *     MiFreeToSubAllocatedRegion @ 0x140499C38 (MiFreeToSubAllocatedRegion.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1404C85E0 (MiAllocateNewSubAllocatedRegion.c)
 *     MmQueryVirtualMemory @ 0x14051B090 (MmQueryVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 *     MiGetReadyInPageBlock @ 0x1406B6334 (MiGetReadyInPageBlock.c)
 *     MiCopyLargeVad @ 0x1406BE598 (MiCopyLargeVad.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall MiLocateVadEvent(__int64 a1, int a2)
{
  __int64 **result; // rax

  for ( result = *(__int64 ***)(a1 + 56); result; result = (__int64 **)*result )
  {
    if ( (a2 & (_DWORD)result[8]) != 0 )
      break;
  }
  return result;
}
