/*
 * XREFs of MmPurgeSection @ 0x14010B4A0
 * Callers:
 *     CcPurgeCacheSection @ 0x14010BF00 (CcPurgeCacheSection.c)
 * Callees:
 *     MiInsertUnusedSubsection @ 0x140016540 (MiInsertUnusedSubsection.c)
 *     MiWaitForPageWriteCompletion @ 0x1400179B0 (MiWaitForPageWriteCompletion.c)
 *     MiCapturePageFileInfoInline @ 0x14001DE1C (MiCapturePageFileInfoInline.c)
 *     MiInvalidateCollidedIos @ 0x14003855C (MiInvalidateCollidedIos.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveUnusedSubsection @ 0x140097D88 (MiRemoveUnusedSubsection.c)
 *     MiComputeDataFlushRange @ 0x140098AEC (MiComputeDataFlushRange.c)
 *     MiIncrementSubsectionViewCount @ 0x14009A170 (MiIncrementSubsectionViewCount.c)
 *     MiCheckControlArea @ 0x14009B950 (MiCheckControlArea.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MiDecrementSubsections @ 0x1400A8D04 (MiDecrementSubsections.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A8E30 (MiDecrementSubsectionViewCount.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B7600 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiPfnShareCountIsZero @ 0x1400C6560 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCheckProtoPtePageState @ 0x14010B1D8 (MiCheckProtoPtePageState.c)
 *     MiCanFileBeTruncatedInternal @ 0x14010BDA4 (MiCanFileBeTruncatedInternal.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiInvalidPteConforms @ 0x14017CEB0 (MiInvalidPteConforms.c)
 *     MiTransferSoftwarePte @ 0x14017D0B8 (MiTransferSoftwarePte.c)
 *     MiBadShareCount @ 0x14017D1EC (MiBadShareCount.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiChangingSubsectionProtos @ 0x140218224 (MiChangingSubsectionProtos.c)
 *     MiSubsectionProtosCreated @ 0x140219418 (MiSubsectionProtosCreated.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140221484 (MiReturnCrossPartitionSectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall MmPurgeSection(SECTION_OBJECT_POINTERS *a1, __int64 *a2, __int64 a3, char a4, _BYTE *a5)
{
  __int64 *v7; // rbx
  __int64 v8; // r12
  __int64 CanFileBeTruncatedInternal; // rax
  unsigned __int8 v10; // di
  __int64 v11; // r13
  ULONG_PTR v13; // rsi
  unsigned __int8 v14; // bl
  __int64 v15; // rdi
  char v16; // r14
  ULONG_PTR v17; // r15
  int v18; // r12d
  __int64 v19; // r14
  unsigned int v20; // ebx
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // r9
  int v24; // r10d
  __int64 v25; // rsi
  __int64 v26; // rax
  ULONG_PTR BugCheckParameter4; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  struct _KEVENT *v30; // r10
  __int64 v31; // rcx
  char v32; // al
  unsigned __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 PrototypePteDirect; // rax
  __int64 v37; // rdx
  __int64 v38; // r10
  __int64 v39; // r12
  __int64 inserted; // r13
  __int64 v41; // r15
  __int64 v42; // r14
  unsigned int v43; // eax
  signed __int32 v44; // edx
  bool v45; // zf
  signed __int32 v46; // eax
  __int64 v47; // rdx
  unsigned __int64 v48; // r14
  __int64 v49; // rbx
  __int64 v50; // r14
  __int16 v51; // r9
  char v52; // al
  _QWORD *v53; // r15
  _QWORD *v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  int v58; // r10d
  __int64 v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rsi
  __int64 v65; // rax
  __int64 v66; // rsi
  int v67; // [rsp+30h] [rbp-B1h]
  int v68; // [rsp+34h] [rbp-ADh] BYREF
  _QWORD *v69; // [rsp+38h] [rbp-A9h]
  int v70; // [rsp+40h] [rbp-A1h] BYREF
  int v71; // [rsp+44h] [rbp-9Dh]
  unsigned int v72; // [rsp+48h] [rbp-99h]
  int v73; // [rsp+4Ch] [rbp-95h] BYREF
  __int64 v74; // [rsp+50h] [rbp-91h] BYREF
  unsigned __int64 v75; // [rsp+58h] [rbp-89h]
  __int64 v76; // [rsp+60h] [rbp-81h]
  ULONG_PTR v77; // [rsp+68h] [rbp-79h]
  __int64 v78; // [rsp+70h] [rbp-71h]
  struct _KEVENT *v79; // [rsp+78h] [rbp-69h]
  __int64 v80; // [rsp+80h] [rbp-61h] BYREF
  __int64 v81; // [rsp+90h] [rbp-51h]
  __int64 v82; // [rsp+98h] [rbp-49h]
  __int64 v83; // [rsp+A0h] [rbp-41h]
  _BYTE v84[8]; // [rsp+A8h] [rbp-39h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+B0h] [rbp-31h]
  __int64 v86; // [rsp+B8h] [rbp-29h]
  ULONG_PTR v87; // [rsp+C0h] [rbp-21h]
  __int64 v88; // [rsp+C8h] [rbp-19h]
  _BYTE v89[88]; // [rsp+D8h] [rbp-9h] BYREF
  void *retaddr; // [rsp+138h] [rbp+57h]
  char v91; // [rsp+140h] [rbp+5Fh]
  __int64 v92; // [rsp+148h] [rbp+67h] BYREF
  unsigned __int8 v93; // [rsp+158h] [rbp+77h] BYREF

  v7 = a2;
  *a5 = 0;
  if ( a2 )
  {
    v7 = &v80;
    v80 = *a2;
  }
  v8 = 0LL;
  v78 = 0LL;
  v71 = a4 & 2;
  CanFileBeTruncatedInternal = MiCanFileBeTruncatedInternal(a1, (__int64)&v92);
  v10 = v92;
  v11 = CanFileBeTruncatedInternal;
  v83 = CanFileBeTruncatedInternal;
  if ( (_BYTE)v92 == 17 )
    return 0;
  if ( !CanFileBeTruncatedInternal )
    return 1;
  if ( (a4 & 1) == 0 && *(_DWORD *)(CanFileBeTruncatedInternal + 88) || !*(_QWORD *)(CanFileBeTruncatedInternal + 64) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(CanFileBeTruncatedInternal + 72));
    __writecr8(v10);
    return 0;
  }
  *(_DWORD *)(CanFileBeTruncatedInternal + 56) |= 0x8000u;
  if ( !(unsigned int)MiComputeDataFlushRange(CanFileBeTruncatedInternal, v10, v7, a3, 1, (__int64)v84) )
    return 1;
  v13 = v87;
  v14 = 17;
  v15 = v88;
  v16 = 1;
  v17 = BugCheckParameter2;
  LOBYTE(v92) = 17;
  v91 = 1;
LABEL_13:
  v77 = v13;
  v69 = (_QWORD *)v17;
  if ( v14 == 17 )
  {
    v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 72));
    LOBYTE(v92) = v14;
  }
  if ( v15 == v13 )
    v75 = v86 + 8;
  else
    v75 = *(_QWORD *)(v13 + 8) + 8LL * *(unsigned int *)(v13 + 44);
  v67 = *(_DWORD *)(v11 + 56) & 0x40000000;
  if ( *(_QWORD *)(v13 + 8) )
  {
    if ( *(_DWORD *)(v13 + 108) )
    {
      v16 = 0;
      goto LABEL_128;
    }
    MiIncrementSubsectionViewCount((_QWORD *)v13, 0LL);
    if ( (*(_BYTE *)(v13 + 34) & 8) != 0 )
      MiRemoveUnusedSubsection(v13);
    *(_WORD *)(v13 + 32) |= 1u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 72));
    __writecr8(v14);
    v18 = v67;
    v93 = 17;
    v19 = 0LL;
    v76 = 0LL;
    if ( v67 )
      MiChangingSubsectionProtos(v13);
    v20 = 0;
    if ( v17 >= v75 )
    {
      v8 = 0LL;
      goto LABEL_118;
    }
    while ( 1 )
    {
      if ( (v17 & 0xFFF) != 0 )
      {
        if ( v93 != 17 )
          goto LABEL_34;
      }
      else if ( v93 != 17 )
      {
        MiUnlockProtoPoolPage(v19, v93);
      }
      v76 = MiCheckProtoPtePageState(v17, &v93);
      v19 = v76;
      if ( v76 )
        break;
      v17 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_109:
      v69 = (_QWORD *)v17;
LABEL_110:
      v8 = 0LL;
LABEL_111:
      if ( v17 >= v75 )
        goto LABEL_114;
      v19 = v76;
      v18 = v67;
    }
    while ( 1 )
    {
LABEL_34:
      while ( 1 )
      {
        v21 = MI_READ_PTE_LOCK_FREE(v17);
        v74 = v21;
        if ( (v21 & 1) == 0 )
          break;
        v22 = MI_GET_PAGE_FRAME_FROM_PTE(&v74);
LABEL_40:
        if ( MiIsPfnInline(v22) )
        {
          v25 = 48 * v23 - 0x58000000000LL;
          v70 = v24;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v70);
            while ( *(__int64 *)(v25 + 24) < 0 );
          }
          v26 = MI_READ_PTE_LOCK_FREE(v17);
          if ( v26 == v74 )
          {
            if ( !v25 )
            {
LABEL_108:
              v17 += 8LL;
              goto LABEL_109;
            }
            BugCheckParameter4 = MI_READ_PTE_LOCK_FREE(v17);
            if ( (BugCheckParameter4 & 1) != 0 )
              goto LABEL_113;
            v31 = *(_QWORD *)(v25 + 16);
            if ( (v31 & 0x400) == 0 || (v31 & 1) != 0 || (*(_QWORD *)(v25 + 8) | 0x8000000000000000uLL) != v17 )
              KeBugCheckEx(0xDEu, 2uLL, v17, *(_QWORD *)(v25 + 8), BugCheckParameter4);
            v32 = *(_BYTE *)(v25 + 34);
            if ( (v32 & 0x10) != 0 && v71 )
            {
LABEL_113:
              _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v8 = 0LL;
              v91 = 0;
            }
            else
            {
              if ( (v32 & 8) != 0 )
              {
                MiWaitForPageWriteCompletion(v25, v11, v19, v93);
                v93 = 17;
                goto LABEL_110;
              }
              if ( v18 && *(_WORD *)(v25 + 32) )
                *a5 = 1;
              v79 = v30;
              v33 = (unsigned __int64)v30;
              v34 = *(_QWORD *)(v25 + 40);
              v81 = (v25 - v29) / 48;
              v35 = *(_QWORD *)(v25 + 16);
              v82 = v34 & 0xFFFFFFFFFLL;
              PrototypePteDirect = MiGetPrototypePteDirect(
                                     v35,
                                     (unsigned __int128)((v25 - v29) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64,
                                     v28,
                                     v29);
              v39 = PrototypePteDirect;
              inserted = v38;
              v41 = *(_QWORD *)PrototypePteDirect;
              if ( (*(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL) & 0x20) != 0
                || (v42 = PrototypePteDirect, !*(_QWORD *)(v41 + 64)) )
              {
                v42 = v38;
              }
              v43 = v38;
              LOBYTE(v43) = *(_QWORD *)(v41 + 64) != 0LL;
              v72 = v43;
              if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
              {
                LOBYTE(v37) = -1;
                ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v41 + 72, v37);
              }
              else
              {
                v68 = v38;
                if ( _interlockedbittestandset((volatile signed __int32 *)(v41 + 72), 0x1Fu) )
                  v68 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v41 + 72), 0xFFu);
                v44 = *(_DWORD *)(v41 + 72);
                while ( (v44 & 0xBFFFFFFF) != 0x80000000 )
                {
                  if ( (v44 & 0x40000000) == 0 )
                  {
                    v46 = _InterlockedCompareExchange((volatile signed __int32 *)(v41 + 72), v44 | 0x40000000, v44);
                    v45 = v44 == v46;
                    v44 = v46;
                    if ( !v45 )
                      continue;
                  }
                  KeYieldProcessorEx(&v68);
                  v44 = *(_DWORD *)(v41 + 72);
                }
              }
              if ( v42 )
              {
                v45 = (*(_DWORD *)(v42 + 104))-- == 1;
                if ( v45 && !*(_QWORD *)(v42 + 96) && (*(_BYTE *)(v39 + 34) & 1) == 0 && (*(_BYTE *)(v42 + 34) & 8) != 0 )
                {
                  MiRemoveUnusedSubsection(v42);
                  inserted = MiInsertUnusedSubsection((_DWORD *)v42, v47);
                }
              }
              --*(_QWORD *)(v41 + 32);
              if ( inserted )
                v48 = *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(v41 + 60) & 0x3FF));
              else
                v48 = v33;
              if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              {
                ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v41 + 72, retaddr);
                v8 = 0LL;
              }
              else
              {
                v8 = 0LL;
                *(_DWORD *)(v41 + 72) = 0;
              }
              if ( inserted )
                MiReturnCrossPartitionSectionCharges(v48, v72, inserted);
              v49 = MiTransferSoftwarePte(*(_QWORD *)(v25 + 16), 0LL, 0LL);
              v50 = 0LL;
              if ( *(_WORD *)(v25 + 32) == v51 )
              {
                MiUnlinkPageFromList(v25, 0);
                if ( (*(_DWORD *)(v25 + 16) & 0x400LL) == 0 )
                {
                  v33 = MiCapturePageFileInfoInline((_QWORD *)(v25 + 16), 0, 1);
                  v79 = *(struct _KEVENT **)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v25 + 40) >> 40) & 0x3FFLL));
                }
              }
              else
              {
                *(_QWORD *)(v25 + 24) |= 0x4000000000000000uLL;
                v52 = *(_BYTE *)(v25 + 34);
                if ( (v52 & 0x20) != 0 && (v52 & 8) == 0 )
                {
                  v50 = *(_QWORD *)v25 - 32LL;
                  if ( *(_QWORD *)(v50 + 16) == v50 + 16 )
                    v50 = 0LL;
                }
              }
              v53 = v69;
              v54 = v69;
              *v69 = v49;
              if ( (unsigned int)MiPteInShadowRange(v54) )
                MiWritePteShadow(v56);
              if ( v58 == 4 )
                MiInsertPageInFreeOrZeroedList(v81, 2);
              _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v59 = 48 * v82 - 0x58000000000LL;
              v73 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v59 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v73);
                while ( *(__int64 *)(v59 + 24) < 0 );
              }
              if ( (*(_BYTE *)(v59 + 34) & 7) != 6 )
                MiBadShareCount(v59, v55, v57);
              v60 = (*(_QWORD *)(v59 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
              *(_QWORD *)(v59 + 24) ^= (*(_QWORD *)(v59 + 24) ^ v60) & 0x3FFFFFFFFFFFFFFFLL;
              if ( !v60 )
                MiPfnShareCountIsZero(v59, 0LL);
              _InterlockedAnd64((volatile signed __int64 *)(v59 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( v50 )
                MiInvalidateCollidedIos(v50);
              if ( v33 )
                MiReleasePageFileInfo(v79, v33, 1);
              v11 = v83;
              v20 = 1;
              if ( *(_QWORD *)(v83 + 32) )
              {
                v17 = (ULONG_PTR)(v53 + 1);
                v69 = (_QWORD *)v17;
                goto LABEL_111;
              }
            }
LABEL_114:
            if ( v93 != 17 )
              MiUnlockProtoPoolPage(v76, v93);
            v15 = v88;
            v13 = v77;
LABEL_118:
            if ( v67 )
              MiSubsectionProtosCreated(v13, v89, 0LL, v20);
            LOBYTE(v92) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 72));
            v14 = v92;
            MiDecrementSubsectionViewCount((_QWORD *)v13, 0);
            if ( !*(_QWORD *)(v13 + 96) && (*(_BYTE *)(v13 + 34) & 1) == 0 )
            {
              v62 = MiInsertUnusedSubsection((_DWORD *)v13, v61);
              v78 += v62;
            }
            v16 = v91;
LABEL_124:
            if ( v13 == v15 || !v16 )
              goto LABEL_128;
            v13 = *(_QWORD *)(v13 + 16);
            v17 = *(_QWORD *)(v13 + 8);
            goto LABEL_13;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      if ( (v21 & 0x400) != 0 || (v21 & 0x800) == 0 )
        goto LABEL_108;
      if ( (unsigned int)MiInvalidPteConforms(v21) )
      {
        v22 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v74);
        goto LABEL_40;
      }
    }
  }
  if ( v13 != v15 )
    goto LABEL_124;
LABEL_128:
  v63 = MiDecrementSubsections(v87, v87, 0);
  v64 = v63 + v78;
  v65 = MiDecrementSubsections(v15, v15, 0);
  --*(_QWORD *)(v11 + 40);
  *(_DWORD *)(v11 + 56) &= ~4u;
  v66 = v65 + v64;
  if ( v66 )
    v8 = *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(v11 + 60) & 0x3FF));
  MiCheckControlArea(v11, v14);
  if ( v66 )
    MiReturnCrossPartitionSectionCharges(v8, 1LL, v66);
  return v16;
}
