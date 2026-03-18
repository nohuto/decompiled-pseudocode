/*
 * XREFs of MiDecrementAndInsertStandbyPages @ 0x140102A40
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140053130 (MmUnmapViewInSystemCache.c)
 * Callees:
 *     MiInsertAndUnlockStandbyPages @ 0x140051C80 (MiInsertAndUnlockStandbyPages.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiFlushHyperSpace @ 0x140102EA4 (MiFlushHyperSpace.c)
 *     MiUserPdeOrAbove @ 0x1401155A0 (MiUserPdeOrAbove.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017C5DC (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiMakeTransitionPte @ 0x14017C848 (MiMakeTransitionPte.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

void __fastcall MiDecrementAndInsertStandbyPages(__int64 *a1, unsigned int a2, unsigned __int8 a3)
{
  unsigned int v3; // eax
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // r15
  __int64 v6; // r9
  char v7; // al
  __int64 v8; // r9
  __int64 v9; // r11
  unsigned int v10; // r12d
  __int64 v11; // r8
  unsigned __int64 v12; // r14
  char v13; // bp
  int v14; // eax
  __int64 v15; // rbp
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rbx
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int64 v19; // r10
  unsigned __int64 *v20; // rcx
  __int64 v21; // r14
  __int64 PteShadow; // rax
  unsigned __int64 v23; // r10
  __int64 v24; // rax
  __int64 TransitionPte; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned __int64 v28; // r10
  __int64 v29; // r11
  unsigned __int64 v30; // rcx
  unsigned __int64 HyperPte; // rsi
  int v32; // ebx
  unsigned __int64 v33; // rsi
  unsigned int v34; // ebx
  _QWORD *v35; // r10
  struct _KPRCB *v36; // rcx
  __int64 v37; // rax
  __int64 *v38; // [rsp+80h] [rbp+8h]
  __int64 v41; // [rsp+98h] [rbp+20h] BYREF

  v38 = a1;
  v3 = a2;
  v4 = a2;
  v5 = 0LL;
  if ( a2 )
  {
    do
    {
      v6 = a1[v5];
      v7 = *(_BYTE *)(v6 + 34);
      *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
      *(_WORD *)(v6 + 32) = 0;
      *(_BYTE *)(v6 + 34) = v7 & 0xF8 | 2;
      v10 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v6 + 16);
      v11 = *(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL;
      v12 = *(_QWORD *)(v8 + 8) | 0x8000000000000000uLL;
      v13 = 4;
      v14 = *(unsigned __int8 *)(48 * v11 - 0x58000000000LL + 34) >> 6;
      if ( !v14 || v14 == 3 )
      {
        v13 = 12;
      }
      else if ( v14 == 2 )
      {
        v13 = 28;
      }
      v15 = v13 & 0x1F;
      v16 = (v11 << 12) | MmProtectToPteMask[v15] & 0xFFFF000000000E7FuLL | 0x21;
      if ( v9 || (v16 = (v11 << 12) | MmProtectToPteMask[v15] & 0xFFFF000000000E7FuLL | 0x25, HIBYTE(word_1403885F8)) )
        v16 |= 0x100uLL;
      if ( (v15 & 5) == 4 )
        v16 |= 0x42uLL;
      v17 = (((unsigned __int16)v16 ^ (unsigned __int16)((unsigned __int8)word_1403885F8 << 8)) & 0x100 ^ v16) & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
      CurrentPrcb = KeGetCurrentPrcb();
      v19 = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
          + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
      v20 = (unsigned __int64 *)(v9 + ((v19 >> 9) & 0x7FFFFFFFF8LL));
      *v20 = v17;
      if ( (unsigned __int64)v20 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v20 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(v20, v17);
      v21 = (v12 >> 3) & 0x1FF;
      PteShadow = *(_QWORD *)(v19 + 8 * v21);
      v23 = v19 + 8 * v21;
      if ( v23 >= 0xFFFFF6FB7DBED000uLL && v23 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(v23, PteShadow);
      v41 = PteShadow;
      v24 = MI_GET_PAGE_FRAME_FROM_PTE(&v41);
      TransitionPte = MiMakeTransitionPte(v24, v10);
      v41 = TransitionPte;
      *(_QWORD *)v28 = TransitionPte;
      v30 = 0xFFFFF6FB7DBED000uLL;
      if ( v28 >= 0xFFFFF6FB7DBED000uLL )
      {
        v30 = 0xFFFFF6FB7DBED7F8uLL;
        if ( v28 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(v28, TransitionPte);
      }
      HyperPte = (unsigned __int64)KeGetCurrentPrcb()->HyperPte;
      v32 = HyperPte & 0xFFF;
      v33 = HyperPte & 0xFFFFFFFFFFFFF000uLL;
      v34 = v32 + 1;
      v35 = (_QWORD *)(v29 + ((v28 >> 9) & 0x7FFFFFFFF8LL));
      *v35 = 0LL;
      if ( (unsigned __int64)v35 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v35 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(v35, 0LL);
      if ( v34 == 64 )
        MiFlushHyperSpace(v30, v26, v27);
      v36 = KeGetCurrentPrcb();
      v37 = 0LL;
      if ( v34 != 64 )
        v37 = v34;
      ++v5;
      v36->HyperPte = (void *)(v33 | v37);
      a1 = v38;
    }
    while ( v5 < v4 );
    v3 = a2;
  }
  MiInsertAndUnlockStandbyPages(0LL, a1, v3, a3);
}
