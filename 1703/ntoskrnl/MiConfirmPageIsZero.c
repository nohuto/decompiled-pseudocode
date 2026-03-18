/*
 * XREFs of MiConfirmPageIsZero @ 0x1401041F0
 * Callers:
 *     MiWsleFree @ 0x1400D6AB0 (MiWsleFree.c)
 * Callees:
 *     MiFlushHyperSpace @ 0x14000C0C4 (MiFlushHyperSpace.c)
 *     MiLockNestedPageAtDpcInline @ 0x14002126C (MiLockNestedPageAtDpcInline.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140103140 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1401038C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiDecrementShareCount @ 0x1401055F0 (MiDecrementShareCount.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiTransferSoftwarePte @ 0x14017D0B8 (MiTransferSoftwarePte.c)
 *     MiGetPageFileReservationOffset @ 0x14021A1C8 (MiGetPageFileReservationOffset.c)
 */

__int64 __fastcall MiConfirmPageIsZero(__int64 a1, unsigned int a2)
{
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // rdx
  int v6; // r8d
  int v7; // eax
  unsigned __int64 ValidPte; // rdx
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int64 *v10; // rcx
  __int64 v11; // rcx
  unsigned __int64 v12; // r10
  _QWORD *v13; // rbx
  _QWORD *v14; // rdi
  unsigned __int64 v15; // rbp
  _QWORD *v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // r11d
  __int64 PageFileReservationOffset; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int16 v23; // r10
  __int64 v24; // rbx
  __int64 v25; // rcx
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // r10

  v3 = a2;
  if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(a1 + 32) != 1 )
    return 0LL;
  v4 = a1 + 0x58000000000LL;
  v5 = (a1 + 0x58000000000LL) / 48;
  if ( (v3 & 2) != 0 )
    goto LABEL_21;
  v6 = 4;
  v7 = *(unsigned __int8 *)(48 * v5 - 0x58000000000LL + 34) >> 6;
  if ( !v7 || v7 == 3 )
  {
    v6 = 12;
  }
  else if ( v7 == 2 )
  {
    v6 = 28;
  }
  ValidPte = MiMakeValidPte(0LL, v5, v6 | 0xA0000000);
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = (unsigned __int64 *)((((((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
                              + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12)) >> 9) & 0x7FFFFFFFF8LL)
                           - 0x98000000000LL);
  *v10 = ValidPte;
  if ( (unsigned int)MiPteInShadowRange(v10) )
    MiWritePteShadow(v11);
  v13 = (_QWORD *)v12;
  v14 = (_QWORD *)(v12 + 4088);
  do
  {
    if ( *v13 | *v14 )
      break;
    ++v13;
    --v14;
  }
  while ( v13 <= v14 );
  v15 = (unsigned __int64)KeGetCurrentPrcb()->HyperPte & 0xFFFFFFFFFFFFF000uLL;
  v16 = (_QWORD *)((((v12 & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  *v16 = 0LL;
  if ( (unsigned int)MiPteInShadowRange(v16) )
    MiWritePteShadow(v17);
  if ( v18 == 64 )
  {
    MiFlushHyperSpace();
    v18 = 0;
  }
  KeGetCurrentPrcb()->HyperPte = (void *)(v15 | v18);
  if ( v13 <= v14 )
    return 0LL;
LABEL_21:
  if ( (*(_QWORD *)(a1 + 16) & 2) != 0 )
  {
    PageFileReservationOffset = (unsigned int)MiGetPageFileReservationOffset(a1 + 16, v5, v4, v3);
    v22 = *(_QWORD *)(a1 + 16);
    v21 = *(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL))
                    + 8LL * (v23 >> 12)
                    + 5600);
  }
  else
  {
    PageFileReservationOffset = 0LL;
    v21 = 0LL;
    v22 = *(_QWORD *)(a1 + 16);
  }
  v24 = MiTransferSoftwarePte(v22, v21, PageFileReservationOffset);
  v25 = *(_QWORD *)(a1 + 40);
  v26 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  if ( (v25 & 0x200000000000000LL) != 0 )
  {
    v29 = v25 & 0xFFFFFFFFFLL;
    v30 = 48 * v29 - 0x58000000000LL;
    v31 = MiMapPageInHyperSpaceWorker(v29, 0LL, 0x80000000);
    v32 = (v26 >> 3) & 0x1FF;
    *(_QWORD *)(v31 + 8LL * (unsigned int)v32) = v24;
    if ( (unsigned int)MiPteInShadowRange(v31 + 8LL * (unsigned int)v32) )
      MiWritePteShadow(v33);
    MiUnmapPageInHyperSpaceWorker(v34, 0x11u);
    MiLockNestedPageAtDpcInline(v30);
    MiDecrementShareCount(v30);
    _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v27 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
    *(_QWORD *)v26 = v24;
    if ( (unsigned int)MiPteInShadowRange(v27) )
    {
      MiWritePteShadow(v28);
      return 1LL;
    }
  }
  return 1LL;
}
