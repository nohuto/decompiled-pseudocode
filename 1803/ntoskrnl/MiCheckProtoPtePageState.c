/*
 * XREFs of MiCheckProtoPtePageState @ 0x140031B60
 * Callers:
 *     MiWalkEntireImage @ 0x140030B50 (MiWalkEntireImage.c)
 *     MmPurgeSection @ 0x1400542A0 (MmPurgeSection.c)
 *     MiFlushSectionInternal @ 0x1401187E0 (MiFlushSectionInternal.c)
 *     MiIsSubsectionClean @ 0x14024F640 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x14024FA3C (MiPurgeSubsection.c)
 *     MiPurgeFileOnlyPfn @ 0x14025E548 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiAreChargesNeededToLockPage @ 0x140031FE0 (MiAreChargesNeededToLockPage.c)
 *     MiIsPfnCommitNotCharged @ 0x140032060 (MiIsPfnCommitNotCharged.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiWriteValidPteVolatile @ 0x1401259B0 (MiWriteValidPteVolatile.c)
 *     MiChargePartitionResidentAvailable @ 0x140134FF4 (MiChargePartitionResidentAvailable.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiInvalidPteConforms @ 0x1401A6560 (MiInvalidPteConforms.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 __fastcall MiCheckProtoPtePageState(unsigned __int64 a1, unsigned __int8 *a2)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // r10
  char v23; // di
  int IsPfnCommitNotCharged; // eax
  char v25; // r11
  __int64 v26; // r10
  ULONG_PTR *v27; // rsi
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v30; // ett
  unsigned __int8 v31; // di
  unsigned __int64 v32; // rsi
  char i; // al
  char v34; // al
  __int64 v35; // rdx
  unsigned __int64 v36; // r8
  __int64 v37; // rax
  char v38; // r8
  _QWORD v40[9]; // [rsp+20h] [rbp-48h] BYREF
  int v41; // [rsp+80h] [rbp+18h] BYREF
  int v42; // [rsp+88h] [rbp+20h] BYREF

  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          v5 = MI_READ_PTE_LOCK_FREE(v4);
          v40[0] = v5;
          v9 = v5;
          if ( (v5 & 1) != 0 )
            break;
          if ( (v5 & 0x400) != 0 || (v5 & 0x800) == 0 )
            goto LABEL_69;
          if ( (unsigned int)MiInvalidPteConforms(v5) )
          {
            v11 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(v40);
            goto LABEL_20;
          }
        }
        if ( (v5 & 0x200) != 0 )
          goto LABEL_69;
        if ( (unsigned __int64)v40 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)v40 <= v8
          && (unsigned int)MiPteHasShadow(v40, v6, v7, v5)
          && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
        {
          v10 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( !v10 )
          {
            v11 = (v40[0] >> 12) & 0xFFFFFFFFFLL;
            continue;
          }
          v12 = *(_QWORD *)(v10 + 8 * (((unsigned __int64)v40 >> 3) & 0x1FF));
          if ( (v12 & 0x20) != 0 )
            v9 |= 0x20uLL;
          if ( (v12 & 0x42) != 0 )
            v9 |= 0x42uLL;
        }
        v11 = (v9 >> 12) & 0xFFFFFFFFFLL;
LABEL_20:
        ;
      }
      while ( !(unsigned int)MiIsPfnInline(v11) );
      v15 = v14 + 48 * v13;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v41 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v41);
        while ( *(__int64 *)(v15 + 24) < 0 );
      }
      *a2 = CurrentIrql;
      v17 = MI_READ_PTE_LOCK_FREE(v4);
      if ( v17 == v40[0] )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
    }
    if ( (v17 & 1) != 0 )
      break;
    if ( (*(_BYTE *)(v15 + 34) & 7u) < 6 )
      goto LABEL_68;
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    MmAccessFault(2uLL, a1, 0, 0LL);
  }
  if ( (*(_QWORD *)(v15 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
  {
LABEL_68:
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
LABEL_69:
    *a2 = 17;
    return 0LL;
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v15) )
    goto LABEL_46;
  v22 = *(_QWORD *)(v15 + 40);
  if ( (v22 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v15 + 16) & 0x400LL) != 0 )
  {
    v23 = 1;
  }
  else
  {
    IsPfnCommitNotCharged = MiIsPfnCommitNotCharged(v15, v18);
    v23 = v25;
    if ( IsPfnCommitNotCharged )
      v23 = 1;
  }
  v26 = (v22 >> 40) & 0x3FF;
  v27 = *(ULONG_PTR **)(qword_1403CBD88 + 8 * v26);
  if ( v23 && !(unsigned int)MiChargeCommit(*(_QWORD *)(qword_1403CBD88 + 8 * v26), 1LL, 4LL, v21) )
    goto LABEL_47;
  v20 = 0xFFFFFFFFLL;
  if ( v27 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    while ( CachedResidentAvailable )
    {
      if ( CachedResidentAvailable == -1 )
        break;
      v19 = (unsigned int)(CachedResidentAvailable - 1);
      v30 = CachedResidentAvailable;
      CachedResidentAvailable = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                  v19,
                                  CachedResidentAvailable);
      if ( v30 == CachedResidentAvailable )
        goto LABEL_46;
    }
  }
  if ( (unsigned int)MiChargePartitionResidentAvailable(v27, 1LL, 0xFFFFFFFFLL, v21) )
  {
LABEL_46:
    ++*(_WORD *)(v15 + 32);
  }
  else if ( v23 )
  {
    MiReturnCommit((__int64)v27, 1uLL);
  }
LABEL_47:
  v31 = *a2;
  v32 = *(_QWORD *)(v15 + 8) | 0x8000000000000000uLL;
  for ( i = *(_BYTE *)(v15 + 34); (i & 0x20) != 0; i = *(_BYTE *)(v15 + 34) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v31 != 17 )
      __writecr8(v31);
    v34 = *(_BYTE *)(v15 + 34);
    v42 = 0;
    if ( (v34 & 0x20) != 0 )
    {
      do
        KeYieldProcessorEx(&v42);
      while ( (*(_BYTE *)(v15 + 34) & 0x20) != 0 );
    }
    MiLockPageInline(v15);
  }
  *(_BYTE *)(v15 + 34) = i | 0x20;
  if ( (*(_QWORD *)(v15 + 24) & 0x4000000000000000LL) == 0 )
  {
    v35 = *(_QWORD *)v32;
    if ( v32 >= 0xFFFFF6FB7DBED000uLL
      && v32 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v19, v35, v20, v21)
      && (v35 & 1) != 0
      && ((v35 & 0x20) == 0 || (v35 & 0x42) == 0) )
    {
      v36 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v36 )
      {
        v37 = *(_QWORD *)(v36 + 8 * ((v32 >> 3) & 0x1FF));
        v38 = v35 | 0x20;
        if ( (v37 & 0x20) == 0 )
          v38 = v35;
        LOBYTE(v35) = v38;
        if ( (v37 & 0x42) != 0 )
          LOBYTE(v35) = v38 | 0x42;
      }
    }
    if ( (v35 & 0x20) == 0 )
      MiWriteValidPteVolatile(v32, 1LL, 0LL);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v15;
}
