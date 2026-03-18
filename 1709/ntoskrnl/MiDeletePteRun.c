/*
 * XREFs of MiDeletePteRun @ 0x14004E1C0
 * Callers:
 *     MiDeleteVirtualAddresses @ 0x140054A70 (MiDeleteVirtualAddresses.c)
 *     MiDeletePagablePteRange @ 0x1400B8270 (MiDeletePagablePteRange.c)
 * Callees:
 *     MiPfnShareCountIsZero @ 0x14004F450 (MiPfnShareCountIsZero.c)
 *     MiDeleteBatch @ 0x140051140 (MiDeleteBatch.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiReleasePageFileSpace @ 0x1400CB9A0 (MiReleasePageFileSpace.c)
 *     MiDecrementCloneBlockReference @ 0x1400E4E0C (MiDecrementCloneBlockReference.c)
 *     MiTryDeleteTransitionPte @ 0x1400E4FE4 (MiTryDeleteTransitionPte.c)
 *     MiDecrementCombinedPte @ 0x1400E5700 (MiDecrementCombinedPte.c)
 *     MiLocateCloneAddress @ 0x1400EA120 (MiLocateCloneAddress.c)
 *     MiDeleteClusterPage @ 0x140108CB0 (MiDeleteClusterPage.c)
 *     MiCapturePageFileInfoInline @ 0x140117280 (MiCapturePageFileInfoInline.c)
 *     MiDereferenceIoPages @ 0x140118C1C (MiDereferenceIoPages.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1401277C8 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetContainingPageTable @ 0x14017C61C (MiGetContainingPageTable.c)
 *     MiBadShareCount @ 0x14017CA94 (MiBadShareCount.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiDeletePteRun(
        __int64 *BugCheckParameter2,
        __int64 *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // rcx
  __int64 v7; // r15
  unsigned __int64 v8; // r9
  __int64 v9; // rsi
  __int64 PteShadow; // rax
  __int64 v11; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 *v15; // r10
  __int64 v16; // r11
  unsigned __int64 v17; // rsi
  int v18; // eax
  __int64 v19; // rsi
  unsigned __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r14
  unsigned __int8 v26; // cl
  __int64 v27; // rdx
  char v28; // dl
  int IsZero; // r15d
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // eax
  int v33; // eax
  ULONG_PTR v34; // rbx
  int v35; // eax
  unsigned __int64 v37; // [rsp+30h] [rbp-D0h]
  __int64 *v38; // [rsp+38h] [rbp-C8h]
  __int64 v39; // [rsp+40h] [rbp-C0h]
  ULONG_PTR BugCheckParameter3; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v41; // [rsp+50h] [rbp-B0h]
  ULONG_PTR BugCheckParameter2a; // [rsp+58h] [rbp-A8h]
  __int64 v43; // [rsp+60h] [rbp-A0h]
  int v44; // [rsp+68h] [rbp-98h] BYREF
  int v45; // [rsp+6Ch] [rbp-94h] BYREF
  int v46; // [rsp+70h] [rbp-90h] BYREF
  ULONG_PTR v47; // [rsp+78h] [rbp-88h]
  __int64 v48; // [rsp+80h] [rbp-80h]
  __int16 v49; // [rsp+90h] [rbp-70h] BYREF
  __int64 v50; // [rsp+98h] [rbp-68h]
  _QWORD v51[16]; // [rsp+A0h] [rbp-60h]

  v6 = *(unsigned __int16 *)(a3 + 1452);
  v7 = 0LL;
  v48 = a4;
  v8 = a3;
  v37 = a3;
  v38 = a2;
  v9 = *(_QWORD *)(qword_140388AF0 + 8 * v6);
  v39 = v9;
  v49 = 0;
  v50 = 0LL;
  v43 = 0LL;
  if ( BugCheckParameter2 <= a2 )
  {
    a3 = 0xFFFFF6FB7DBED7F8uLL;
    while ( 1 )
    {
      PteShadow = *BugCheckParameter2;
      if ( (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        PteShadow = MiReadPteShadow(BugCheckParameter2, *BugCheckParameter2);
        a2 = v38;
        a3 = 0xFFFFF6FB7DBED7F8uLL;
      }
      if ( PteShadow )
      {
        if ( (PteShadow & 0x400) != 0 )
        {
          v41 = 0LL;
          BugCheckParameter2a = 0LL;
          BugCheckParameter3 = PteShadow & 0xFFFFFFFFFFFFFBFEuLL | 1;
          v11 = 0LL;
          v47 = 0LL;
          v12 = MI_GET_PAGE_FRAME_FROM_PTE(&BugCheckParameter3);
          v17 = v12;
          if ( v12 > qword_1403885E0 || MmPhysicalMemoryBlock && (*(_QWORD *)(v16 + 48 * v12) & 0x20000000000000LL) == 0 )
          {
            MiDeleteBatch(&v49, v13, v14, v8);
            MiDereferenceIoPages(1LL, v17, 1LL);
            v25 = 48 * MiGetContainingPageTable(BugCheckParameter2) - 0x58000000000LL;
            IsZero = 4;
          }
          else
          {
            if ( (v12 & 0xF) == 0
              && (__int64)(((char *)v38 - (char *)BugCheckParameter2) & 0xFFFFFFFFFFFFFFF8uLL) >= 120 )
            {
              v18 = MiDeleteClusterPage(BugCheckParameter2, &v49, a5);
              v8 = v37;
              v15 = (__int64 *)0xFFFFF68000000000LL;
              if ( v18 == 1 )
              {
                v9 = v39;
                BugCheckParameter2 += 15;
                a3 = 0xFFFFF6FB7DBED7F8uLL;
                goto LABEL_102;
              }
            }
            v19 = 48 * v17 - 0x58000000000LL;
            v20 = *(_QWORD *)(v19 + 8) | 0x8000000000000000uLL;
            if ( (*(_QWORD *)(v19 + 40) & 0x200000000000000LL) != 0 )
            {
              v21 = 0x3FFFFFFF78LL;
              if ( BugCheckParameter2 <= v15 + 0x7FFFFFFEFLL && BugCheckParameter2 >= v15 )
              {
                if ( *(__int64 *)(v19 + 8) >= 0 )
                {
                  v41 = *(_QWORD *)(v19 + 8) | 0x8000000000000000uLL;
                  goto LABEL_22;
                }
                if ( *(_QWORD *)(v8 + 912) )
                {
                  v47 = *(_QWORD *)(v19 + 8) | 0x8000000000000000uLL;
                  BugCheckParameter2a = MiLocateCloneAddress(v8, v47, v14, v8);
                  if ( BugCheckParameter2a )
LABEL_22:
                    *(_QWORD *)(a5 + 8) += MiDeleteBatch(&v49, v21, v14, v8);
                }
              }
              v25 = 48 * MiGetContainingPageTable(BugCheckParameter2) - 0x58000000000LL;
              if ( !(_BYTE)v49 )
                goto LABEL_29;
              if ( v25 != v50
                || *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v19 + 40) >> 40) & 0x3FFLL)) != v7
                || _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
              {
                *(_QWORD *)(a5 + 8) += MiDeleteBatch(&v49, v22, v23, v24);
              }
              v26 = v49;
              if ( !(_BYTE)v49 )
              {
LABEL_29:
                v50 = v25;
                v44 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v44);
                  while ( *(__int64 *)(v19 + 24) < 0 );
                }
                v26 = v49;
              }
              v27 = *(unsigned __int8 *)(v19 + 34);
              if ( (v27 & 7) == 6
                && (*(_DWORD *)(v19 + 16) & 0x400LL) == 0
                && ((BugCheckParameter3 & 0x42) != 0 || (v27 & 0x10) != 0)
                && !v41
                && !BugCheckParameter2a )
              {
                v51[v26] = BugCheckParameter3;
                if ( !(_BYTE)v49 )
                  v43 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v19 + 40) >> 40) & 0x3FFLL));
                *BugCheckParameter2 = 0LL;
                if ( (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
                  && (unsigned __int64)BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL )
                {
                  MiWritePteShadow(BugCheckParameter2, 0LL);
                }
                LOBYTE(v49) = v49 + 1;
                if ( (_BYTE)v49 == 16 )
                  *(_QWORD *)(a5 + 8) += MiDeleteBatch(&v49, v27, v23, v24);
                v9 = v39;
                a3 = 0xFFFFF6FB7DBED7F8uLL;
LABEL_101:
                v8 = v37;
                goto LABEL_102;
              }
              if ( v26 )
              {
                HIBYTE(v49) = 1;
                *(_QWORD *)(a5 + 8) += MiDeleteBatch(&v49, v27, v23, v24);
                HIBYTE(v49) = 0;
              }
            }
            else
            {
              *(_QWORD *)(a5 + 8) += MiDeleteBatch(&v49, 0x200000000000000LL, v14, v8);
              if ( (__int64 *)v20 != BugCheckParameter2 )
                KeBugCheckEx(0x1Au, 0x403uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(v19 + 8));
              v25 = 48 * (*(_QWORD *)(v19 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v37 + 920), 0xFFFFFFFFFFFFFFFFuLL);
              v45 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v45);
                while ( *(__int64 *)(v19 + 24) < 0 );
              }
              *(_QWORD *)(v19 + 24) |= 0x4000000000000000uLL;
            }
            v28 = *(_BYTE *)(v19 + 34);
            if ( (v28 & 7) != 6 )
              MiBadShareCount(v19);
            v43 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v19 + 40) >> 40) & 0x3FFLL));
            if ( (BugCheckParameter3 & 0x42) != 0 && (v28 & 0x10) == 0 )
            {
              if ( (*(_DWORD *)(v19 + 16) & 0x400LL) == 0 && (v28 & 8) == 0 )
                v11 = MiCapturePageFileInfoInline(v19 + 16, 1LL);
              *(_BYTE *)(v19 + 34) |= 0x10u;
            }
            IsZero = 4;
            v30 = *(_QWORD *)(v19 + 24) ^ (*(_QWORD *)(v19 + 24) ^ (*(_QWORD *)(v19 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
            *(_QWORD *)(v19 + 24) = v30;
            if ( (v30 & 0x3FFFFFFFFFFFFFFFLL) == 0 )
            {
              IsZero = MiPfnShareCountIsZero(v19);
              if ( IsZero == 3 && (*(_QWORD *)(v19 + 40) & 0x200000000000000LL) != 0 && !v41 && !BugCheckParameter2a )
                IsZero = 4;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          v46 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v46);
            while ( *(__int64 *)(v25 + 24) < 0 );
          }
          if ( (*(_BYTE *)(v25 + 34) & 7) != 6 )
            MiBadShareCount(v25);
          v31 = *(_QWORD *)(v25 + 24);
          *(_QWORD *)(v25 + 24) = v31 ^ (((v31 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v31) & 0x3FFFFFFFFFFFFFFFLL;
          if ( (v31 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
            MiPfnShareCountIsZero(v25);
          _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v11 )
            MiReleasePageFileInfo(v43, v11, 1LL);
          if ( v41 )
          {
            v32 = MiDecrementCombinedPte(v37 + 1280, v41);
            goto LABEL_81;
          }
          if ( BugCheckParameter2a )
          {
            v32 = MiDecrementCloneBlockReference(BugCheckParameter2a, v47);
LABEL_81:
            IsZero = v32;
          }
          if ( IsZero == 3 )
          {
            ++*(_QWORD *)(a5 + 8);
          }
          else if ( IsZero == 5 )
          {
            ++*(_QWORD *)(a5 + 16);
          }
          *BugCheckParameter2 = 0LL;
          a3 = 0xFFFFF6FB7DBED7F8uLL;
          if ( (unsigned __int64)BugCheckParameter2 < 0xFFFFF6FB7DBED000uLL
            || (unsigned __int64)BugCheckParameter2 > 0xFFFFF6FB7DBED7F8uLL )
          {
            v9 = v39;
          }
          else
          {
            MiWritePteShadow(BugCheckParameter2, 0LL);
            v9 = v39;
            a3 = 0xFFFFF6FB7DBED7F8uLL;
          }
          goto LABEL_101;
        }
        *(_QWORD *)(a5 + 8) += MiDeleteBatch(&v49, a2, 0xFFFFF6FB7DBED7F8uLL, v8);
        v33 = MiTryDeleteTransitionPte((ULONG_PTR)BugCheckParameter2);
        if ( v33 == 1 )
        {
          v34 = *BugCheckParameter2;
          if ( (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
            && (unsigned __int64)BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            v34 = MiReadPteShadow(BugCheckParameter2, *BugCheckParameter2);
          }
          BugCheckParameter3 = v34;
          MiReleasePageFileSpace(v9, v34, 1LL);
          v35 = IS_PTE_NOT_DEMAND_ZERO(v34);
          v8 = v37;
          if ( v35 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v37 + 920), 0xFFFFFFFFFFFFFFFFuLL);
          *BugCheckParameter2 = 0LL;
          a3 = 0xFFFFF6FB7DBED7F8uLL;
          if ( (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
            && (unsigned __int64)BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            MiWritePteShadow(BugCheckParameter2, 0LL);
            a3 = 0xFFFFF6FB7DBED7F8uLL;
            goto LABEL_101;
          }
LABEL_102:
          a2 = v38;
          goto LABEL_103;
        }
        v8 = v37;
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v37 + 920), 0xFFFFFFFFFFFFFFFFuLL);
        a2 = v38;
        a3 = 0xFFFFF6FB7DBED7F8uLL;
        if ( v33 == 3 )
          ++*(_QWORD *)(a5 + 8);
      }
LABEL_103:
      if ( ++BugCheckParameter2 > a2 )
        return MiDeleteBatch(&v49, a2, a3, v8);
      v7 = v43;
    }
  }
  return MiDeleteBatch(&v49, a2, a3, v8);
}
