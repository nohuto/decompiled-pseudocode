/*
 * XREFs of MiClearContainingMapping @ 0x1400707C8
 * Callers:
 *     MiDeleteTopLevelPage @ 0x140070754 (MiDeleteTopLevelPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14002E300 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140032530 (MiMapPageInHyperSpaceWorker.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiClearContainingMapping(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int64 *v6; // r9
  unsigned __int64 v7; // r10
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  result = *(_QWORD *)(48 * v2 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
  if ( result == ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
  {
    v4 = MiMapPageInHyperSpaceWorker(v2, 0LL, 0x80000000, v2);
    v5 = MI_READ_PTE_LOCK_FREE(v4 + 8 * ((v1 >> 3) & 0x1FF));
    if ( (v5 & 1) != 0 )
    {
      *v6 = v5 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
      if ( MiPteInShadowRange((unsigned __int64)v6) )
        MiWritePteShadow(v9, v8, v10);
    }
    return MiUnmapPageInHyperSpaceWorker(v7, 0x11u, 0x80000000);
  }
  return result;
}
