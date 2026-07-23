/*
 * XREFs of MiResolvePrivateZeroFault @ 0x1400BAF20
 * Callers:
 *     MiResolveDemandZeroFault @ 0x1400BA780 (MiResolveDemandZeroFault.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiComputeZeroClusterMaximum @ 0x140073568 (MiComputeZeroClusterMaximum.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14007C3EC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiUpdatePageTableUseCount @ 0x1400A56C0 (MiUpdatePageTableUseCount.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B7600 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiGetPageChain @ 0x1400BB6F0 (MiGetPageChain.c)
 *     MiCompletePrivateZeroFault @ 0x1400BC2F0 (MiCompletePrivateZeroFault.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiAdvanceFaultList @ 0x1401084A0 (MiAdvanceFaultList.c)
 *     MiReleaseFreshPage @ 0x14010ADC8 (MiReleaseFreshPage.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     HvlNotifyLongSpinWait @ 0x1401E5050 (HvlNotifyLongSpinWait.c)
 *     MiGetUsedPtesHandle @ 0x14021BF88 (MiGetUsedPtesHandle.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetClusterPage @ 0x140222084 (MiGetClusterPage.c)
 *     MiWaitForForkToComplete @ 0x140223828 (MiWaitForForkToComplete.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiResolvePrivateZeroFault(int *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r12
  __int64 v6; // rbx
  int v7; // ecx
  __int64 v8; // rdx
  unsigned int v9; // eax
  __int64 v11; // r13
  _KPROCESS *Process; // rax
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rdi
  __int64 v15; // r15
  __int64 v16; // r14
  __int64 v17; // r15
  int v18; // ecx
  __int64 ClusterPage; // rax
  __int64 v20; // r10
  __int64 v21; // rax
  __int64 v22; // r10
  int v23; // r11d
  bool v24; // zf
  int v25; // r11d
  __int64 v26; // rax
  __int64 v27; // r14
  int v28; // ebp
  __int64 v29; // rbx
  LONG *v30; // r14
  LONG *v31; // rax
  __int64 v32; // rdx
  __int64 DemandZeroPte; // rax
  __int64 v34; // rcx
  LONG *v35; // rcx
  __int64 v36; // rdi
  __int64 PageChain; // rax
  unsigned __int8 CurrentIrql; // cl
  unsigned int v39; // edi
  signed __int32 v40; // edx
  signed __int32 v41; // eax
  int v42; // r9d
  char v43; // al
  unsigned __int64 v44; // r10
  unsigned __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 UsedPtesHandle; // rax
  __int64 v48; // rbx
  char v49; // al
  _BYTE v50[8]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v51; // [rsp+48h] [rbp-A0h] BYREF
  int v52; // [rsp+50h] [rbp-98h]
  __int64 v53; // [rsp+58h] [rbp-90h]
  int v54; // [rsp+60h] [rbp-88h] BYREF
  __int64 v55; // [rsp+68h] [rbp-80h]
  _KPROCESS *v56; // [rsp+70h] [rbp-78h]
  unsigned __int64 v57; // [rsp+78h] [rbp-70h]
  unsigned __int64 v58; // [rsp+80h] [rbp-68h]
  unsigned __int64 v59; // [rsp+88h] [rbp-60h]
  __int64 v60; // [rsp+90h] [rbp-58h]
  unsigned __int64 v61; // [rsp+98h] [rbp-50h]
  unsigned __int64 v62; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v63; // [rsp+A8h] [rbp-40h]
  __int64 v64; // [rsp+B0h] [rbp-38h]
  void *retaddr; // [rsp+E8h] [rbp+0h]

  v4 = *((_QWORD *)a1 + 1);
  v6 = *((_QWORD *)a1 + 7);
  v7 = *a1;
  if ( (v7 & 2) != 0 )
  {
    if ( ((v8 = (unsigned int)a1[8], v9 = (unsigned int)a1[8] >> 3, v9 != 3) || (v8 & 7) == 0) && v9 != 1
      || (v7 & 4) == 0 )
    {
      MiAdvanceFaultList(v6, v8, a3);
      return 0LL;
    }
  }
  v11 = *((_QWORD *)a1 + 6);
  Process = KeGetCurrentThread()->ApcState.Process;
  v56 = Process;
  if ( (v7 & 0x20) != 0
    && Process[1].Affinity.Bitmap[10]
    && (unsigned int)MiWaitForForkToComplete(Process, *((unsigned __int8 *)a1 + 40)) == 1 )
  {
    return 0LL;
  }
  v13 = -1LL;
  v14 = 1LL;
  v15 = (*((_QWORD *)a1 + 1) >> 9) & 0x7FFFFFFFF8LL;
  v51 = 1LL;
  v16 = *((_QWORD *)a1 + 8);
  v17 = v15 - 0x98000000000LL;
  v52 = a1[11];
  v53 = 0LL;
  if ( v16 )
  {
    if ( (*a1 & 5) != 0 )
      v13 = MiComputeZeroClusterMaximum(v6, v16);
    v18 = *(_DWORD *)(v16 + 48) & 0x108000;
    v52 = (*(_DWORD *)(v16 + 48) >> 8) & 0x3F;
    if ( v18 == 1081344
      && (ClusterPage = MiGetClusterPage(v16, v4, a1[8], a1[9], (__int64)v50), (v53 = ClusterPage) != 0) )
    {
      if ( (*(_QWORD *)(ClusterPage + 24) & 0xFFFFFFFFFLL) == 0xFFFFFFFFFLL )
      {
        v51 = 1LL;
        if ( v50[0] == 1 )
          *a1 |= 4u;
      }
      else
      {
        v4 &= 0xFFFFFFFFFFFF0000uLL;
        v14 = 16LL;
        v51 = 16LL;
        *((_QWORD *)a1 + 1) = v4;
        v17 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
    }
    else if ( (*a1 & 1) != 0 || (*a1 & 4) != 0 )
    {
      if ( v13 > 1 )
      {
        v20 = v17 + 8;
        do
        {
          v21 = MI_READ_PTE_LOCK_FREE(v20);
          a4 = v21;
          if ( v23 )
          {
            if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v21) )
              break;
            a4 = (a4 >> 5) & 0x1F;
            v24 = v25 == (_DWORD)a4;
          }
          else
          {
            v24 = v21 == 0;
          }
          if ( !v24 )
            break;
          ++v14;
          v20 = v22 + 8;
        }
        while ( v14 < v13 );
      }
      v51 = v14;
    }
  }
  v24 = a1[9] == 0;
  v55 = *(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(v11 + 172));
  if ( !v24
    && (*a1 & 0x20) == 0
    && (*(_BYTE *)(v11 + 192) & 7) != 1
    && (v4 < 0xFFFF800000000000uLL || byte_14036D700[((v4 >> 39) & 0x1FF) - 256] != 12)
    && (!PsNtosImageBase
     || (v4 < (unsigned __int64)PsNtosImageBase || v4 >= PsNtosImageEnd)
     && (v4 < (unsigned __int64)PsHalImageBase || v4 >= PsHalImageEnd)) )
  {
    v26 = *((_QWORD *)a1 + 9);
    if ( v26 )
      v55 = *(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v26 + 544) + 1452LL));
  }
  v27 = v53;
  v28 = 4;
  if ( v53 )
    goto LABEL_96;
  v29 = 0LL;
  v30 = &dword_14036D4C0;
  if ( v14 != 1 || (*a1 & 0x20) == 0 || v4 >= 0xFFFFF68000000000uLL && v4 <= 0xFFFFF6FFFFFFFFFFuLL )
    goto LABEL_61;
  v31 = &dword_14036D4C0;
  if ( (*(_BYTE *)(v11 + 192) & 7) != 2 )
    v31 = (LONG *)(v11 + 200);
  if ( (*v31 & 0x40000000) != 0 )
  {
    v29 = MI_READ_PTE_LOCK_FREE(v17);
    if ( !a1[9] )
    {
      DemandZeroPte = MiMakeDemandZeroPte((unsigned int)a1[8]);
      *(_QWORD *)v17 = DemandZeroPte;
      v29 = DemandZeroPte;
      if ( (unsigned int)MiPteInShadowRange(v17) )
        MiWritePteShadow(v34);
      MiUpdatePageTableUseCount(v4, 1u);
      __incgsdword(0x2E9Cu);
      a1[9] = a1[8];
    }
    LOBYTE(v32) = 2;
    MiPreUnlockWorkingSetExclusive(v11, v32);
    v35 = &dword_14036D4C0;
    if ( (*(_BYTE *)(v11 + 192) & 7) != 2 )
      v35 = (LONG *)(v11 + 200);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v35, retaddr);
    else
      *v35 = 0;
    __writecr8(2uLL);
    v36 = 0LL;
  }
  else
  {
LABEL_61:
    v36 = v11;
  }
  PageChain = MiGetPageChain(v55, v36, v52, a1[8], 66, -1LL, (__int64)&v51);
  v53 = PageChain;
  if ( v36 )
  {
    v27 = PageChain;
LABEL_93:
    if ( !v27 )
      return 3221225495LL;
    v14 = v51;
LABEL_96:
    if ( !a1[9] )
    {
      v45 = v4;
      v46 = 0LL;
      while ( v45 > 0x7FFFFFFEFFFFLL )
      {
        v46 = (unsigned int)(v46 + 1);
        v45 = (__int64)(v45 << 25) >> 16;
        if ( (unsigned int)v46 >= 3 )
          goto LABEL_110;
      }
      UsedPtesHandle = MiGetUsedPtesHandle(v4, v46, 0x7FFFFFFEFFFFLL, a4);
      v54 = 0;
      v48 = UsedPtesHandle;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v48 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v54);
        while ( *(__int64 *)(v48 + 24) < 0 );
      }
      *(_QWORD *)(v48 + 16) ^= ((unsigned int)*(_QWORD *)(v48 + 16) ^ ((unsigned int)*(_QWORD *)(v48 + 16)
                                                                     + ((unsigned __int16)v51 << 16))) & 0x3FF0000;
      _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (unsigned int)v51 <= 1
        && ((__int64)(*(_QWORD *)(v48 + 8) | 0x8000000000000000uLL) >> 47 == -1
         || (__int64)(*(_QWORD *)(v48 + 8) | 0x8000000000000000uLL) >> 47 == 0) )
      {
        v61 = (((*(_QWORD *)(v48 + 8) | 0x8000000000000000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v62 = ((v61 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v63 = ((v62 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v64 = ((v63 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        do
          v49 = MI_READ_PTE_LOCK_FREE(*(&v61 + (unsigned int)--v28));
        while ( (v49 & 1) != 0 && v49 >= 0 && v28 );
      }
LABEL_110:
      __incgsdword(0x2E9Cu);
      v14 = v51;
    }
    return MiCompletePrivateZeroFault(a1, v27, v14);
  }
  if ( (*(_BYTE *)(v11 + 192) & 7) != 2 )
    v30 = (LONG *)(v11 + 200);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v30, CurrentIrql);
  }
  else
  {
    v39 = 0;
    if ( _interlockedbittestandset(v30, 0x1Fu) )
      v39 = ExpWaitForSpinLockExclusiveAndAcquire(v30, CurrentIrql);
    v40 = *v30;
    while ( (v40 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v40 & 0x40000000) == 0 )
      {
        v41 = _InterlockedCompareExchange(v30, v40 | 0x40000000, v40);
        v24 = v40 == v41;
        v40 = v41;
        if ( !v24 )
          continue;
      }
      if ( (++v39 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v39);
      v40 = *v30;
    }
  }
  v30[1] = 0;
  v27 = v53;
  if ( !v53 )
    return 3221225495LL;
  if ( v17 >> 47 == -1 || v17 >> 47 == 0 )
  {
    v57 = (((unsigned __int64)v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v58 = ((v57 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v59 = ((v58 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v42 = 4;
    v60 = ((v59 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    while ( 1 )
    {
      v43 = MI_READ_PTE_LOCK_FREE(*(&v57 + (unsigned int)(v42 - 1)));
      if ( (v43 & 1) == 0 )
        break;
      if ( v43 < 0 )
      {
        if ( v17 >= v44 && (unsigned __int64)v17 <= 0xFFFFF6FFFFFFFFFFuLL )
          break;
LABEL_87:
        if ( MI_READ_PTE_LOCK_FREE(v17) == v29
          && ((*a1 & 0x20) == 0
           || !v56[1].Affinity.Bitmap[10]
           || (unsigned int)MiWaitForForkToComplete(v56, *((unsigned __int8 *)a1 + 40)) != 1) )
        {
          goto LABEL_93;
        }
        break;
      }
      if ( !v42 )
        goto LABEL_87;
    }
  }
  MiReleaseFreshPage(v27);
  return 3221226548LL;
}
