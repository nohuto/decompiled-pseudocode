/*
 * XREFs of WbAllocateMemoryBlock @ 0x140575B10
 * Callers:
 *     WbAllocateUserMemory @ 0x140576058 (WbAllocateUserMemory.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     MiAllocateVirtualMemory @ 0x1404965C0 (MiAllocateVirtualMemory.c)
 *     WbAlloc @ 0x140501FF8 (WbAlloc.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x140575C50 (WbMakeUserExecutablePagesKernelWritable.c)
 *     WbFreeMemoryBlock @ 0x14057631C (WbFreeMemoryBlock.c)
 */

__int64 __fastcall WbAllocateMemoryBlock(__int64 a1, unsigned __int64 **a2)
{
  int VirtualMemory; // edi
  PVOID *v4; // rax
  unsigned __int64 *v5; // r15
  PVOID *v6; // rbp
  PVOID *v7; // r12
  unsigned __int64 *v8; // r14
  unsigned __int64 *v9; // rbx
  PVOID *BaseAddress; // [rsp+80h] [rbp+8h] BYREF

  BaseAddress = 0LL;
  VirtualMemory = WbAlloc(0x440uLL, &BaseAddress);
  if ( VirtualMemory < 0 )
  {
    v9 = (unsigned __int64 *)BaseAddress;
  }
  else
  {
    v4 = BaseAddress;
    *BaseAddress = 0LL;
    v5 = (unsigned __int64 *)(v4 + 1);
    v4[1] = (PVOID)0x10000;
    v6 = v4 + 3;
    v4[3] = 0LL;
    v7 = v4 + 4;
    v4[4] = 0LL;
    v8 = (unsigned __int64 *)(v4 + 135);
    v4[135] = 0LL;
    v9 = (unsigned __int64 *)BaseAddress;
    BaseAddress[2] = KeGetCurrentThread()->ApcState.Process;
    v9[134] = 0LL;
    memset((char *)v9 + 44, 0, 0x400uLL);
    VirtualMemory = MiAllocateVirtualMemory(-1LL, v9, 0LL, v5, 4096, 0x20u, 0, 0x20000000u, 2, v8);
    if ( VirtualMemory >= 0 )
    {
      if ( *v8 )
      {
        VirtualMemory = WbMakeUserExecutablePagesKernelWritable(*v9, *(unsigned int *)v5, v6, v7);
        if ( VirtualMemory >= 0 && a2 )
        {
          *a2 = v9;
          v9 = 0LL;
        }
      }
      else
      {
        VirtualMemory = -1073741595;
      }
    }
  }
  WbFreeMemoryBlock((PVOID *)v9);
  return (unsigned int)VirtualMemory;
}
