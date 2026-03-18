/*
 * XREFs of MiDeleteValidSystemPage @ 0x14004D040
 * Callers:
 *     MiDeleteKernelStack @ 0x1400328D0 (MiDeleteKernelStack.c)
 *     MiDeleteSystemPagableVm @ 0x140056870 (MiDeleteSystemPagableVm.c)
 *     MiRemoveMappedPtes @ 0x14005C210 (MiRemoveMappedPtes.c)
 *     MiDeleteSystemPte @ 0x140221900 (MiDeleteSystemPte.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x140032400 (MiCaptureDirtyBitToPfn.c)
 *     MiPfnShareCountIsZero @ 0x14004F450 (MiPfnShareCountIsZero.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiDecrementCombinedPte @ 0x1400E5700 (MiDecrementCombinedPte.c)
 *     MiCapturePageFileInfoInline @ 0x140117280 (MiCapturePageFileInfoInline.c)
 *     MiIsPfnSystemCharged @ 0x14012C56C (MiIsPfnSystemCharged.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetContainingPageTable @ 0x14017C61C (MiGetContainingPageTable.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiBadShareCount @ 0x14017CA94 (MiBadShareCount.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiDriverPageIsDangling @ 0x140218FE4 (MiDriverPageIsDangling.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

__int64 __fastcall MiDeleteValidSystemPage(__int64 a1, ULONG_PTR *a2, __int64 a3, __int64 a4)
{
  ULONG_PTR PteShadow; // rbx
  __int64 v5; // rsi
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rbp
  __int64 v11; // r10
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rax
  unsigned __int64 v16; // r13
  __int64 v17; // r14
  __int64 PrototypePteDirect; // rax
  __int64 v19; // r12
  char v20; // r10
  __int64 result; // rax
  __int64 v22; // rcx
  char v23; // dl
  unsigned __int16 v24; // cx
  __int64 v25; // rcx
  int IsZero; // ebx
  __int64 v27; // rcx
  int v28; // [rsp+30h] [rbp-68h] BYREF
  int v29; // [rsp+34h] [rbp-64h] BYREF
  __int64 v30; // [rsp+38h] [rbp-60h]
  ULONG_PTR v31[3]; // [rsp+40h] [rbp-58h] BYREF
  int v33; // [rsp+A8h] [rbp+10h] BYREF
  int v34; // [rsp+B0h] [rbp+18h]
  __int64 v35; // [rsp+B8h] [rbp+20h]

  v35 = a4;
  v34 = a3;
  PteShadow = *a2;
  v5 = 0LL;
  v7 = a1;
  if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(a2, *a2);
  v8 = *(unsigned __int16 *)(v7 + 172);
  v31[0] = PteShadow;
  v9 = *(_QWORD *)(qword_140388AF0 + 8 * v8);
  v10 = MI_GET_PFN_FROM_PTE(v31, a2, a3, qword_140388AF0);
  v13 = *(_QWORD *)(v10 + 40);
  v30 = *(_QWORD *)(v14 + 8 * ((v13 >> 40) & 0x3FF));
  if ( (v13 & 0x200000000000000LL) != 0 )
  {
    v15 = *(_QWORD *)(v10 + 8);
    v16 = v15 | 0x8000000000000000uLL;
    if ( v15 < 0 )
      v16 = 0LL;
    v17 = 48 * MiGetContainingPageTable(a2) - 0x58000000000LL;
    v33 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v33);
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
    if ( (PteShadow & 0x42) != 0 )
      v5 = MiCaptureDirtyBitToPfn(v10);
    if ( (*(_DWORD *)(v10 + 16) & 0x400LL) == 0 || (PteShadow & 0x200) != 0 )
    {
      v19 = v35;
      ++*(_QWORD *)(v35 + 24);
    }
    else
    {
      PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(v10 + 16));
      v19 = v35;
      if ( (*(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL) & 0x820) == 0x820 )
      {
        ++*(_QWORD *)(v35 + 24);
        v20 = v34;
LABEL_44:
        if ( (v20 & 0x10) != 0 )
          *(_BYTE *)(v10 + 35) &= ~8u;
        *a2 = 0LL;
        if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(a2, 0LL);
        if ( (*(_BYTE *)(v10 + 34) & 7) != 6 )
          MiBadShareCount(v10);
        v25 = *(_QWORD *)(v10 + 24);
        *(_QWORD *)(v10 + 24) = v25 ^ (((v25 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v25) & 0x3FFFFFFFFFFFFFFFLL;
        if ( (v25 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
          IsZero = MiPfnShareCountIsZero(v10);
        else
          IsZero = 2;
        result = 0x7FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v17 )
        {
          v29 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v29);
            while ( *(__int64 *)(v17 + 24) < 0 );
          }
          if ( (*(_BYTE *)(v17 + 34) & 7) != 6 )
            MiBadShareCount(v17);
          v27 = *(_QWORD *)(v17 + 24);
          *(_QWORD *)(v17 + 24) = v27 ^ (((v27 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v27) & 0x3FFFFFFFFFFFFFFFLL;
          if ( (v27 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
            MiPfnShareCountIsZero(v17);
          result = 0x7FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        if ( v5 )
          result = MiReleasePageFileInfo(v30, v5, 1LL);
        if ( v16 )
        {
          result = MiDecrementCombinedPte(a1, v16);
          IsZero = result;
        }
        if ( IsZero == 3 )
          ++*(_QWORD *)(v19 + 8);
        return result;
      }
    }
    v20 = v34;
    goto LABEL_44;
  }
  if ( v10 != qword_140389180 )
  {
    if ( (ULONG_PTR *)(*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) != a2 )
      KeBugCheckEx(0x1Au, 0x404uLL, (ULONG_PTR)a2, PteShadow, *(_QWORD *)(v10 + 8));
    v22 = v13 & 0xFFFFFFFFFLL;
    if ( v22 == 0xFFFFFFFFFLL )
      v17 = 0LL;
    else
      v17 = 48 * v22 - 0x58000000000LL;
    ++*(_QWORD *)(v11 + 24);
    v28 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v28);
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
    *(_QWORD *)(v10 + 24) |= 0x4000000000000000uLL;
    if ( ((*(_QWORD *)(v10 + 40) >> 54) & 7) == 2 )
    {
      v23 = *(_BYTE *)(v10 + 34);
      if ( (v23 & 0x10) == 0 )
      {
        if ( (*(_DWORD *)(v10 + 16) & 0x400LL) == 0 && (v23 & 8) == 0 )
          v5 = MiCapturePageFileInfoInline(v10 + 16, 1LL);
        *(_BYTE *)(v10 + 34) |= 0x10u;
      }
      v24 = *(_WORD *)(v10 + 32);
      if ( v24 != 1 && (v24 != 2 || (*(_BYTE *)(v10 + 34) & 8) == 0) && v30 != v9 )
        KeBugCheckEx(0x1Au, 0x406uLL, (ULONG_PTR)a2, (v10 + 0x58000000000LL) / 48, v24);
      *(_QWORD *)(v10 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    }
    v20 = v34;
    if ( (v34 & 4) != 0 && (unsigned int)MiIsPfnSystemCharged(v10) )
    {
      MiDriverPageIsDangling();
      *(_BYTE *)(v10 + 35) &= ~0x20u;
    }
    v19 = v35;
    v16 = 0LL;
    goto LABEL_44;
  }
  *a2 = 0LL;
  result = 0xFFFFF6FB7DBED000uLL;
  if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL )
  {
    result = v12;
    if ( (unsigned __int64)a2 <= v12 )
      return MiWritePteShadow(a2, 0LL);
  }
  return result;
}
