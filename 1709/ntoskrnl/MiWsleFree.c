/*
 * XREFs of MiWsleFree @ 0x140052660
 * Callers:
 *     MiFreeWsleList @ 0x140052390 (MiFreeWsleList.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiCaptureDirtyBitToPfn @ 0x140032400 (MiCaptureDirtyBitToPfn.c)
 *     MiGetPfnPriority @ 0x14004BD90 (MiGetPfnPriority.c)
 *     MiPfnShareCountIsZero @ 0x14004F450 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MiRemoveWsle @ 0x140055F20 (MiRemoveWsle.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiDecrementShareCount @ 0x1400EB4C0 (MiDecrementShareCount.c)
 *     MiConfirmPageIsZero @ 0x1401026D0 (MiConfirmPageIsZero.c)
 *     MiCapturePageFileInfoInline @ 0x140117280 (MiCapturePageFileInfoInline.c)
 *     MiGetContainingPageTable @ 0x14017C61C (MiGetContainingPageTable.c)
 *     MiBadShareCount @ 0x14017CA94 (MiBadShareCount.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

__int64 MiWsleFree(__int64 a1, unsigned __int64 a2, __int64 a3, ...)
{
  unsigned __int64 v3; // rbx
  unsigned int v4; // r12d
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rsi
  unsigned __int64 v9; // r9
  __int64 v10; // r11
  unsigned __int64 v11; // r10
  unsigned __int8 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // r12
  int v17; // ebx
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 ContainingPageTable; // r15
  __int16 v23; // r11
  __int16 v24; // dx
  unsigned __int64 v25; // rdx
  __int64 v27; // [rsp+20h] [rbp-48h] BYREF
  __int64 v28; // [rsp+28h] [rbp-40h]
  char v30; // [rsp+80h] [rbp+18h]
  unsigned __int64 v31; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v31 = va_arg(va1, _QWORD);
  v30 = a3;
  v3 = v31;
  v4 = a3;
  v6 = 0LL;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = MI_GET_PFN_FROM_PTE((unsigned __int64 *)va, a2, a3, a2);
  if ( v9 < v11 || v9 > 0xFFFFF6FFFFFFFFFFuLL )
    v12 = HIBYTE(v3) & 0xF | (16 * ((v3 >> 60) & 7));
  else
    v12 = (*(_BYTE *)v8 >> 1) & 7;
  v13 = -1LL;
  v14 = (*(_QWORD *)(v8 + 40) >> 57) & 1LL;
  v28 = v14;
  if ( (v3 & 0x20) == 0 )
    goto LABEL_14;
  if ( (_DWORD)v14 )
  {
    v6 = v8;
    MiLockPageAtDpcInline(v8);
  }
  if ( (unsigned int)MiConfirmPageIsZero(v8, v4) == 1 )
  {
    if ( !(_DWORD)v28 && (*(_BYTE *)(a1 + 192) & 7) == 0 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 360), 0xFFFFFFFFFFFFFFFFuLL);
      LOBYTE(v3) = v31;
    }
  }
  else
  {
    v3 &= ~0x20uLL;
    v31 = v3;
  }
  v10 = 0LL;
  if ( !v6 )
  {
LABEL_14:
    LODWORD(v27) = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v27);
        while ( *(__int64 *)(v8 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) );
      v10 = 0LL;
    }
    LOBYTE(v3) = v31;
  }
  v15 = v10;
  v16 = v10;
  if ( (v3 & 0x20) != 0 || (v3 & 4) != 0 )
  {
    ContainingPageTable = MiGetContainingPageTable(v7);
    *(_QWORD *)(v8 + 40) &= ~0x200000000000000uLL;
    *(_BYTE *)(v8 + 34) &= 0xC7u;
    *(_BYTE *)(v8 + 35) &= ~0x20u;
    *(_QWORD *)(v8 + 24) &= 0xC000000000000000uLL;
    *(_WORD *)(v8 + 32) = v23;
    v15 = MiCapturePageFileInfoInline(v8 + 16, 0LL);
    if ( v15 )
      v16 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v8 + 40) >> 40) & 0x3FFLL));
    v24 = 2;
    if ( (v31 & 4) == 0 )
      v24 = 1;
    MiInsertPageInFreeOrZeroedList((v8 + 0x58000000000LL) / 48, v24);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v8 = 48 * ContainingPageTable - 0x58000000000LL;
    MiLockPageAtDpcInline(v8);
    MiDecrementShareCount(v8);
    goto LABEL_47;
  }
  if ( (v3 & 0x42) != 0 )
  {
    v15 = MiCaptureDirtyBitToPfn(v8);
    if ( v15 )
      v16 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v8 + 40) >> 40) & 0x3FFLL));
  }
  v17 = v28;
  if ( (_DWORD)v28 )
    v13 = MiGetContainingPageTable(v7);
  if ( (v30 & 1) != 0
    && (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
    && *(_WORD *)(v8 + 32) == 1
    && (*(_BYTE *)(v8 + 34) & 0x10) == 0
    && (unsigned int)MiGetPfnPriority(v8) == 5 )
  {
    *(_BYTE *)(v8 + 35) = *(_BYTE *)(v8 + 35) & 0xF8 | 4;
  }
  if ( (*(_BYTE *)(v8 + 34) & 7) != 6 )
    MiBadShareCount(v8);
  v18 = *(_QWORD *)(v8 + 24);
  v19 = (v18 & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(v8 + 24) = v18 ^ (v19 ^ v18) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v18 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    MiPfnShareCountIsZero(v8, v19);
  if ( v13 != -1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v8 = 48 * v13 - 0x58000000000LL;
    HIDWORD(v27) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx((char *)&v27 + 4);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
    if ( (*(_BYTE *)(v8 + 34) & 7) != 6 )
      MiBadShareCount(48 * v13 - 0x58000000000LL);
    v20 = *(_QWORD *)(v8 + 24);
    v21 = (v20 & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)(v8 + 24) = v20 ^ (v21 ^ v20) & 0x3FFFFFFFFFFFFFFFLL;
    if ( (v20 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      MiPfnShareCountIsZero(48 * v13 - 0x58000000000LL, v21);
LABEL_47:
    v17 = v28;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v15 )
    MiReleasePageFileInfo(v16, v15, 1LL);
  if ( v17 )
  {
    v25 = a2;
  }
  else
  {
    --*(_QWORD *)(a1 + 144);
    v25 = a2;
    if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
      --*(_QWORD *)(a1 + 128);
  }
  return MiRemoveWsle(a1, v25, v12, 10LL, v27);
}
