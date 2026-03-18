/*
 * XREFs of MxFillPhysicalPage @ 0x14089BA60
 * Callers:
 *     MiInitializeSystemPageTable @ 0x140071268 (MiInitializeSystemPageTable.c)
 *     MiGetPoolPages @ 0x1400F0860 (MiGetPoolPages.c)
 *     MiZeroPhysicalPage @ 0x14010F800 (MiZeroPhysicalPage.c)
 *     MiInitializeDummyPages @ 0x140899A78 (MiInitializeDummyPages.c)
 *     MxMapVa @ 0x14089ABC4 (MxMapVa.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     KeFlushSingleTb @ 0x14003B184 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x1401AE9B0 (KeZeroPages.c)
 *     MxGetPhase0Mapping @ 0x14089BB44 (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MxFillPhysicalPage(ULONG_PTR BugCheckParameter2, unsigned __int64 a2)
{
  unsigned __int64 Phase0Mapping; // rax
  __int64 v5; // r9
  __m128i *v6; // rsi
  unsigned __int64 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  BOOL v11; // r14d

  Phase0Mapping = MxGetPhase0Mapping();
  v6 = (__m128i *)Phase0Mapping;
  if ( !Phase0Mapping )
    KeBugCheckEx(0x1Au, 0x3030305uLL, BugCheckParameter2, 0LL, 0LL);
  v7 = (unsigned __int64 *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  *v7 = MiMakeValidPte((unsigned __int64)v7, BugCheckParameter2, 2684354564LL, v5);
  v11 = MiPteInShadowRange((unsigned __int64)v7);
  if ( v11 )
    MiWritePteShadow(v9, v8, v10);
  if ( a2 )
    memset64(v6, a2, 0x200uLL);
  else
    KeZeroPages(v6, 0x1000uLL);
  *v7 = ZeroPte;
  if ( v11 )
    MiWritePteShadow((__int64)v7, ZeroPte, v10);
  return KeFlushSingleTb((__int64)v6, 0, 1u);
}
