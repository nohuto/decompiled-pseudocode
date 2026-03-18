/*
 * XREFs of MmPurgeSection @ 0x140031240
 * Callers:
 *     CcPurgeCacheSection @ 0x1400F28C0 (CcPurgeCacheSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiRemoveUnusedSubsection @ 0x14001F358 (MiRemoveUnusedSubsection.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiDeleteTransitionPte @ 0x1400317D0 (MiDeleteTransitionPte.c)
 *     MiCheckProtoPtePageState @ 0x140032610 (MiCheckProtoPtePageState.c)
 *     MiCheckControlArea @ 0x14005B160 (MiCheckControlArea.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIncrementSubsectionViewCount @ 0x1400A1430 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsections @ 0x1400A1F40 (MiDecrementSubsections.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A1FF0 (MiDecrementSubsectionViewCount.c)
 *     MiComputeDataFlushRange @ 0x1400A2450 (MiComputeDataFlushRange.c)
 *     MiInsertUnusedSubsection @ 0x1400B779C (MiInsertUnusedSubsection.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiCanFileBeTruncatedInternal @ 0x14011042C (MiCanFileBeTruncatedInternal.c)
 *     MiWaitForPageWriteCompletion @ 0x1401585BC (MiWaitForPageWriteCompletion.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiInvalidPteConforms @ 0x14017C70C (MiInvalidPteConforms.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiChangingSubsectionProtos @ 0x1402224DC (MiChangingSubsectionProtos.c)
 *     MiSubsectionProtosCreated @ 0x140223D6C (MiSubsectionProtosCreated.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14022E13C (MiReturnCrossPartitionSectionCharges.c)
 */

char __fastcall MmPurgeSection(SECTION_OBJECT_POINTERS *a1, __int64 *a2, int a3, char a4, _BYTE *a5)
{
  __int64 *v7; // rbx
  __int64 CanFileBeTruncatedInternal; // rax
  unsigned __int8 v9; // di
  __int64 v10; // r13
  unsigned __int64 v12; // rdi
  unsigned __int8 v13; // bl
  ULONG_PTR v14; // r14
  ULONG_PTR v15; // rsi
  char v16; // r15
  __int64 v17; // rax
  int v18; // r12d
  unsigned __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // r15
  unsigned int v22; // r12d
  unsigned __int64 v23; // r8
  __int64 PteShadow; // rbx
  __int64 v25; // rax
  int v26; // eax
  int IsPfnInline; // eax
  __int64 v28; // rsi
  __int64 v29; // rax
  ULONG_PTR BugCheckParameter4; // rax
  __int64 v31; // rcx
  char v32; // al
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // r12
  int v37; // [rsp+30h] [rbp-61h]
  int v38; // [rsp+34h] [rbp-5Dh]
  unsigned __int64 v39; // [rsp+38h] [rbp-59h]
  __int64 v40; // [rsp+40h] [rbp-51h]
  __int64 v41; // [rsp+48h] [rbp-49h] BYREF
  __int64 v42; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v43[8]; // [rsp+58h] [rbp-39h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-31h]
  __int64 v45; // [rsp+68h] [rbp-29h]
  ULONG_PTR v46; // [rsp+70h] [rbp-21h]
  ULONG_PTR v47; // [rsp+78h] [rbp-19h]
  _BYTE v48[88]; // [rsp+88h] [rbp-9h] BYREF
  char v49; // [rsp+F0h] [rbp+5Fh]
  __int64 v50; // [rsp+F8h] [rbp+67h] BYREF
  unsigned __int8 v51; // [rsp+108h] [rbp+77h]

  LODWORD(v7) = (_DWORD)a2;
  *a5 = 0;
  if ( a2 )
  {
    v7 = &v42;
    v42 = *a2;
  }
  v40 = 0LL;
  v38 = a4 & 2;
  CanFileBeTruncatedInternal = MiCanFileBeTruncatedInternal(a1, (__int64)&v50);
  v9 = v50;
  v10 = CanFileBeTruncatedInternal;
  if ( (_BYTE)v50 == 17 )
    return 0;
  if ( !CanFileBeTruncatedInternal )
    return 1;
  if ( (a4 & 1) == 0 && *(_DWORD *)(CanFileBeTruncatedInternal + 88) || !*(_QWORD *)(CanFileBeTruncatedInternal + 64) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(CanFileBeTruncatedInternal + 72));
    __writecr8(v9);
    return 0;
  }
  *(_DWORD *)(CanFileBeTruncatedInternal + 56) |= 0x8000u;
  if ( !(unsigned int)MiComputeDataFlushRange(CanFileBeTruncatedInternal, v9, (_DWORD)v7, a3, 1, (__int64)v43) )
    return 1;
  v12 = BugCheckParameter2;
  v13 = 17;
  v14 = v46;
  v15 = v47;
  v16 = 1;
  v49 = 1;
  LOBYTE(v50) = 17;
LABEL_13:
  if ( v13 == 17 )
  {
    v13 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v10 + 72));
    LOBYTE(v50) = v13;
  }
  if ( v15 == v14 )
    v17 = v45 + 8;
  else
    v17 = *(_QWORD *)(v14 + 8) + 8LL * *(unsigned int *)(v14 + 44);
  v18 = *(_DWORD *)(v10 + 56) & 0x40000000;
  v39 = v17;
  v37 = v18;
  if ( *(_QWORD *)(v14 + 8) )
  {
    if ( *(_DWORD *)(v14 + 108) )
    {
      v16 = 0;
      goto LABEL_82;
    }
    MiIncrementSubsectionViewCount(v14);
    if ( (*(_BYTE *)(v14 + 34) & 8) != 0 )
      MiRemoveUnusedSubsection(v14);
    *(_WORD *)(v14 + 32) |= 1u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v10 + 72));
    __writecr8(v13);
    v51 = 17;
    v21 = 0LL;
    if ( v18 )
      MiChangingSubsectionProtos(v14);
    v22 = 0;
    if ( v12 >= v39 )
      goto LABEL_72;
    while ( 1 )
    {
      if ( (v12 & 0xFFF) != 0 )
      {
        if ( v51 != 17 )
          break;
      }
      else if ( v51 != 17 )
      {
        MiUnlockProtoPoolPage(v21, v51);
      }
      v21 = MiCheckProtoPtePageState(v12);
      if ( v21 )
        break;
      v12 = (v12 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_66:
      if ( v12 >= v39 )
        goto LABEL_69;
    }
    v23 = 0xFFFFF6FB7DBED000uLL;
    while ( 1 )
    {
      while ( 1 )
      {
        PteShadow = *(_QWORD *)v12;
        if ( v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow(v12, *(_QWORD *)v12);
        v41 = PteShadow;
        if ( (PteShadow & 1) == 0 )
          break;
        v25 = MI_GET_PAGE_FRAME_FROM_PTE(&v41);
LABEL_43:
        IsPfnInline = MiIsPfnInline(v25);
        v23 = 0xFFFFF6FB7DBED000uLL;
        if ( IsPfnInline )
        {
          v28 = 48 * v20 - 0x58000000000LL;
          MiLockPageAtDpcInline(v28);
          v29 = *(_QWORD *)v12;
          v23 = 0xFFFFF6FB7DBED000uLL;
          v19 = 0xFFFFF6FB7DBED7F8uLL;
          if ( v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            v29 = MiReadPteShadow(v12, *(_QWORD *)v12);
            v19 = 0xFFFFF6FB7DBED7F8uLL;
            v23 = 0xFFFFF6FB7DBED000uLL;
          }
          if ( v29 == PteShadow )
          {
            if ( !v28 )
            {
LABEL_65:
              v12 += 8LL;
              goto LABEL_66;
            }
            BugCheckParameter4 = *(_QWORD *)v12;
            if ( v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= 0xFFFFF6FB7DBED7F8uLL )
              BugCheckParameter4 = MiReadPteShadow(v12, *(_QWORD *)v12);
            if ( (BugCheckParameter4 & 1) != 0 )
              goto LABEL_68;
            v31 = *(_QWORD *)(v28 + 16);
            if ( (v31 & 0x400) == 0 || (v31 & 1) != 0 || (*(_QWORD *)(v28 + 8) | 0x8000000000000000uLL) != v12 )
              KeBugCheckEx(0xDEu, 2uLL, v12, *(_QWORD *)(v28 + 8), BugCheckParameter4);
            v32 = *(_BYTE *)(v28 + 34);
            if ( (v32 & 0x10) != 0 && v38 )
            {
LABEL_68:
              _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v49 = 0;
            }
            else
            {
              if ( (v32 & 8) != 0 )
              {
                MiWaitForPageWriteCompletion(v28, v10, v21, v51);
                v51 = 17;
                goto LABEL_66;
              }
              if ( v37 && *(_WORD *)(v28 + 32) )
                *a5 = 1;
              MiDeleteTransitionPte(v12);
              v22 = 1;
              if ( *(_QWORD *)(v10 + 32) )
                goto LABEL_65;
            }
LABEL_69:
            if ( v51 != 17 )
              MiUnlockProtoPoolPage(v21, v51);
            v15 = v47;
LABEL_72:
            if ( v37 )
              MiSubsectionProtosCreated(v14, v48, 0LL, v22);
            LOBYTE(v50) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v10 + 72));
            v13 = v50;
            MiDecrementSubsectionViewCount(v14);
            if ( !*(_QWORD *)(v14 + 96) && (*(_BYTE *)(v14 + 34) & 1) == 0 )
              v40 += MiInsertUnusedSubsection(v14);
            v16 = v49;
LABEL_78:
            if ( v14 == v15 || !v16 )
              goto LABEL_82;
            v14 = *(_QWORD *)(v14 + 16);
            v12 = *(_QWORD *)(v14 + 8);
            goto LABEL_13;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      if ( (PteShadow & 0x400) != 0 || (PteShadow & 0x800) == 0 )
        goto LABEL_65;
      v26 = MiInvalidPteConforms(PteShadow, v19, v23, v20);
      v23 = 0xFFFFF6FB7DBED000uLL;
      if ( v26 )
      {
        v25 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v41);
        goto LABEL_43;
      }
    }
  }
  if ( v14 != v15 )
    goto LABEL_78;
LABEL_82:
  v33 = MiDecrementSubsections(v46) + v40;
  v34 = MiDecrementSubsections(v15);
  --*(_QWORD *)(v10 + 40);
  *(_DWORD *)(v10 + 56) &= ~4u;
  v35 = v34 + v33;
  if ( v35 )
    v36 = *(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(v10 + 60) & 0x3FF));
  else
    v36 = 0LL;
  MiCheckControlArea(v10, v13);
  if ( v35 )
    MiReturnCrossPartitionSectionCharges(v36, 1LL, v35);
  return v16;
}
