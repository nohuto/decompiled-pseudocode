/*
 * XREFs of MiTrimSystemImagePages @ 0x14006D3FC
 * Callers:
 *     MiSetPagingOfDriver @ 0x14006D120 (MiSetPagingOfDriver.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiCaptureDirtyBitToPfn @ 0x140100BFC (MiCaptureDirtyBitToPfn.c)
 *     MiDecrementShareCount @ 0x1401055F0 (MiDecrementShareCount.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetContainingPageTable @ 0x14017CDC0 (MiGetContainingPageTable.c)
 *     MiMakePrototypePteDirect @ 0x14017CF4C (MiMakePrototypePteDirect.c)
 *     MiMakeTransitionPte @ 0x14017CFB4 (MiMakeTransitionPte.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiTrimSystemImagePages(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // rbp
  __int64 *i; // r14
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // bl
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 PrototypePteDirect; // rax
  __int64 TransitionPte; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  unsigned int v16; // r9d
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 ContainingPageTable; // rbx
  unsigned __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  for ( i = a1; (unsigned __int64)i <= a2; ++i )
  {
    v5 = MI_READ_PTE_LOCK_FREE(i);
    if ( (v5 & 1) == 0 && (v5 & 0x400) != 0 )
    {
      v9 = v5 & 0xFE | 1;
      v21 = v5 & 0xFFFFFFFFFFFFFBFEuLL | 1;
      v10 = MI_GET_PFN_FROM_PTE(&v21, v6, v7, v8);
      v11 = v10;
      if ( (*(_QWORD *)(v10 + 40) & 0x200000000000000LL) != 0 )
      {
        PrototypePteDirect = MiMakePrototypePteDirect(*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL);
        TransitionPte = PrototypePteDirect;
        if ( v14 >= 0 )
          TransitionPte = PrototypePteDirect | 0x800;
      }
      else
      {
        v15 = MI_GET_PAGE_FRAME_FROM_PTE(&v21);
        TransitionPte = MiMakeTransitionPte(v15, v16);
      }
      *i = TransitionPte;
      if ( (unsigned int)MiPteInShadowRange(i) )
        MiWritePteShadow(v17);
      v18 = 0LL;
      MiLockPageAtDpcInline(v11);
      *(_BYTE *)(v11 + 35) &= ~8u;
      if ( (v9 & 0x42) != 0 )
        v18 = MiCaptureDirtyBitToPfn(v11);
      if ( (*(_QWORD *)(v11 + 40) & 0x200000000000000LL) != 0 )
        ContainingPageTable = MiGetContainingPageTable(i);
      else
        ContainingPageTable = -1LL;
      *(_BYTE *)(v11 + 35) = *(_BYTE *)(v11 + 35) & 0xF8 | 2;
      MiDecrementShareCount(v11);
      if ( ContainingPageTable != -1 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v11 = 48 * ContainingPageTable - 0x58000000000LL;
        MiLockPageAtDpcInline(v11);
        MiDecrementShareCount(v11);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v18 )
        MiReleasePageFileInfo(&MiSystemPartition, v18, 1LL);
      ++v2;
    }
  }
  return v2;
}
