/*
 * XREFs of MmPurgeSection @ 0x1400542A0
 * Callers:
 *     CcPurgeCacheSection @ 0x140050C80 (CcPurgeCacheSection.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPfnShareCountIsZero @ 0x14002B7A0 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x140031B60 (MiCheckProtoPtePageState.c)
 *     MiCanFileBeTruncatedInternal @ 0x140050EFC (MiCanFileBeTruncatedInternal.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiWaitForPageWriteCompletion @ 0x140084528 (MiWaitForPageWriteCompletion.c)
 *     MiDereferenceControlAreaPfnList @ 0x1400847B0 (MiDereferenceControlAreaPfnList.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiInvalidateCollidedIos @ 0x1400ACB34 (MiInvalidateCollidedIos.c)
 *     MiCapturePageFileInfoInline @ 0x1400B221C (MiCapturePageFileInfoInline.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     MiRemoveUnusedSubsection @ 0x1400E3FD8 (MiRemoveUnusedSubsection.c)
 *     MiInsertUnusedSubsection @ 0x1400E41E4 (MiInsertUnusedSubsection.c)
 *     MiComputeDataFlushRange @ 0x1400E4D20 (MiComputeDataFlushRange.c)
 *     MiCheckControlArea @ 0x1400E5110 (MiCheckControlArea.c)
 *     MiDecrementSubsections @ 0x1400E5350 (MiDecrementSubsections.c)
 *     MiDecrementSubsectionViewCount @ 0x1400E5400 (MiDecrementSubsectionViewCount.c)
 *     MiIncrementSubsectionViewCount @ 0x1400E5E20 (MiIncrementSubsectionViewCount.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiInvalidPteConforms @ 0x1401A6560 (MiInvalidPteConforms.c)
 *     MiTransferSoftwarePte @ 0x1401A6760 (MiTransferSoftwarePte.c)
 *     MiBadShareCount @ 0x1401A68BC (MiBadShareCount.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiChangingSubsectionProtos @ 0x14025D140 (MiChangingSubsectionProtos.c)
 *     MiSubsectionProtosCreated @ 0x14025EA5C (MiSubsectionProtosCreated.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402682E4 (MiReturnCrossPartitionSectionCharges.c)
 */

char __fastcall MmPurgeSection(SECTION_OBJECT_POINTERS *a1, unsigned __int64 *a2, int a3, char a4, _BYTE *a5)
{
  unsigned __int64 *v7; // rbx
  __int64 v8; // r13
  char *v9; // rax
  unsigned __int8 v10; // di
  char *v11; // r15
  ULONG_PTR v13; // r14
  unsigned __int8 v14; // bl
  ULONG_PTR v15; // rsi
  ULONG_PTR v16; // rdi
  char v17; // r12
  __int64 v18; // rax
  unsigned __int64 v19; // r8
  __int64 v20; // r9
  ULONG_PTR v21; // r12
  unsigned int v22; // r15d
  char *v23; // rdi
  __int64 v24; // rax
  unsigned __int64 v25; // r9
  __int64 v26; // r9
  __int64 v27; // rbx
  ULONG_PTR v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rcx
  ULONG_PTR BugCheckParameter4; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  char v34; // al
  __int64 v35; // r12
  __int64 v36; // rcx
  __int64 v37; // rdi
  ULONG_PTR v38; // r15
  __int64 v39; // r12
  _QWORD *PrototypePteDirect; // rax
  __int64 v41; // r8
  __int64 v42; // rbx
  __int64 v43; // r8
  int v44; // r10d
  char v45; // al
  __int64 v46; // rbx
  __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 inserted; // rax
  __int64 v52; // rax
  __int64 v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rsi
  _QWORD *BugCheckParameter2; // [rsp+30h] [rbp-A1h]
  int v57; // [rsp+38h] [rbp-99h]
  char *v58; // [rsp+40h] [rbp-91h]
  int v59; // [rsp+48h] [rbp-89h] BYREF
  int v60; // [rsp+4Ch] [rbp-85h]
  int v61; // [rsp+50h] [rbp-81h] BYREF
  __int64 v62; // [rsp+58h] [rbp-79h] BYREF
  ULONG_PTR v63; // [rsp+60h] [rbp-71h]
  ULONG_PTR v64; // [rsp+68h] [rbp-69h]
  ULONG_PTR v65; // [rsp+70h] [rbp-61h]
  __int64 v66; // [rsp+78h] [rbp-59h]
  __int64 v67; // [rsp+80h] [rbp-51h]
  unsigned __int64 v68; // [rsp+88h] [rbp-49h] BYREF
  PEX_SPIN_LOCK SpinLock; // [rsp+90h] [rbp-41h]
  char v70[8]; // [rsp+98h] [rbp-39h] BYREF
  ULONG_PTR v71; // [rsp+A0h] [rbp-31h]
  __int64 v72; // [rsp+A8h] [rbp-29h]
  ULONG_PTR v73; // [rsp+B0h] [rbp-21h]
  ULONG_PTR v74; // [rsp+B8h] [rbp-19h]
  char v75[88]; // [rsp+C8h] [rbp-9h] BYREF
  char v76; // [rsp+130h] [rbp+5Fh]
  __int64 v77; // [rsp+138h] [rbp+67h] BYREF
  unsigned __int8 v78; // [rsp+148h] [rbp+77h] BYREF

  v7 = a2;
  *a5 = 0;
  if ( a2 )
  {
    v7 = &v68;
    v68 = *a2;
  }
  v8 = 0LL;
  v66 = 0LL;
  v60 = a4 & 2;
  v9 = MiCanFileBeTruncatedInternal(a1, v7, 1, v60 != 0, (KIRQL *)&v77);
  v10 = v77;
  v11 = v9;
  v58 = v9;
  if ( (_BYTE)v77 == 17 )
    return 0;
  if ( !v9 )
    return 1;
  if ( (a4 & 1) == 0 && *((_DWORD *)v9 + 22) || !*((_QWORD *)v9 + 8) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v9 + 18);
    __writecr8(v10);
    return 0;
  }
  *((_DWORD *)v9 + 14) |= 0x8000u;
  if ( !(unsigned int)MiComputeDataFlushRange((_DWORD)v9, v10, (_DWORD)v7, a3, 1, (__int64)v70) )
    return 1;
  v13 = v71;
  v14 = 17;
  v15 = v73;
  v16 = v74;
  v17 = 1;
  v76 = 1;
  LOBYTE(v77) = 17;
  while ( 1 )
  {
    v65 = v15;
    BugCheckParameter2 = (_QWORD *)v13;
    if ( v14 == 17 )
    {
      v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v11 + 18);
      LOBYTE(v77) = v14;
    }
    if ( v16 == v15 )
    {
      v63 = v72 + 8;
      v18 = *(_QWORD *)(v15 + 8);
    }
    else
    {
      v18 = *(_QWORD *)(v15 + 8);
      v63 = v18 + 8LL * (*(_DWORD *)(v15 + 44) - (*(_DWORD *)(v15 + 52) & 0x3FFFFFFFu));
    }
    v57 = *((_DWORD *)v11 + 14) & 0x40000000;
    if ( v18 )
      break;
    if ( v15 == v16 )
      goto LABEL_113;
LABEL_109:
    if ( v15 == v16 || !v17 )
      goto LABEL_113;
    v15 = *(_QWORD *)(v15 + 16);
    v13 = *(_QWORD *)(v15 + 8);
  }
  if ( !*(_DWORD *)(v15 + 108) )
  {
    MiIncrementSubsectionViewCount(v15);
    if ( (*(_BYTE *)(v15 + 34) & 8) != 0 )
      MiRemoveUnusedSubsection(v15);
    *(_WORD *)(v15 + 32) |= 1u;
    SpinLock = (PEX_SPIN_LOCK)(v11 + 72);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v11 + 18);
    __writecr8(v14);
    v21 = 0LL;
    v78 = 17;
    v64 = 0LL;
    if ( v57 )
      MiChangingSubsectionProtos(v15);
    v22 = 0;
    if ( v13 >= v63 )
      goto LABEL_103;
    v23 = v58;
    while ( 1 )
    {
      if ( (v13 & 0xFFF) != 0 )
      {
        if ( v78 != 17 )
          goto LABEL_30;
      }
      else if ( v78 != 17 )
      {
        MiUnlockProtoPoolPage(v21, v78, v19, v20);
      }
      v64 = MiCheckProtoPtePageState(v13, &v78);
      v21 = v64;
      if ( v64 )
        break;
      v13 = (v13 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_96:
      BugCheckParameter2 = (_QWORD *)v13;
LABEL_97:
      if ( v13 >= v63 )
      {
LABEL_100:
        if ( v78 != 17 )
          MiUnlockProtoPoolPage(v64, v78, v19, v20);
        v15 = v65;
        v8 = 0LL;
        v16 = v74;
LABEL_103:
        if ( v57 )
          MiSubsectionProtosCreated(v15, v75, 0LL, v22);
        LOBYTE(v77) = ExAcquireSpinLockExclusive(SpinLock);
        v14 = v77;
        MiDecrementSubsectionViewCount(v15);
        if ( !*(_QWORD *)(v15 + 96) && (*(_BYTE *)(v15 + 34) & 1) == 0 )
        {
          inserted = MiInsertUnusedSubsection(v15, v49, v50);
          v66 += inserted;
        }
        v11 = v58;
        v17 = v76;
        goto LABEL_109;
      }
      v21 = v64;
    }
    while ( 1 )
    {
LABEL_30:
      while ( 1 )
      {
        v24 = MI_READ_PTE_LOCK_FREE(v13);
        v62 = v24;
        if ( (v24 & 1) == 0 )
          break;
        v25 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v62) >> 12) & 0xFFFFFFFFFLL;
LABEL_40:
        if ( (unsigned int)MiIsPfnInline(v25) )
        {
          v27 = 48 * v26;
          v28 = 48 * v26 - 0x58000000000LL;
          v59 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v59);
            while ( *(__int64 *)(v28 + 24) < 0 );
          }
          v29 = MI_READ_PTE_LOCK_FREE(v13);
          if ( v29 == v62 )
          {
            if ( !v28 )
            {
LABEL_95:
              v13 += 8LL;
              goto LABEL_96;
            }
            BugCheckParameter4 = *(_QWORD *)v13;
            if ( v13 >= 0xFFFFF6FB7DBED000uLL
              && v13 <= 0xFFFFF6FB7DBED7F8uLL
              && (unsigned int)MiPteHasShadow(v30, BugCheckParameter4, v19, v20) )
            {
              if ( (BugCheckParameter4 & 1) != 0 )
              {
                if ( (BugCheckParameter4 & 0x20) == 0 || (BugCheckParameter4 & 0x42) == 0 )
                {
                  v19 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
                  if ( v19 )
                  {
                    v32 = *(_QWORD *)(v19 + 8 * ((v13 >> 3) & 0x1FF));
                    v19 = BugCheckParameter4 | 0x20;
                    if ( (v32 & 0x20) == 0 )
                      v19 = BugCheckParameter4;
                    BugCheckParameter4 = v19;
                    if ( (v32 & 0x42) != 0 )
                      BugCheckParameter4 = v19 | 0x42;
                  }
                }
                goto LABEL_58;
              }
LABEL_59:
              v33 = *(_QWORD *)(v28 + 16);
              v19 = (unsigned __int64)BugCheckParameter2;
              if ( (v33 & 0x400) == 0
                || (v33 & 1) != 0
                || (_QWORD *)(*(_QWORD *)(v28 + 8) | 0x8000000000000000uLL) != BugCheckParameter2 )
              {
                KeBugCheckEx(0xDEu, 2uLL, (ULONG_PTR)BugCheckParameter2, *(_QWORD *)(v28 + 8), BugCheckParameter4);
              }
              v34 = *(_BYTE *)(v28 + 34);
              if ( (v34 & 0x10) == 0 || !v60 )
              {
                if ( (v34 & 8) != 0 )
                {
                  MiWaitForPageWriteCompletion(v28, v23, v21, v78);
                  v13 = (ULONG_PTR)BugCheckParameter2;
                  v78 = 17;
                  goto LABEL_97;
                }
                if ( v57 && *(_WORD *)(v28 + 32) )
                  *a5 = 1;
                v35 = *(_QWORD *)(v28 + 40);
                v36 = *(_QWORD *)(v28 + 16);
                v37 = 0LL;
                v67 = 0LL;
                v38 = v27 / 48;
                v39 = v35 & 0xFFFFFFFFFLL;
                PrototypePteDirect = (_QWORD *)MiGetPrototypePteDirect(v36);
                MiDereferenceControlAreaPfnList(*PrototypePteDirect, PrototypePteDirect, v41, 2LL);
                v42 = MiTransferSoftwarePte(*(_QWORD *)(v28 + 16), 0LL, 0LL, 0LL);
                if ( *(_WORD *)(v28 + 32) == (_WORD)v43 )
                {
                  MiUnlinkPageFromList(v28);
                  if ( (*(_DWORD *)(v28 + 16) & 0x400LL) == 0 )
                  {
                    v37 = MiCapturePageFileInfoInline(v28 + 16, 0LL);
                    v67 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v28 + 40) >> 40) & 0x3FFLL));
                  }
                  v44 = 4;
                }
                else
                {
                  *(_QWORD *)(v28 + 24) |= 0x4000000000000000uLL;
                  v45 = *(_BYTE *)(v28 + 34);
                  if ( (v45 & 0x20) != 0 && (v45 & 8) == 0 )
                  {
                    v8 = *(_QWORD *)v28 - 32LL;
                    if ( *(_QWORD *)(v8 + 16) == v8 + 16 )
                      v8 = v43;
                  }
                  v44 = 3;
                }
                *BugCheckParameter2 = v42;
                if ( (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
                  && (unsigned __int64)BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL )
                {
                  MiWritePteShadow(BugCheckParameter2, v42);
                }
                if ( v44 == 4 )
                  MiInsertPageInFreeOrZeroedList(v38, 2);
                _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v46 = 48 * v39 - 0x58000000000LL;
                v61 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v46 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v61);
                  while ( *(__int64 *)(v46 + 24) < 0 );
                }
                if ( (*(_BYTE *)(v46 + 34) & 7) != 6 )
                  MiBadShareCount(48 * v39 - 0x58000000000LL);
                v47 = *(_QWORD *)(v46 + 24);
                v19 = 0x3FFFFFFFFFFFFFFFLL;
                v48 = (v47 & 0x3FFFFFFFFFFFFFFFLL) - 1;
                *(_QWORD *)(v46 + 24) = v47 ^ (v48 ^ v47) & 0x3FFFFFFFFFFFFFFFLL;
                if ( (v47 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
                  MiPfnShareCountIsZero(48 * v39 - 0x58000000000LL, v48);
                _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( v8 )
                  MiInvalidateCollidedIos(v8);
                if ( v37 )
                  MiReleasePageFileInfo(v67, v37, 1LL);
                v22 = 1;
                if ( *((_QWORD *)v58 + 4) )
                {
                  v13 = (ULONG_PTR)(BugCheckParameter2 + 1);
                  v23 = v58;
                  v8 = 0LL;
                  goto LABEL_96;
                }
                goto LABEL_100;
              }
            }
            else
            {
LABEL_58:
              if ( (BugCheckParameter4 & 1) == 0 )
                goto LABEL_59;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v76 = 0;
            goto LABEL_100;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      if ( (v24 & 0x400) != 0 || (v24 & 0x800) == 0 )
        goto LABEL_95;
      if ( (unsigned int)MiInvalidPteConforms(v24) )
      {
        v25 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v62);
        goto LABEL_40;
      }
    }
  }
  v17 = 0;
LABEL_113:
  v52 = MiDecrementSubsections(v73);
  v53 = v52 + v66;
  v54 = MiDecrementSubsections(v16);
  --*((_QWORD *)v11 + 5);
  *((_DWORD *)v11 + 14) &= ~4u;
  v55 = v54 + v53;
  if ( v55 )
    v8 = *(_QWORD *)(qword_1403CBD88 + 8LL * (*((_WORD *)v11 + 30) & 0x3FF));
  MiCheckControlArea(v11, v14);
  if ( v55 )
    MiReturnCrossPartitionSectionCharges(v8, 1LL, v55);
  return v17;
}
