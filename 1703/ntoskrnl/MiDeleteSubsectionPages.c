/*
 * XREFs of MiDeleteSubsectionPages @ 0x1400C4590
 * Callers:
 *     MiDeleteSegmentPages @ 0x1401190A4 (MiDeleteSegmentPages.c)
 *     MiExtendSection @ 0x140492FCC (MiExtendSection.c)
 * Callees:
 *     MiDereferenceControlAreaPfnList @ 0x1400162F8 (MiDereferenceControlAreaPfnList.c)
 *     MiInvalidateCollidedIos @ 0x14003855C (MiInvalidateCollidedIos.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiLockProtoPoolPage @ 0x1400A1530 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A8E30 (MiDecrementSubsectionViewCount.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiPfnShareCountIsZero @ 0x1400C6560 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDeleteClusterSection @ 0x14010A950 (MiDeleteClusterSection.c)
 *     MiFreeLargePageMemory @ 0x140126770 (MiFreeLargePageMemory.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiInvalidPteConforms @ 0x14017CEB0 (MiInvalidPteConforms.c)
 *     MiTransferSoftwarePte @ 0x14017D0B8 (MiTransferSoftwarePte.c)
 *     MiBadShareCount @ 0x14017D1EC (MiBadShareCount.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140221484 (MiReturnCrossPartitionSectionCharges.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeleteSubsectionPages(_QWORD *a1, _QWORD *a2)
{
  __int64 *v2; // r13
  _QWORD *v3; // r14
  _QWORD *v4; // r12
  unsigned __int8 v5; // dl
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // ebp
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // esi
  char *v13; // r15
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  ULONG_PTR v16; // r10
  unsigned __int64 v17; // rax
  int v18; // r10d
  __int64 v19; // r11
  ULONG_PTR v20; // r14
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // r10
  __int64 v24; // rax
  __int64 v25; // rcx
  ULONG_PTR v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r13
  int v30; // eax
  unsigned __int64 v31; // rdi
  __int64 *PrototypePteDirect; // rax
  char v33; // dl
  __int64 v34; // r8
  __int64 v35; // rbx
  __int64 v36; // rdx
  int v37; // r15d
  char v38; // al
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rbx
  __int64 v44; // rcx
  unsigned __int64 v45; // rax
  __int64 v46; // rsi
  KIRQL v47; // al
  KIRQL v48; // bp
  unsigned __int64 v49; // rdi
  _QWORD *v51; // [rsp+30h] [rbp-C8h]
  __int64 v52; // [rsp+38h] [rbp-C0h]
  int v53; // [rsp+40h] [rbp-B8h] BYREF
  int v54; // [rsp+44h] [rbp-B4h] BYREF
  BOOL v55; // [rsp+48h] [rbp-B0h]
  __int64 v56; // [rsp+50h] [rbp-A8h] BYREF
  unsigned __int64 v57; // [rsp+58h] [rbp-A0h] BYREF
  char *v58; // [rsp+60h] [rbp-98h]
  __int64 v59; // [rsp+68h] [rbp-90h]
  __int64 v60; // [rsp+70h] [rbp-88h] BYREF
  __int64 v61; // [rsp+78h] [rbp-80h]
  struct _KEVENT *v62; // [rsp+80h] [rbp-78h]
  __int64 v63; // [rsp+88h] [rbp-70h]
  __int64 *v64; // [rsp+90h] [rbp-68h]
  char *v65; // [rsp+98h] [rbp-60h]
  struct _KEVENT *v66; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v67; // [rsp+A8h] [rbp-50h]
  unsigned __int8 v70; // [rsp+110h] [rbp+18h] BYREF
  int v71; // [rsp+118h] [rbp+20h]

  v2 = (__int64 *)*a1;
  v3 = a1;
  v4 = a2;
  v64 = v2;
  v5 = 17;
  v59 = 0LL;
  v6 = v2[8];
  v7 = *((_WORD *)v2 + 30) & 0x3FF;
  v8 = *((_DWORD *)v2 + 14);
  v70 = 17;
  v66 = *(struct _KEVENT **)(qword_14036C8F8 + 8 * v7);
  v55 = v6 != 0;
  v9 = -1LL;
  v10 = *v2;
  v67 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v11 = 0LL;
  v52 = 0LL;
  v12 = *(_DWORD *)(v10 + 12);
  v71 = v8;
  v13 = (char *)v3[1];
  v58 = v13;
  if ( !v13 )
    goto LABEL_90;
  v14 = (unsigned __int64)v13;
  v51 = v13;
  v65 = &v13[8 * *((unsigned int *)v3 + 11)];
  if ( v13 >= v65 )
    goto LABEL_90;
  while ( 2 )
  {
    if ( (v14 & 0xFFF) != 0 )
    {
      if ( v5 != 17 )
        goto LABEL_12;
    }
    else if ( v5 != 17 )
    {
      MiUnlockProtoPoolPage(v11, v5);
      if ( (v12 & 0x1000) != 0 )
      {
        *v4 += 512 - MiFreeLargePageMemory(v9 & 0xFFFFFFFFFFFFFE00uLL, 1LL, 0LL);
        v9 = -1LL;
      }
    }
    v52 = MiLockProtoPoolPage(v14, &v70);
    if ( !v52 )
    {
      do
      {
        MmAccessFault(2uLL, v14, 0, 0LL);
        v52 = MiLockProtoPoolPage(v14, &v70);
      }
      while ( !v52 );
      LOBYTE(v8) = v71;
    }
    while ( 1 )
    {
LABEL_12:
      v15 = MI_READ_PTE_LOCK_FREE(v14);
      v56 = v15;
      if ( (v15 & 1) != 0 )
      {
        v17 = MI_GET_PAGE_FRAME_FROM_PTE(&v56);
        goto LABEL_18;
      }
      if ( (v15 & 0x400) != 0 || (v15 & 0x800) == 0 )
        break;
      if ( (unsigned int)MiInvalidPteConforms(v15) )
      {
        v17 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v56);
LABEL_18:
        if ( v17 <= qword_14036C290
          && (!MmPhysicalMemoryBlock || (*(_QWORD *)(48 * v17 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0) )
        {
          v20 = v19 + 48 * v17;
          v53 = v18;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v53);
            while ( (*(_QWORD *)(v20 + 24) & 0x8000000000000000uLL) != 0 );
          }
          v21 = MI_READ_PTE_LOCK_FREE(v14);
          if ( v21 == v56 )
            goto LABEL_27;
          _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
    }
    v20 = v16;
LABEL_27:
    v22 = MI_READ_PTE_LOCK_FREE(v14);
    v60 = v22;
    if ( (v22 & 1) != 0 )
    {
      v24 = MI_GET_PAGE_FRAME_FROM_PTE(&v60);
      *(_QWORD *)v14 = *(_QWORD *)(v20 + 16);
      v9 = v24;
      if ( (unsigned int)MiPteInShadowRange(v14) )
        MiWritePteShadow(v25);
      *(_QWORD *)(v20 + 24) |= 0x4000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_83;
    }
    if ( (v22 & 0x400) != 0 )
      goto LABEL_83;
    if ( (v22 & 0x800) != 0 )
    {
      v9 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v60);
      v63 = v9;
      if ( (*(_DWORD *)(v20 + 16) & 0x400LL) != 0 && (v2[7] & 0x20) == 0 && (*(_BYTE *)(v20 + 34) & 0x18) != 0 )
        ++v59;
      if ( !v67
        && (v9 & 0xF) == 0
        && (__int64)((unsigned __int64)&v65[-v14] & 0xFFFFFFFFFFFFFFF8uLL) >= 128
        && ((4096 - (v14 & 0xFFF)) & 0xFFFFFFF8) >= 0x80
        && (unsigned int)MiDeleteClusterSection(v20, v14) == 1 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v14 += 128LL;
        goto LABEL_84;
      }
      v26 = MI_READ_PTE_LOCK_FREE(v14);
      if ( (*(_QWORD *)(v20 + 8) | 0x8000000000000000uLL) != v14 )
        KeBugCheckEx(0x1Au, 0x402uLL, v14, v26, *(_QWORD *)(v20 + 8));
      v29 = *(_QWORD *)(v20 + 40) & 0xFFFFFFFFFLL;
      v30 = *(_DWORD *)(v20 + 16);
      v31 = 0LL;
      v62 = 0LL;
      if ( (v30 & 0x400) != 0 )
      {
        PrototypePteDirect = (__int64 *)MiGetPrototypePteDirect(*(_QWORD *)(v20 + 16), 0LL, v27, v28);
        MiDereferenceControlAreaPfnList(*PrototypePteDirect, (__int64)PrototypePteDirect, v34, v33 + 2);
        v35 = MiTransferSoftwarePte(*(_QWORD *)(v20 + 16), 0LL, 0LL);
      }
      else
      {
        v35 = 0LL;
      }
      v61 = 0LL;
      if ( *(_WORD *)(v20 + 32) )
      {
        *(_QWORD *)(v20 + 24) |= 0x4000000000000000uLL;
        v38 = *(_BYTE *)(v20 + 34);
        if ( (v38 & 0x20) != 0 && (v38 & 8) == 0 )
        {
          v39 = *(_QWORD *)v20 - 32LL;
          if ( *(_QWORD *)(v39 + 16) == v39 + 16 )
            v39 = 0LL;
          v61 = v39;
        }
        v37 = 3;
      }
      else
      {
        MiUnlinkPageFromList(v20, 0);
        if ( (*(_DWORD *)(v20 + 16) & 0x400LL) == 0 )
        {
          v36 = *(_QWORD *)(v20 + 16);
          if ( (v36 & 4) != 0 || (v36 & 2) != 0 )
            v31 = MI_READ_PTE_LOCK_FREE(v20 + 16);
          v62 = *(struct _KEVENT **)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v20 + 40) >> 40) & 0x3FFLL));
        }
        v37 = 4;
      }
      *v51 = v35;
      if ( (unsigned int)MiPteInShadowRange(v51) )
        MiWritePteShadow(v41);
      if ( v37 == 4 )
        MiInsertPageInFreeOrZeroedList((__int64)(v20 + 0x58000000000LL) / 48, 2LL);
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v43 = 48 * v29 - 0x58000000000LL;
      v54 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v43 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v54);
          while ( (*(_QWORD *)(v43 + 24) & 0x8000000000000000uLL) != 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v43 + 24), 0x3FuLL) );
        LOBYTE(v8) = v71;
      }
      if ( (*(_BYTE *)(v43 + 34) & 7) != 6 )
        MiBadShareCount(48 * v29 - 0x58000000000LL, v40, v42);
      v44 = *(_QWORD *)(v43 + 24);
      *(_QWORD *)(v43 + 24) = v44 ^ (((v44 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v44) & 0x3FFFFFFFFFFFFFFFLL;
      if ( (v44 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        MiPfnShareCountIsZero(48 * v29 - 0x58000000000LL);
      _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v61 )
        MiInvalidateCollidedIos(v61);
      if ( v31 )
        MiReleasePageFileInfo(v62, v31, 1);
      v4 = a2;
      v14 = (unsigned __int64)v51;
      v9 = v63;
      v2 = v64;
      if ( v37 == 3 )
        ++*a2;
    }
    else
    {
      v57 = v22;
      if ( (v22 & 4) != 0 || (v22 & 2) != 0 )
        v45 = MI_READ_PTE_LOCK_FREE(&v57);
      else
        v45 = v23;
      v57 = v45;
      if ( v45 )
        MiReleasePageFileInfo(v66, v45, 0);
    }
LABEL_83:
    v14 += 8LL;
LABEL_84:
    v5 = v70;
    v51 = (_QWORD *)v14;
    if ( v14 < (unsigned __int64)v65 )
    {
      v11 = v52;
      continue;
    }
    break;
  }
  if ( v70 != 17 )
  {
    MiUnlockProtoPoolPage(v52, v70);
    if ( (v12 & 0x1000) != 0 )
      *v4 += 512 - MiFreeLargePageMemory(v9 & 0xFFFFFFFFFFFFFE00uLL, 1LL, 0LL);
  }
  v3 = a1;
  v13 = v58;
LABEL_90:
  if ( (v8 & 0x80u) != 0 && (v8 & 0x20) == 0 )
  {
    v46 = MiDecrementSubsectionViewCount(v3, 0);
    v47 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v2 + 18);
    v48 = v47;
    if ( *((_DWORD *)v3 + 26) )
    {
      v49 = v47;
      do
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v2 + 18);
        __writecr8(v49);
        _mm_pause();
        ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v2 + 18);
      }
      while ( *((_DWORD *)v3 + 26) );
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v2 + 18);
    __writecr8(v48);
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    if ( v46 )
      MiReturnCrossPartitionSectionCharges(v66, v55, v46);
  }
  return v59;
}
