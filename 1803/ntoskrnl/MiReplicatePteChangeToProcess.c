/*
 * XREFs of MiReplicatePteChangeToProcess @ 0x14016B5AC
 * Callers:
 *     MiReplicatePteChange @ 0x14016B45C (MiReplicatePteChange.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14002E300 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140032530 (MiMapPageInHyperSpaceWorker.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiShadowTopLevelPxes @ 0x140070E64 (MiShadowTopLevelPxes.c)
 *     MiTransformValidPteInPlace @ 0x1400C022C (MiTransformValidPteInPlace.c)
 */

__int64 __fastcall MiReplicatePteChangeToProcess(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rdi
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  volatile signed __int64 *v9; // rbx
  __int64 v10; // rax
  signed __int64 v11; // r10
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r10

  v5 = a2;
  if ( a1 )
    v7 = *(_QWORD *)(a1 + 40) >> 12;
  else
    v7 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL;
  v8 = MiMapPageInHyperSpaceWorker(v7, 0LL, 0x80000000, a4);
  v9 = (volatile signed __int64 *)(v8 + 8 * ((v5 >> 3) & 0x1FF));
  while ( v5 <= a3 )
  {
    MI_READ_PTE_LOCK_FREE(v5);
    v10 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v9);
    if ( v11 != v10 )
    {
      if ( (v11 & 1) != 0 && (v10 & 1) != 0 )
      {
        MiTransformValidPteInPlace(v9, v5, v11, 3u);
      }
      else
      {
        *v9 = v11;
        if ( MiPteInShadowRange((unsigned __int64)v9) )
          MiWritePteShadow(v13, v15, v14);
      }
      MiShadowTopLevelPxes(a1, v5, 1);
    }
    v5 += 8LL;
    ++v9;
  }
  return MiUnmapPageInHyperSpaceWorker(v8, 0x11u, 0x80000000);
}
