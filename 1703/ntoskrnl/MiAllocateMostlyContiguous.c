/*
 * XREFs of MiAllocateMostlyContiguous @ 0x1400B8420
 * Callers:
 *     MiFindPagesForMdl @ 0x14007AE64 (MiFindPagesForMdl.c)
 * Callees:
 *     MiDrainZeroLookasides @ 0x14001C448 (MiDrainZeroLookasides.c)
 *     MiDereferencePageRuns @ 0x1400252E4 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x140025380 (MiReferencePageRuns.c)
 *     MiCreatePteCopyList @ 0x14002A77C (MiCreatePteCopyList.c)
 *     MiReleasePteCopyList @ 0x14002EDD4 (MiReleasePteCopyList.c)
 *     MiEmptyKernelStackCache @ 0x14003C924 (MiEmptyKernelStackCache.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiLargeFreePageToMdl @ 0x140074CE4 (MiLargeFreePageToMdl.c)
 *     MiObtainTransitionPage @ 0x140074E48 (MiObtainTransitionPage.c)
 *     MiPfnZeroingNeeded @ 0x14007AE20 (MiPfnZeroingNeeded.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiFreeZeroPageSizeIndex @ 0x1400B6080 (MiFreeZeroPageSizeIndex.c)
 *     MiPageToNode @ 0x1400B70B0 (MiPageToNode.c)
 *     MiActivePageClaimCandidate @ 0x1400B8C20 (MiActivePageClaimCandidate.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1400C7FC0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiReturnFreeZeroPage @ 0x14010AE0C (MiReturnFreeZeroPage.c)
 *     MiClaimPhysicalRun @ 0x14010E174 (MiClaimPhysicalRun.c)
 *     MiDemoteLargeFreePage @ 0x140128B94 (MiDemoteLargeFreePage.c)
 *     MiLockAndInsertPageInFreeList @ 0x14015976C (MiLockAndInsertPageInFreeList.c)
 *     MiReuseStandbyPage @ 0x14021FCFC (MiReuseStandbyPage.c)
 *     MiPfnLargeBitSet @ 0x140224620 (MiPfnLargeBitSet.c)
 */

__int64 __fastcall MiAllocateMostlyContiguous(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned __int64 a7,
        unsigned __int64 a8)
{
  __int64 v10; // rsi
  __int64 v11; // r12
  __int64 *v12; // r14
  unsigned int *v13; // rax
  __int64 v14; // rdi
  unsigned int v15; // r11d
  unsigned int v16; // r10d
  int *v17; // rdx
  __int64 v18; // r8
  unsigned int *v19; // r8
  __int64 v20; // rbx
  _BYTE *v21; // r9
  unsigned __int64 v22; // rbp
  _BYTE *v23; // rcx
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // r15
  __int64 v28; // rdx
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rdi
  __int64 v31; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned __int64 v33; // rdx
  unsigned __int8 v34; // cl
  unsigned __int64 active; // rcx
  int v36; // eax
  int v37; // eax
  unsigned int v38; // esi
  int v39; // eax
  __int64 v40; // rcx
  unsigned int v41; // r9d
  int v42; // eax
  __int64 result; // rax
  unsigned __int64 v44; // r14
  int v45; // eax
  __int64 *v46; // rbp
  unsigned __int64 v47; // rcx
  __int64 v48; // rax
  int v49; // ecx
  unsigned __int16 *v50; // rdi
  __int64 v51; // [rsp+40h] [rbp-B8h]
  unsigned int v52; // [rsp+48h] [rbp-B0h]
  __int64 *v53; // [rsp+50h] [rbp-A8h]
  int v54; // [rsp+58h] [rbp-A0h]
  _BYTE *v55; // [rsp+60h] [rbp-98h]
  unsigned int *v56; // [rsp+68h] [rbp-90h]
  int v57; // [rsp+70h] [rbp-88h] BYREF
  int v58; // [rsp+74h] [rbp-84h]
  unsigned __int16 *v59; // [rsp+78h] [rbp-80h]
  int *v60; // [rsp+80h] [rbp-78h]
  unsigned __int16 *v61; // [rsp+88h] [rbp-70h]
  _BYTE *v62; // [rsp+90h] [rbp-68h]
  __int64 v63; // [rsp+98h] [rbp-60h]
  _BYTE v64[4]; // [rsp+A0h] [rbp-58h] BYREF
  int v65; // [rsp+A4h] [rbp-54h]
  __int64 v66; // [rsp+B0h] [rbp-48h]
  int v68; // [rsp+110h] [rbp+18h]

  v68 = a3;
  if ( KeGetCurrentIrql() == 2 )
    v68 = a3 | 8;
  MiCreatePteCopyList(a5, 0x40uLL, (__int64)v64);
  if ( !v65 )
    return 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v54 = 0;
  v51 = 0LL;
  v12 = (__int64 *)(a2 + 8 * (((unsigned __int64)*(unsigned int *)(a2 + 40) >> 12) + 6));
  v53 = v12;
  v13 = (unsigned int *)MiReferencePageRuns(a1, 1u);
  v14 = *(_QWORD *)(a1 + 48);
  v15 = -1;
  v16 = a6;
  v17 = (int *)v13;
  v60 = (int *)v13;
  v18 = *v13 + 1LL;
  v61 = 0LL;
  v19 = &v13[4 * v18];
  v63 = v14;
  v56 = v19;
  v59 = 0LL;
LABEL_5:
  v52 = v15;
  v20 = (unsigned int)MmNumberOfChannels;
  v21 = 0LL;
  v22 = a8;
  v55 = 0LL;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    if ( v16 == 64 )
    {
      if ( v15 == -1 )
      {
        v47 = *(_QWORD *)(a1 + 5576);
        if ( a8 <= v47 )
          v47 = a8;
        v15 = MiPageToNode(v47, 0LL);
        v19 = v56;
        v21 = 0LL;
        v16 = a6;
        v52 = v15;
        v59 = (unsigned __int16 *)((char *)qword_14036C1C0 + 2 * v15 * (unsigned __int16)KeNumberNodes);
        v17 = v60;
        v61 = &v59[(unsigned __int16)KeNumberNodes];
      }
      v48 = v15;
    }
    else
    {
      v48 = v16;
    }
    if ( (*(_DWORD *)(2184 * v48 + v14 + 2136) & 1) != 0 )
    {
      v21 = (_BYTE *)(2184 * v48 + v14 + 2165);
      v55 = v21;
    }
  }
  v23 = &v21[v20];
  v62 = &v21[v20];
  while ( 1 )
  {
    v24 = *v17;
    if ( *v17 )
      break;
LABEL_107:
    if ( !v21 )
      goto LABEL_65;
    v22 = a8;
    v55 = ++v21;
    if ( v21 >= v23 )
    {
      if ( v52 == -1 )
        goto LABEL_65;
      v50 = v59 + 1;
      v59 = v50;
      if ( v50 == v61 )
        goto LABEL_65;
      v15 = *v50;
      v14 = v63;
      goto LABEL_5;
    }
  }
  while ( 1 )
  {
    v25 = (unsigned int)(v24 - 1);
    v58 = v25;
    v26 = (unsigned int)v25;
    v25 *= 2LL;
    v27 = *(_QWORD *)&v17[2 * v25 + 4];
    v28 = *(_QWORD *)&v17[2 * v25 + 6];
    if ( (v16 == 64 || *((unsigned __int8 *)v19 + 2 * v26) == v16) && (!v21 || *((_BYTE *)v19 + 2 * v26 + 1) == *v21) )
    {
      v29 = v28 + v27;
      if ( v28 + v27 - 1 > v22 )
        v29 = v22 + 1;
      if ( v27 < a7 )
        v27 = a7;
      if ( v27 < v29 )
      {
        v30 = v29 - 1;
        v31 = 48 * v30 - 0x58000000000LL;
        if ( v30 >= v27 )
          break;
      }
    }
LABEL_36:
    v24 = v58;
    v17 = v60;
    v22 = a8;
    if ( !v58 )
    {
      v23 = v62;
      goto LABEL_107;
    }
  }
  while ( 1 )
  {
    if ( !v30 )
    {
LABEL_35:
      v19 = v56;
      v21 = v55;
      v16 = a6;
      goto LABEL_36;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v57 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v57);
      while ( *(__int64 *)(v31 + 24) < 0 );
    }
    if ( v30 > qword_14036C290
      || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * v30 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
    {
      goto LABEL_58;
    }
    v33 = *(_QWORD *)(v31 + 40);
    if ( *(_QWORD *)(qword_14036C8F8 + 8 * ((v33 >> 40) & 0x3FF)) != a1 )
    {
      v49 = MiPfnLargeBitSet(&MiSystemPartition, v30);
      _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      if ( v49 != -1 )
      {
        v30 &= ~(MiLargePageSizes[v49] - 1);
        v31 = 48 * v30 - 0x58000000000LL;
      }
      goto LABEL_34;
    }
    v34 = *(_BYTE *)(v31 + 34) & 7;
    if ( v34 == 5 )
    {
      if ( (*(_QWORD *)(v31 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL )
        goto LABEL_58;
      v41 = dword_14036C1F8 & v30 | (((v33 >> 36) & 3) << byte_14036C1BA) | (v33 >> 58 << byte_14036C1B9);
      _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      MiDrainZeroLookasides(a1, v31 + 48 * (v11 - a5 + 1), a5 - v11, v41);
      CurrentIrql = MiLockPageInline(v31);
      if ( !MiIsPfnInline(v30) )
        goto LABEL_58;
      v33 = *(_QWORD *)(v31 + 40);
      if ( *(_QWORD *)(qword_14036C8F8 + 8 * ((v33 >> 40) & 0x3FF)) != a1 )
        goto LABEL_58;
      v34 = *(_BYTE *)(v31 + 34) & 7;
      if ( v34 == 5 )
        goto LABEL_58;
    }
    if ( (v33 & 0x10000000000000LL) != 0 )
      goto LABEL_58;
    if ( v34 <= 1u )
    {
      v37 = MiFreeZeroPageSizeIndex(v31);
      v38 = v37;
      if ( v37 == -1 )
      {
        v39 = MiUnlinkFreeOrZeroedPage(v30, 0LL, 0LL);
        v40 = v31;
        if ( !v39 )
          goto LABEL_114;
        _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
        v10 = v51;
        if ( MiPfnZeroingNeeded() )
          v10 = ++v51;
        ++v11;
        *v12 = v30;
        if ( v11 == a5 )
          goto LABEL_66;
        v10 = v51;
        v53 = ++v12;
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
        v44 = MiLargePageSizes[v37];
        if ( (v30 & (v44 - 1)) == v44 - 1 && a5 - v11 >= v44 && (unsigned int)MiLargeFreePageToMdl(v30, v37, v53) == 1 )
        {
          v46 = &v53[v44];
          v53 = v46;
          v30 += 1 - v44;
          v31 += 48 - 48 * v44;
          v10 = v51;
          if ( MiPfnZeroingNeeded() )
          {
            v10 = v44 + v51;
            v51 += v44;
          }
          v11 += v44;
          if ( v11 == a5 )
            goto LABEL_65;
          v12 = v46;
        }
        else
        {
          v45 = MiDemoteLargeFreePage(v30, v38);
          v12 = v53;
          v10 = v51;
          if ( v45 == 1 )
          {
            ++v30;
            v31 += 48LL;
          }
        }
      }
      goto LABEL_34;
    }
    if ( !v66 || *(_BYTE *)(v31 + 35) >= 0x80u )
      break;
    if ( v34 > 4u )
    {
      if ( v34 == 6 )
      {
        if ( ((v33 >> 54) & 7) == 2 )
        {
          if ( (v68 & 8) == 0 && *(_QWORD *)v31 != -5LL )
          {
            if ( (*(_QWORD *)v31 & 1) == 0 )
              v54 = 1;
LABEL_39:
            _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(CurrentIrql);
            if ( v54 == 1 )
              MiEmptyKernelStackCache();
            v36 = 0;
            if ( v54 != 1 )
              v36 = v54;
            v54 = v36;
            if ( !MiClaimPhysicalRun(a1, v30, 1, (unsigned int)v64, v68, -1, 0LL) )
            {
              *v12 = v30;
              if ( MiPfnZeroingNeeded() )
                v51 = ++v10;
              if ( ++v11 == a5 )
                goto LABEL_65;
              v53 = ++v12;
            }
            goto LABEL_34;
          }
        }
        else
        {
          active = MiActivePageClaimCandidate(a1, v31, 1LL);
          if ( active )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(CurrentIrql);
            if ( active > v30 - v27 )
              goto LABEL_35;
            v30 += 1 - active;
            v31 += 48 - 48 * active;
            goto LABEL_34;
          }
          if ( (v68 & 8) == 0 )
            goto LABEL_39;
        }
      }
LABEL_58:
      _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      goto LABEL_34;
    }
    if ( *(__int64 *)(v31 + 8) >= 0 )
      goto LABEL_58;
    v42 = MiObtainTransitionPage(v31, CurrentIrql, (__int64)v64, 0xFFFFFFFFLL, 0LL);
    switch ( v42 )
    {
      case 1:
        goto LABEL_65;
      case 3:
        if ( *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v31 + 40) >> 40) & 0x3FFLL)) == a1 )
          goto LABEL_63;
        MiLockAndInsertPageInFreeList(v31);
        break;
      case 2:
        v31 += 48LL;
        ++v30;
        break;
    }
LABEL_34:
    --v30;
    v31 -= 48LL;
    if ( v30 < v27 )
      goto LABEL_35;
  }
  if ( v34 != 2 || *(_WORD *)(v31 + 32) )
    goto LABEL_58;
  if ( (unsigned int)MiReuseStandbyPage(v31) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
LABEL_63:
    ++v10;
    *v12 = v30;
    ++v11;
    v51 = v10;
    if ( v11 == a5 )
      goto LABEL_66;
    v53 = ++v12;
    goto LABEL_34;
  }
  v40 = v31;
LABEL_114:
  MiReturnFreeZeroPage(v40, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(CurrentIrql);
LABEL_65:
  v10 = v51;
LABEL_66:
  MiDereferencePageRuns((__int64)v60);
  MiReleasePteCopyList((__int64)v64);
  if ( v10 )
    *(_QWORD *)(a2 + 24) = 1LL;
  result = v11;
  *(_DWORD *)(a2 + 40) += (_DWORD)v11 << 12;
  return result;
}
