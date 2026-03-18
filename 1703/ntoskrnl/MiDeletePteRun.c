/*
 * XREFs of MiDeletePteRun @ 0x1400C5B70
 * Callers:
 *     MiDeletePagablePteRange @ 0x140062D20 (MiDeletePagablePteRange.c)
 *     MiDeleteVirtualAddresses @ 0x1400D3840 (MiDeleteVirtualAddresses.c)
 * Callees:
 *     MiDecrementCloneBlockReference @ 0x1400036F4 (MiDecrementCloneBlockReference.c)
 *     MiDeleteClusterPage @ 0x14000D020 (MiDeleteClusterPage.c)
 *     MiCapturePageFileInfoInline @ 0x14001DE1C (MiCapturePageFileInfoInline.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiDecrementCombinedPte @ 0x140078BE8 (MiDecrementCombinedPte.c)
 *     MiTryDeleteTransitionPte @ 0x14007A1EC (MiTryDeleteTransitionPte.c)
 *     MiLocateCloneAddress @ 0x14007C278 (MiLocateCloneAddress.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14007C3EC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiPfnShareCountIsZero @ 0x1400C6560 (MiPfnShareCountIsZero.c)
 *     MiDeleteBatch @ 0x1400C8490 (MiDeleteBatch.c)
 *     MiReleasePageFileSpace @ 0x14010AE90 (MiReleasePageFileSpace.c)
 *     MiDereferenceIoPages @ 0x140124B9C (MiDereferenceIoPages.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetContainingPageTable @ 0x14017CDC0 (MiGetContainingPageTable.c)
 *     MiBadShareCount @ 0x14017D1EC (MiBadShareCount.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiDeletePteRun(char *BugCheckParameter2, char *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rcx
  char *v7; // r14
  struct _KEVENT *v8; // r15
  __int64 v9; // rsi
  ULONG_PTR v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // r9
  char *v14; // r10
  __int64 v15; // r11
  unsigned __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // rsi
  unsigned __int64 v19; // r14
  __int64 v20; // r8
  __int64 v21; // r14
  unsigned __int8 v22; // cl
  char v23; // dl
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  int IsZero; // r15d
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  char v34; // bl
  __int64 v35; // rcx
  ULONG_PTR BugCheckParameter3; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v39; // [rsp+40h] [rbp-C0h]
  ULONG_PTR BugCheckParameter2a; // [rsp+48h] [rbp-B8h]
  char *v41; // [rsp+50h] [rbp-B0h]
  struct _KEVENT *v42; // [rsp+58h] [rbp-A8h]
  int v43; // [rsp+60h] [rbp-A0h] BYREF
  int v44; // [rsp+64h] [rbp-9Ch] BYREF
  int v45; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR v46; // [rsp+70h] [rbp-90h]
  __int64 v47; // [rsp+78h] [rbp-88h]
  __int64 v48; // [rsp+80h] [rbp-80h]
  __int16 v49; // [rsp+90h] [rbp-70h] BYREF
  __int64 v50; // [rsp+98h] [rbp-68h]
  _QWORD v51[16]; // [rsp+A0h] [rbp-60h]

  v6 = *(unsigned __int16 *)(a3 + 1452);
  v7 = a2;
  v47 = a4;
  v8 = 0LL;
  v41 = a2;
  v9 = *(_QWORD *)(qword_14036C8F8 + 8 * v6);
  v48 = v9;
  v49 = 0;
  v50 = 0LL;
  v42 = 0LL;
  if ( BugCheckParameter2 <= a2 )
  {
    while ( 1 )
    {
      v10 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
      BugCheckParameter3 = v10;
      if ( !v10 )
        goto LABEL_90;
      if ( (v10 & 0x400) == 0 )
      {
        *(_QWORD *)(a5 + 8) += MiDeleteBatch(&v49);
        v33 = MiTryDeleteTransitionPte((ULONG_PTR)BugCheckParameter2);
        if ( v33 == 1 )
        {
          BugCheckParameter3 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
          v34 = BugCheckParameter3;
          MiReleasePageFileSpace(v9, BugCheckParameter3, 1LL);
          if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v34) )
            _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 920), 0xFFFFFFFFFFFFFFFFuLL);
          *(_QWORD *)BugCheckParameter2 = 0LL;
          if ( (unsigned int)MiPteInShadowRange(BugCheckParameter2) )
            MiWritePteShadow(v35);
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 920), 0xFFFFFFFFFFFFFFFFuLL);
          if ( v33 == 3 )
            ++*(_QWORD *)(a5 + 8);
        }
        goto LABEL_90;
      }
      v39 = 0LL;
      BugCheckParameter2a = 0LL;
      BugCheckParameter3 = v10 & 0xFFFFFFFFFFFFFBFEuLL | 1;
      v11 = 0LL;
      v46 = 0LL;
      v12 = MI_GET_PAGE_FRAME_FROM_PTE(&BugCheckParameter3);
      v16 = v12;
      if ( v12 > qword_14036C290 || MmPhysicalMemoryBlock && (*(_QWORD *)(v15 + 48 * v12) & 0x20000000000000LL) == 0 )
      {
        MiDeleteBatch(&v49);
        MiDereferenceIoPages(1LL, v16, 1LL, v29);
        v21 = 48 * MiGetContainingPageTable(BugCheckParameter2) - 0x58000000000LL;
        IsZero = 4;
        goto LABEL_64;
      }
      if ( (v12 & 0xF) == 0 && (__int64)((v7 - BugCheckParameter2) & 0xFFFFFFFFFFFFFFF8uLL) >= 120 )
      {
        v17 = MiDeleteClusterPage((__int64)BugCheckParameter2, (__int64)&v49, a5);
        v13 = a3;
        v14 = (char *)0xFFFFF68000000000LL;
        if ( v17 == 1 )
        {
          BugCheckParameter2 += 120;
          goto LABEL_90;
        }
      }
      v18 = 48 * v16 - 0x58000000000LL;
      v19 = *(_QWORD *)(v18 + 8) | 0x8000000000000000uLL;
      if ( (*(_QWORD *)(v18 + 40) & 0x200000000000000LL) != 0 )
        break;
      *(_QWORD *)(a5 + 8) += MiDeleteBatch(&v49);
      if ( (char *)v19 != BugCheckParameter2 )
        KeBugCheckEx(0x1Au, 0x403uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(v18 + 8));
      v21 = 48 * (*(_QWORD *)(v18 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 920), 0xFFFFFFFFFFFFFFFFuLL);
      v44 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v44);
        while ( *(__int64 *)(v18 + 24) < 0 );
      }
      *(_QWORD *)(v18 + 24) |= 0x4000000000000000uLL;
LABEL_49:
      v25 = *(unsigned __int8 *)(v18 + 34);
      if ( (v25 & 7) != 6 )
        MiBadShareCount(v18, v25, v20);
      v42 = *(struct _KEVENT **)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v18 + 40) >> 40) & 0x3FFLL));
      if ( (BugCheckParameter3 & 0x42) != 0 && (v25 & 0x10) == 0 )
      {
        if ( (*(_DWORD *)(v18 + 16) & 0x400LL) == 0 && (v25 & 8) == 0 )
          v11 = MiCapturePageFileInfoInline((_QWORD *)(v18 + 16), 1, 0);
        *(_BYTE *)(v18 + 34) |= 0x10u;
      }
      v26 = 0x3FFFFFFFFFFFFFFFLL;
      IsZero = 4;
      v28 = *(_QWORD *)(v18 + 24) ^ (*(_QWORD *)(v18 + 24) ^ (*(_QWORD *)(v18 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      *(_QWORD *)(v18 + 24) = v28;
      if ( (v28 & 0x3FFFFFFFFFFFFFFFLL) == 0 )
      {
        IsZero = MiPfnShareCountIsZero(v18);
        if ( IsZero == 3 && (*(_QWORD *)(v18 + 40) & 0x200000000000000LL) != 0 && !v39 && !BugCheckParameter2a )
          IsZero = 4;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_64:
      v45 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v45);
        while ( *(__int64 *)(v21 + 24) < 0 );
      }
      if ( (*(_BYTE *)(v21 + 34) & 7) != 6 )
        MiBadShareCount(v21, v26, v20);
      v30 = *(_QWORD *)(v21 + 24);
      *(_QWORD *)(v21 + 24) = v30 ^ (((v30 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v30) & 0x3FFFFFFFFFFFFFFFLL;
      if ( (v30 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        MiPfnShareCountIsZero(v21);
      _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v11 )
        MiReleasePageFileInfo(v42, v11, 1);
      if ( v39 )
      {
        v31 = MiDecrementCombinedPte(v39);
LABEL_76:
        IsZero = v31;
        goto LABEL_77;
      }
      if ( BugCheckParameter2a )
      {
        v31 = MiDecrementCloneBlockReference(BugCheckParameter2a, v46, a3);
        goto LABEL_76;
      }
LABEL_77:
      if ( IsZero == 3 )
      {
        ++*(_QWORD *)(a5 + 8);
      }
      else if ( IsZero == 5 )
      {
        ++*(_QWORD *)(a5 + 16);
      }
      *(_QWORD *)BugCheckParameter2 = 0LL;
      if ( !(unsigned int)MiPteInShadowRange(BugCheckParameter2) )
        goto LABEL_41;
      MiWritePteShadow(v32);
      v7 = v41;
LABEL_90:
      BugCheckParameter2 += 8;
      if ( BugCheckParameter2 > v7 )
        return MiDeleteBatch(&v49);
      v8 = v42;
      v9 = v48;
    }
    if ( BugCheckParameter2 <= v14 + 0x3FFFFFFF78LL && BugCheckParameter2 >= v14 )
    {
      if ( *(__int64 *)(v18 + 8) >= 0 )
      {
        v39 = *(_QWORD *)(v18 + 8) | 0x8000000000000000uLL;
LABEL_18:
        *(_QWORD *)(a5 + 8) += MiDeleteBatch(&v49);
        goto LABEL_19;
      }
      if ( *(_QWORD *)(v13 + 912) )
      {
        v46 = *(_QWORD *)(v18 + 8) | 0x8000000000000000uLL;
        BugCheckParameter2a = (ULONG_PTR)MiLocateCloneAddress(v13, v46);
        if ( BugCheckParameter2a )
          goto LABEL_18;
      }
    }
LABEL_19:
    v21 = 48 * MiGetContainingPageTable(BugCheckParameter2) - 0x58000000000LL;
    if ( !(_BYTE)v49 )
      goto LABEL_25;
    if ( v21 != v50
      || *(struct _KEVENT **)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v18 + 40) >> 40) & 0x3FFLL)) != v8
      || _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
    {
      *(_QWORD *)(a5 + 8) += MiDeleteBatch(&v49);
    }
    v22 = v49;
    if ( !(_BYTE)v49 )
    {
LABEL_25:
      v50 = v21;
      v43 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v43);
        while ( *(__int64 *)(v18 + 24) < 0 );
      }
      v22 = v49;
    }
    v23 = *(_BYTE *)(v18 + 34);
    if ( (v23 & 7) == 6
      && (*(_DWORD *)(v18 + 16) & 0x400LL) == 0
      && ((BugCheckParameter3 & 0x42) != 0 || (v23 & 0x10) != 0)
      && !v39
      && !BugCheckParameter2a )
    {
      v51[v22] = BugCheckParameter3;
      if ( !(_BYTE)v49 )
        v42 = *(struct _KEVENT **)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v18 + 40) >> 40) & 0x3FFLL));
      *(_QWORD *)BugCheckParameter2 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(BugCheckParameter2) )
        MiWritePteShadow(v24);
      LOBYTE(v49) = v49 + 1;
      if ( (_BYTE)v49 == 16 )
        *(_QWORD *)(a5 + 8) += MiDeleteBatch(&v49);
LABEL_41:
      v7 = v41;
      goto LABEL_90;
    }
    if ( v22 )
    {
      HIBYTE(v49) = 1;
      *(_QWORD *)(a5 + 8) += MiDeleteBatch(&v49);
      HIBYTE(v49) = 0;
    }
    goto LABEL_49;
  }
  return MiDeleteBatch(&v49);
}
