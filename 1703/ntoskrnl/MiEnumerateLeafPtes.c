/*
 * XREFs of MiEnumerateLeafPtes @ 0x140079AD8
 * Callers:
 *     MmOutSwapVirtualAddresses @ 0x140004100 (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x1400793EC (MmOutSwapWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14007C6D8 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiReleaseCommitForResetPages @ 0x14020C108 (MiReleaseCommitForResetPages.c)
 *     MmMarkHiberPhase @ 0x14040D3A0 (MmMarkHiberPhase.c)
 *     MmMarkImageForHiberPhase @ 0x14040DDE0 (MmMarkImageForHiberPhase.c)
 *     MiEnumerateKernelLeafPtes @ 0x14040DFCC (MiEnumerateKernelLeafPtes.c)
 * Callees:
 *     MiGetNextPageTable @ 0x1400D2560 (MiGetNextPageTable.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall MiEnumerateLeafPtes(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 (__fastcall *a3)(__int64, unsigned __int64, unsigned __int64),
        __int64 a4,
        int a5)
{
  __int64 v7; // r12
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v12; // rbp
  int v13; // r14d
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  __int64 v18; // rbx
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // [rsp+60h] [rbp+8h] BYREF

  v7 = a4;
  do
  {
    v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( a1 < 0xFFFFF68000000000uLL && a2 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      a1 = 0xFFFFF70000000000uLL;
      v10 = 0xFFFFF67FFFFFFFFFuLL;
    }
    else
    {
      a1 = a2;
      v10 = a2;
    }
    result = 0xFFFFF68000000000uLL;
    v12 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( v9 <= v12 )
    {
      v13 = a5 | 1;
      do
      {
        LOBYTE(a4) = 17;
        result = MiGetNextPageTable(v9, v12, 0, a4, v13, (__int64)&v21);
        v14 = result;
        if ( !result )
          break;
        v15 = result;
        if ( v21 )
        {
          v18 = 512LL;
          v19 = ((result >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( v21 > 1 )
          {
            v20 = v21 - 1;
            do
            {
              v18 <<= 9;
              v19 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              --v20;
            }
            while ( v20 );
          }
          result = a3(v7, v19, v19);
          v9 = v14 + 8 * v18;
        }
        else
        {
          v16 = v12;
          v17 = (result & 0xFFFFFFFFFFFFF000uLL) + 4088;
          if ( v17 <= v12 )
            v16 = v17;
          result = a3(v7, v15, v16);
          v9 = v16 + 8;
        }
      }
      while ( v9 <= v12 );
    }
  }
  while ( a1 != a2 );
  return result;
}
