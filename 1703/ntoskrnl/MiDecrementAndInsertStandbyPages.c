/*
 * XREFs of MiDecrementAndInsertStandbyPages @ 0x14000BC90
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x1400A83B0 (MmUnmapViewInSystemCache.c)
 * Callees:
 *     MiFlushHyperSpace @ 0x14000C0C4 (MiFlushHyperSpace.c)
 *     MiUserPdeOrAbove @ 0x14001D68C (MiUserPdeOrAbove.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017CDA4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiMakeTransitionPte @ 0x14017CFB4 (MiMakeTransitionPte.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiDecrementAndInsertStandbyPages(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
  unsigned int v3; // eax
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r13
  __int64 v6; // r9
  char v7; // al
  __int64 v8; // r9
  __int64 v9; // r10
  unsigned __int64 v10; // r12
  int v11; // ebp
  int v12; // eax
  unsigned int v13; // ebp
  __int64 v14; // r14
  unsigned __int64 v15; // rbx
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int64 *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r10
  __int64 v20; // rax
  unsigned int v21; // r11d
  __int64 *v22; // r10
  __int64 v23; // rcx
  __int64 v24; // r10
  unsigned __int64 v25; // rbx
  _QWORD *v26; // rcx
  __int64 v27; // rcx
  unsigned int v28; // r11d
  unsigned __int64 v30; // [rsp+20h] [rbp-68h]
  __int64 v31[4]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v32; // [rsp+90h] [rbp+8h]

  v32 = a1;
  v3 = a2;
  v4 = a2;
  v5 = 0LL;
  v30 = a2;
  if ( a2 )
  {
    do
    {
      v6 = *(_QWORD *)(a1 + 8 * v5);
      v7 = *(_BYTE *)(v6 + 34);
      *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
      *(_WORD *)(v6 + 32) = 0;
      *(_BYTE *)(v6 + 34) = v7 & 0xF8 | 2;
      MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v6 + 16);
      v10 = *(_QWORD *)(v8 + 8) | 0x8000000000000000uLL;
      v11 = 4;
      v12 = *(unsigned __int8 *)(48 * (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL + 34) >> 6;
      if ( !v12 || v12 == 3 )
      {
        v11 = 12;
      }
      else if ( v12 == 2 )
      {
        v11 = 28;
      }
      v13 = v11 | 0xA0000000;
      v14 = v13 & 0x1F;
      v15 = ((*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v14] & 0xFFFF000000000E7FuLL | 0x21;
      if ( v9
        || (v15 = ((*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v14] & 0xFFFF000000000E7FuLL | 0x25,
            v4 = v30,
            HIBYTE(word_14036C2A8)) )
      {
        v15 |= 0x100uLL;
      }
      if ( (v13 & 5) == 4 )
        v15 |= 0x42uLL;
      if ( (v13 & 0x40000000) != 0 )
        v15 &= ~4uLL;
      if ( (v13 & 0x20000000) != 0 )
        v15 ^= ((unsigned __int16)v15 ^ (unsigned __int16)((unsigned __int8)word_14036C2A8 << 8)) & 0x100;
      if ( (v13 & 0x8000000) != 0 )
        v15 &= ~0x100uLL;
      if ( (v13 & 0x4000000) != 0 )
        v15 |= 0x80uLL;
      CurrentPrcb = KeGetCurrentPrcb();
      v17 = (unsigned __int64 *)((((((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
                                  + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12)) >> 9) & 0x7FFFFFFFF8LL)
                               - 0x98000000000LL);
      *v17 = v15 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
      if ( (unsigned int)MiPteInShadowRange(v17) )
        MiWritePteShadow(v18);
      v31[0] = MI_READ_PTE_LOCK_FREE(v19 + 8 * ((v10 >> 3) & 0x1FF));
      v20 = MI_GET_PAGE_FRAME_FROM_PTE(v31);
      v31[0] = MiMakeTransitionPte(v20, v21);
      *v22 = v31[0];
      if ( (unsigned int)MiPteInShadowRange(v22) )
        MiWritePteShadow(v23);
      v25 = (unsigned __int64)KeGetCurrentPrcb()->HyperPte & 0xFFFFFFFFFFFFF000uLL;
      v26 = (_QWORD *)((((v24 & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      *v26 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v26) )
        MiWritePteShadow(v27);
      if ( v28 == 64 )
      {
        MiFlushHyperSpace();
        v28 = 0;
      }
      ++v5;
      KeGetCurrentPrcb()->HyperPte = (void *)(v25 | v28);
      a1 = v32;
    }
    while ( v5 < v4 );
    v3 = a2;
  }
  return MiInsertAndUnlockStandbyPages(0LL, a1, v3, a3);
}
