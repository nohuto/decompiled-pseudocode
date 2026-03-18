/*
 * XREFs of MiDeleteClusterPage @ 0x1402694A8
 * Callers:
 *     MiDeletePteRun @ 0x14002A950 (MiDeletePteRun.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDeleteBatch @ 0x14002D060 (MiDeleteBatch.c)
 *     MiPfnReferenceCountIsZero @ 0x1400309A0 (MiPfnReferenceCountIsZero.c)
 *     MiReleasePageFileSpace @ 0x140051890 (MiReleasePageFileSpace.c)
 *     MiAbortCombineScan @ 0x140051BE8 (MiAbortCombineScan.c)
 *     MiClearPfnImageVerified @ 0x140054A44 (MiClearPfnImageVerified.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiInsertLargePageInNodeListHelper @ 0x140122680 (MiInsertLargePageInNodeListHelper.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401A6474 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiGetContainingPageTable @ 0x1401A64B8 (MiGetContainingPageTable.c)
 *     MiBadShareCount @ 0x1401A68BC (MiBadShareCount.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteClusterPage(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  _KPROCESS *Process; // r14
  __int64 v6; // r12
  unsigned __int64 ContainingPageTable; // rax
  unsigned int v8; // r9d
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  int v12; // r9d
  __int64 v13; // r10
  unsigned __int8 *v14; // r11
  ULONG_PTR v15; // rdi
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  ULONG_PTR v18; // r13
  __int64 v19; // rbp
  unsigned __int64 v20; // r14
  _QWORD *v21; // rsi
  char v22; // al
  unsigned __int64 v23; // rax
  char v24; // al
  char v25; // cl
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  ULONG_PTR v31; // rax
  ULONG_PTR BugCheckParameter4; // r9
  unsigned __int64 v33; // [rsp+70h] [rbp+8h] BYREF
  __int64 v34; // [rsp+80h] [rbp+18h]
  __int64 v35; // [rsp+88h] [rbp+20h]

  v34 = a3;
  v4 = -1LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = *(_QWORD *)(qword_1403CBD88 + 8LL * *((unsigned __int16 *)&Process[1].SecureState.Flags + 3));
  ContainingPageTable = MiGetContainingPageTable(a1);
  v8 = 0;
  v9 = ContainingPageTable;
  do
  {
    v10 = MI_READ_PTE_LOCK_FREE(a1 + 8LL * v8);
    if ( !v10 )
      return 0LL;
    if ( (v10 & 0x400) == 0 )
      return 0LL;
    v33 = v10 & 0xFFFFFFFFFFFFFBFEuLL | 1;
    v11 = MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64)&v33);
    v15 = v11;
    if ( v12 )
    {
      if ( v11 != v4 )
        return 0LL;
    }
    v16 = 48 * v11 - 0x58000000000LL;
    v17 = *(_QWORD *)(v16 + 40);
    if ( (v17 & 0x200000000000000LL) != 0 || *(_QWORD *)(v13 + 8 * ((v17 >> 40) & 0x3FF)) != v6 )
      return 0LL;
    v8 = v12 + 1;
    v4 = v15 + 1;
  }
  while ( v8 < 0x10 );
  MiDeleteBatch(v14);
  v18 = v15 - 15;
  v19 = 48 * v9 - 0x58000000000LL;
  v35 = v19;
  _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFF0uLL);
  v20 = 0LL;
  v21 = (_QWORD *)(a1 + 120);
  do
  {
    MiLockPageAtDpcInline(v16);
    if ( (_QWORD *)(*(_QWORD *)(v16 + 8) | 0x8000000000000000uLL) != v21 )
    {
      v31 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v21);
      KeBugCheckEx(0x1Au, 0x403uLL, (ULONG_PTR)v21, v31, BugCheckParameter4);
    }
    if ( (*(_BYTE *)(v16 + 34) & 7) != 6 )
      MiBadShareCount(v16);
    if ( *(_WORD *)(v16 + 32) != 1 || (v22 = *(_BYTE *)(v16 + 35), (v22 & 0x40) != 0) || v20 )
    {
      if ( (*(_QWORD *)(v16 + 24) & 0x4000000000000000LL) == 0 )
        *(_QWORD *)(v16 + 24) |= 0x4000000000000000uLL;
      if ( !v20 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v20 = v16;
        v15 = v18 + 15;
        v16 = 48 * (v18 + 15) - 0x58000000000LL;
        if ( v16 > v20 )
        {
          do
          {
            MiLockPageAtDpcInline(v16);
            *(_QWORD *)(v16 + 40) &= 0xFFFFFFF000000000uLL;
            MiInsertPageInFreeOrZeroedList(v15, 2);
            _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            --v15;
            v16 -= 48LL;
          }
          while ( v16 > v20 );
          v19 = v35;
        }
        MiLockPageAtDpcInline(v16);
      }
      *(_QWORD *)(v16 + 24) &= 0xC000000000000000uLL;
      if ( (*(_WORD *)(v16 + 32))-- == 1 )
      {
        MiPfnReferenceCountIsZero(v16, v15);
      }
      else
      {
        ++*(_QWORD *)(v34 + 8);
        *(_BYTE *)(v16 + 34) |= 7u;
      }
    }
    else
    {
      *(_WORD *)(v16 + 32) = 0;
      *(_BYTE *)(v16 + 35) = v22 & 0xF8;
      v23 = *(_QWORD *)(v16 + 40);
      *(_QWORD *)(v16 + 24) &= 0xC000000000000000uLL;
      if ( ((v23 >> 54) & 7) == 3 )
        MiClearPfnImageVerified(v16, 12);
      MiReleasePageFileSpace(v6, *(_QWORD *)(v16 + 16));
      if ( (*(_BYTE *)(v16 + 34) & 0xC0) != 0x40 )
      {
        MiAbortCombineScan(v16);
        *(_BYTE *)(v16 + 34) = *(_BYTE *)(v16 + 34) & 0x3F | 0x40;
      }
      v24 = *(_BYTE *)(v16 + 35);
      if ( (v24 & 0x10) != 0 )
        *(_BYTE *)(v16 + 35) = v24 & 0xEF;
      v25 = *(_BYTE *)(v16 + 34) & 0xEF;
      *(_QWORD *)(v16 + 40) = *(_QWORD *)(v16 + 40) & 0xFFFFFFF000000000uLL | 0xFFFFFFFFCLL;
      *(_BYTE *)(v16 + 34) = v25;
      *(_QWORD *)(v16 + 8) = 0LL;
      *(_BYTE *)(v16 + 34) = v25 & 0xF8 | 1;
      *(_QWORD *)(v16 + 24) &= ~0x4000000000000000uLL;
      if ( v15 == v18 )
        MiInsertLargePageInNodeListHelper(v15, 0x10uLL, 1, 0);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *v21 = ZeroPte;
    if ( MiPteInShadowRange((unsigned __int64)v21) )
      MiWritePteShadow(v28, v27, v29);
    v16 -= 48LL;
    --v15;
    --v21;
  }
  while ( v15 >= v18 );
  MiLockPageAtDpcInline(v19);
  *(_QWORD *)(v19 + 24) ^= (*(_QWORD *)(v19 + 24) ^ (*(_QWORD *)(v19 + 24) - 16LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 1LL;
}
