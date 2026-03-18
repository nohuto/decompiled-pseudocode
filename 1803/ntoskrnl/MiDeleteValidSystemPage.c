/*
 * XREFs of MiDeleteValidSystemPage @ 0x140028710
 * Callers:
 *     MiDeleteKernelStack @ 0x140025C60 (MiDeleteKernelStack.c)
 *     MiDeleteSystemPagableVm @ 0x140026510 (MiDeleteSystemPagableVm.c)
 *     MiRemoveMappedPtes @ 0x14012ADA0 (MiRemoveMappedPtes.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiPfnShareCountIsZero @ 0x14002B7A0 (MiPfnShareCountIsZero.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiDecrementCombinedPte @ 0x1400AD0F8 (MiDecrementCombinedPte.c)
 *     MiCapturePageFileInfoInline @ 0x1400B221C (MiCapturePageFileInfoInline.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiCaptureDirtyBitToPfn @ 0x140124940 (MiCaptureDirtyBitToPfn.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiIsPfnSystemCharged @ 0x1401630BC (MiIsPfnSystemCharged.c)
 *     MiGetContainingPageTable @ 0x1401A64B8 (MiGetContainingPageTable.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiBadShareCount @ 0x1401A68BC (MiBadShareCount.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiDriverPageIsDangling @ 0x140255CBC (MiDriverPageIsDangling.c)
 */

__int64 __fastcall MiDeleteValidSystemPage(__int64 a1, ULONG_PTR a2, int a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // r11
  ULONG_PTR v6; // rbx
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r13
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r12
  unsigned __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rax
  unsigned __int64 v23; // r12
  __int64 ContainingPageTable; // rax
  __int64 v25; // r10
  __int64 v26; // rbp
  char v27; // r10
  __int64 result; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  char v32; // r8
  char v33; // dl
  __int64 v34; // rax
  unsigned __int16 v35; // cx
  __int64 v36; // rcx
  int v37; // ebx
  __int64 v38; // rcx
  int v39; // [rsp+30h] [rbp-58h] BYREF
  ULONG_PTR v40; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v41; // [rsp+40h] [rbp-48h]
  __int64 v42; // [rsp+48h] [rbp-40h]
  int v44; // [rsp+98h] [rbp+10h] BYREF
  int v45; // [rsp+A0h] [rbp+18h]

  v45 = a3;
  v4 = ZeroPte;
  v5 = 0LL;
  v6 = *(_QWORD *)a2;
  v41 = 0LL;
  v9 = a1;
  v10 = 0xFFFFF6FB7DBED000uLL;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(a1, 0xFFFFF6FB7DBED7F8uLL, a1, 0xFFFFF6FB7DBED000uLL)
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    v11 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 8 * ((a2 >> 3) & 0x1FF));
      v13 = v6 | 0x20;
      if ( (v12 & 0x20) == 0 )
        v13 = v6;
      v6 = v13;
      if ( (v12 & 0x42) != 0 )
        v6 = v13 | 0x42;
    }
  }
  v14 = *(unsigned __int16 *)(v9 + 174);
  v40 = v6;
  v15 = *(_QWORD *)(qword_1403CBD88 + 8 * v14);
  if ( (unsigned __int64)&v40 < v10 || (unsigned __int64)&v40 > 0xFFFFF6FB7DBED7F8uLL )
    goto LABEL_23;
  if ( !(unsigned int)MiPteHasShadow(&v40, v6, v9, v10) || (v6 & 1) == 0 || (v6 & 0x20) != 0 && (v6 & 0x42) != 0 )
    goto LABEL_24;
  v17 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
  if ( !v17 )
  {
LABEL_23:
    v16 = v6;
    goto LABEL_24;
  }
  v18 = *(_QWORD *)(v17 + 8 * (((unsigned __int64)&v40 >> 3) & 0x1FF));
  v16 = v6 | 0x20;
  if ( (v18 & 0x20) == 0 )
    v16 = v6;
  if ( (v18 & 0x42) != 0 )
    v16 |= 0x42uLL;
LABEL_24:
  v19 = 48 * ((v16 >> 12) & 0xFFFFFFFFFLL);
  v20 = *(_QWORD *)(v19 - 0x58000000000LL + 40);
  v21 = v19 - 0x58000000000LL;
  v42 = *(_QWORD *)(qword_1403CBD88 + 8 * ((v20 >> 40) & 0x3FF));
  if ( (v20 & 0x200000000000000LL) != 0 )
  {
    v22 = *(_QWORD *)(v21 + 8);
    v23 = v22 | 0x8000000000000000uLL;
    if ( v22 < 0 )
      v23 = v5;
    ContainingPageTable = MiGetContainingPageTable(a2);
    v26 = v25 + 48 * ContainingPageTable;
    MiLockPageAtDpcInline(v21);
    if ( (v6 & 0x42) != 0 )
      v4 = MiCaptureDirtyBitToPfn(v21);
    if ( (*(_DWORD *)(v21 + 16) & 0x400LL) == 0
      || (v6 & 0x200) != 0
      || (*(_DWORD *)(*(_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(v21 + 16)) + 56LL) & 0x820) == 0x820 )
    {
      ++*(_QWORD *)(a4 + 24);
    }
    v27 = v45;
LABEL_60:
    if ( (v27 & 0x10) != 0 )
      *(_BYTE *)(v21 + 35) &= ~8u;
    *(_QWORD *)a2 = ZeroPte;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(a2, ZeroPte);
    if ( (*(_BYTE *)(v21 + 34) & 7) != 6 )
      MiBadShareCount(v21);
    v36 = *(_QWORD *)(v21 + 24);
    result = v36 ^ (((v36 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v36) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v21 + 24) = result;
    if ( (v36 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    {
      result = MiPfnShareCountIsZero(v21);
      v37 = result;
    }
    else
    {
      v37 = 2;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v26 )
    {
      v39 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v39);
        while ( *(__int64 *)(v26 + 24) < 0 );
      }
      if ( (*(_BYTE *)(v26 + 34) & 7) != 6 )
        MiBadShareCount(v26);
      v38 = *(_QWORD *)(v26 + 24);
      result = v38 ^ (((v38 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v38) & 0x3FFFFFFFFFFFFFFFLL;
      *(_QWORD *)(v26 + 24) = result;
      if ( (v38 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        result = MiPfnShareCountIsZero(v26);
      _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( v4 )
      result = MiReleasePageFileInfo(v42, v4, 1LL);
    if ( v23 )
    {
      result = MiDecrementCombinedPte(a1, v23);
      v37 = result;
    }
    if ( v37 == 3 )
      ++*(_QWORD *)(a4 + 8);
    return result;
  }
  if ( v21 != qword_1403CC400 )
  {
    if ( (*(_QWORD *)(v21 + 8) | 0x8000000000000000uLL) != a2 )
      KeBugCheckEx(0x1Au, 0x404uLL, a2, v6, *(_QWORD *)(v21 + 8));
    v31 = v20 & 0xFFFFFFFFFLL;
    if ( v31 == 0xFFFFFFFFFLL )
      v26 = v5;
    else
      v26 = 48 * v31 - 0x58000000000LL;
    ++*(_QWORD *)(a4 + 24);
    v44 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v44);
        while ( *(__int64 *)(v21 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) );
      v5 = 0LL;
    }
    *(_QWORD *)(v21 + 24) |= 0x4000000000000000uLL;
    if ( ((*(_QWORD *)(v21 + 40) >> 54) & 7) == 2 )
    {
      v32 = *(_BYTE *)(v21 + 34);
      v4 = v5;
      if ( (v32 & 0x10) == 0 )
      {
        v33 = *(_BYTE *)(v21 + 34);
        if ( (*(_DWORD *)(v21 + 16) & 0x400LL) == 0 && (v32 & 8) == 0 )
        {
          v34 = MiCapturePageFileInfoInline(v21 + 16, 1LL);
          v33 = *(_BYTE *)(v21 + 34);
          v4 = v34;
        }
        *(_BYTE *)(v21 + 34) = v33 | 0x10;
      }
      v35 = *(_WORD *)(v21 + 32);
      if ( v35 != 1 && (v35 != 2 || (*(_BYTE *)(v21 + 34) & 8) == 0) && v42 != v15 )
        KeBugCheckEx(0x1Au, 0x406uLL, a2, v19 / 48, v35);
      *(_QWORD *)(v21 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    }
    v27 = v45;
    if ( (v45 & 4) != 0 && (unsigned int)MiIsPfnSystemCharged(v19 - 0x58000000000LL) )
    {
      MiDriverPageIsDangling();
      *(_BYTE *)(v21 + 35) &= ~0x20u;
    }
    v23 = v41;
    goto LABEL_60;
  }
  *(_QWORD *)a2 = ZeroPte;
  result = MiPteInShadowRange(a2);
  if ( (_DWORD)result )
    return MiWritePteShadow(v30, v29);
  return result;
}
