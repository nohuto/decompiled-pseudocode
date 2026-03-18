/*
 * XREFs of MiAllocateWorkingSetSwapSupport @ 0x14009D4AC
 * Callers:
 *     MmOutSwapWorkingSet @ 0x140062868 (MmOutSwapWorkingSet.c)
 *     MmOutSwapVirtualAddresses @ 0x14009C194 (MmOutSwapVirtualAddresses.c)
 *     MiGetKernelStackSwapSupport @ 0x14009C5E8 (MiGetKernelStackSwapSupport.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x14009D454 (MiReAllocateWorkingSetSwapSupport.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

unsigned __int64 *__fastcall MiAllocateWorkingSetSwapSupport(unsigned __int64 a1)
{
  unsigned __int64 *result; // rax
  unsigned __int64 *v3; // rbx

  result = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 16 * a1 + 40, 0x53576D4Du);
  v3 = result;
  if ( result )
  {
    memset(result, 0, 0x28uLL);
    v3[1] = a1;
    *v3 = ((unsigned __int64)v3 + 47) & 0xFFFFFFFFFFFFFFF8uLL;
    return v3;
  }
  return result;
}
