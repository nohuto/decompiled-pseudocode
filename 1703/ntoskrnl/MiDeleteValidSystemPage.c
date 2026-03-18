/*
 * XREFs of MiDeleteValidSystemPage @ 0x1400C90C0
 * Callers:
 *     MiDeleteKernelStack @ 0x140023CD4 (MiDeleteKernelStack.c)
 *     MiDeleteSystemPagableVm @ 0x1400C9480 (MiDeleteSystemPagableVm.c)
 *     MiRemoveMappedPtes @ 0x1400FD140 (MiRemoveMappedPtes.c)
 *     MiDeleteSystemPte @ 0x14013E694 (MiDeleteSystemPte.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiDecrementCombinedPte @ 0x140078BE8 (MiDecrementCombinedPte.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiPfnShareCountIsZero @ 0x1400C6560 (MiPfnShareCountIsZero.c)
 *     MiCaptureDirtyBitToPfn @ 0x140100BFC (MiCaptureDirtyBitToPfn.c)
 *     MiIsPfnSystemCharged @ 0x140147870 (MiIsPfnSystemCharged.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetContainingPageTable @ 0x14017CDC0 (MiGetContainingPageTable.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiBadShareCount @ 0x14017D1EC (MiBadShareCount.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiDriverPageIsDangling @ 0x140211754 (MiDriverPageIsDangling.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiDeleteValidSystemPage(__int64 a1, _QWORD *a2, char a3, __int64 a4)
{
  unsigned __int64 v4; // rsi
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rbp
  ULONG_PTR v12; // r9
  unsigned __int64 v13; // rcx
  __int64 v14; // r10
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r14
  __int16 v20; // bx
  __int64 result; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  int IsZero; // ebx
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  struct _KEVENT *v33; // rdi
  int v34; // [rsp+30h] [rbp-58h] BYREF
  int v35; // [rsp+34h] [rbp-54h] BYREF
  __int64 v36; // [rsp+38h] [rbp-50h] BYREF
  struct _KEVENT *v37; // [rsp+40h] [rbp-48h]
  unsigned __int64 v38; // [rsp+48h] [rbp-40h]
  struct _KEVENT *v39; // [rsp+50h] [rbp-38h]
  int v40; // [rsp+90h] [rbp+8h] BYREF

  v38 = 0LL;
  v4 = 0LL;
  v36 = MI_READ_PTE_LOCK_FREE(a2);
  v39 = *(struct _KEVENT **)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(v8 + 172));
  v11 = MI_GET_PFN_FROM_PTE(&v36, v9, v10, v36);
  v13 = *(_QWORD *)(v11 + 40);
  v37 = *(struct _KEVENT **)(v14 + 8 * ((v13 >> 40) & 0x3FF));
  if ( (v13 & 0x200000000000000LL) != 0 )
  {
    v15 = *(_QWORD *)(v11 + 8);
    if ( v15 >= 0 )
      v38 = v15 | 0x8000000000000000uLL;
    v19 = 48 * MiGetContainingPageTable(a2) - 0x58000000000LL;
    v40 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v40);
      while ( *(__int64 *)(v11 + 24) < 0 );
    }
    v20 = v36;
    if ( (v36 & 0x42) != 0 )
      v4 = MiCaptureDirtyBitToPfn(v11);
    if ( (*(_DWORD *)(v11 + 16) & 0x400LL) == 0
      || (v20 & 0x200) != 0
      || (*(_DWORD *)(*(_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(v11 + 16), v16, v17, v18) + 56LL) & 0x820) == 0x820 )
    {
      ++*(_QWORD *)(a4 + 24);
    }
LABEL_28:
    if ( (a3 & 0x10) != 0 )
      *(_BYTE *)(v11 + 35) &= ~8u;
    *a2 = 0LL;
    if ( (unsigned int)MiPteInShadowRange(a2) )
      MiWritePteShadow(v26);
    if ( (*(_BYTE *)(v11 + 34) & 7) != 6 )
      MiBadShareCount(v11, v25, v27);
    v28 = *(_QWORD *)(v11 + 24);
    v29 = (v28 & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)(v11 + 24) = v28 ^ (v29 ^ v28) & 0x3FFFFFFFFFFFFFFFLL;
    if ( (v28 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      IsZero = MiPfnShareCountIsZero(v11, v29);
    else
      IsZero = 2;
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v19 )
    {
      v35 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v35);
        while ( *(__int64 *)(v19 + 24) < 0 );
      }
      if ( (*(_BYTE *)(v19 + 34) & 7) != 6 )
        MiBadShareCount(v19, v29, v27);
      v31 = *(_QWORD *)(v19 + 24);
      v32 = (v31 & 0x3FFFFFFFFFFFFFFFLL) - 1;
      *(_QWORD *)(v19 + 24) = v31 ^ (v32 ^ v31) & 0x3FFFFFFFFFFFFFFFLL;
      if ( (v31 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        MiPfnShareCountIsZero(v19, v32);
      _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    v33 = v37;
    if ( v4 )
      MiReleasePageFileInfo(v37, v4, 1);
    result = v38;
    if ( v38 )
    {
      result = MiDecrementCombinedPte(v38);
      IsZero = result;
    }
    if ( IsZero == 3 && v33 == v39 )
      ++*(_QWORD *)(a4 + 8);
    return result;
  }
  if ( v11 != qword_14036CEC0 )
  {
    if ( (_QWORD *)(*(_QWORD *)(v11 + 8) | 0x8000000000000000uLL) != a2 )
      KeBugCheckEx(0x1Au, 0x404uLL, (ULONG_PTR)a2, v12, *(_QWORD *)(v11 + 8));
    v23 = v13 & 0xFFFFFFFFFLL;
    if ( v23 == 0xFFFFFFFFFLL )
      v19 = 0LL;
    else
      v19 = 48 * v23 - 0x58000000000LL;
    ++*(_QWORD *)(a4 + 24);
    v34 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v34);
      while ( *(__int64 *)(v11 + 24) < 0 );
    }
    v24 = *(_QWORD *)(v11 + 40);
    *(_QWORD *)(v11 + 24) |= 0x4000000000000000uLL;
    if ( ((v24 >> 54) & 7) == 2 )
      *(_QWORD *)(v11 + 40) = v24 & 0xFE3FFFFFFFFFFFFFuLL;
    if ( (a3 & 4) != 0 && (unsigned int)MiIsPfnSystemCharged(v11) )
    {
      MiDriverPageIsDangling();
      *(_BYTE *)(v11 + 35) &= ~0x20u;
    }
    goto LABEL_28;
  }
  *a2 = 0LL;
  result = MiPteInShadowRange(a2);
  if ( (_DWORD)result )
    return MiWritePteShadow(v22);
  return result;
}
