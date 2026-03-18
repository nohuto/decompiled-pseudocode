/*
 * XREFs of MiQueryAddressState @ 0x1400D1AC0
 * Callers:
 *     MiAllowProtectionChange @ 0x14007D578 (MiAllowProtectionChange.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiQueryAddressSpan @ 0x1400D1790 (MiQueryAddressSpan.c)
 *     MiComparePteProtections @ 0x14017C710 (MiComparePteProtections.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiReduceWs @ 0x14007F54C (MiReduceWs.c)
 *     MiLocatePagefileSubsection @ 0x140099578 (MiLocatePagefileSubsection.c)
 *     ExpAcquireSpinLockExclusive @ 0x14009B290 (ExpAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiLockWorkingSetShared @ 0x1400A7E80 (MiLockWorkingSetShared.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400B2E80 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiGetProtoPteAddress @ 0x1400BD630 (MiGetProtoPteAddress.c)
 *     MiGetNextPageTable @ 0x1400D2560 (MiGetNextPageTable.c)
 *     MiGetPageProtection @ 0x1400D2870 (MiGetPageProtection.c)
 *     MiVadPureReserve @ 0x1400D2C90 (MiVadPureReserve.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiAgeWorkingSet @ 0x1400D81E0 (MiAgeWorkingSet.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     MiIsPrototypePteVadLookup @ 0x14017CEE4 (MiIsPrototypePteVadLookup.c)
 *     MiForcedTrim @ 0x140214F8C (MiForcedTrim.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSharedProtos @ 0x140221220 (MiGetSharedProtos.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14025C760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14025C84C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiQueryAddressState(
        unsigned __int64 a1,
        unsigned __int8 a2,
        ULONG_PTR a3,
        __int64 a4,
        unsigned int a5,
        unsigned __int64 *a6,
        int *a7,
        __int64 *a8,
        __int64 a9)
{
  __int64 v9; // rdi
  unsigned int v10; // r9d
  unsigned __int8 v11; // r12
  unsigned __int64 v13; // rbx
  int v14; // r14d
  ULONG_PTR v15; // rsi
  unsigned __int64 v16; // rax
  __int64 NextPageTable; // rax
  __int64 v18; // rbp
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 result; // rax
  __int16 v23; // bx
  __int64 v24; // rax
  int v25; // r14d
  int PageProtection; // eax
  int v27; // ecx
  __int64 ProtoPteAddress; // r15
  _QWORD *v29; // rdx
  __int64 v30; // rbx
  __int64 v31; // r13
  LONG *v32; // r12
  unsigned __int64 v33; // rax
  LONG *SharedVm; // rax
  __int64 v35; // rax
  unsigned __int64 *v36; // r10
  __int64 v37; // rbx
  __int64 v38; // r9
  __int64 v39; // r15
  LONG *v40; // rdi
  int v41; // edx
  __int64 v42; // rdx
  unsigned __int64 v43; // rbx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rbx
  unsigned __int64 v47; // rcx
  ULONG_PTR v48; // rbp
  ULONG_PTR v49; // rdx
  ULONG_PTR v50; // rax
  ULONG_PTR v51; // rcx
  __int64 v52; // rax
  __int64 v53; // r9
  unsigned __int64 v54; // r10
  __int64 v55; // r11
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // r8
  _QWORD *v59; // r9
  int v60; // ecx
  __int64 *v61; // rdi
  unsigned __int64 v62; // rdx
  __int64 v63; // rbp
  unsigned int SessionId; // eax
  int v65; // ecx
  char v66; // al
  unsigned __int64 v67; // r8
  unsigned __int64 v68; // r8
  char v69; // al
  char v70; // al
  char v71; // al
  LONG *v72; // r12
  LONG *v73; // rcx
  volatile signed __int32 *v74; // rcx
  char v75; // al
  unsigned __int8 CurrentIrql; // cl
  __int64 v77; // rdx
  signed __int32 v78; // ett
  ULONG_PTR v79; // rdx
  unsigned __int64 v80; // [rsp+30h] [rbp-68h]
  __int64 v81; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v82; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v83; // [rsp+48h] [rbp-50h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  unsigned __int64 v86; // [rsp+A0h] [rbp+8h]
  int v88; // [rsp+B0h] [rbp+18h]
  unsigned int v89; // [rsp+B8h] [rbp+20h] BYREF

  v9 = a4 + 1280;
  v10 = a5;
  v11 = a2;
  *(_DWORD *)a9 = 1;
  v13 = a1;
  v14 = 0;
  v88 = v10 & 4;
  a5 = 0x2000;
  v15 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v16 = 8 * ((*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) & 0xFFFFFFFFFLL)
      - 0x98000000000LL;
  v81 = 0LL;
  v83 = v16;
  NextPageTable = MiGetNextPageTable((unsigned int)(a1 >> 9) & 0xFFFFFFF8, v16, 0, a2, v10, (__int64)&v89);
  v18 = NextPageTable;
  if ( !NextPageTable )
  {
    v18 = v83 + 8;
    goto LABEL_58;
  }
  if ( !v89 )
  {
    if ( v15 == NextPageTable )
    {
      v81 = MI_READ_PTE_LOCK_FREE(v15);
      v23 = v81;
      v18 = 0LL;
      if ( v81 )
      {
        v24 = MI_READ_PTE_LOCK_FREE(&v81);
        if ( (v24 & 0x3E0) != 0x200
          || (v24 & 1) != 0
          || (v24 & 0x400) != 0 && !(unsigned int)MiIsPrototypePteVadLookup(v24) )
        {
          v25 = *(_DWORD *)(a3 + 48);
          a5 = 4096;
          if ( (v25 & 7) != 1 )
          {
            if ( (v25 & 7) != 3 || (v25 & 0x40000) != 0 )
            {
              PageProtection = MiGetPageProtection(a3, v15);
              v27 = *(_DWORD *)(a3 + 48);
              v14 = PageProtection;
              if ( (v27 & 7) == 2 && (v27 & 0xF8) == 0x38 )
              {
                if ( !PageProtection )
                  a5 = 0x2000;
              }
              else if ( (v23 & 1) == 0 && (v23 & 0x400) != 0 && (v27 & 0x8000) == 0 )
              {
                ProtoPteAddress = MiGetProtoPteAddress(a3, a1 >> 12, 9, &a9);
                if ( !ProtoPteAddress )
                  goto LABEL_56;
                v29 = *(_QWORD **)(a3 + 120);
                if ( (__int64)v29 < 0
                  && (a1 >> 12) - (*(unsigned int *)(a3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 32)) > (unsigned __int64)(*v29 - 1LL) >> 12 )
                {
                  goto LABEL_56;
                }
                if ( !a6 || !*a6 || a1 > *a6 )
                {
                  v30 = a9;
                  v31 = *(_QWORD *)(a9 + 8) + 8LL * *(unsigned int *)(a9 + 44);
                  if ( v88 )
                  {
                    MiPreUnlockWorkingSetExclusive(v9, v11);
                    v32 = &dword_14036D4C0;
                    if ( (*(_BYTE *)(v9 + 192) & 7) != 2 )
                      v32 = (LONG *)(v9 + 200);
                    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                    {
                      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v32, retaddr);
                      v33 = a2;
                    }
                    else
                    {
                      v33 = a2;
                      *v32 = 0;
                    }
                  }
                  else
                  {
                    SharedVm = MiGetSharedVm(v9);
                    ExReleaseSpinLockSharedFromDpcLevel(SharedVm);
                    v33 = v11;
                  }
                  __writecr8(v33);
                  if ( (*(_BYTE *)(v30 + 34) & 2) != 0 )
                    v31 = ProtoPteAddress + 8;
                  v35 = MI_READ_PTE_LOCK_FREE(ProtoPteAddress);
                  v36 = a6;
                  v37 = v35;
                  if ( a6 )
                  {
                    v38 = 0LL;
                    v39 = ProtoPteAddress + 8;
                    while ( v39 != v31 )
                    {
                      if ( !MI_READ_PTE_LOCK_FREE(v39) )
                        break;
                      ++v38;
                      v39 += 8LL;
                      if ( (v39 & 0xFFF) == 0 )
                        break;
                    }
                    *v36 = (a1 & 0xFFFFFFFFFFFFF000uLL) + (v38 << 12);
                  }
                  if ( v88 )
                  {
                    v40 = MiGetSharedVm(v9);
                    ExAcquireSpinLockExclusive(v40);
                    v40[1] = 0;
                  }
                  else
                  {
                    MiLockWorkingSetShared(v9);
                  }
                  if ( !v37 )
                  {
LABEL_56:
                    v14 = 0;
                    a5 = 0x2000;
                  }
                }
              }
            }
            else if ( (v23 & 4) != 0 )
            {
              v14 = 1;
              if ( (v23 & 0x800) != 0 )
                v14 = 4;
            }
            else
            {
              v14 = 24;
            }
            goto LABEL_157;
          }
          goto LABEL_62;
        }
LABEL_157:
        v79 = v15 + 8;
        if ( v18 )
          v79 = v18;
        result = a5;
        *a8 = (__int64)(v79 << 25) >> 16;
        *a7 = v14;
        return result;
      }
      v13 = a1;
    }
LABEL_58:
    v41 = *(_DWORD *)(a3 + 48);
    *(_DWORD *)a9 = 0;
    if ( (((v41 & 7) - 1) & 0xFFFFFFFD) != 0 )
    {
      if ( (v41 & 0x8000) == 0 )
      {
        v86 = v13 >> 12;
        v43 = MiGetProtoPteAddress(a3, v13 >> 12, 9, &a9);
        if ( v43 )
        {
          if ( v18 && (unsigned int)MiVadPureReserve(a3, v42, v44, v45) )
          {
            do
            {
              v52 = MI_READ_PTE_LOCK_FREE(((v43 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
              v81 = v52;
              if ( (v52 & 1) != 0 )
                break;
              if ( (v52 & 0x3E0) != 0 )
                break;
              v43 = ((v53 << 25) + 0x10000000) >> 16;
            }
            while ( v43 < v54 );
            if ( v43 == v55 )
            {
              v11 = a2;
              v56 = 8LL;
            }
            else
            {
              v11 = a2;
              if ( v43 > v54 )
                v43 = v54;
              v57 = v43;
              v43 = 0LL;
              v56 = (v57 - v55) & 0xFFFFFFFFFFFFFFF8uLL;
            }
          }
          else
          {
            v56 = 8LL;
          }
          v58 = v56 + v15;
          v80 = v56 + v15;
          v18 = v56 + v15;
          if ( v43 )
          {
            v59 = *(_QWORD **)(a3 + 120);
            if ( (__int64)v59 >= 0
              || v86 - (*(unsigned int *)(a3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 32)) <= (unsigned __int64)(*v59 - 1LL) >> 12 )
            {
              v60 = *(_DWORD *)(a3 + 48);
              if ( (v60 & 7) == 2 && (v60 & 0xF8) == 0x38 )
              {
                v61 = *(__int64 **)(a3 + 72);
                v62 = 0LL;
                if ( v61 )
                {
                  do
                  {
                    if ( (*((_BYTE *)v61 + 34) & 2) != 0 && (v63 = *v61, (*(_DWORD *)(*v61 + 56) & 0x4000000) != 0) )
                    {
                      SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
                      v62 = *(_QWORD *)(MiGetSharedProtos(v63, SessionId, v61) + 32);
                    }
                    else
                    {
                      v62 = v61[1];
                    }
                    if ( v43 >= v62 && v43 < v62 + 8LL * *((unsigned int *)v61 + 11) )
                      break;
                    v61 = (__int64 *)v61[2];
                  }
                  while ( v61 );
                  v58 = v80;
                }
                if ( (__int64)(v43 - v62) >> 3 < (unsigned __int64)(*((_DWORD *)v61 + 11)
                                                                  - (*((_DWORD *)v61 + 13) & 0x7FFFFFFFu)) )
                  v14 = (*((unsigned __int16 *)v61 + 16) >> 1) & 0x1F;
                v65 = 4096;
                v18 = v58;
                if ( !v14 )
                  v65 = 0x2000;
                a5 = v65;
              }
              else
              {
                if ( v88 )
                {
                  v66 = *(_BYTE *)(v9 + 195);
                  if ( (v66 & 0x10) == 0 )
                  {
                    if ( (v66 & 8) != 0 )
                    {
                      *(_BYTE *)(v9 + 195) = v66 & 0xE7 | 0x10;
                      if ( ((MiForcedTrim(v9, v11) + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0
                        && (*(_BYTE *)(v9 + 192) & 0x40) != 0 )
                      {
                        v67 = *(_QWORD *)(v9 + 120);
                        if ( v67 > *(_QWORD *)(v9 + 152) )
                        {
                          if ( (*(_DWORD *)(v9 + 4) & 0xF) != 0 )
                            v68 = v67 - 1;
                          else
                            v68 = *(_QWORD *)(v9 + 152);
                          MiReduceWs(v9, v11, v68);
                        }
                      }
                    }
                    v69 = *(_BYTE *)(v9 + 195);
                    if ( (v69 & 4) != 0 )
                    {
                      *(_BYTE *)(v9 + 195) = v69 & 0xEB | 0x10;
                      MiAgeWorkingSet(
                        v9,
                        v11,
                        1LL,
                        *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_14036C8F8
                                                                    + 8LL * *(unsigned __int16 *)(v9 + 172))
                                                        + 5544LL)
                                            + 2354LL));
                    }
                    v70 = *(_BYTE *)(v9 + 195);
                    if ( (v70 & 0x20) != 0 )
                    {
                      *(_BYTE *)(v9 + 195) = v70 & 0xCF | 0x10;
                      MiReduceWs(v9, v11, *(_QWORD *)(v9 + 152));
                    }
                    v71 = *(_BYTE *)(v9 + 195);
                    if ( (v71 & 0x10) != 0 )
                      *(_BYTE *)(v9 + 195) = v71 & 0xEF;
                  }
                  v72 = &dword_14036D4C0;
                  v73 = &dword_14036D4C0;
                  if ( (*(_BYTE *)(v9 + 192) & 7) != 2 )
                    v73 = (LONG *)(v9 + 200);
                  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v73, retaddr);
                  else
                    *v73 = 0;
                }
                else
                {
                  v72 = &dword_14036D4C0;
                  v74 = &dword_14036D4C0;
                  if ( (*(_BYTE *)(v9 + 192) & 7) != 2 )
                    v74 = (volatile signed __int32 *)(v9 + 200);
                  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                  {
                    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v74, retaddr);
                  }
                  else
                  {
                    _InterlockedAnd(v74, 0xBFFFFFFF);
                    _InterlockedDecrement(v74);
                  }
                }
                __writecr8(a2);
                if ( MI_READ_PTE_LOCK_FREE(v43) )
                {
                  v14 = (*(_DWORD *)(a3 + 48) >> 3) & 0x1F;
                  a5 = 4096;
                }
                v75 = *(_BYTE *)(v9 + 192) & 7;
                if ( v88 )
                {
                  if ( v75 != 2 )
                    v72 = (LONG *)(v9 + 200);
                  CurrentIrql = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
                    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v72, CurrentIrql);
                  else
                    ExpAcquireSpinLockExclusive(v72, CurrentIrql);
                  v18 = v80;
                  v72[1] = 0;
                }
                else
                {
                  if ( v75 != 2 )
                    v72 = (LONG *)(v9 + 200);
                  v77 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
                  {
                    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v72, v77);
                  }
                  else
                  {
                    _m_prefetchw(v72);
                    v78 = *v72 & 0x7FFFFFFF;
                    if ( v78 != _InterlockedCompareExchange(v72, v78 + 1, v78) )
                      ExpWaitForSpinLockSharedAndAcquire(v72, v77);
                  }
                  v18 = v80;
                  if ( v72[1] )
                    _InterlockedExchange(v72 + 1, 0);
                }
              }
            }
          }
        }
        else if ( (unsigned int)MiVadPureReserve(a3, v42, v44, v45) && (v46 = a9) != 0 && !*(_QWORD *)(a9 + 8) && v18 )
        {
          v47 = *(_QWORD *)(a3 + 72);
          v48 = v18 - v15;
          v82 = v86
              + ((__int64)(*(_QWORD *)(a3 + 80) - *(_QWORD *)(v47 + 8)) >> 3)
              - (*(unsigned int *)(a3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 32));
          MiLocatePagefileSubsection(v47, &v82);
          v49 = v15;
          v50 = *(unsigned int *)(v46 + 44);
          v51 = v48 + v82;
          if ( v48 + v82 >= v50 )
          {
            while ( !*(_QWORD *)(v46 + 8) )
            {
              if ( v50 >= v48 )
              {
                v49 += 8 * v48;
                break;
              }
              v46 = *(_QWORD *)(v46 + 16);
              v49 += 8 * v50;
              v48 -= v50;
              v51 -= v50;
              if ( !v46 )
              {
                v18 = v15 + 8;
                if ( v83 + 8 != v15 )
                  v18 = v83 + 8;
                goto LABEL_157;
              }
              v50 = *(unsigned int *)(v46 + 44);
              if ( v51 < v50 )
              {
                v18 = v15 + 8;
                if ( v49 != v15 )
                  v18 = v49;
                goto LABEL_157;
              }
            }
          }
          v18 = v15 + 8;
          if ( v49 != v15 )
            v18 = v49;
        }
        else
        {
          v18 = v15 + 8;
        }
        goto LABEL_157;
      }
      if ( *(_DWORD *)(a3 + 52) >= 0x80000000 )
      {
        LOBYTE(v25) = v41;
        a5 = 4096;
LABEL_62:
        v14 = (unsigned __int8)v25 >> 3;
        goto LABEL_157;
      }
    }
    goto LABEL_157;
  }
  v19 = v89;
  do
  {
    v15 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v19;
  }
  while ( v19 );
  v20 = (__int64)((v15 + 8) << 25) >> 16;
  if ( v89 )
  {
    v21 = v89;
    do
    {
      v20 = v20 << 25 >> 16;
      --v21;
    }
    while ( v21 );
  }
  *a8 = v20;
  *a7 = (*(_DWORD *)(a3 + 48) >> 3) & 0x1F;
  return 4096LL;
}
