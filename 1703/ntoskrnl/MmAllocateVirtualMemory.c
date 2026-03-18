/*
 * XREFs of MmAllocateVirtualMemory @ 0x1404A42E8
 * Callers:
 *     WbAllocateMemoryBlock @ 0x14043EE04 (WbAllocateMemoryBlock.c)
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 * Callees:
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 */

__int64 __fastcall MmAllocateVirtualMemory(int a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7, int a8)
{
  char v9; // [rsp+30h] [rbp-28h]

  if ( a8 < 0 )
    return MiAllocateUserStack(a1, a2, a3, a4, a5, a6, a7, a8);
  if ( (a8 & 0x20000000) == 0 )
    return 3221225659LL;
  v9 = 0;
  return MiAllocateVirtualMemory(-1LL, a2, a3, a4, a5, a6, v9, a8, 0LL);
}
