/*
 * XREFs of MiQueryAddressState @ 0x14003F110
 * Callers:
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     MiQueryAddressSpan @ 0x14003EDF0 (MiQueryAddressSpan.c)
 *     MiAllowProtectionChange @ 0x1400A64D8 (MiAllowProtectionChange.c)
 *     MiComparePteProtections @ 0x14017BE48 (MiComparePteProtections.c)
 * Callees:
 *     MiReduceWs @ 0x14000B908 (MiReduceWs.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiVadPureReserve @ 0x14003DDE0 (MiVadPureReserve.c)
 *     MiGetPageProtection @ 0x14003DEB0 (MiGetPageProtection.c)
 *     MiGetNextPageTable @ 0x14003FDB0 (MiGetNextPageTable.c)
 *     MiGetProtoPteAddress @ 0x140040460 (MiGetProtoPteAddress.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiAgeWorkingSet @ 0x14009C900 (MiAgeWorkingSet.c)
 *     ExpAcquireSpinLockExclusive @ 0x14009FA50 (ExpAcquireSpinLockExclusive.c)
 *     MiLockWorkingSetShared @ 0x1400A63A0 (MiLockWorkingSetShared.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400BF390 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiIsPrototypePteVadLookup @ 0x14017C740 (MiIsPrototypePteVadLookup.c)
 *     MiForcedTrim @ 0x14021D544 (MiForcedTrim.c)
 *     MiGetSharedProtos @ 0x14022DECC (MiGetSharedProtos.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14028607C (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140286170 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiQueryAddressState(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int8 a3,
        ULONG_PTR a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int64 *a7,
        int *a8,
        __int64 *a9,
        _DWORD *a10)
{
  unsigned int v10; // r10d
  _DWORD *v11; // rdi
  __int64 v12; // r13
  bool v13; // zf
  unsigned __int64 v15; // rbx
  int v16; // r15d
  ULONG_PTR v17; // rsi
  __int64 v18; // r14
  __int64 NextPageTable; // rax
  __int64 v20; // rbp
  unsigned __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 result; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  int v28; // r15d
  int PageProtection; // eax
  int v30; // ecx
  __int64 *v31; // rdi
  _QWORD *v32; // rdx
  unsigned __int64 *v33; // r12
  LONG *v34; // r14
  unsigned __int64 v35; // rax
  LONG *SharedVm; // rax
  __int64 v37; // rbx
  __int64 v38; // r10
  __int64 v39; // r14
  __int64 v40; // r9
  unsigned __int64 v41; // rdi
  __int64 v42; // rax
  LONG *v43; // rdi
  int v44; // ecx
  unsigned __int64 ProtoPteAddress; // rbx
  __int64 v46; // r8
  _DWORD *v47; // r10
  unsigned __int64 v48; // rbp
  unsigned __int64 v49; // r9
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // r11
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // r9
  ULONG_PTR v57; // rcx
  int v58; // ecx
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rdi
  _QWORD *v61; // rdx
  int v62; // ecx
  __int64 *v63; // rdi
  unsigned __int64 i; // rdx
  __int64 v65; // rbp
  unsigned int SessionId; // eax
  __int64 *v67; // rax
  __int64 v68; // rax
  __int64 v69; // rbp
  unsigned __int64 v70; // r11
  unsigned __int64 v71; // r10
  unsigned __int64 v72; // r9
  __int64 PteShadow; // rax
  unsigned __int64 v74; // rax
  unsigned int v75; // ecx
  int v76; // ebp
  struct _KTHREAD *CurrentThread; // rdi
  int v78; // eax
  unsigned __int64 v79; // r8
  unsigned __int64 v80; // r8
  char v81; // al
  char v82; // al
  LONG *v83; // r14
  LONG *v84; // rcx
  volatile signed __int32 *v85; // rcx
  __int64 v86; // rax
  char v87; // al
  unsigned __int8 CurrentIrql; // cl
  __int64 v89; // rdx
  signed __int32 v90; // ett
  ULONG_PTR v91; // rdx
  __int64 v92; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v93[8]; // [rsp+38h] [rbp-40h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int64 v96; // [rsp+80h] [rbp+8h]
  __int64 v97; // [rsp+88h] [rbp+10h]
  unsigned __int64 v98; // [rsp+88h] [rbp+10h]

  v10 = a6;
  v11 = a10;
  v12 = a5 + 1280;
  v13 = (a6 & 4) == 0;
  LODWORD(a10) = a6 & 4;
  *v11 = 1;
  LODWORD(v92) = !v13;
  v15 = a1;
  a6 = 0x2000;
  v16 = 0;
  v17 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v18 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v93[0] = 0LL;
  v97 = v18;
  NextPageTable = MiGetNextPageTable(
                    (unsigned int)(a1 >> 9) & 0xFFFFFFF8,
                    (unsigned int)(a2 >> 9) & 0xFFFFFFF8,
                    0,
                    a3,
                    v10,
                    (__int64)&a5);
  v20 = NextPageTable;
  v21 = 0xFFFFF6FB7DBED7F8uLL;
  if ( !NextPageTable )
  {
    v20 = v18 + 8;
    goto LABEL_74;
  }
  if ( (_DWORD)a5 )
  {
    v22 = (unsigned int)a5;
    do
    {
      v17 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v22;
    }
    while ( v22 );
    v23 = (__int64)((v17 + 8) << 25) >> 16;
    v24 = (unsigned int)a5;
    do
    {
      v23 = v23 << 25 >> 16;
      --v24;
    }
    while ( v24 );
    *a9 = v23;
    *a8 = (*(_DWORD *)(a4 + 48) >> 3) & 0x1F;
    return 4096LL;
  }
  if ( v17 != NextPageTable )
  {
LABEL_74:
    v44 = *(_DWORD *)(a4 + 48);
    *v11 = 0;
    if ( (((v44 & 7) - 1) & 0xFFFFFFFD) == 0 )
      goto LABEL_194;
    if ( (v44 & 0x8000) != 0 )
    {
      if ( *(int *)(a4 + 52) < 0 )
      {
        result = 4096LL;
        v16 = (unsigned __int8)v44 >> 3;
        goto LABEL_195;
      }
LABEL_194:
      result = a6;
      goto LABEL_195;
    }
    v96 = v15 >> 12;
    ProtoPteAddress = MiGetProtoPteAddress(a4, v15 >> 12, 9LL, &v92);
    if ( !ProtoPteAddress )
    {
      if ( (unsigned int)MiVadPureReserve(a4) && (v46 = v92) != 0 && !*(_QWORD *)(v92 + 8) && v20 )
      {
        v47 = *(_DWORD **)(a4 + 72);
        v48 = (__int64)(v20 - v17) >> 3;
        v49 = v96
            + ((__int64)(*(_QWORD *)(a4 + 80) - *((_QWORD *)v47 + 1)) >> 3)
            - (*(unsigned int *)(a4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 32) << 32));
        if ( (*(_DWORD *)(*(_QWORD *)v47 + 56LL) & 0x1000) != 0 || v47[12] >= 0x40000000u )
        {
          v50 = 0x40000LL;
          if ( v47[12] < 0x40000000u )
            v50 = 0x20000LL;
          v51 = v49 % v50;
          v52 = v49 / v50;
          v53 = (unsigned int)(v49 / v50);
          v54 = v53 + 1;
          if ( !v51 )
            v54 = v53;
          if ( v54 <= *(unsigned int *)(*(_QWORD *)v47 + 96LL) && v51 < (unsigned int)v47[20 * v52 + 11] )
            v49 = v51;
        }
        v55 = *(unsigned int *)(v92 + 44);
        v56 = v48 + v49;
        v57 = v17;
        if ( v56 >= v55 )
        {
          while ( !*(_QWORD *)(v46 + 8) )
          {
            if ( v55 >= v48 )
            {
              v57 += 8 * v48;
              break;
            }
            v46 = *(_QWORD *)(v46 + 16);
            v57 += 8 * v55;
            v48 -= v55;
            v56 -= v55;
            if ( !v46 )
            {
              v20 = v17 + 8;
              if ( v18 + 8 != v17 )
                v20 = v18 + 8;
              goto LABEL_194;
            }
            v55 = *(unsigned int *)(v46 + 44);
            if ( v56 < v55 )
            {
              v20 = v17 + 8;
              if ( v57 != v17 )
                v20 = v57;
              goto LABEL_194;
            }
          }
        }
        v20 = v17 + 8;
        if ( v57 != v17 )
          v20 = v57;
      }
      else
      {
        v20 = v17 + 8;
      }
      goto LABEL_194;
    }
    if ( !v20 )
      goto LABEL_112;
    v58 = *(_DWORD *)(a4 + 48);
    if ( (v58 & 0x8000) != 0 )
    {
      if ( *(int *)(a4 + 52) < 0 || (v58 & 7) != 0 )
        goto LABEL_112;
    }
    else
    {
      if ( (v58 & 0xF8) != 0xC0 )
        goto LABEL_112;
      v67 = *(__int64 **)(a4 + 72);
      if ( !v67 )
        goto LABEL_112;
      if ( (v58 & 7) == 1 )
        goto LABEL_112;
      v68 = *v67;
      if ( *(_QWORD *)(v68 + 64) || (*(_DWORD *)(v68 + 56) & 0x1000) == 0 )
        goto LABEL_112;
    }
    v69 = (__int64)(v20 - v17) >> 3;
    v70 = ProtoPteAddress;
    v71 = *(_QWORD *)(v92 + 8) + 8LL * *(unsigned int *)(v92 + 44);
    if ( (__int64)(v71 - ProtoPteAddress) >> 3 > v69 )
      v71 = ProtoPteAddress + 8 * v69;
    do
    {
      v72 = ((ProtoPteAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      PteShadow = *(_QWORD *)v72;
      if ( v72 >= 0xFFFFF6FB7DBED000uLL && v72 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(((ProtoPteAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *(_QWORD *)v72);
      v93[0] = PteShadow;
      if ( (PteShadow & 1) != 0 )
        break;
      if ( (PteShadow & 0x3E0) != 0 )
        break;
      ProtoPteAddress = (__int64)((v72 << 25) + 0x10000000) >> 16;
    }
    while ( ProtoPteAddress < v71 );
    if ( ProtoPteAddress != v70 )
    {
      if ( ProtoPteAddress > v71 )
        ProtoPteAddress = v71;
      v74 = ProtoPteAddress;
      ProtoPteAddress = 0LL;
      v59 = (v74 - v70) & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_113:
      v60 = v59 + v17;
      v98 = v59 + v17;
      v20 = v59 + v17;
      if ( ProtoPteAddress )
      {
        v61 = *(_QWORD **)(a4 + 120);
        if ( (__int64)v61 >= 0
          || v96 - (*(unsigned int *)(a4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 32) << 32)) <= (unsigned __int64)(*v61 - 1LL) >> 12 )
        {
          v62 = *(_DWORD *)(a4 + 48);
          if ( (v62 & 7) == 2 && (v62 & 0xF8) == 0x38 )
          {
            v63 = *(__int64 **)(a4 + 72);
            for ( i = 0LL; v63; v63 = (__int64 *)v63[2] )
            {
              if ( (*((_BYTE *)v63 + 34) & 2) != 0 && (v65 = *v63, (*(_DWORD *)(*v63 + 56) & 0x4000000) != 0) )
              {
                SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
                i = *(_QWORD *)(MiGetSharedProtos(v65, SessionId, v63) + 32);
              }
              else
              {
                i = v63[1];
              }
              if ( ProtoPteAddress >= i && ProtoPteAddress < i + 8LL * *((unsigned int *)v63 + 11) )
                break;
            }
            if ( (__int64)(ProtoPteAddress - i) >> 3 < (unsigned __int64)(*((_DWORD *)v63 + 11)
                                                                        - (*((_DWORD *)v63 + 13) & 0x7FFFFFFFu)) )
              v16 = (*((unsigned __int16 *)v63 + 16) >> 1) & 0x1F;
            v20 = v98;
            v75 = 4096;
            if ( !v16 )
              v75 = 0x2000;
            result = v75;
            goto LABEL_195;
          }
          v76 = (int)a10;
          if ( (_DWORD)a10 )
          {
            CurrentThread = KeGetCurrentThread();
            if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x400000) == 0 )
            {
              v78 = HIBYTE(*(_DWORD *)(v12 + 192));
              if ( (v78 & 8) != 0 )
              {
                *(_BYTE *)(v12 + 195) = v78 & 0xF7;
                _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
                if ( !MiForcedTrim(v12, a3) && (*(_BYTE *)(v12 + 192) & 0x40) != 0 )
                {
                  v79 = *(_QWORD *)(v12 + 120);
                  if ( v79 > *(_QWORD *)(v12 + 152) )
                  {
                    if ( (*(_DWORD *)(v12 + 4) & 0xF) != 0 )
                      v80 = v79 - 1;
                    else
                      v80 = *(_QWORD *)(v12 + 152);
                    MiReduceWs(v12, a3, v80);
                  }
                }
              }
              v81 = *(_BYTE *)(v12 + 195);
              if ( (v81 & 4) != 0 )
              {
                *(_BYTE *)(v12 + 195) = v81 & 0xFB;
                _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
                MiAgeWorkingSet(
                  v12,
                  a3,
                  1LL,
                  *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(v12 + 172))
                                                  + 5680LL)
                                      + 2354LL));
              }
              v82 = *(_BYTE *)(v12 + 195);
              if ( (v82 & 0x10) != 0 )
              {
                *(_BYTE *)(v12 + 195) = v82 & 0xEF;
                _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
                MiReduceWs(v12, a3, *(_QWORD *)(v12 + 152));
              }
              v76 = (int)a10;
              if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x400000) != 0 )
                _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
            }
            v83 = &dword_140389780;
            v84 = &dword_140389780;
            if ( (*(_BYTE *)(v12 + 192) & 7) != 2 )
              v84 = (LONG *)(v12 + 200);
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            {
              ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v84, retaddr);
              v60 = v98;
            }
            else
            {
              v60 = v98;
              *v84 = 0;
            }
          }
          else
          {
            v83 = &dword_140389780;
            v85 = &dword_140389780;
            if ( (*(_BYTE *)(v12 + 192) & 7) != 2 )
              v85 = (volatile signed __int32 *)(v12 + 200);
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            {
              ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v85, retaddr);
            }
            else
            {
              _InterlockedAnd(v85, 0xBFFFFFFF);
              _InterlockedDecrement(v85);
            }
          }
          __writecr8(a3);
          v86 = *(_QWORD *)ProtoPteAddress;
          if ( ProtoPteAddress >= 0xFFFFF6FB7DBED000uLL && ProtoPteAddress <= 0xFFFFF6FB7DBED7F8uLL )
            v86 = MiReadPteShadow(ProtoPteAddress, *(_QWORD *)ProtoPteAddress);
          if ( v86 )
          {
            v16 = (*(_DWORD *)(a4 + 48) >> 3) & 0x1F;
            a6 = 4096;
          }
          v87 = *(_BYTE *)(v12 + 192) & 7;
          if ( v76 )
          {
            if ( v87 != 2 )
              v83 = (LONG *)(v12 + 200);
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
              ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v83, CurrentIrql);
            else
              ExpAcquireSpinLockExclusive(v83, CurrentIrql);
            v83[1] = 0;
            v20 = v60;
          }
          else
          {
            if ( v87 != 2 )
              v83 = (LONG *)(v12 + 200);
            v89 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v83, v89);
            }
            else
            {
              _m_prefetchw(v83);
              v90 = *v83 & 0x7FFFFFFF;
              if ( v90 != _InterlockedCompareExchange(v83, v90 + 1, v90) )
                ExpWaitForSpinLockSharedAndAcquire(v83, v89);
            }
            v20 = v60;
            if ( v83[1] )
              _InterlockedExchange(v83 + 1, 0);
          }
        }
      }
      goto LABEL_194;
    }
LABEL_112:
    v59 = 8LL;
    goto LABEL_113;
  }
  v26 = *(_QWORD *)v17;
  if ( v17 >= 0xFFFFF6FB7DBED000uLL && v17 <= 0xFFFFF6FB7DBED7F8uLL )
    v26 = MiReadPteShadow(v17, *(_QWORD *)v17);
  v20 = 0LL;
  v93[0] = v26;
  if ( !v26 )
  {
    v15 = a1;
    goto LABEL_74;
  }
  v27 = v26;
  if ( (unsigned __int64)v93 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v93 <= v21 )
    v27 = MiReadPteShadow(v93, v26);
  if ( (v27 & 0x3E0) == 0x200 && (v27 & 1) == 0 && ((v27 & 0x400) == 0 || (unsigned int)MiIsPrototypePteVadLookup(v27)) )
    goto LABEL_194;
  v28 = *(_DWORD *)(a4 + 48);
  a6 = 4096;
  if ( (v28 & 7) == 1 )
  {
    v16 = (unsigned __int8)v28 >> 3;
    goto LABEL_194;
  }
  if ( (v28 & 7) == 3 && (v28 & 0x40000) == 0 )
  {
    if ( (v26 & 4) != 0 )
    {
      v16 = 1;
      if ( (v26 & 0x800) != 0 )
        v16 = 4;
    }
    else
    {
      v16 = 24;
    }
    goto LABEL_194;
  }
  PageProtection = MiGetPageProtection(a4, v17, a3, v92);
  v30 = *(_DWORD *)(a4 + 48);
  v16 = PageProtection;
  if ( (v30 & 7) == 2 && (v30 & 0xF8) == 0x38 )
  {
    if ( PageProtection )
      goto LABEL_194;
    result = 0x2000LL;
  }
  else
  {
    if ( (v26 & 1) != 0 || (v26 & 0x400) == 0 || (v30 & 0x8000) != 0 )
      goto LABEL_194;
    v31 = (__int64 *)MiGetProtoPteAddress(a4, a1 >> 12, 9LL, &v92);
    if ( v31 )
    {
      v32 = *(_QWORD **)(a4 + 120);
      if ( (__int64)v32 >= 0
        || (a1 >> 12) - (*(unsigned int *)(a4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 32) << 32)) <= (unsigned __int64)(*v32 - 1LL) >> 12 )
      {
        v33 = a7;
        if ( a7 )
        {
          if ( *a7 && a1 <= *a7 )
            goto LABEL_194;
        }
        if ( (_DWORD)a10 )
        {
          MiPreUnlockWorkingSetExclusive(v12, a3);
          v34 = &dword_140389780;
          if ( (*(_BYTE *)(v12 + 192) & 7) != 2 )
            v34 = (LONG *)(v12 + 200);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v34, retaddr);
          else
            *v34 = 0;
          v18 = v97;
          v35 = a3;
        }
        else
        {
          SharedVm = MiGetSharedVm(v12);
          ExReleaseSpinLockSharedFromDpcLevel(SharedVm);
          v35 = a3;
        }
        __writecr8(v35);
        v37 = *v31;
        if ( (unsigned __int64)v31 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v31 <= 0xFFFFF6FB7DBED7F8uLL )
          v37 = MiReadPteShadow(v31, *v31);
        if ( v33 )
        {
          v38 = *(_QWORD *)(v92 + 8) + 8LL * *(unsigned int *)(v92 + 44);
          if ( (*(_BYTE *)(v92 + 34) & 2) != 0 )
            v38 = (__int64)(v31 + 1);
          v39 = (__int64)(v18 - v17) >> 3;
          if ( (v38 - (__int64)v31) >> 3 > v39 + 1 )
            v38 = (__int64)&v31[v39 + 1];
          v40 = 0LL;
          v41 = (unsigned __int64)(v31 + 1);
          if ( v41 != v38 )
          {
            do
            {
              v42 = *(_QWORD *)v41;
              if ( v41 >= 0xFFFFF6FB7DBED000uLL && v41 <= 0xFFFFF6FB7DBED7F8uLL )
                v42 = MiReadPteShadow(v41, *(_QWORD *)v41);
              if ( !v42 )
                break;
              ++v40;
              v41 += 8LL;
              if ( (v41 & 0xFFF) == 0 )
                break;
            }
            while ( v41 != v38 );
            v33 = a7;
          }
          *v33 = (a1 & 0xFFFFFFFFFFFFF000uLL) + (v40 << 12);
        }
        if ( (_DWORD)a10 )
        {
          v43 = MiGetSharedVm(v12);
          ExAcquireSpinLockExclusive(v43);
          v43[1] = 0;
        }
        else
        {
          MiLockWorkingSetShared(v12);
        }
        if ( v37 )
          goto LABEL_194;
      }
    }
    result = 0x2000LL;
    v16 = 0;
  }
LABEL_195:
  v91 = v17 + 8;
  if ( v20 )
    v91 = v20;
  *a9 = (__int64)(v91 << 25) >> 16;
  *a8 = v16;
  return result;
}
