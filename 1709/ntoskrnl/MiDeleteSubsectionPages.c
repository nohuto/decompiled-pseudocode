/*
 * XREFs of MiDeleteSubsectionPages @ 0x14004C770
 * Callers:
 *     MiDeleteSegmentPages @ 0x14001F644 (MiDeleteSegmentPages.c)
 *     MiExtendSection @ 0x14056BC80 (MiExtendSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140030E90 (MiLockProtoPoolPage.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiPfnShareCountIsZero @ 0x14004F450 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A1FF0 (MiDecrementSubsectionViewCount.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiDeleteClusterSection @ 0x1400CB53C (MiDeleteClusterSection.c)
 *     MiFreeLargePageMemory @ 0x1400F43C0 (MiFreeLargePageMemory.c)
 *     MiDereferenceControlAreaPfnList @ 0x14010A900 (MiDereferenceControlAreaPfnList.c)
 *     MiInvalidateCollidedIos @ 0x14012DC4C (MiInvalidateCollidedIos.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiInvalidPteConforms @ 0x14017C70C (MiInvalidPteConforms.c)
 *     MiTransferSoftwarePte @ 0x14017C95C (MiTransferSoftwarePte.c)
 *     MiBadShareCount @ 0x14017CA94 (MiBadShareCount.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14022E13C (MiReturnCrossPartitionSectionCharges.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeleteSubsectionPages(__int64 **BugCheckParameter2, _QWORD *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 *v4; // r13
  ULONG_PTR v5; // r11
  ULONG_PTR v6; // r14
  _QWORD *v7; // r12
  __int64 v8; // rcx
  __int64 v9; // r8
  char *v10; // r15
  int v11; // ebp
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  int v15; // esi
  __int64 v16; // rax
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // r10
  __int64 PteShadow; // rbx
  unsigned __int64 v20; // rax
  ULONG_PTR v21; // r14
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // r10
  __int64 *v27; // r15
  unsigned __int64 v28; // r10
  ULONG_PTR v29; // rax
  __int64 v30; // r13
  int v31; // eax
  __int64 v32; // rdi
  _QWORD *PrototypePteDirect; // rax
  int v34; // edx
  __int64 v35; // r8
  __int64 v36; // rbx
  int v37; // r15d
  char v38; // al
  __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rsi
  KIRQL v44; // al
  KIRQL v45; // bp
  unsigned __int64 v46; // rdi
  __int64 v48; // [rsp+30h] [rbp-C8h]
  __int64 v49; // [rsp+38h] [rbp-C0h] BYREF
  _QWORD *v50; // [rsp+40h] [rbp-B8h]
  __int64 v51; // [rsp+48h] [rbp-B0h]
  int v52; // [rsp+50h] [rbp-A8h] BYREF
  int v53; // [rsp+54h] [rbp-A4h] BYREF
  BOOL v54; // [rsp+58h] [rbp-A0h]
  char *v55; // [rsp+60h] [rbp-98h]
  __int64 v56; // [rsp+68h] [rbp-90h]
  __int64 v57; // [rsp+70h] [rbp-88h] BYREF
  __int64 v58; // [rsp+78h] [rbp-80h] BYREF
  __int64 v59; // [rsp+80h] [rbp-78h]
  __int64 v60; // [rsp+88h] [rbp-70h]
  __int64 *v61; // [rsp+90h] [rbp-68h]
  char *v62; // [rsp+98h] [rbp-60h]
  __int64 v63; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v64; // [rsp+A8h] [rbp-50h]
  _QWORD *v66; // [rsp+108h] [rbp+10h]
  unsigned __int8 v67; // [rsp+110h] [rbp+18h] BYREF
  int v68; // [rsp+118h] [rbp+20h]

  v66 = a2;
  v4 = *BugCheckParameter2;
  v5 = 0LL;
  v6 = (ULONG_PTR)BugCheckParameter2;
  v7 = a2;
  v61 = v4;
  LOBYTE(a2) = 17;
  v56 = 0LL;
  v8 = v4[8];
  v9 = *((_WORD *)v4 + 30) & 0x3FF;
  v10 = *(char **)(v6 + 8);
  v11 = *((_DWORD *)v4 + 14);
  v67 = 17;
  v63 = *(_QWORD *)(qword_140388AF0 + 8 * v9);
  v68 = v11;
  v54 = v8 != 0;
  v12 = *v4;
  v13 = -1LL;
  v64 = v8 & 0xFFFFFFFFFFFFFFF0uLL;
  v14 = 0LL;
  v51 = 0LL;
  v48 = -1LL;
  v15 = *(_DWORD *)(v12 + 12);
  v55 = v10;
  if ( !v10 )
    goto LABEL_115;
  v16 = *(unsigned int *)(v6 + 44);
  v17 = (unsigned __int64)v10;
  v50 = v10;
  v62 = &v10[8 * v16];
  if ( v10 >= v62 )
    goto LABEL_115;
  while ( 2 )
  {
    v18 = 0xFFFFF6FB7DBED000uLL;
    if ( (v17 & 0xFFF) != 0 )
    {
      if ( (_BYTE)a2 != 17 )
        goto LABEL_13;
    }
    else if ( (_BYTE)a2 != 17 )
    {
      MiUnlockProtoPoolPage(v14, (unsigned __int8)a2);
      if ( (v15 & 0x1000) != 0 )
      {
        v48 = -1LL;
        *v7 += 512 - MiFreeLargePageMemory(v13 & 0xFFFFFFFFFFFFFE00uLL, 1LL);
      }
    }
    v51 = MiLockProtoPoolPage(v17, &v67);
    if ( !v51 )
    {
      do
      {
        MmAccessFault(2uLL, v17, 0LL, 0LL);
        v51 = MiLockProtoPoolPage(v17, &v67);
      }
      while ( !v51 );
      LOBYTE(v11) = v68;
    }
    v5 = 0LL;
    v18 = 0xFFFFF6FB7DBED000uLL;
    while ( 1 )
    {
LABEL_13:
      PteShadow = *(_QWORD *)v17;
      if ( v17 >= v18 && v17 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(v17, *(_QWORD *)v17);
      v57 = PteShadow;
      if ( (PteShadow & 1) != 0 )
      {
        v20 = MI_GET_PAGE_FRAME_FROM_PTE(&v57);
        goto LABEL_22;
      }
      if ( (PteShadow & 0x400) != 0 || (PteShadow & 0x800) == 0 )
        break;
      if ( (unsigned int)MiInvalidPteConforms(PteShadow, a2, v9, a4) )
      {
        v20 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v57);
LABEL_22:
        a4 = v20;
        if ( v20 <= qword_1403885E0
          && (!MmPhysicalMemoryBlock || (*(_QWORD *)(48 * v20 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0) )
        {
          v21 = 48 * v20 - 0x58000000000LL;
          v52 = v5;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v52);
              while ( *(__int64 *)(v21 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) );
            v18 = 0xFFFFF6FB7DBED000uLL;
            v5 = 0LL;
          }
          v22 = *(_QWORD *)v17;
          if ( v17 >= v18 && v17 <= 0xFFFFF6FB7DBED7F8uLL )
            v22 = MiReadPteShadow(v17, *(_QWORD *)v17);
          if ( v22 == PteShadow )
            goto LABEL_35;
          _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
    }
    v21 = v5;
LABEL_35:
    v23 = *(_QWORD *)v17;
    if ( v17 >= v18 && v17 <= 0xFFFFF6FB7DBED7F8uLL )
      v23 = MiReadPteShadow(v17, *(_QWORD *)v17);
    v58 = v23;
    if ( (v23 & 1) != 0 )
    {
      v24 = MI_GET_PAGE_FRAME_FROM_PTE(&v58);
      v25 = *(_QWORD *)(v21 + 16);
      v13 = v24;
      *(_QWORD *)v17 = v25;
      v48 = v24;
      if ( v17 >= v26 && v17 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(v17, v25);
      *(_QWORD *)(v21 + 24) |= 0x4000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_108;
    }
    if ( (v23 & 0x400) != 0 )
    {
LABEL_107:
      v13 = v48;
      goto LABEL_108;
    }
    if ( (v23 & 0x800) == 0 )
    {
      v49 = v23;
      if ( (v23 & 4) != 0 )
      {
        if ( (unsigned __int64)&v49 >= v18 && (unsigned __int64)&v49 <= 0xFFFFF6FB7DBED7F8uLL )
LABEL_99:
          v23 = MiReadPteShadow(&v49, v23);
      }
      else if ( (v23 & 2) != 0 )
      {
        if ( (unsigned __int64)&v49 >= v18 && (unsigned __int64)&v49 <= 0xFFFFF6FB7DBED7F8uLL )
          goto LABEL_99;
      }
      else
      {
        v23 = v5;
      }
      v49 = v23;
      if ( v23 )
        MiReleasePageFileInfo(v63, v23, 0LL);
      goto LABEL_107;
    }
    v27 = (__int64 *)(v21 + 16);
    v48 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v58);
    v13 = v48;
    if ( (*(_DWORD *)(v21 + 16) & 0x400LL) != 0 && (v4[7] & 0x20) == 0 && (*(_BYTE *)(v21 + 34) & 0x18) != 0 )
      ++v56;
    if ( !v64
      && (v48 & 0xF) == 0
      && (__int64)((unsigned __int64)&v62[-v17] & 0xFFFFFFFFFFFFFFF8uLL) >= 128
      && ((4096 - (v17 & 0xFFF)) & 0xFFFFFFF8) >= 0x80 )
    {
      if ( (unsigned int)MiDeleteClusterSection(v21, v17) == 1 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v17 += 128LL;
        goto LABEL_109;
      }
      v28 = 0xFFFFF6FB7DBED000uLL;
    }
    v29 = *(_QWORD *)v17;
    if ( v17 >= v28 && v17 <= 0xFFFFF6FB7DBED7F8uLL )
      v29 = MiReadPteShadow(v17, *(_QWORD *)v17);
    if ( (*(_QWORD *)(v21 + 8) | 0x8000000000000000uLL) != v17 )
      KeBugCheckEx(0x1Au, 0x402uLL, v17, v29, *(_QWORD *)(v21 + 8));
    v30 = *(_QWORD *)(v21 + 40) & 0xFFFFFFFFFLL;
    v31 = *(_DWORD *)v27;
    v32 = 0LL;
    v60 = 0LL;
    if ( (v31 & 0x400) != 0 )
    {
      PrototypePteDirect = (_QWORD *)MiGetPrototypePteDirect(*v27);
      MiDereferenceControlAreaPfnList(*PrototypePteDirect, PrototypePteDirect, v35, (unsigned int)(v34 + 2));
      v36 = MiTransferSoftwarePte(*v27, 0LL, 0LL, 0LL);
    }
    else
    {
      v36 = 0LL;
    }
    v59 = 0LL;
    if ( *(_WORD *)(v21 + 32) )
    {
      *(_QWORD *)(v21 + 24) |= 0x4000000000000000uLL;
      v38 = *(_BYTE *)(v21 + 34);
      if ( (v38 & 0x20) != 0 && (v38 & 8) == 0 )
      {
        v39 = *(_QWORD *)v21 - 32LL;
        if ( *(_QWORD *)(v39 + 16) == v39 + 16 )
          v39 = 0LL;
        v59 = v39;
      }
      v37 = 3;
      a4 = 0xFFFFF6FB7DBED000uLL;
    }
    else
    {
      MiUnlinkPageFromList(v21, 0LL);
      a4 = 0xFFFFF6FB7DBED000uLL;
      if ( (*(_DWORD *)v27 & 0x400LL) == 0 )
      {
        v32 = *v27;
        if ( (*v27 & 4) != 0 || (v32 & 2) != 0 )
        {
          if ( (unsigned __int64)v27 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v27 <= 0xFFFFF6FB7DBED7F8uLL )
            v32 = MiReadPteShadow(v21 + 16, *v27);
        }
        else
        {
          v32 = 0LL;
        }
        v60 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v21 + 40) >> 40) & 0x3FFLL));
      }
      v37 = 4;
    }
    v40 = (unsigned __int64)v50;
    *v50 = v36;
    if ( v40 >= a4 && v40 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v40, v36);
    if ( v37 == 4 )
      MiInsertPageInFreeOrZeroedList((__int64)(v21 + 0x58000000000LL) / 48, 2LL);
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v41 = 48 * v30 - 0x58000000000LL;
    v53 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v53);
      while ( *(__int64 *)(v41 + 24) < 0 );
    }
    if ( (*(_BYTE *)(v41 + 34) & 7) != 6 )
      MiBadShareCount(48 * v30 - 0x58000000000LL);
    v9 = 0x3FFFFFFFFFFFFFFFLL;
    v42 = (*(_QWORD *)(v41 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)(v41 + 24) ^= (*(_QWORD *)(v41 + 24) ^ v42) & 0x3FFFFFFFFFFFFFFFLL;
    if ( !v42 )
      MiPfnShareCountIsZero(48 * v30 - 0x58000000000LL);
    _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v59 )
      MiInvalidateCollidedIos(v59);
    if ( v32 )
      MiReleasePageFileInfo(v60, v32, 1LL);
    v7 = v66;
    v17 = (unsigned __int64)v50;
    v13 = v48;
    v4 = v61;
    if ( v37 == 3 )
      ++*v66;
LABEL_108:
    v17 += 8LL;
LABEL_109:
    a2 = (_QWORD *)v67;
    v50 = (_QWORD *)v17;
    if ( v17 < (unsigned __int64)v62 )
    {
      v14 = v51;
      v5 = 0LL;
      continue;
    }
    break;
  }
  if ( v67 != 17 )
  {
    MiUnlockProtoPoolPage(v51, v67);
    if ( (v15 & 0x1000) != 0 )
      *v7 += 512 - MiFreeLargePageMemory(v13 & 0xFFFFFFFFFFFFFE00uLL, 1LL);
  }
  v6 = (ULONG_PTR)BugCheckParameter2;
  v10 = v55;
LABEL_115:
  if ( (v11 & 0x80u) != 0 && (v11 & 0x20) == 0 )
  {
    v43 = MiDecrementSubsectionViewCount(v6);
    v44 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v4 + 18);
    v45 = v44;
    if ( *(_DWORD *)(v6 + 104) )
    {
      v46 = v44;
      do
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v4 + 18);
        __writecr8(v46);
        _mm_pause();
        ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v4 + 18);
      }
      while ( *(_DWORD *)(v6 + 104) );
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v4 + 18);
    __writecr8(v45);
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
    if ( v43 )
      MiReturnCrossPartitionSectionCharges(v63, v54, v43);
  }
  return v56;
}
