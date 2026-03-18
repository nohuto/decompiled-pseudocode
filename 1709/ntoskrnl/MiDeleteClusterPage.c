/*
 * XREFs of MiDeleteClusterPage @ 0x140108CB0
 * Callers:
 *     MiDeletePteRun @ 0x14004E1C0 (MiDeletePteRun.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiPfnReferenceCountIsZero @ 0x14004D4F0 (MiPfnReferenceCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MiClearPfnImageVerified @ 0x140050290 (MiClearPfnImageVerified.c)
 *     MiDeleteBatch @ 0x140051140 (MiDeleteBatch.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400C6B30 (MiInsertLargePageInNodeListHelper.c)
 *     MiAbortCombineScan @ 0x1400ED698 (MiAbortCombineScan.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetContainingPageTable @ 0x14017C61C (MiGetContainingPageTable.c)
 *     MiBadShareCount @ 0x14017CA94 (MiBadShareCount.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiDeleteClusterPage(_QWORD *a1, unsigned __int8 *a2, __int64 a3)
{
  __int64 v5; // rbp
  _KPROCESS *Process; // r15
  __int64 ContainingPageTable; // r12
  __int64 *v8; // r9
  __int64 PteShadow; // rax
  __int64 v10; // rax
  __int64 v11; // r9
  int v12; // r10d
  __int64 v13; // r11
  ULONG_PTR v14; // rsi
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 i; // rdi
  ULONG_PTR v18; // r13
  __int64 v19; // r12
  unsigned __int64 v20; // rbp
  ULONG_PTR *v21; // r14
  char v22; // al
  char v23; // al
  unsigned __int64 v24; // rax
  char v25; // al
  unsigned __int64 v26; // rax
  ULONG_PTR v29; // rax
  struct _KEVENT *v30; // [rsp+30h] [rbp-48h]
  unsigned __int64 v31[8]; // [rsp+38h] [rbp-40h] BYREF
  int v32; // [rsp+80h] [rbp+8h] BYREF
  __int64 v33; // [rsp+90h] [rbp+18h]
  unsigned __int64 v34; // [rsp+98h] [rbp+20h] BYREF

  v33 = a3;
  v5 = -1LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v30 = *(struct _KEVENT **)(qword_140388AF0 + 8LL * *((unsigned __int16 *)&Process[1].SecureState.Flags + 2));
  ContainingPageTable = MiGetContainingPageTable(a1);
  v8 = a1;
  do
  {
    PteShadow = *v8;
    if ( (unsigned __int64)v8 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v8 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v8, *v8);
    if ( !PteShadow )
      return 0LL;
    if ( (PteShadow & 0x400) == 0 )
      return 0LL;
    v31[0] = PteShadow & 0xFFFFFFFFFFFFFBFEuLL | 1;
    v10 = MI_GET_PAGE_FRAME_FROM_PTE(v31);
    v14 = v10;
    if ( v12 )
    {
      if ( v10 != v5 )
        return 0LL;
    }
    v15 = 6 * v10;
    v16 = *(_QWORD *)(48 * v10 - 0x58000000000LL + 40);
    i = 8 * v15 - 0x58000000000LL;
    if ( (v16 & 0x200000000000000LL) != 0 || *(struct _KEVENT **)(v13 + 8 * ((v16 >> 40) & 0x3FF)) != v30 )
      return 0LL;
    v5 = v14 + 1;
    v8 = (__int64 *)(v11 + 8);
  }
  while ( (unsigned int)(v12 + 1) < 0x10 );
  MiDeleteBatch(a2);
  v18 = v14 - 15;
  v19 = 48 * ContainingPageTable - 0x58000000000LL;
  _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFF0uLL);
  v20 = 0LL;
  v21 = a1 + 15;
  do
  {
    v32 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(i + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v32);
      while ( *(__int64 *)(i + 24) < 0 );
    }
    if ( (ULONG_PTR *)(*(_QWORD *)(i + 8) | 0x8000000000000000uLL) != v21 )
    {
      v29 = *v21;
      if ( (unsigned __int64)v21 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v21 <= 0xFFFFF6FB7DBED7F8uLL )
        v29 = MiReadPteShadow(v21, *v21);
      KeBugCheckEx(0x1Au, 0x403uLL, (ULONG_PTR)v21, v29, *(_QWORD *)(i + 8));
    }
    if ( (*(_BYTE *)(i + 34) & 7) != 6 )
      MiBadShareCount(i);
    if ( *(_WORD *)(i + 32) != 1 || (v22 = *(_BYTE *)(i + 35), (v22 & 0x40) != 0) || v20 )
    {
      if ( (*(_QWORD *)(i + 24) & 0x4000000000000000LL) == 0 )
        *(_QWORD *)(i + 24) |= 0x4000000000000000uLL;
      if ( !v20 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v20 = i;
        v14 = v18 + 15;
        for ( i = 48 * (v18 + 15) - 0x58000000000LL; i > v20; i -= 48LL )
        {
          MiLockPageAtDpcInline(i);
          *(_QWORD *)(i + 40) &= 0xFFFFFFF000000000uLL;
          MiInsertPageInFreeOrZeroedList(v14, 2);
          _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
          --v14;
        }
        MiLockPageAtDpcInline(i);
      }
      *(_QWORD *)(i + 24) &= 0xC000000000000000uLL;
      if ( (*(_WORD *)(i + 32))-- == 1 )
      {
        MiPfnReferenceCountIsZero(i, v14);
      }
      else
      {
        ++*(_QWORD *)(v33 + 8);
        *(_BYTE *)(i + 34) |= 7u;
      }
    }
    else
    {
      *(_QWORD *)(i + 24) &= 0xC000000000000000uLL;
      *(_BYTE *)(i + 35) = v22 & 0xF8;
      v23 = (*(_QWORD *)(i + 40) >> 54) & 7;
      *(_WORD *)(i + 32) = 0;
      if ( v23 == 3 )
        MiClearPfnImageVerified(i, 12);
      v34 = *(_QWORD *)(i + 16);
      v24 = v34;
      if ( (v34 & 0x400) == 0 )
      {
        if ( (v34 & 4) != 0 || (v34 & 2) != 0 )
        {
          if ( (unsigned __int64)&v34 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v34 <= 0xFFFFF6FB7DBED7F8uLL )
            v24 = MiReadPteShadow(&v34, v34);
        }
        else
        {
          v24 = 0LL;
        }
        v34 = v24;
        if ( v24 )
          MiReleasePageFileInfo(v30, v24, 0);
      }
      if ( (*(_BYTE *)(i + 34) & 0xC0) != 0x40 )
      {
        MiAbortCombineScan(i);
        *(_BYTE *)(i + 34) = *(_BYTE *)(i + 34) & 0x3F | 0x40;
      }
      v25 = *(_BYTE *)(i + 35);
      if ( (v25 & 0x10) != 0 )
        *(_BYTE *)(i + 35) = v25 & 0xEF;
      *(_BYTE *)(i + 34) &= ~0x10u;
      v26 = *(_QWORD *)(i + 40) & 0xFFFFFFFFFFFFFFFCuLL;
      *(_QWORD *)(i + 8) = 0LL;
      *(_QWORD *)(i + 40) = v26 | 0xFFFFFFFFCLL;
      *(_BYTE *)(i + 34) = *(_BYTE *)(i + 34) & 0xF8 | 1;
      *(_QWORD *)(i + 24) &= ~0x4000000000000000uLL;
      if ( v14 == v18 )
        MiInsertLargePageInNodeListHelper(v14, 0x10uLL, 1, 0);
    }
    _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *v21 = 0LL;
    if ( (unsigned __int64)v21 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v21 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v21, 0LL);
    i -= 48LL;
    --v14;
    --v21;
  }
  while ( v14 >= v18 );
  MiLockPageAtDpcInline(v19);
  *(_QWORD *)(v19 + 24) ^= (*(_QWORD *)(v19 + 24) ^ (*(_QWORD *)(v19 + 24) - 16LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 1LL;
}
