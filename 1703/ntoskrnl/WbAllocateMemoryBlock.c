/*
 * XREFs of WbAllocateMemoryBlock @ 0x14043EE04
 * Callers:
 *     WbAllocateUserMemory @ 0x1405486B8 (WbAllocateUserMemory.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x14043EF34 (WbMakeUserExecutablePagesKernelWritable.c)
 *     MmSecureVirtualMemory @ 0x14043F030 (MmSecureVirtualMemory.c)
 *     MmAllocateVirtualMemory @ 0x1404A42E8 (MmAllocateVirtualMemory.c)
 *     WbAlloc @ 0x14053BF78 (WbAlloc.c)
 *     WbFreeMemoryBlock @ 0x140548FA4 (WbFreeMemoryBlock.c)
 */

__int64 __fastcall WbAllocateMemoryBlock(__int64 a1, _QWORD *a2)
{
  int VirtualMemory; // edi
  int v4; // ecx

  VirtualMemory = WbAlloc(0x440uLL);
  if ( VirtualMemory >= 0 )
  {
    MEMORY[0] = 0LL;
    MEMORY[8] = 0x10000LL;
    MEMORY[0x18] = 0LL;
    MEMORY[0x20] = 0LL;
    MEMORY[0x438] = 0LL;
    MEMORY[0x10] = KeGetCurrentThread()->ApcState.Process;
    MEMORY[0x430] = 0LL;
    memset((void *)0x2C, 0, 0x400uLL);
    VirtualMemory = MmAllocateVirtualMemory(v4, 0, 0, 8, 4096, 32);
    if ( VirtualMemory >= 0 )
    {
      MEMORY[0x438] = MmSecureVirtualMemory(MEMORY[0], MEMORY[8], 2u);
      if ( MEMORY[0x438] )
      {
        VirtualMemory = WbMakeUserExecutablePagesKernelWritable(MEMORY[0], MEMORY[8], 24LL, 32LL);
        if ( VirtualMemory >= 0 && a2 )
          *a2 = 0LL;
      }
      else
      {
        VirtualMemory = -1073741595;
      }
    }
  }
  WbFreeMemoryBlock(0LL);
  return (unsigned int)VirtualMemory;
}
