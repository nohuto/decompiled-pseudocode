/*
 * XREFs of MiWsleFree @ 0x1400D6AB0
 * Callers:
 *     MiFreeWsleList @ 0x1400D6F10 (MiFreeWsleList.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x14001DE1C (MiCapturePageFileInfoInline.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiGetPfnPriority @ 0x1400C3D60 (MiGetPfnPriority.c)
 *     MiPfnShareCountIsZero @ 0x1400C6560 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCaptureDirtyBitToPfn @ 0x140100BFC (MiCaptureDirtyBitToPfn.c)
 *     MiConfirmPageIsZero @ 0x1401041F0 (MiConfirmPageIsZero.c)
 *     MiDecrementShareCount @ 0x1401055F0 (MiDecrementShareCount.c)
 *     MiGetContainingPageTable @ 0x14017CDC0 (MiGetContainingPageTable.c)
 *     MiBadShareCount @ 0x14017D1EC (MiBadShareCount.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 */

char MiWsleFree(__int64 a1, unsigned __int64 a2, __int64 a3, ...)
{
  unsigned __int64 v3; // rbx
  unsigned int v4; // r13d
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // r8
  unsigned __int64 v11; // r9
  struct _KEVENT *v12; // r10
  unsigned __int64 v13; // r11
  __int64 v14; // r14
  __int64 v15; // r12
  unsigned __int64 v16; // rdi
  struct _KEVENT *v17; // r12
  int v18; // ebx
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 ContainingPageTable; // r14
  __int16 v24; // r10
  __int16 v25; // dx
  unsigned __int64 v26; // rdx
  char v28; // [rsp+20h] [rbp-58h]
  int v29; // [rsp+24h] [rbp-54h] BYREF
  int v30; // [rsp+28h] [rbp-50h] BYREF
  __int64 v31; // [rsp+30h] [rbp-48h]
  unsigned __int64 v33; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v33 = va_arg(va1, _QWORD);
  v3 = v33;
  v4 = a3;
  v6 = 0LL;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = MI_GET_PFN_FROM_PTE((unsigned __int64 *)va, a2, a3, a2);
  if ( v11 < v13 || v11 > 0xFFFFF6FFFFFFFFFFuLL )
    v28 = HIBYTE(v3) & 0xF | (16 * ((v3 >> 60) & 7));
  else
    v28 = (*(_DWORD *)v9 >> 2) & 7;
  v14 = -1LL;
  v15 = (*(_QWORD *)(v9 + 40) >> 57) & 1LL;
  v31 = v15;
  if ( (v3 & 0x20) == 0 )
    goto LABEL_14;
  if ( (_DWORD)v15 )
  {
    v6 = v9;
    MiLockPageAtDpcInline(v9);
  }
  if ( (unsigned int)MiConfirmPageIsZero(v9, v4) == 1 )
  {
    if ( !(_DWORD)v15 && (*(_BYTE *)(a1 + 192) & 7) == 0 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 360), 0xFFFFFFFFFFFFFFFFuLL);
      LOBYTE(v3) = v33;
    }
  }
  else
  {
    v3 &= ~0x20uLL;
    v33 = v3;
  }
  v12 = 0LL;
  if ( !v6 )
  {
LABEL_14:
    v29 = (int)v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v29);
        while ( *(__int64 *)(v9 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) );
      v12 = 0LL;
    }
    LOBYTE(v3) = v33;
  }
  v16 = (unsigned __int64)v12;
  v17 = v12;
  if ( (v3 & 0x20) != 0 || (v3 & 4) != 0 )
  {
    ContainingPageTable = MiGetContainingPageTable(v7);
    *(_QWORD *)(v9 + 40) &= ~0x200000000000000uLL;
    *(_BYTE *)(v9 + 34) &= 0xC7u;
    *(_BYTE *)(v9 + 35) &= ~0x20u;
    *(_QWORD *)(v9 + 24) &= 0xC000000000000000uLL;
    *(_WORD *)(v9 + 32) = v24;
    v16 = MiCapturePageFileInfoInline((_QWORD *)(v9 + 16), 0, 0);
    if ( v16 )
      v17 = *(struct _KEVENT **)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v9 + 40) >> 40) & 0x3FFLL));
    v25 = 2;
    if ( (v33 & 4) == 0 )
      v25 = 1;
    MiInsertPageInFreeOrZeroedList((v9 + 0x58000000000LL) / 48, v25);
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v9 = 48 * ContainingPageTable - 0x58000000000LL;
    MiLockPageAtDpcInline(v9);
    MiDecrementShareCount(v9);
    goto LABEL_47;
  }
  if ( (v3 & 0x42) != 0 )
  {
    v16 = MiCaptureDirtyBitToPfn(v9);
    if ( v16 )
    {
      v8 = (*(_QWORD *)(v9 + 40) >> 40) & 0x3FFLL;
      v17 = *(struct _KEVENT **)(qword_14036C8F8 + 8 * v8);
    }
  }
  v18 = v31;
  if ( (_DWORD)v31 )
    v14 = MiGetContainingPageTable(v7);
  if ( (v4 & 1) != 0
    && (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
    && *(_WORD *)(v9 + 32) == 1
    && (*(_BYTE *)(v9 + 34) & 0x10) == 0
    && (unsigned int)MiGetPfnPriority(v9) == 5 )
  {
    *(_BYTE *)(v9 + 35) = *(_BYTE *)(v9 + 35) & 0xF8 | 4;
  }
  if ( (*(_BYTE *)(v9 + 34) & 7) != 6 )
    MiBadShareCount(v9, v8, v10);
  v19 = *(_QWORD *)(v9 + 24);
  v20 = (v19 & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(v9 + 24) = v19 ^ (v20 ^ v19) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v19 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    MiPfnShareCountIsZero(v9, v20);
  if ( v14 != -1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v9 = 48 * v14 - 0x58000000000LL;
    v30 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v30);
      while ( *(__int64 *)(v9 + 24) < 0 );
    }
    if ( (*(_BYTE *)(v9 + 34) & 7) != 6 )
      MiBadShareCount(48 * v14 - 0x58000000000LL, v20, v10);
    v21 = *(_QWORD *)(v9 + 24);
    v22 = (v21 & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)(v9 + 24) = v21 ^ (v22 ^ v21) & 0x3FFFFFFFFFFFFFFFLL;
    if ( (v21 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      MiPfnShareCountIsZero(48 * v14 - 0x58000000000LL, v22);
LABEL_47:
    v18 = v31;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v16 )
    MiReleasePageFileInfo(v17, v16, 1);
  if ( v18 )
  {
    v26 = a2;
  }
  else
  {
    --*(_QWORD *)(a1 + 144);
    v26 = a2;
    if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
      --*(_QWORD *)(a1 + 128);
  }
  return MiRemoveWsle(a1, v26, v28, 10);
}
