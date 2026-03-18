/*
 * XREFs of MiTrimSystemImagePages @ 0x14013FAEC
 * Callers:
 *     MiSetPagingOfDriver @ 0x14013F7B4 (MiSetPagingOfDriver.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiDecrementShareCount @ 0x140054240 (MiDecrementShareCount.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     MiCaptureDirtyBitToPfn @ 0x140124940 (MiCaptureDirtyBitToPfn.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401A6474 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiGetContainingPageTable @ 0x1401A64B8 (MiGetContainingPageTable.c)
 *     MiMakePrototypePteDirect @ 0x1401A6614 (MiMakePrototypePteDirect.c)
 *     MiMakeTransitionPte @ 0x1401A669C (MiMakeTransitionPte.c)
 */

__int64 __fastcall MiTrimSystemImagePages(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // rbp
  __int64 *i; // r14
  __int64 v5; // rax
  char v6; // bl
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 PrototypePteDirect; // rax
  __int64 TransitionPte; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  unsigned int v15; // r9d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // rdi
  char v20; // r9
  __int64 v21; // rax
  __int64 ContainingPageTable; // rbx
  unsigned __int64 v24; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  for ( i = a1; (unsigned __int64)i <= a2; ++i )
  {
    v5 = MI_READ_PTE_LOCK_FREE((unsigned __int64)i);
    if ( (v5 & 1) == 0 && (v5 & 0x400) != 0 )
    {
      v6 = v5 & 0xFE | 1;
      v24 = v5 & 0xFFFFFFFFFFFFFBFEuLL | 1;
      v7 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v24);
      v10 = v9 + 48 * ((v7 >> 12) & 0xFFFFFFFFFLL);
      if ( (*(_QWORD *)(v10 + 40) & 0x200000000000000LL) != 0 )
      {
        PrototypePteDirect = MiMakePrototypePteDirect(
                               *(_QWORD *)(v10 + 8) | 0x8000000000000000uLL,
                               v8,
                               *(_QWORD *)(v10 + 8),
                               v9);
        TransitionPte = PrototypePteDirect;
        if ( v13 >= 0 )
          TransitionPte = PrototypePteDirect | 0x800;
      }
      else
      {
        v14 = MI_GET_PAGE_FRAME_FROM_PTE(&v24);
        TransitionPte = MiMakeTransitionPte(v14, v15);
      }
      *i = TransitionPte;
      if ( MiPteInShadowRange((unsigned __int64)i) )
        MiWritePteShadow(v17, v16, v18);
      v19 = 0LL;
      MiLockPageAtDpcInline(v10);
      *(_BYTE *)(v10 + 35) &= ~8u;
      v20 = *(_BYTE *)(v10 + 35);
      if ( (v6 & 0x42) != 0 )
      {
        v21 = MiCaptureDirtyBitToPfn(v10);
        v20 = *(_BYTE *)(v10 + 35);
        v19 = v21;
      }
      if ( (*(_QWORD *)(v10 + 40) & 0x200000000000000LL) != 0 )
        ContainingPageTable = MiGetContainingPageTable(i);
      else
        ContainingPageTable = -1LL;
      *(_BYTE *)(v10 + 35) = v20 & 0xF8 | 2;
      MiDecrementShareCount(v10);
      if ( ContainingPageTable != -1 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v10 = 48 * ContainingPageTable - 0x58000000000LL;
        MiLockPageAtDpcInline(v10);
        MiDecrementShareCount(v10);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v19 )
        MiReleasePageFileInfo((struct _KEVENT *)&MiSystemPartition, v19, 1);
      ++v2;
    }
  }
  return v2;
}
