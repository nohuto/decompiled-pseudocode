/*
 * XREFs of MiDecrementAndInsertStandbyPages @ 0x14002E730
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140018AE0 (MmUnmapViewInSystemCache.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14002E300 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiInsertAndUnlockStandbyPages @ 0x14002E460 (MiInsertAndUnlockStandbyPages.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiGetUltraMapping @ 0x1401389F0 (MiGetUltraMapping.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401A649C (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiMakeTransitionPte @ 0x1401A669C (MiMakeTransitionPte.c)
 */

void __fastcall MiDecrementAndInsertStandbyPages(ULONG_PTR *a1, unsigned int a2, unsigned __int8 a3)
{
  unsigned int v3; // eax
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // r12
  ULONG_PTR v6; // r9
  char v7; // al
  _QWORD *v8; // r15
  __int64 v9; // r9
  __int64 v10; // r11
  unsigned int v11; // r13d
  __int64 v12; // r10
  unsigned __int64 v13; // rsi
  int v14; // r8d
  int v15; // eax
  __int64 ValidPte; // rax
  __int64 v17; // rdx
  __int64 v18; // r9
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v20; // rbx
  _QWORD *MmInternal; // rdi
  unsigned __int64 UltraMapping; // r10
  __int64 *v23; // rcx
  __int64 v24; // rsi
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // r10
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 TransitionPte; // rax
  __int64 *v33; // r10
  __int64 v34; // rax
  ULONG_PTR *v35; // [rsp+70h] [rbp+8h]
  unsigned __int64 v38; // [rsp+88h] [rbp+20h] BYREF

  v35 = a1;
  v3 = a2;
  v4 = 0LL;
  v5 = a2;
  if ( a2 )
  {
    do
    {
      v6 = a1[v4];
      v7 = *(_BYTE *)(v6 + 34);
      v8 = (_QWORD *)(v6 + 16);
      *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
      *(_WORD *)(v6 + 32) = 0;
      *(_BYTE *)(v6 + 34) = v7 & 0xF8 | 2;
      v11 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v6 + 16);
      v13 = v12 | *(_QWORD *)(v9 + 8);
      v14 = 4;
      v15 = *(unsigned __int8 *)(48 * (v10 & *(_QWORD *)(v9 + 40)) - 0x58000000000LL + 34) >> 6;
      if ( !v15 || v15 == 3 )
      {
        v14 = 12;
      }
      else if ( v15 == 2 )
      {
        v14 = 28;
      }
      ValidPte = MiMakeValidPte(0LL, v10 & *(_QWORD *)(v9 + 40), v14 | 0xA0000000);
      CurrentPrcb = KeGetCurrentPrcb();
      v20 = ValidPte;
      MmInternal = CurrentPrcb->MmInternal;
      if ( !MmInternal
        || (UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3LL, 1LL),
            v17 = 0xFFFFF68000000000uLL,
            v23 = (__int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
            MmInternal[1543] = v23,
            !UltraMapping) )
      {
        UltraMapping = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
                     + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
        v23 = (__int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      }
      *v23 = v20;
      if ( (unsigned __int64)v23 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v23 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(v23, v20);
      v24 = (v13 >> 3) & 0x1FF;
      v25 = *(_QWORD *)(UltraMapping + 8 * v24);
      v26 = UltraMapping + 8 * v24;
      if ( v26 >= 0xFFFFF6FB7DBED000uLL
        && v26 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(v23, v17, v25, v18)
        && (v25 & 1) != 0
        && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
      {
        v17 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v17 )
        {
          v28 = *(_QWORD *)(v17 + 8 * ((v27 >> 3) & 0x1FF));
          v17 = v25 | 0x20;
          if ( (v28 & 0x20) == 0 )
            v17 = v25;
          v25 = v17;
          if ( (v28 & 0x42) != 0 )
            v25 = v17 | 0x42;
        }
      }
      v38 = v25;
      if ( (unsigned __int64)&v38 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&v38 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(&v38, v17, v25, v18)
        && (v25 & 1) != 0
        && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
      {
        v29 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v29 )
        {
          v30 = *(_QWORD *)(v29 + 8 * (((unsigned __int64)&v38 >> 3) & 0x1FF));
          v31 = v25 | 0x20;
          if ( (v30 & 0x20) == 0 )
            v31 = v25;
          v25 = v31;
          if ( (v30 & 0x42) != 0 )
            v25 = v31 | 0x42;
        }
      }
      TransitionPte = MiMakeTransitionPte((v25 >> 12) & 0xFFFFFFFFFLL, v11);
      v38 = TransitionPte;
      *v33 = TransitionPte;
      if ( (unsigned __int64)v33 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v33 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(v33, TransitionPte);
      MiUnmapPageInHyperSpaceWorker((unsigned __int64)v33, 0x11u, 0x80000000);
      v34 = -9LL;
      if ( (*v8 & 0x400LL) != 0 )
        v34 = -2049LL;
      ++v4;
      *v8 &= v34;
      a1 = v35;
    }
    while ( v4 < v5 );
    v3 = a2;
  }
  MiInsertAndUnlockStandbyPages(0LL, a1, v3, a3);
}
