/*
 * XREFs of MiConfirmPageIsZero @ 0x1401026D0
 * Callers:
 *     MiWsleFree @ 0x140052660 (MiWsleFree.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiDecrementShareCount @ 0x1400EB4C0 (MiDecrementShareCount.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiFlushHyperSpace @ 0x140102EA4 (MiFlushHyperSpace.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011C690 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiTransferSoftwarePte @ 0x14017C95C (MiTransferSoftwarePte.c)
 *     MiGetPageFileReservationOffset @ 0x14022647C (MiGetPageFileReservationOffset.c)
 */

__int64 __fastcall MiConfirmPageIsZero(__int64 a1, char a2)
{
  __int64 v4; // rdx
  int v5; // r8d
  int v6; // eax
  unsigned __int64 ValidPte; // rax
  __int64 v8; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // r10
  unsigned __int64 *v12; // rcx
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rdi
  _QWORD *v15; // rsi
  struct _KPRCB *v16; // rax
  unsigned __int64 v17; // r15
  unsigned int v18; // r14d
  _QWORD *v19; // r10
  unsigned int v20; // ebx
  struct _KPRCB *v21; // rcx
  __int64 v23; // r9
  __int64 PageFileReservationOffset; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int16 v27; // r10
  __int64 v28; // rbx
  __int64 v29; // rcx
  unsigned __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rsi
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rdi
  unsigned __int64 v36; // r10

  if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(a1 + 32) != 1 )
    return 0LL;
  v4 = (a1 + 0x58000000000LL) / 48;
  if ( (a2 & 2) != 0 )
    goto LABEL_25;
  v5 = 4;
  v6 = *(unsigned __int8 *)(48 * v4 - 0x58000000000LL + 34) >> 6;
  if ( !v6 || v6 == 3 )
  {
    v5 = 12;
  }
  else if ( v6 == 2 )
  {
    v5 = 28;
  }
  ValidPte = MiMakeValidPte(0LL, v4, v5 | 0xA0000000);
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = 0xFFFFF68000000000uLL;
  v11 = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
      + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
  v12 = (unsigned __int64 *)(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  *v12 = ValidPte;
  v13 = 0xFFFFF6FB7DBED000uLL;
  if ( (unsigned __int64)v12 >= 0xFFFFF6FB7DBED000uLL )
  {
    v13 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)v12 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v12, ValidPte);
  }
  v14 = (_QWORD *)v11;
  v15 = (_QWORD *)(v11 + 4088);
  do
  {
    if ( *v14 | *v15 )
      break;
    ++v14;
    --v15;
  }
  while ( v14 <= v15 );
  v16 = KeGetCurrentPrcb();
  v17 = (unsigned __int64)v16->HyperPte & 0xFFFFFFFFFFFFF000uLL;
  v18 = ((__int64)v16->HyperPte & 0xFFF) + 1;
  v19 = (_QWORD *)(v10 + (((v11 & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL));
  v20 = 0;
  *v19 = 0LL;
  if ( (unsigned __int64)v19 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v19 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v19, 0LL);
  if ( v18 == 64 )
    MiFlushHyperSpace(v12, v13, v8);
  v21 = KeGetCurrentPrcb();
  if ( v18 != 64 )
    v20 = v18;
  v21->HyperPte = (void *)(v17 | v20);
  if ( v14 <= v15 )
    return 0LL;
LABEL_25:
  if ( (*(_QWORD *)(a1 + 16) & 2) != 0 )
  {
    PageFileReservationOffset = (unsigned int)MiGetPageFileReservationOffset(a1 + 16);
    v23 = 2LL;
    v26 = *(_QWORD *)(a1 + 16);
    v25 = *(_QWORD *)(*(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL))
                    + 8LL * (v27 >> 12)
                    + 5792);
  }
  else
  {
    v23 = 0LL;
    PageFileReservationOffset = 0LL;
    v25 = 0LL;
    v26 = *(_QWORD *)(a1 + 16);
  }
  v28 = MiTransferSoftwarePte(v26, v25, PageFileReservationOffset, v23);
  v29 = *(_QWORD *)(a1 + 40);
  v30 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  if ( (v29 & 0x200000000000000LL) != 0 )
  {
    v31 = v29 & 0xFFFFFFFFFLL;
    v32 = 48 * v31 - 0x58000000000LL;
    v33 = MiMapPageInHyperSpaceWorker(v31, 0LL, 0x80000000);
    v35 = (v30 >> 3) & 0x1FF;
    *(_QWORD *)(v33 + 8 * v35) = v28;
    v36 = v33 + 8 * v35;
    if ( v36 >= 0xFFFFF6FB7DBED000uLL && v36 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v36, v28);
    LOBYTE(v34) = 17;
    MiUnmapPageInHyperSpaceWorker(v36, v34, 0x80000000LL);
    MiLockNestedPageAtDpcInline(v32);
    MiDecrementShareCount(v32);
    _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    *(_QWORD *)v30 = v28;
    if ( v30 >= 0xFFFFF6FB7DBED000uLL && v30 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      MiWritePteShadow(v30, v28);
      return 1LL;
    }
  }
  return 1LL;
}
