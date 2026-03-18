/*
 * XREFs of MiWsleFree @ 0x140027A70
 * Callers:
 *     MiFreeWsleList @ 0x1400278B0 (MiFreeWsleList.c)
 * Callees:
 *     MiPageMightBeZero @ 0x140025F10 (MiPageMightBeZero.c)
 *     MiPfnShareCountIsZero @ 0x14002B7A0 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiConfirmPageIsZero @ 0x140053370 (MiConfirmPageIsZero.c)
 *     MiDecrementShareCount @ 0x140054240 (MiDecrementShareCount.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiCapturePageFileInfoInline @ 0x1400B221C (MiCapturePageFileInfoInline.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     MiGetPfnPriority @ 0x14011B8F0 (MiGetPfnPriority.c)
 *     MiCaptureDirtyBitToPfn @ 0x140124940 (MiCaptureDirtyBitToPfn.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x1401A6244 (MiRewriteTrimPteAsDemandZero.c)
 *     MiGetContainingPageTable @ 0x1401A64B8 (MiGetContainingPageTable.c)
 *     MiBadShareCount @ 0x1401A68BC (MiBadShareCount.c)
 *     MiLockPageAtDpc @ 0x140264C3C (MiLockPageAtDpc.c)
 */

__int64 __fastcall MiWsleFree(__int64 a1, unsigned __int64 a2, char a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r11
  char v5; // bl
  unsigned __int64 v6; // r10
  __int64 v8; // r15
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rsi
  char v14; // r14
  BOOL v15; // ebp
  BOOL v16; // r13d
  __int64 v17; // rdi
  __int64 v18; // r13
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 ContainingPageTable; // r15
  char v23; // cl
  char v24; // cl
  __int64 v26; // [rsp+20h] [rbp-48h]
  unsigned __int64 v28; // [rsp+88h] [rbp+20h] BYREF

  v28 = a4;
  v4 = 0xFFFFF68000000000uLL;
  v5 = a4;
  v6 = a2;
  v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = a4;
  if ( (unsigned __int64)&v28 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v28 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, a2, a4, a4)
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    v5 = v28;
    v10 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v10 )
    {
      a4 |= 0x20uLL;
      v11 = *(_QWORD *)(v10 + 8 * (((unsigned __int64)&v28 >> 3) & 0x1FF));
      if ( (v11 & 0x20) == 0 )
        a4 = v9;
      if ( (v11 & 0x42) != 0 )
        a4 |= 0x42uLL;
    }
    else
    {
      a4 = v28;
    }
  }
  v12 = (a4 >> 12) & 0xFFFFFFFFFLL;
  v26 = 48 * v12;
  v13 = 48 * v12 - 0x58000000000LL;
  if ( v6 < v4 || v6 > 0xFFFFF6FFFFFFFFFFuLL )
    v14 = HIBYTE(v9) & 0xF | (16 * ((v9 >> 60) & 7));
  else
    v14 = (*(_BYTE *)v13 >> 1) & 7;
  v15 = (*(_QWORD *)(v13 + 40) & 0x200000000000000LL) == 0;
  v16 = MiPageMightBeZero(a1, 48 * v12 - 0x58000000000LL);
  MiLockPageAtDpc(v13);
  if ( v16 )
  {
    if ( (unsigned int)MiConfirmPageIsZero(v13) == 1 )
      MiRewriteTrimPteAsDemandZero(a1, v13);
    else
      v16 = 0;
  }
  v17 = 0LL;
  if ( v16 || (v5 & 4) != 0 )
  {
    ContainingPageTable = MiGetContainingPageTable(v8);
    v23 = *(_BYTE *)(v13 + 34) & 0xC7;
    *(_WORD *)(v13 + 32) = 0;
    *(_QWORD *)(v13 + 40) &= ~0x200000000000000uLL;
    *(_BYTE *)(v13 + 34) = v23;
    v24 = *(_BYTE *)(v13 + 35);
    *(_QWORD *)(v13 + 24) &= 0xC000000000000000uLL;
    *(_BYTE *)(v13 + 35) = v24 & 0xDF;
    v17 = MiCapturePageFileInfoInline(v13 + 16, 0LL);
    if ( v17 )
      v18 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v13 + 40) >> 40) & 0x3FFLL));
    else
      v18 = 0LL;
    MiInsertPageInFreeOrZeroedList(v26 / 48);
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v13 = 48 * ContainingPageTable - 0x58000000000LL;
    MiLockPageAtDpc(v13);
    MiDecrementShareCount(v13);
  }
  else
  {
    if ( (v5 & 0x42) != 0 && (v17 = MiCaptureDirtyBitToPfn(v13)) != 0 )
      v18 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v13 + 40) >> 40) & 0x3FFLL));
    else
      v18 = 0LL;
    if ( v15 )
      v19 = -1LL;
    else
      v19 = MiGetContainingPageTable(v8);
    if ( (a3 & 1) != 0
      && (*(_QWORD *)(v13 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
      && *(_WORD *)(v13 + 32) == 1
      && (*(_BYTE *)(v13 + 34) & 0x10) == 0
      && (unsigned int)MiGetPfnPriority(v13) == 5 )
    {
      *(_BYTE *)(v13 + 35) = *(_BYTE *)(v13 + 35) & 0xF8 | 4;
    }
    if ( (*(_BYTE *)(v13 + 34) & 7) != 6 )
      MiBadShareCount(v13);
    v20 = *(_QWORD *)(v13 + 24);
    *(_QWORD *)(v13 + 24) = v20 ^ (((v20 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v20) & 0x3FFFFFFFFFFFFFFFLL;
    if ( (v20 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      MiPfnShareCountIsZero(v13);
    if ( v19 != -1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v13 = 48 * v19 - 0x58000000000LL;
      MiLockPageAtDpc(v13);
      if ( (*(_BYTE *)(v13 + 34) & 7) != 6 )
        MiBadShareCount(48 * v19 - 0x58000000000LL);
      v21 = *(_QWORD *)(v13 + 24);
      *(_QWORD *)(v13 + 24) = v21 ^ (((v21 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v21) & 0x3FFFFFFFFFFFFFFFLL;
      if ( (v21 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        MiPfnShareCountIsZero(48 * v19 - 0x58000000000LL);
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v17 )
    MiReleasePageFileInfo(v18, v17, 1LL);
  LOBYTE(v28) = v14;
  BYTE1(v28) = (2 * v15) | 1;
  return (unsigned __int16)v28;
}
