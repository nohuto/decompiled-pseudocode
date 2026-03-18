/*
 * XREFs of MxFillPhysicalPage @ 0x1408025BC
 * Callers:
 *     MiZeroPhysicalPage @ 0x1400A59A0 (MiZeroPhysicalPage.c)
 *     MiInitializeSystemPageTable @ 0x14010A470 (MiInitializeSystemPageTable.c)
 *     MiInitializeDummyPages @ 0x1408002FC (MiInitializeDummyPages.c)
 *     MxMapVa @ 0x1408015E0 (MxMapVa.c)
 * Callees:
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x1401852C0 (KeZeroPages.c)
 *     MxGetPhase0Mapping @ 0x1408026BC (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MxFillPhysicalPage(ULONG_PTR BugCheckParameter2, unsigned __int64 a2)
{
  unsigned __int64 Phase0Mapping; // rax
  void *v5; // rsi
  unsigned __int64 *v6; // rbx
  BOOL v7; // r14d

  Phase0Mapping = MxGetPhase0Mapping();
  v5 = (void *)Phase0Mapping;
  if ( !Phase0Mapping )
    KeBugCheckEx(0x1Au, 0x3030305uLL, BugCheckParameter2, 0LL, 0LL);
  v6 = (unsigned __int64 *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  *v6 = MiMakeValidPte((unsigned __int64)v6, BugCheckParameter2, -1610612732);
  v7 = MiPteInShadowRange((unsigned __int64)v6);
  if ( v7 )
    MiWritePteShadow();
  if ( a2 )
    memset64(v5, a2, 0x200uLL);
  else
    KeZeroPages((int *)v5, 0x1000uLL);
  *v6 = 0LL;
  if ( v7 )
    MiWritePteShadow();
  return KeFlushSingleTb((unsigned __int64)v5, 0, 1u);
}
