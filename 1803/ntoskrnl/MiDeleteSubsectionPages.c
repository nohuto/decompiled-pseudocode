/*
 * XREFs of MiDeleteSubsectionPages @ 0x140016E90
 * Callers:
 *     MiDeleteSegmentPages @ 0x14004B184 (MiDeleteSegmentPages.c)
 *     MiExtendSection @ 0x1404BE298 (MiExtendSection.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiPfnShareCountIsZero @ 0x14002B7A0 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1400320B0 (MiLockProtoPoolPage.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14004B350 (MiUpdateSystemProtoPtesTree.c)
 *     MiDeleteClusterSection @ 0x1400512C0 (MiDeleteClusterSection.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiDereferenceControlAreaPfnList @ 0x1400847B0 (MiDereferenceControlAreaPfnList.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiInvalidateCollidedIos @ 0x1400ACB34 (MiInvalidateCollidedIos.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     MiDecrementSubsectionViewCount @ 0x1400E5400 (MiDecrementSubsectionViewCount.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiFreeLargePageMemory @ 0x1401363B0 (MiFreeLargePageMemory.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiInvalidPteConforms @ 0x1401A6560 (MiInvalidPteConforms.c)
 *     MiTransferSoftwarePte @ 0x1401A6760 (MiTransferSoftwarePte.c)
 *     MiBadShareCount @ 0x1401A68BC (MiBadShareCount.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402682E4 (MiReturnCrossPartitionSectionCharges.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeleteSubsectionPages(__int64 **BugCheckParameter2, _QWORD *a2)
{
  __int64 *v2; // r12
  ULONG_PTR v3; // r14
  _QWORD *v4; // rbp
  __int64 v5; // r13
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // esi
  char *v11; // r15
  ULONG_PTR v12; // rbx
  char *v13; // r13
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  ULONG_PTR v18; // r10
  unsigned __int64 v19; // rax
  int v20; // r10d
  __int64 v21; // r11
  unsigned __int64 v22; // r9
  ULONG_PTR v23; // r14
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // r8
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  ULONG_PTR v33; // r9
  unsigned __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r12
  int v38; // eax
  __int64 v39; // rdi
  _QWORD *PrototypePteDirect; // rax
  __int64 v41; // r8
  __int64 v42; // rbx
  __int64 v43; // r13
  __int64 v44; // rdx
  int v45; // r15d
  char v46; // al
  __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rsi
  KIRQL v51; // al
  KIRQL v52; // bp
  unsigned __int64 v53; // rdi
  __int64 v55; // [rsp+30h] [rbp-C8h]
  _QWORD *v56; // [rsp+38h] [rbp-C0h]
  __int64 v57; // [rsp+40h] [rbp-B8h]
  int v58; // [rsp+48h] [rbp-B0h] BYREF
  int v59; // [rsp+4Ch] [rbp-ACh] BYREF
  int v60; // [rsp+50h] [rbp-A8h]
  BOOL v61; // [rsp+54h] [rbp-A4h]
  __int64 v62; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v63; // [rsp+60h] [rbp-98h] BYREF
  char *v64; // [rsp+68h] [rbp-90h]
  __int64 v65; // [rsp+70h] [rbp-88h] BYREF
  __int64 v66; // [rsp+78h] [rbp-80h]
  __int64 v67; // [rsp+80h] [rbp-78h]
  __int64 *v68; // [rsp+88h] [rbp-70h]
  char *v69; // [rsp+90h] [rbp-68h]
  __int64 v70; // [rsp+98h] [rbp-60h]
  unsigned __int64 v71; // [rsp+A0h] [rbp-58h]
  _QWORD *v73; // [rsp+108h] [rbp+10h]
  unsigned __int8 v74; // [rsp+110h] [rbp+18h] BYREF
  int v75; // [rsp+118h] [rbp+20h]

  v73 = a2;
  v2 = *BugCheckParameter2;
  v3 = (ULONG_PTR)BugCheckParameter2;
  v4 = a2;
  v68 = v2;
  LOBYTE(a2) = 17;
  v55 = 0LL;
  v5 = 0LL;
  v6 = v2[8];
  v70 = *(_QWORD *)(qword_1403CBD88 + 8LL * (*((_WORD *)v2 + 30) & 0x3FF));
  v61 = v6 != 0;
  v7 = -1LL;
  v8 = *v2;
  v71 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v9 = 0LL;
  v57 = 0LL;
  v10 = *(_DWORD *)(v8 + 12);
  v75 = v10;
  v11 = *(char **)(v3 + 8);
  LODWORD(v8) = *((_DWORD *)v2 + 14);
  v74 = 17;
  v60 = v8;
  v64 = v11;
  if ( !v11 )
    goto LABEL_112;
  v12 = (ULONG_PTR)v11;
  v56 = v11;
  v13 = &v11[8 * *(unsigned int *)(v3 + 44)];
  v69 = v13;
  if ( v11 >= v13 )
  {
    v5 = 0LL;
    goto LABEL_112;
  }
  while ( 2 )
  {
    if ( (v12 & 0xFFF) != 0 )
    {
      if ( (_BYTE)a2 != 17 )
        goto LABEL_12;
    }
    else if ( (_BYTE)a2 != 17 )
    {
      MiUnlockProtoPoolPage(v9, a2);
      if ( (v10 & 0x1000) != 0 )
      {
        *v4 += 512 - MiFreeLargePageMemory(v7 & 0xFFFFFFFFFFFFFE00uLL, 1LL);
        v7 = -1LL;
      }
    }
    v57 = MiLockProtoPoolPage(v12, &v74);
    if ( !v57 )
    {
      do
      {
        MmAccessFault(2uLL, v12);
        v57 = MiLockProtoPoolPage(v12, &v74);
      }
      while ( !v57 );
      LOWORD(v10) = v75;
    }
    while ( 1 )
    {
LABEL_12:
      v14 = MI_READ_PTE_LOCK_FREE(v12);
      v62 = v14;
      if ( (v14 & 1) != 0 )
      {
        v19 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v62);
        v22 = v21 & (v19 >> 12);
        goto LABEL_18;
      }
      if ( (v14 & 0x400) != 0 || (v14 & 0x800) == 0 )
        break;
      if ( (unsigned int)MiInvalidPteConforms(v14) )
      {
        v22 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v62);
LABEL_18:
        if ( v22 <= qword_1403CB780
          && (!MmPhysicalMemoryBlock || (*(_QWORD *)(48 * v22 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0) )
        {
          v23 = 48 * v22 - 0x58000000000LL;
          v58 = v20;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v58);
            while ( *(__int64 *)(v23 + 24) < 0 );
          }
          v24 = MI_READ_PTE_LOCK_FREE(v12);
          if ( v24 == v62 )
            goto LABEL_27;
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
    }
    v23 = v18;
LABEL_27:
    v25 = *(_QWORD *)v12;
    if ( v12 >= 0xFFFFF6FB7DBED000uLL
      && v12 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v15, v25, v16, v17)
      && (v25 & 1) != 0
      && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
    {
      v26 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v26 )
      {
        v27 = *(_QWORD *)(v26 + 8 * ((v12 >> 3) & 0x1FF));
        v28 = v25 | 0x20;
        if ( (v27 & 0x20) == 0 )
          v28 = v25;
        v25 = v28;
        if ( (v27 & 0x42) != 0 )
          v25 = v28 | 0x42;
      }
    }
    v65 = v25;
    if ( (v25 & 1) != 0 )
    {
      v29 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v65);
      *(_QWORD *)v12 = *(_QWORD *)(v23 + 16);
      v7 = (v29 >> 12) & 0xFFFFFFFFFLL;
      if ( MiPteInShadowRange(v12) )
        MiWritePteShadow(v31, v30);
      *(_QWORD *)(v23 + 24) |= 0x4000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_104;
    }
    if ( (v25 & 0x400) != 0 )
      goto LABEL_104;
    if ( (v25 & 0x800) != 0 )
    {
      v7 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v65);
      v67 = v7;
      if ( (*(_DWORD *)(v23 + 16) & 0x400LL) != 0 && (v2[7] & 0x20) == 0 && (*(_BYTE *)(v23 + 34) & 0x18) != 0 )
        ++v55;
      if ( !v71
        && (v7 & 0xF) == 0
        && (__int64)((unsigned __int64)&v13[-v12] & 0xFFFFFFFFFFFFFFF8uLL) >= 128
        && ((4096 - (v12 & 0xFFF)) & 0xFFFFFFF8) >= 0x80
        && (unsigned int)MiDeleteClusterSection(v23, v12) == 1 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v12 += 128LL;
        goto LABEL_105;
      }
      v33 = *(_QWORD *)v12;
      if ( v12 >= 0xFFFFF6FB7DBED000uLL
        && v12 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(
                           v23 + 0x58000000000LL,
                           (unsigned __int128)((__int64)(v23 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64,
                           v32,
                           v33)
        && (v33 & 1) != 0
        && ((v33 & 0x20) == 0 || (v33 & 0x42) == 0) )
      {
        v34 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v34 )
        {
          v35 = *(_QWORD *)(v34 + 8 * ((v12 >> 3) & 0x1FF));
          v36 = v33 | 0x20;
          if ( (v35 & 0x20) == 0 )
            v36 = v33;
          v33 = v36;
          if ( (v35 & 0x42) != 0 )
            v33 = v36 | 0x42;
        }
      }
      if ( (*(_QWORD *)(v23 + 8) | 0x8000000000000000uLL) != v12 )
        KeBugCheckEx(0x1Au, 0x402uLL, v12, v33, *(_QWORD *)(v23 + 8));
      v37 = *(_QWORD *)(v23 + 40) & 0xFFFFFFFFFLL;
      v38 = *(_DWORD *)(v23 + 16);
      v39 = 0LL;
      v66 = 0LL;
      if ( (v38 & 0x400) != 0 )
      {
        PrototypePteDirect = (_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(v23 + 16));
        MiDereferenceControlAreaPfnList(*PrototypePteDirect, PrototypePteDirect, v41, 2LL);
        v42 = MiTransferSoftwarePte(*(_QWORD *)(v23 + 16), 0LL, 0LL, 0LL);
      }
      else
      {
        v42 = 0LL;
      }
      v43 = 0LL;
      if ( *(_WORD *)(v23 + 32) )
      {
        *(_QWORD *)(v23 + 24) |= 0x4000000000000000uLL;
        v46 = *(_BYTE *)(v23 + 34);
        if ( (v46 & 0x20) != 0 && (v46 & 8) == 0 )
        {
          v43 = *(_QWORD *)v23 - 32LL;
          if ( *(_QWORD *)(v43 + 16) == v43 + 16 )
            v43 = 0LL;
        }
        v45 = 3;
      }
      else
      {
        MiUnlinkPageFromList(v23);
        v44 = *(_QWORD *)(v23 + 16);
        if ( (v44 & 0x400) == 0 )
        {
          if ( (v44 & 4) != 0 || (v44 & 2) != 0 )
            v39 = MI_READ_PTE_LOCK_FREE(v23 + 16);
          v66 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v23 + 40) >> 40) & 0x3FFLL));
        }
        v45 = 4;
      }
      *v56 = v42;
      if ( (unsigned __int64)v56 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v56 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(v56, v42);
      if ( v45 == 4 )
        MiInsertPageInFreeOrZeroedList((__int64)(v23 + 0x58000000000LL) / 48);
      _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v47 = 48 * v37 - 0x58000000000LL;
      v59 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v47 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v59);
        while ( *(__int64 *)(v47 + 24) < 0 );
      }
      if ( (*(_BYTE *)(v47 + 34) & 7) != 6 )
        MiBadShareCount(48 * v37 - 0x58000000000LL);
      v48 = (*(_QWORD *)(v47 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
      *(_QWORD *)(v47 + 24) ^= (*(_QWORD *)(v47 + 24) ^ v48) & 0x3FFFFFFFFFFFFFFFLL;
      if ( !v48 )
        MiPfnShareCountIsZero(48 * v37 - 0x58000000000LL);
      _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v43 )
        MiInvalidateCollidedIos(v43);
      if ( v39 )
        MiReleasePageFileInfo(v66, v39, 1LL);
      v4 = v73;
      v12 = (ULONG_PTR)v56;
      v7 = v67;
      v2 = v68;
      v13 = v69;
      if ( v45 == 3 )
        ++*v73;
    }
    else
    {
      v63 = v25;
      if ( (v25 & 4) != 0 || (v25 & 2) != 0 )
        v49 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v63);
      else
        v49 = v18;
      v63 = v49;
      if ( v49 )
        MiReleasePageFileInfo(v70, v49, 0LL);
    }
LABEL_104:
    v12 += 8LL;
LABEL_105:
    a2 = (_QWORD *)v74;
    v56 = (_QWORD *)v12;
    if ( v12 < (unsigned __int64)v13 )
    {
      v9 = v57;
      continue;
    }
    break;
  }
  if ( v74 != 17 )
  {
    MiUnlockProtoPoolPage(v57, v74);
    if ( (v10 & 0x1000) != 0 )
      *v4 += 512 - MiFreeLargePageMemory(v7 & 0xFFFFFFFFFFFFFE00uLL, 1LL);
  }
  v3 = (ULONG_PTR)BugCheckParameter2;
  v11 = v64;
  v5 = v55;
LABEL_112:
  if ( (v60 & 0x80u) != 0 && (v60 & 0x20) == 0 )
  {
    v50 = MiDecrementSubsectionViewCount(v3);
    v51 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v2 + 18);
    v52 = v51;
    if ( *(_DWORD *)(v3 + 104) )
    {
      v53 = v51;
      do
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v2 + 18);
        __writecr8(v53);
        _mm_pause();
        ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v2 + 18);
      }
      while ( *(_DWORD *)(v3 + 104) );
    }
    if ( v11 )
    {
      MiUpdateSystemProtoPtesTree(v3 + 112, 0LL);
      *(_QWORD *)(v3 + 8) = 0LL;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v2 + 18);
    __writecr8(v52);
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
    if ( v50 )
      MiReturnCrossPartitionSectionCharges(v70, v61, v50);
  }
  return v5;
}
