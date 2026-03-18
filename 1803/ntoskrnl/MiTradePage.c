/*
 * XREFs of MiTradePage @ 0x140121260
 * Callers:
 *     MiClaimPhysicalRun @ 0x140121080 (MiClaimPhysicalRun.c)
 * Callees:
 *     MiSwapStackPage @ 0x140002818 (MiSwapStackPage.c)
 *     MiLargeFreePageToMdl @ 0x140002D74 (MiLargeFreePageToMdl.c)
 *     MiTradeTransitionPage @ 0x140002F48 (MiTradeTransitionPage.c)
 *     MiDemoteLargeFreePage @ 0x140003C2C (MiDemoteLargeFreePage.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14002D3C0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiStealPage @ 0x14003B400 (MiStealPage.c)
 *     MiReturnFreeZeroPage @ 0x1400517A8 (MiReturnFreeZeroPage.c)
 *     MiPfnZeroingNeeded @ 0x140052058 (MiPfnZeroingNeeded.c)
 *     MiSetPfnTbFlushStamp @ 0x1400562B4 (MiSetPfnTbFlushStamp.c)
 *     MiTrimSharedPage @ 0x140081E44 (MiTrimSharedPage.c)
 *     MiDrainZeroLookasides @ 0x1400B1B20 (MiDrainZeroLookasides.c)
 *     MiAddMdlPageToTradeBlock @ 0x1400BFF90 (MiAddMdlPageToTradeBlock.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiIsPfnFileOnly @ 0x140121930 (MiIsPfnFileOnly.c)
 *     MiActivePageClaimCandidate @ 0x140121970 (MiActivePageClaimCandidate.c)
 *     MiFreeZeroPageSizeIndex @ 0x140121FC0 (MiFreeZeroPageSizeIndex.c)
 *     MiPfnLargeBitSet @ 0x140123C90 (MiPfnLargeBitSet.c)
 *     MiLockAndInsertPageInFreeList @ 0x14017EC2C (MiLockAndInsertPageInFreeList.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140265490 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiReuseStandbyPage @ 0x140266478 (MiReuseStandbyPage.c)
 */

__int64 __fastcall MiTradePage(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r15d
  __int64 v3; // r13
  __int64 v4; // rdi
  __int64 v5; // rsi
  int v6; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 CurrentIrql; // r11
  unsigned __int8 v12; // bp
  unsigned int v13; // r9d
  unsigned __int64 v14; // rdx
  unsigned int v15; // r8d
  char v16; // r9
  char v17; // r11
  unsigned int v18; // eax
  unsigned __int64 v19; // r9
  int v20; // r10d
  unsigned int v21; // esi
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rcx
  char v24; // al
  int v25; // eax
  unsigned __int64 v26; // rdx
  __int64 active; // rax
  int v28; // eax
  __int64 v29; // r8
  __int64 v30; // rcx
  int v31; // eax
  __int64 result; // rax
  signed __int32 v33[8]; // [rsp+0h] [rbp-B8h] BYREF
  int v34; // [rsp+30h] [rbp-88h] BYREF
  __int64 v35; // [rsp+38h] [rbp-80h]
  __int64 v36; // [rsp+40h] [rbp-78h]
  __int64 v37; // [rsp+48h] [rbp-70h] BYREF
  __int64 v38; // [rsp+50h] [rbp-68h]
  __int64 v39; // [rsp+58h] [rbp-60h]
  __int64 v40; // [rsp+60h] [rbp-58h]
  int v41; // [rsp+C0h] [rbp+8h]
  unsigned int v42; // [rsp+C8h] [rbp+10h]
  int v43; // [rsp+D0h] [rbp+18h] BYREF
  int v44; // [rsp+D8h] [rbp+20h]

  v2 = *(_DWORD *)(a1 + 24);
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)a1;
  v6 = *(_DWORD *)(a1 + 32);
  v41 = v2 & 0x400000;
  *(_QWORD *)(a1 + 48) = 0LL;
  v39 = v4;
  v44 = v6;
  v40 = v5;
  if ( (v2 & 0x400000) != 0 )
    v42 = *(_DWORD *)(a1 + 28);
  else
    v42 = -1;
  v37 = -1LL;
  v9 = 48 * a2;
  v36 = 48 * a2;
  v38 = 0LL;
  v10 = 48 * a2 - 0x58000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  v35 = CurrentIrql;
  __writecr8(2uLL);
  v43 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v43);
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) );
    LOBYTE(CurrentIrql) = v35;
    v9 = v36;
  }
  v12 = CurrentIrql;
  while ( 1 )
  {
    if ( a2 > qword_1403CB780 || MmPhysicalMemoryBlock && (*(_QWORD *)(v9 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
      goto LABEL_89;
    if ( *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v10 + 40) >> 40) & 0x3FFLL)) != v5 )
      break;
    if ( (*(_BYTE *)(v10 + 34) & 7) == 5 )
    {
      if ( (*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL || v38 == v10 )
        goto LABEL_89;
      v13 = dword_1403CB6D8 & a2 | (((*(_QWORD *)(v10 + 40) >> 36) & 3) << byte_1403CB69A) | (*(_QWORD *)(v10 + 40) >> 58 << byte_1403CB699);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v12);
      MiDrainZeroLookasides(v5, v10, *(_QWORD *)(a1 + 16), v13);
      v38 = v10;
      MiLockPageInline(v10);
      v9 = v36;
    }
    else
    {
      if ( (unsigned int)MiIsPfnFileOnly(v10) == 1 )
        goto LABEL_89;
      if ( v15 > 1 )
      {
        if ( *(_QWORD *)(v4 + 16) && (v24 = *(_BYTE *)(v10 + 35), v24 >= 0) )
        {
          if ( v15 <= 4 )
          {
            if ( (v2 & 0x4000000) == 0 && *(__int64 *)(v10 + 8) >= 0 || (v2 & 0x200000) != 0 && (v24 & 0x40) != 0 )
              goto LABEL_89;
            v25 = MiTradeTransitionPage(v10, v12, v4, v42, v2, &v37);
            if ( v25 == 3 )
            {
              if ( *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v10 + 40) >> 40) & 0x3FFLL)) != v5 )
              {
LABEL_74:
                MiLockAndInsertPageInFreeList(v10);
                goto LABEL_91;
              }
              if ( v41 )
              {
                v30 = v10;
                goto LABEL_77;
              }
              goto LABEL_81;
            }
            if ( v25 != 2 )
              goto LABEL_91;
            goto LABEL_66;
          }
          if ( v15 != 6 )
            goto LABEL_89;
          v26 = v14 >> 54;
        }
        else
        {
          if ( v15 == 2 )
          {
            if ( *(_WORD *)(v10 + 32) )
              goto LABEL_89;
            if ( (unsigned int)MiReuseStandbyPage(v10) )
            {
              v3 = 1LL;
              MiAddMdlPageToTradeBlock(a1, a2, 1);
              goto LABEL_89;
            }
LABEL_88:
            MiReturnFreeZeroPage(v10, 0);
LABEL_89:
            if ( v12 != 17 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8(v12);
            }
            goto LABEL_91;
          }
          if ( v15 != 6 )
            goto LABEL_89;
          if ( (v16 & 0x10) != 0 )
            goto LABEL_89;
          if ( *(_WORD *)(v10 + 32) != 1 )
            goto LABEL_89;
          v26 = v14 >> 54;
          if ( (v26 & 7) == 2 )
            goto LABEL_89;
          if ( (*(_DWORD *)v10 & 1) == 0 )
            goto LABEL_89;
          v24 = *(_BYTE *)(v10 + 35);
          if ( (v24 & 8) != 0 )
            goto LABEL_89;
        }
        if ( (v2 & 0x200000) != 0 && (v24 & 0x40) != 0 )
          goto LABEL_89;
        if ( (v26 & 7) == 2 )
        {
          if ( v17 == 2 || (v2 & 8) != 0 )
            goto LABEL_89;
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v12);
          if ( (unsigned int)MiSwapStackPage(
                               v10,
                               (unsigned int *)v4,
                               *(unsigned int *)(a1 + 28),
                               (ULONG_PTR *)&v37,
                               &v34) )
            goto LABEL_79;
          if ( ((*(_QWORD *)(v10 + 40) >> 54) & 7) == 2 )
            goto LABEL_91;
        }
        else
        {
          active = MiActivePageClaimCandidate(v5, v10, 1LL);
          if ( active )
          {
            *(_QWORD *)(a1 + 48) = active;
            goto LABEL_89;
          }
          if ( (_BYTE)v35 == 2 || (v2 & 8) != 0 )
            goto LABEL_89;
          if ( (*(_QWORD *)(v10 + 40) & 0x200000000000000LL) != 0 )
            v28 = MiTrimSharedPage(v10, v12, v2);
          else
            v28 = MiStealPage(v10, v12, v2, (unsigned int *)v4, *(_DWORD *)(a1 + 28), &v37);
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v12);
          if ( !v28 )
            goto LABEL_91;
          if ( v28 != 2 )
          {
            if ( *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v10 + 40) >> 40) & 0x3FFLL)) != v5 )
              goto LABEL_74;
LABEL_79:
            *(_QWORD *)(v10 + 16) = ZeroPte;
            MiSetOriginalPtePfnFromFreeList(v10 + 16);
            v30 = v10;
            if ( v41 )
            {
LABEL_77:
              MiLockAndInsertPageInFreeList(v30);
            }
            else
            {
              _InterlockedOr(v33, 0);
              MiSetPfnTbFlushStamp(v10, KiTbFlushTimeStamp, 0);
            }
LABEL_81:
            v3 = 1LL;
            MiAddMdlPageToTradeBlock(a1, a2, 1);
            goto LABEL_91;
          }
        }
LABEL_66:
        v12 = MiLockPageInline(v10);
        v9 = v36;
      }
      else
      {
        v18 = MiFreeZeroPageSizeIndex(v10);
        v21 = v18;
        if ( v18 == -1 )
        {
          if ( v20 || (unsigned int)MiUnlinkFreeOrZeroedPage(a2, 0LL, 0, v19) )
          {
            v3 = 1LL;
            MiAddMdlPageToTradeBlock(a1, a2, 0);
            goto LABEL_89;
          }
          goto LABEL_88;
        }
        v22 = MiLargePageSizes[v18];
        if ( (v2 & 0x2000000) != 0 && v22 >= 0x200 || (v2 & 0x1000000) != 0 && v22 == 16 )
          goto LABEL_89;
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v12);
        if ( !v20 && a2 == (a2 & ~(v22 - 1)) && *(_QWORD *)(a1 + 16) >= v22 )
        {
          v23 = v22 + a2 - 1;
          if ( v23 <= *(_QWORD *)(a1 + 56) && (unsigned int)MiLargeFreePageToMdl(v23, v18, *(_QWORD *)(a1 + 64)) == 1 )
          {
            v3 = v22;
            if ( *(_QWORD *)(a1 + 64) && MiPfnZeroingNeeded(v10, v44) )
              *(_QWORD *)(v29 + 24) = 1LL;
            goto LABEL_91;
          }
        }
        if ( (unsigned int)MiDemoteLargeFreePage(a2, v21) != 1 )
          goto LABEL_91;
        v12 = MiLockPageInline(v10);
        v9 = v36;
        v4 = v39;
        v5 = v40;
      }
    }
  }
  v31 = MiPfnLargeBitSet(&MiSystemPartition, a2, 0x20000000000000LL);
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v12);
  if ( v31 != -1 )
    *(_QWORD *)(a1 + 48) = MiLargePageSizes[v31];
LABEL_91:
  result = v3;
  *(_QWORD *)(a1 + 40) = v37;
  return result;
}
