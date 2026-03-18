/*
 * XREFs of MiResolvePrivateZeroFault @ 0x1400464C0
 * Callers:
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiResolveDemandZeroFault @ 0x140044CE0 (MiResolveDemandZeroFault.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14001BE10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiInitializePageColorBase @ 0x14002A810 (MiInitializePageColorBase.c)
 *     MiCompletePrivateZeroFault @ 0x140046F90 (MiCompletePrivateZeroFault.c)
 *     MiGetPageChain @ 0x1400484F0 (MiGetPageChain.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiUpdatePageTableUseCount @ 0x1400666B8 (MiUpdatePageTableUseCount.c)
 *     MiGet64KPage @ 0x1400C4A90 (MiGet64KPage.c)
 *     MiAdvanceFaultList @ 0x14010A0F4 (MiAdvanceFaultList.c)
 *     MiComputeZeroClusterMaximum @ 0x14011BCB0 (MiComputeZeroClusterMaximum.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1401277C8 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiFreePageChain @ 0x14012903C (MiFreePageChain.c)
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiGetUsedPtesHandle @ 0x140228894 (MiGetUsedPtesHandle.c)
 *     MiGetClusterPage @ 0x14022EEDC (MiGetClusterPage.c)
 *     MiWaitForForkToComplete @ 0x14023027C (MiWaitForForkToComplete.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiResolvePrivateZeroFault(int *a1)
{
  unsigned __int64 v1; // r11
  int *v2; // r12
  int v3; // edx
  __int64 v4; // rbx
  unsigned int v5; // ecx
  _KPROCESS *Process; // r8
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r13
  __int64 v10; // r14
  unsigned __int64 v11; // r15
  __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  int v14; // esi
  __int64 v15; // rax
  int v16; // ebx
  unsigned int v17; // edx
  __int64 ClusterPage; // rax
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // r10
  _QWORD *v21; // r9
  __int64 v22; // rax
  int v23; // r10d
  __int64 *v24; // r9
  __int64 PteShadow; // r8
  bool v26; // zf
  unsigned __int64 v27; // r8
  _WORD *v28; // rax
  char v29; // cl
  int v30; // r8d
  unsigned int v31; // esi
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 DemandZeroPte; // rbx
  LONG *v37; // rsi
  __int64 v38; // r13
  LONG *v39; // rax
  __int64 v40; // r8
  unsigned __int64 v41; // r9
  __int64 v42; // r11
  unsigned __int64 v43; // rdx
  LONG *v44; // rcx
  __int64 v45; // rdi
  __int64 PageChain; // rax
  unsigned __int8 CurrentIrql; // cl
  unsigned int v48; // edi
  signed __int32 v49; // edx
  signed __int32 v50; // eax
  unsigned __int64 v51; // r10
  __int64 v52; // r9
  _QWORD *v53; // r8
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned int v56; // edx
  unsigned __int64 v57; // rcx
  __int64 UsedPtesHandle; // rax
  __int64 v59; // rbx
  _QWORD *v60; // r8
  __int64 v61; // rax
  __int64 v62; // [rsp+40h] [rbp-C0h]
  _BYTE v63[8]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v64; // [rsp+50h] [rbp-B0h]
  unsigned int v65; // [rsp+58h] [rbp-A8h]
  __int64 v66; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v67; // [rsp+68h] [rbp-98h]
  int v68; // [rsp+70h] [rbp-90h]
  int v69; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v70; // [rsp+78h] [rbp-88h]
  int *v71; // [rsp+80h] [rbp-80h]
  _KPROCESS *v72; // [rsp+88h] [rbp-78h]
  _WORD *v73; // [rsp+90h] [rbp-70h] BYREF
  __int16 v74; // [rsp+98h] [rbp-68h]
  unsigned __int16 v75; // [rsp+9Ah] [rbp-66h]
  _QWORD v76[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v77; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD *v78; // [rsp+B8h] [rbp-48h]
  __int64 v79; // [rsp+C0h] [rbp-40h]
  __int64 v80; // [rsp+C8h] [rbp-38h]
  __int64 v81; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v82; // [rsp+110h] [rbp+10h]
  unsigned __int64 v83; // [rsp+118h] [rbp+18h]
  unsigned __int64 v84; // [rsp+120h] [rbp+20h]
  __int64 v85; // [rsp+128h] [rbp+28h]
  unsigned __int64 v86; // [rsp+130h] [rbp+30h]
  unsigned __int64 v87; // [rsp+138h] [rbp+38h]
  unsigned __int64 v88; // [rsp+140h] [rbp+40h]
  __int64 v89; // [rsp+148h] [rbp+48h]
  void *retaddr; // [rsp+188h] [rbp+88h]

  v1 = *((_QWORD *)a1 + 1);
  v2 = a1;
  v3 = *a1;
  v4 = *((_QWORD *)a1 + 7);
  v64 = v1;
  v71 = a1;
  if ( (v3 & 2) != 0 )
  {
    v5 = a1[8];
    if ( v5 >> 3 == 3 )
    {
      if ( (v5 & 7) == 0 )
        goto LABEL_9;
    }
    else if ( v5 >> 3 != 1 )
    {
      goto LABEL_9;
    }
    if ( (v3 & 4) != 0 )
      goto LABEL_5;
LABEL_9:
    MiAdvanceFaultList(v4);
    return 0LL;
  }
LABEL_5:
  if ( (v3 & 8) != 0 && (*(_DWORD *)(v4 + 48) & 8) != 0 )
    return 3221225495LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v67 = *((_QWORD *)v2 + 6);
  v72 = Process;
  v70 = *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(v67 + 172));
  if ( (v3 & 0x20) != 0 && Process[1].Affinity.Bitmap[10] )
  {
    if ( (unsigned int)MiWaitForForkToComplete(Process, *((unsigned __int8 *)v2 + 40)) == 1 )
      return 0LL;
    v1 = v64;
  }
  v8 = 1LL;
  v9 = -1LL;
  v66 = 1LL;
  v10 = *((_QWORD *)v2 + 8);
  v11 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = 0LL;
  v65 = v2[11];
  v68 = 0;
  v62 = 0LL;
  v13 = 0xFFFFF6FB7DBED000uLL;
  if ( v10 )
  {
    v14 = *v2 & 5;
    if ( v14 )
    {
      v15 = MiComputeZeroClusterMaximum(v4, v10);
      v1 = v64;
      v9 = v15;
      v16 = 1;
    }
    else
    {
      v16 = v68;
    }
    v17 = *(_DWORD *)(v10 + 48);
    v65 = (v17 >> 8) & 0x3F;
    if ( (v17 & 0x108000) == 0x108000 )
    {
      ClusterPage = MiGetClusterPage(v10, v1, v2[8], v2[9], (__int64)v63);
      v62 = ClusterPage;
      v12 = ClusterPage;
      if ( ClusterPage )
      {
        v1 = v64;
        if ( (*(_QWORD *)(ClusterPage + 24) & 0xFFFFFFFFFLL) == 0xFFFFFFFFFLL )
        {
          v66 = 1LL;
          if ( v63[0] == 1 )
            *v2 |= 4u;
        }
        else
        {
          v1 = v64 & 0xFFFFFFFFFFFF0000uLL;
          v8 = 16LL;
          v66 = 16LL;
          v19 = ((v64 & 0xFFFFFFFFFFFF0000uLL) >> 9) & 0x7FFFFFFFF8LL;
          v64 = v1;
          *((_QWORD *)v2 + 1) = v1;
          v11 = v19 - 0x98000000000LL;
        }
LABEL_48:
        if ( !v16 || v12 )
        {
LABEL_68:
          v13 = 0xFFFFF6FB7DBED000uLL;
          goto LABEL_69;
        }
LABEL_50:
        v8 = 1LL;
        if ( v9 > 1 )
        {
          v23 = v2[9];
          v24 = (__int64 *)(v11 + 8);
          do
          {
            PteShadow = *v24;
            if ( (unsigned __int64)v24 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v24 <= 0xFFFFF6FB7DBED7F8uLL )
              PteShadow = MiReadPteShadow(v24, *v24);
            if ( v23 )
            {
              if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(PteShadow) )
                break;
              v26 = v23 == ((v27 >> 5) & 0x1F);
            }
            else
            {
              v26 = PteShadow == 0;
            }
            if ( !v26 )
              break;
            ++v8;
            ++v24;
          }
          while ( v8 < v9 );
          v2 = v71;
          v12 = v62;
        }
        if ( v16 == 2 )
        {
          if ( v8 == v9 )
          {
            MiInitializePageColorBase(v67, v65, (__int64)&v73);
            v28 = v73;
            v29 = byte_140388501;
            v30 = v75;
            v31 = v75;
            ++*v73;
            v32 = v30 | (unsigned int)(unsigned __int16)(v74 & *v28);
            v33 = (unsigned int)v2[8];
            v65 = v31 >> v29;
            v62 = MiGet64KPage(v70, v31 >> v29, v33, v32);
            v12 = v62;
            if ( v62 )
              *v2 |= 0x40u;
          }
          else
          {
            v8 = 1LL;
          }
        }
        v1 = v64;
        v66 = v8;
        goto LABEL_68;
      }
    }
    else
    {
      if ( v14
        || (v11 & 0x7F) != 0
        || (v17 & 0x8000) == 0
        || (v17 & 7) == 4
        || v2[9]
        || v1 < ((*(unsigned int *)(v10 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) + 16) << 12
        || (v11 & 0xFFF) == 0 )
      {
        v12 = 0LL;
        goto LABEL_48;
      }
      if ( v1 >= 0xFFFFF68000000000uLL && v1 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v12 = 0LL;
        goto LABEL_48;
      }
      v20 = 0LL;
      v21 = (_QWORD *)(v11 - 8);
      do
      {
        v22 = *v21;
        if ( (unsigned __int64)v21 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v21 <= 0xFFFFF6FB7DBED7F8uLL )
          LOBYTE(v22) = MiReadPteShadow(v21, *v21);
        if ( (v22 & 1) == 0 )
          break;
        if ( (v22 & 0x20) == 0 )
          break;
        ++v20;
        --v21;
      }
      while ( v20 < 0x10 );
      v2 = v71;
      if ( v20 != 16 )
      {
        v12 = 0LL;
        goto LABEL_48;
      }
      v76[1] = 0x10000LL;
      v77 = 0;
      v76[0] = v1 & 0xFFFFFFFFFFFFF000uLL;
      v79 = 1LL;
      v78 = v76;
      v80 = 0LL;
      v81 = 0LL;
      v12 = 0LL;
      v9 = MiComputeZeroClusterMaximum(&v77, v10);
      if ( v9 >= 0x10 )
      {
        v16 = 2;
        v9 = 16LL;
        goto LABEL_50;
      }
    }
    v1 = v64;
    goto LABEL_48;
  }
LABEL_69:
  v34 = *((_QWORD *)v2 + 9);
  if ( v34 )
    v70 = *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v34 + 544) + 1452LL));
  LODWORD(v35) = 4;
  if ( v12 )
    goto LABEL_135;
  DemandZeroPte = 0LL;
  v37 = &dword_140389780;
  if ( v8 != 1 || (*v2 & 0x20) == 0 || v1 >= 0xFFFFF68000000000uLL && v1 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v38 = v67;
LABEL_94:
    v45 = v38;
    goto LABEL_95;
  }
  v38 = v67;
  v39 = &dword_140389780;
  if ( (*(_BYTE *)(v67 + 192) & 7) != 2 )
    v39 = (LONG *)(v67 + 200);
  if ( (*v39 & 0x40000000) == 0 )
    goto LABEL_94;
  DemandZeroPte = *(_QWORD *)v11;
  if ( v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    DemandZeroPte = MiReadPteShadow(v11, *(_QWORD *)v11);
    v13 = 0xFFFFF6FB7DBED000uLL;
  }
  if ( !v2[9] )
  {
    DemandZeroPte = MiMakeDemandZeroPte((unsigned int)v2[8]);
    *(_QWORD *)v11 = DemandZeroPte;
    if ( v11 >= v43 && v11 <= v41 )
      MiWritePteShadow(v11, DemandZeroPte);
    MiUpdatePageTableUseCount(v42, 1LL, v40, v41);
    __incgsdword(0x2E9Cu);
    v2[9] = v2[8];
  }
  LOBYTE(v13) = 2;
  MiPreUnlockWorkingSetExclusive(v38, v13);
  v44 = &dword_140389780;
  if ( (*(_BYTE *)(v38 + 192) & 7) != 2 )
    v44 = (LONG *)(v38 + 200);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v44, retaddr);
  else
    *v44 = 0;
  __writecr8(2uLL);
  v45 = 0LL;
LABEL_95:
  PageChain = MiGetPageChain(v70, v45, v65, v2[8], 66, -1LL, (__int64)&v66);
  v62 = PageChain;
  if ( v45 )
  {
    v12 = PageChain;
LABEL_132:
    if ( !v12 )
      return 3221225495LL;
    v8 = v66;
LABEL_135:
    if ( !v2[9] )
    {
      v56 = 0;
      v57 = v64;
      while ( v57 > 0x7FFFFFFEFFFFLL )
      {
        ++v56;
        v57 = (__int64)(v57 << 25) >> 16;
        if ( v56 >= 3 )
          goto LABEL_153;
      }
      UsedPtesHandle = MiGetUsedPtesHandle(v64);
      v69 = 0;
      v59 = UsedPtesHandle;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v59 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v69);
        while ( *(__int64 *)(v59 + 24) < 0 );
      }
      *(_QWORD *)(v59 + 16) ^= ((unsigned int)*(_QWORD *)(v59 + 16) ^ ((unsigned int)*(_QWORD *)(v59 + 16)
                                                                     + ((unsigned __int16)v66 << 16))) & 0x3FF0000;
      _InterlockedAnd64((volatile signed __int64 *)(v59 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (unsigned int)v66 <= 1
        && ((__int64)(*(_QWORD *)(v59 + 8) | 0x8000000000000000uLL) >> 47 == -1
         || (__int64)(*(_QWORD *)(v59 + 8) | 0x8000000000000000uLL) >> 47 == 0) )
      {
        v86 = (((*(_QWORD *)(v59 + 8) | 0x8000000000000000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v87 = ((v86 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v88 = ((v87 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v89 = ((v88 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        do
        {
          v35 = (unsigned int)(v35 - 1);
          v60 = (_QWORD *)*(&v86 + v35);
          v61 = *v60;
          if ( (unsigned __int64)v60 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v60 <= 0xFFFFF6FB7DBED7F8uLL )
            LOBYTE(v61) = MiReadPteShadow(*(&v86 + v35), *v60);
        }
        while ( (v61 & 1) != 0 && (v61 & 0x80u) == 0LL && (_DWORD)v35 );
        v2 = v71;
        v12 = v62;
      }
LABEL_153:
      __incgsdword(0x2E9Cu);
      v8 = v66;
    }
    return MiCompletePrivateZeroFault(v2, v12, v8);
  }
  if ( (*(_BYTE *)(v38 + 192) & 7) != 2 )
    v37 = (LONG *)(v38 + 200);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v37, CurrentIrql);
  }
  else
  {
    v48 = 0;
    if ( _interlockedbittestandset(v37, 0x1Fu) )
      v48 = ExpWaitForSpinLockExclusiveAndAcquire(v37, CurrentIrql);
    v49 = *v37;
    while ( (v49 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v49 & 0x40000000) == 0 )
      {
        v50 = _InterlockedCompareExchange(v37, v49 | 0x40000000, v49);
        v26 = v49 == v50;
        v49 = v50;
        if ( !v26 )
          continue;
      }
      if ( (++v48 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v48);
      v49 = *v37;
    }
  }
  v37[1] = 0;
  v12 = v62;
  if ( !v62 )
    return 3221225495LL;
  if ( (__int64)v11 >> 47 == -1 || (__int64)v11 >> 47 == 0 )
  {
    v82 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v83 = ((v82 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v84 = ((v83 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v51 = 0xFFFFF6FB7DBED000uLL;
    v85 = ((v84 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    LODWORD(v52) = 4;
    while ( 1 )
    {
      v52 = (unsigned int)(v52 - 1);
      v53 = (_QWORD *)*(&v82 + v52);
      v54 = *v53;
      if ( (unsigned __int64)v53 >= v51 && (unsigned __int64)v53 <= 0xFFFFF6FB7DBED7F8uLL )
        LOBYTE(v54) = MiReadPteShadow(*(&v82 + v52), *v53);
      if ( (v54 & 1) == 0 )
        break;
      if ( (v54 & 0x80u) != 0LL )
      {
        if ( v11 >= 0xFFFFF68000000000uLL && v11 <= 0xFFFFF6FFFFFFFFFFuLL )
          break;
LABEL_123:
        v55 = *(_QWORD *)v11;
        if ( v11 >= v51 && v11 <= 0xFFFFF6FB7DBED7F8uLL )
          v55 = MiReadPteShadow(v11, *(_QWORD *)v11);
        if ( v55 == DemandZeroPte
          && ((*v2 & 0x20) == 0
           || !v72[1].Affinity.Bitmap[10]
           || (unsigned int)MiWaitForForkToComplete(v72, *((unsigned __int8 *)v2 + 40)) != 1) )
        {
          goto LABEL_132;
        }
        break;
      }
      if ( !(_DWORD)v52 )
        goto LABEL_123;
    }
  }
  MiFreePageChain(v62);
  return 3221226548LL;
}
