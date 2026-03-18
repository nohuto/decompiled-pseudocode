/*
 * XREFs of MiDeleteClusterPage @ 0x14000D020
 * Callers:
 *     MiDeletePteRun @ 0x1400C5B70 (MiDeletePteRun.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400B7240 (MiInsertLargePageInNodeListHelper.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiClearPfnImageVerified @ 0x1400C7700 (MiClearPfnImageVerified.c)
 *     MiDeleteBatch @ 0x1400C8490 (MiDeleteBatch.c)
 *     MiPfnReferenceCountIsZero @ 0x1400C9020 (MiPfnReferenceCountIsZero.c)
 *     MiAbortCombineScan @ 0x140103628 (MiAbortCombineScan.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetContainingPageTable @ 0x14017CDC0 (MiGetContainingPageTable.c)
 *     MiBadShareCount @ 0x14017D1EC (MiBadShareCount.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiDeleteClusterPage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  _KPROCESS *Process; // rbp
  __int64 v6; // r12
  __int64 ContainingPageTable; // rax
  unsigned int v8; // r9d
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // r9d
  __int64 v13; // r10
  __int64 v14; // r11
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rdi
  __int64 v19; // r15
  unsigned __int64 v20; // rbp
  _QWORD *v21; // r14
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r8
  char v24; // al
  char v25; // al
  __int64 v26; // rax
  char v27; // al
  unsigned __int64 v28; // rax
  __int64 v30; // rcx
  ULONG_PTR v32; // rax
  unsigned __int64 v33; // [rsp+30h] [rbp-48h] BYREF
  __int64 v34; // [rsp+38h] [rbp-40h]
  int v35; // [rsp+80h] [rbp+8h] BYREF
  __int64 v36; // [rsp+90h] [rbp+18h]
  __int64 v37; // [rsp+98h] [rbp+20h] BYREF

  v36 = a3;
  v4 = -1LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = *(_QWORD *)(qword_14036C8F8 + 8LL * WORD2(Process[1].SecurePid));
  ContainingPageTable = MiGetContainingPageTable();
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
    v11 = MI_GET_PAGE_FRAME_FROM_PTE(&v33);
    v15 = v11;
    if ( v12 )
    {
      if ( v11 != v4 )
        return 0LL;
    }
    v16 = *(_QWORD *)(48 * v11 - 0x58000000000LL + 40);
    if ( (v16 & 0x200000000000000LL) != 0 || *(_QWORD *)(v13 + 8 * ((v16 >> 40) & 0x3FF)) != v6 )
      return 0LL;
    v8 = v12 + 1;
    v4 = v15 + 1;
  }
  while ( v8 < 0x10 );
  MiDeleteBatch(v14);
  v17 = v15 - 15;
  v18 = 48 * v15 - 0x58000000000LL;
  v19 = 48 * v9 - 0x58000000000LL;
  v34 = v19;
  _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFF0uLL);
  v20 = 0LL;
  v21 = (_QWORD *)(a1 + 120);
  v22 = 0x7FFFFFFFFFFFFFFFLL;
  v23 = 0xC000000000000000uLL;
  do
  {
    v35 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v35);
        while ( (*(_QWORD *)(v18 + 24) & 0x8000000000000000uLL) != 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) );
      v22 = 0x7FFFFFFFFFFFFFFFLL;
      v23 = 0xC000000000000000uLL;
    }
    if ( (_QWORD *)(*(_QWORD *)(v18 + 8) | 0x8000000000000000uLL) != v21 )
    {
      v32 = MI_READ_PTE_LOCK_FREE(v21);
      KeBugCheckEx(0x1Au, 0x403uLL, (ULONG_PTR)v21, v32, *(_QWORD *)(v18 + 8));
    }
    if ( (*(_BYTE *)(v18 + 34) & 7) != 6 )
      MiBadShareCount(v18, v22, 0xC000000000000000uLL);
    if ( *(_WORD *)(v18 + 32) != 1 || (v24 = *(_BYTE *)(v18 + 35), (v24 & 0x40) != 0) || v20 )
    {
      if ( (*(_QWORD *)(v18 + 24) & 0x4000000000000000LL) == 0 )
        *(_QWORD *)(v18 + 24) |= 0x4000000000000000uLL;
      if ( !v20 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), v22);
        v20 = v18;
        v15 = v17 + 15;
        v18 = 48 * (v17 + 15) - 0x58000000000LL;
        if ( v18 > v20 )
        {
          do
          {
            MiLockPageAtDpcInline(v18);
            *(_QWORD *)(v18 + 40) &= 0xFFFFFFF000000000uLL;
            MiInsertPageInFreeOrZeroedList(v15, 2LL);
            _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            --v15;
            v18 -= 48LL;
          }
          while ( v18 > v20 );
          v19 = v34;
        }
        MiLockPageAtDpcInline(v18);
      }
      *(_QWORD *)(v18 + 24) &= 0xC000000000000000uLL;
      if ( (*(_WORD *)(v18 + 32))-- == 1 )
      {
        MiPfnReferenceCountIsZero(v18, v15, v23);
      }
      else
      {
        ++*(_QWORD *)(v36 + 8);
        *(_BYTE *)(v18 + 34) |= 7u;
      }
    }
    else
    {
      *(_QWORD *)(v18 + 24) &= 0xC000000000000000uLL;
      *(_BYTE *)(v18 + 35) = v24 & 0xF8;
      v25 = (*(_QWORD *)(v18 + 40) >> 54) & 7;
      *(_WORD *)(v18 + 32) = 0;
      if ( v25 == 3 )
        MiClearPfnImageVerified(v18, 12LL, 0xC000000000000000uLL);
      v37 = *(_QWORD *)(v18 + 16);
      if ( (v37 & 0x400) == 0 )
      {
        v26 = (v37 & 4) != 0 || (v37 & 2) != 0 ? MI_READ_PTE_LOCK_FREE(&v37) : 0LL;
        v37 = v26;
        if ( v26 )
          MiReleasePageFileInfo(v6, v26, 0LL);
      }
      if ( (*(_BYTE *)(v18 + 34) & 0xC0) != 0x40 )
      {
        MiAbortCombineScan(v18, v22, v23);
        *(_BYTE *)(v18 + 34) = *(_BYTE *)(v18 + 34) & 0x3F | 0x40;
      }
      v27 = *(_BYTE *)(v18 + 35);
      if ( (v27 & 0x10) != 0 )
        *(_BYTE *)(v18 + 35) = v27 & 0xEF;
      *(_BYTE *)(v18 + 34) &= ~0x10u;
      v28 = *(_QWORD *)(v18 + 40) & 0xFFFFFFFFFFFFFFFCuLL;
      *(_QWORD *)(v18 + 8) = 0LL;
      *(_QWORD *)(v18 + 40) = v28 | 0xFFFFFFFFCLL;
      *(_BYTE *)(v18 + 34) = *(_BYTE *)(v18 + 34) & 0xF8 | 1;
      *(_QWORD *)(v18 + 24) &= ~0x4000000000000000uLL;
      if ( v15 == v17 )
        MiInsertLargePageInNodeListHelper(v15, 16LL, 1LL);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *v21 = 0LL;
    if ( (unsigned int)MiPteInShadowRange(v21) )
    {
      MiWritePteShadow(v30);
      v22 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v18 -= 48LL;
    --v15;
    --v21;
    v23 = 0xC000000000000000uLL;
  }
  while ( v15 >= v17 );
  MiLockPageAtDpcInline(v19);
  *(_QWORD *)(v19 + 24) ^= (*(_QWORD *)(v19 + 24) ^ (*(_QWORD *)(v19 + 24) - 16LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 1LL;
}
