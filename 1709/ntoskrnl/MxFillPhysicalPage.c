/*
 * XREFs of MxFillPhysicalPage @ 0x14082C5B4
 * Callers:
 *     MiZeroPhysicalPage @ 0x140075D00 (MiZeroPhysicalPage.c)
 *     MiMakePageAvoidRead @ 0x140076C10 (MiMakePageAvoidRead.c)
 *     MiInitializeSystemPageTable @ 0x1400C42AC (MiInitializeSystemPageTable.c)
 *     MiInitializeDummyPages @ 0x14082A2CC (MiInitializeDummyPages.c)
 *     MxMapVa @ 0x14082B594 (MxMapVa.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     KeFlushSingleTb @ 0x1400CA124 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x140184D60 (KeZeroPages.c)
 *     MxGetPhase0Mapping @ 0x14082C6D4 (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MxFillPhysicalPage(ULONG_PTR BugCheckParameter2, unsigned __int64 a2)
{
  unsigned __int64 Phase0Mapping; // rax
  void *v5; // rsi
  unsigned __int64 *v6; // rbx

  Phase0Mapping = MxGetPhase0Mapping();
  v5 = (void *)Phase0Mapping;
  if ( !Phase0Mapping )
    KeBugCheckEx(0x1Au, 0x3030305uLL, BugCheckParameter2, 0LL, 0LL);
  v6 = (unsigned __int64 *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  *v6 = MiMakeValidPte((unsigned __int64)v6, BugCheckParameter2, -1610612732);
  if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow();
  if ( a2 )
    memset64(v5, a2, 0x200uLL);
  else
    KeZeroPages((int *)v5, 0x1000uLL);
  *v6 = 0LL;
  if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow();
  return KeFlushSingleTb((unsigned __int64)v5, 0, 1u);
}
