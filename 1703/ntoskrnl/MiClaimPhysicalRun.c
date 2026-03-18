/*
 * XREFs of MiClaimPhysicalRun @ 0x14010E174
 * Callers:
 *     MiFindContiguousPages @ 0x1400B65D0 (MiFindContiguousPages.c)
 *     MiAllocateMostlyContiguous @ 0x1400B8420 (MiAllocateMostlyContiguous.c)
 *     MiScrubNode @ 0x140226610 (MiScrubNode.c)
 *     MmRelocatePfnList @ 0x1406BF984 (MmRelocatePfnList.c)
 * Callees:
 *     MiTrimSharedPage @ 0x140014134 (MiTrimSharedPage.c)
 *     MiDrainZeroLookasides @ 0x14001C448 (MiDrainZeroLookasides.c)
 *     MiSwapStackPage @ 0x14002BD10 (MiSwapStackPage.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiLargeFreePageToMdl @ 0x140074CE4 (MiLargeFreePageToMdl.c)
 *     MiObtainTransitionPage @ 0x140074E48 (MiObtainTransitionPage.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiFreeZeroPageSizeIndex @ 0x1400B6080 (MiFreeZeroPageSizeIndex.c)
 *     MiActivePageClaimCandidate @ 0x1400B8C20 (MiActivePageClaimCandidate.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1400C7FC0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiIsPfnFileOnly @ 0x1400CB1E0 (MiIsPfnFileOnly.c)
 *     MiReturnFreeZeroPage @ 0x14010AE0C (MiReturnFreeZeroPage.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     MiSetPfnTbFlushStamp @ 0x14010EB3C (MiSetPfnTbFlushStamp.c)
 *     MiDemoteLargeFreePage @ 0x140128B94 (MiDemoteLargeFreePage.c)
 *     MiLockAndInsertPageInFreeList @ 0x14015976C (MiLockAndInsertPageInFreeList.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14017D278 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiReuseStandbyPage @ 0x14021FCFC (MiReuseStandbyPage.c)
 */

__int64 __fastcall MiClaimPhysicalRun(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        _QWORD *a7)
{
  _QWORD *v7; // rbp
  unsigned __int64 v9; // r14
  __int64 v11; // rsi
  int v12; // eax
  int v13; // r15d
  __int64 v14; // rbx
  unsigned __int8 v15; // di
  unsigned int v16; // r9d
  unsigned int v17; // edx
  unsigned __int64 v18; // r8
  char v19; // r9
  __int64 v20; // r10
  __int64 v21; // r11
  int v22; // eax
  unsigned int v23; // ebp
  unsigned __int64 v24; // rdi
  unsigned __int8 v25; // al
  __int64 i; // r13
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // r9
  int v34; // eax
  signed __int32 v35[8]; // [rsp+0h] [rbp-78h] BYREF
  int v36; // [rsp+30h] [rbp-48h] BYREF
  __int64 v37[8]; // [rsp+38h] [rbp-40h] BYREF
  int v39; // [rsp+88h] [rbp+10h]
  unsigned int v41; // [rsp+A0h] [rbp+28h]

  v7 = a7;
  v37[0] = -1LL;
  v9 = a2;
  if ( a7 )
    *a7 = -1LL;
  v11 = 0LL;
  v12 = a6;
  v13 = a5 & 0x400000;
  v39 = a5 & 0x400000;
  if ( (a5 & 0x400000) == 0 )
    v12 = -1;
  v41 = v12;
  v14 = 48 * a2 - 0x58000000000LL;
  while ( 1 )
  {
    v15 = MiLockPageInline(v14);
    if ( !MiIsPfnInline(v9) )
      break;
    if ( *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v14 + 40) >> 40) & 0x3FFLL)) != a1 )
      break;
    if ( (*(_BYTE *)(v14 + 34) & 7) == 5 )
    {
      if ( (*(_QWORD *)(v14 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL )
        break;
      v16 = dword_14036C1F8 & v9 | (((*(_QWORD *)(v14 + 40) >> 36) & 3) << byte_14036C1BA) | (*(_QWORD *)(v14 + 40) >> 58 << byte_14036C1B9);
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v15);
      MiDrainZeroLookasides(a1, v14, a3 - v11, v16);
      v15 = MiLockPageInline(v14);
      if ( !MiIsPfnInline(v9)
        || *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v14 + 40) >> 40) & 0x3FFLL)) != a1
        || (*(_BYTE *)(v14 + 34) & 7) == 5 )
      {
        break;
      }
    }
    if ( (unsigned int)MiIsPfnFileOnly(v14) == 1 )
      break;
    if ( v17 > 1 )
    {
      if ( *(_QWORD *)(a4 + 16) == v21 || (v25 = *(_BYTE *)(v14 + 35), v25 >= 0x80u) )
      {
        if ( v17 == 2 )
        {
          if ( *(_WORD *)(v14 + 32) != (_WORD)v21 )
            break;
          if ( !(unsigned int)MiReuseStandbyPage(v14) )
          {
LABEL_83:
            MiReturnFreeZeroPage(v14, 0);
            break;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v15);
          goto LABEL_77;
        }
        if ( v17 != 6 )
          break;
        if ( (v19 & 0x10) != 0 )
          break;
        if ( *(_WORD *)(v14 + 32) != 1 )
          break;
        if ( ((v18 >> 54) & 7) == 2 )
          break;
        if ( *(_QWORD *)v14 == v21 )
          break;
        v25 = *(_BYTE *)(v14 + 35);
        if ( (v25 & 8) != 0 )
          break;
      }
      if ( v17 > 4 )
      {
        if ( v15 == 2 || (a5 & 8) != 0 || v17 != 6 || (a5 & 0x200000) != 0 && (v25 & 0x40) != 0 )
          break;
        if ( ((v18 >> 54) & 7) == 2 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v15);
          if ( (unsigned int)MiSwapStackPage(v14, a4, a6, v37, &v36) )
            goto LABEL_75;
          if ( ((*(_QWORD *)(v14 + 40) >> 54) & 7) == 2 )
            goto LABEL_43;
        }
        else
        {
          if ( MiActivePageClaimCandidate(v20, v14, 1) )
            break;
          LOBYTE(v32) = v15;
          if ( (*(_QWORD *)(v14 + 40) & 0x200000000000000LL) != 0 )
            v34 = MiTrimSharedPage(v14, v32, a5, v33);
          else
            v34 = MiStealPage(v14, v15, a5, (unsigned int *)a4, a6, v37);
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v15);
          if ( !v34 )
            goto LABEL_43;
          if ( v34 != 2 )
          {
            v30 = a1;
            if ( *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v14 + 40) >> 40) & 0x3FFLL)) != a1 )
            {
LABEL_53:
              MiLockAndInsertPageInFreeList(v14);
              goto LABEL_81;
            }
LABEL_75:
            *(_QWORD *)(v14 + 16) = 0LL;
            MiSetOriginalPtePfnFromFreeList(v14 + 16, v30, v31);
            v29 = v14;
            if ( v13 )
            {
LABEL_56:
              MiLockAndInsertPageInFreeList(v29);
            }
            else
            {
              _InterlockedOr(v35, 0);
              MiSetPfnTbFlushStamp(v14, (unsigned int)KiTbFlushTimeStamp, 0LL);
            }
            goto LABEL_77;
          }
        }
      }
      else
      {
        if ( (a5 & 0x4000000) == 0 && *(_QWORD *)(v14 + 8) >= v21 || (a5 & 0x200000) != 0 && (v25 & 0x40) != 0 )
          break;
        v28 = MiObtainTransitionPage(v14, v15, a4, v41, v37);
        if ( v28 == 3 )
        {
          if ( *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v14 + 40) >> 40) & 0x3FFLL)) != a1 )
            goto LABEL_53;
          if ( v13 )
          {
            v29 = v14;
            goto LABEL_56;
          }
LABEL_80:
          v14 += 48LL;
          ++v9;
          ++v11;
          goto LABEL_81;
        }
        if ( v28 != 2 )
          goto LABEL_43;
      }
    }
    else
    {
      v22 = MiFreeZeroPageSizeIndex(v14);
      v23 = v22;
      if ( v22 == -1 )
      {
        if ( !v13 && !(unsigned int)MiUnlinkFreeOrZeroedPage(v9, 0LL, 0) )
          goto LABEL_83;
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v15);
        v7 = a7;
LABEL_77:
        if ( v13 && v7 )
          *v7 = v37[0];
        goto LABEL_80;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v15);
      v24 = MiLargePageSizes[v22];
      if ( (a5 & 0x2000000) != 0 && v24 >= 0x200 || (a5 & 0x1000000) != 0 && v24 == 16 )
        goto LABEL_43;
      if ( !v13
        && v9 == (v9 & ~(v24 - 1))
        && a3 - v11 >= v24
        && (unsigned int)MiLargeFreePageToMdl(v24 + v9 - 1, v22, 0LL) == 1 )
      {
        v9 += v24;
        v14 += 48 * v24;
        v11 += v24;
      }
      else if ( (unsigned int)MiDemoteLargeFreePage(v9, v23) != 1 )
      {
        goto LABEL_43;
      }
    }
LABEL_81:
    if ( v11 == a3 )
      return 0LL;
    v13 = v39;
    v7 = a7;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v15);
LABEL_43:
  for ( i = a3 - v11; v11; --v11 )
  {
    v14 -= 48LL;
    MiLockAndInsertPageInFreeList(v14);
  }
  return i;
}
