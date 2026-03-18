/*
 * XREFs of MmAllocateVirtualMemory @ 0x1405763CC
 * Callers:
 *     PsDispatchIumService @ 0x14024ED54 (PsDispatchIumService.c)
 * Callees:
 *     MiAllocateVirtualMemory @ 0x1404965C0 (MiAllocateVirtualMemory.c)
 *     MiAllocateUserStack @ 0x1404D9354 (MiAllocateUserStack.c)
 */

__int64 __fastcall MmAllocateVirtualMemory(
        __int64 a1,
        unsigned __int64 *a2,
        void *a3,
        unsigned __int64 *a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        signed int a8,
        int a9,
        unsigned __int64 *a10)
{
  if ( a8 < 0 )
    return MiAllocateUserStack(0xFFFFFFFFFFFFFFFFuLL, a2, a3, a4, a5, a6, 0, a8, a9, a10);
  else
    return MiAllocateVirtualMemory(-1LL, a2, (ULONGLONG)a3, a4, a5, a6, 0, a8, a9, a10);
}
