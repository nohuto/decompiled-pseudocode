/*
 * XREFs of MiMapViewOfImageSection @ 0x1404B4E30
 * Callers:
 *     MiMapViewOfSection @ 0x140593F20 (MiMapViewOfSection.c)
 *     MiMapImageInSystemProcess @ 0x140749EC0 (MiMapImageInSystemProcess.c)
 * Callees:
 *     MiIsProcessCfgEnabled @ 0x14003E8C4 (MiIsProcessCfgEnabled.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14003ECB0 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiReferenceControlAreaFile @ 0x14005BAC0 (MiReferenceControlAreaFile.c)
 *     ExGenRandom @ 0x1400692A0 (ExGenRandom.c)
 *     MiControlAreaRequiresCharge @ 0x1400E481C (MiControlAreaRequiresCharge.c)
 *     MiInsertVadEvent @ 0x1400E4C88 (MiInsertVadEvent.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400E5518 (LOCK_ADDRESS_SPACE.c)
 *     MiReferenceActiveSubsection @ 0x1400E5D50 (MiReferenceActiveSubsection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1400E5FE0 (MiCheckPurgeAndUpMapCount.c)
 *     MiGetWsAndInsertVad @ 0x1400E6090 (MiGetWsAndInsertVad.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400E6714 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1400E6930 (MiUnlockVad.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     MiLockVad @ 0x1401175F0 (MiLockVad.c)
 *     MiReferenceVad @ 0x140117620 (MiReferenceVad.c)
 *     MiDereferenceControlArea @ 0x1401404A0 (MiDereferenceControlArea.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14024FF3C (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1402520D8 (MiUpdatePrivateDemandZeroView.c)
 *     MiRemoveVadEvent @ 0x140258C0C (MiRemoveVadEvent.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiAllocateFixupVad @ 0x1404992A8 (MiAllocateFixupVad.c)
 *     MiInsertVadCharges @ 0x1404AEFA0 (MiInsertVadCharges.c)
 *     MiReferenceFileObjectForMap @ 0x1404B5910 (MiReferenceFileObjectForMap.c)
 *     MiCommitVadCfgBits @ 0x1404B5948 (MiCommitVadCfgBits.c)
 *     MiAllowImageMap @ 0x1404B5C48 (MiAllowImageMap.c)
 *     MiIsVaRangeAvailable @ 0x1404B5D80 (MiIsVaRangeAvailable.c)
 *     PsCallImageNotifyRoutines @ 0x1404B6940 (PsCallImageNotifyRoutines.c)
 *     MiArbitraryCodeBlocked @ 0x1404D6800 (MiArbitraryCodeBlocked.c)
 *     MiUnmapVad @ 0x1404D72FC (MiUnmapVad.c)
 *     MmUnsecureVirtualMemory @ 0x140593430 (MmUnsecureVirtualMemory.c)
 *     MiAddSecureEntry @ 0x140593490 (MiAddSecureEntry.c)
 *     MiSelectUserAddress @ 0x1405935C0 (MiSelectUserAddress.c)
 *     MiAdvanceVadHint @ 0x140594F50 (MiAdvanceVadHint.c)
 *     MiInsertSharedCommitNode @ 0x140595350 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x140595640 (MiRemoveSharedCommitNode.c)
 *     MiLoadUserSymbols @ 0x140652AFC (MiLoadUserSymbols.c)
 *     MiLogMapFileEvent @ 0x140749E78 (MiLogMapFileEvent.c)
 *     MiCreatePerSessionProtos @ 0x140754AFC (MiCreatePerSessionProtos.c)
 *     MiDereferencePerSessionProtos @ 0x140754C70 (MiDereferencePerSessionProtos.c)
 *     MiCreateLargePageVad @ 0x140755658 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x14075595C (MiFreeLargePageView.c)
 *     MiMapUserLargePages @ 0x140755B60 (MiMapUserLargePages.c)
 */

__int64 __fastcall MiMapViewOfImageSection(
        _DWORD *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        _QWORD *a4,
        __int64 a5,
        int a6,
        int a7,
        char a8)
{
  __int64 v8; // r8
  __int64 v10; // r14
  unsigned int v12; // ebx
  __int64 v13; // rdi
  bool v14; // zf
  unsigned __int64 v15; // rcx
  int v16; // edx
  __int64 result; // rax
  int v18; // ecx
  _DWORD *v19; // rax
  unsigned __int64 v20; // r13
  PVOID PoolWithTag; // rax
  __int64 v22; // rsi
  int v23; // ecx
  int v24; // eax
  unsigned int v25; // eax
  int v26; // ecx
  __int64 v27; // rax
  int v28; // ecx
  struct _KTHREAD *CurrentThread; // rcx
  int v30; // eax
  unsigned __int64 v31; // rdi
  __int64 v32; // r12
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r10
  __int16 v36; // r11
  int v37; // edi
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // r13
  ULONG_PTR v41; // rdx
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rax
  int v44; // r15d
  _DWORD *v45; // rdi
  int PerSessionProtos; // edi
  int v47; // eax
  int v48; // r11d
  __int64 v49; // r9
  char *v50; // r15
  __int64 v51; // r8
  unsigned __int64 v52; // rdi
  unsigned __int16 v53; // ax
  int v54; // ecx
  __int16 v55; // bx
  __int64 v56; // rdi
  int v57; // edx
  int v58; // eax
  __int64 v59; // rdi
  __int64 v60; // r8
  __int64 v61; // r9
  _OWORD *FixupVad; // r15
  unsigned __int64 v63; // r13
  __int64 v64; // rcx
  unsigned int v65; // eax
  __int64 v66; // rax
  __int16 v67; // cx
  __int64 v68; // rax
  __int16 v69; // dx
  unsigned int v70; // ecx
  unsigned __int64 v71; // rax
  __int64 v72; // rcx
  __int16 v73; // cx
  unsigned __int64 v74; // rdx
  int LargePageVad; // r12d
  void *v76; // rcx
  __int64 v77; // r15
  unsigned __int64 v78; // r8
  unsigned int v79; // eax
  unsigned __int64 v80; // rdx
  __int64 v81; // rax
  unsigned int SessionId; // eax
  __int64 v83; // rdi
  unsigned __int64 v84; // rdi
  unsigned __int64 v85; // rdi
  __int64 v86; // r8
  __int64 v87; // r9
  void *v88; // rcx
  unsigned __int64 v89; // [rsp+50h] [rbp-B0h]
  unsigned int v90; // [rsp+50h] [rbp-B0h]
  __int64 v91; // [rsp+58h] [rbp-A8h]
  __int64 v92; // [rsp+60h] [rbp-A0h]
  __int64 v93; // [rsp+68h] [rbp-98h]
  unsigned __int64 v94; // [rsp+70h] [rbp-90h]
  unsigned __int64 v95; // [rsp+70h] [rbp-90h]
  __int64 v96; // [rsp+70h] [rbp-90h]
  unsigned __int64 v97; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v98; // [rsp+80h] [rbp-80h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-78h]
  __int64 v100; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v101; // [rsp+98h] [rbp-68h]
  __int64 v102; // [rsp+A0h] [rbp-60h]
  char v103[8]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v104; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v105; // [rsp+B8h] [rbp-48h]
  int v106; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v107; // [rsp+C8h] [rbp-38h]
  int v108; // [rsp+D0h] [rbp-30h]
  __int64 v109[8]; // [rsp+E0h] [rbp-20h] BYREF
  int v110; // [rsp+120h] [rbp+20h]

  v8 = *(_QWORD *)a1;
  v10 = a2[10];
  v12 = 0;
  v91 = *(_QWORD *)a1;
  v13 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
  v102 = v13;
  if ( dword_1403CB4DC == *(_DWORD *)(v13 + 60) && dword_1403CB4E0 == *(_DWORD *)(*(_QWORD *)(v8 + 56) + 68LL) )
    __debugbreak();
  v14 = (a1[14] & 0x10000000) == 0;
  v15 = *(_QWORD *)(v8 + 32);
  v94 = *(_QWORD *)(v8 + 48);
  v98 = v15;
  if ( (!v14 || (*(_DWORD *)(v10 + 1740) & 0x2000) != 0) && (*(_BYTE *)(v8 + 15) & 1) == 0 )
    v12 = 1025;
  v16 = *((_DWORD *)a2 + 10);
  v93 = a2[2];
  if ( (v16 & 0x20000000) != 0 )
  {
    if ( v15 < 0x100000000LL || v12 >= 0x400 )
      return 3221225496LL;
    if ( (*(_BYTE *)(v13 + 44) & 1) != 0 )
      return 3221226089LL;
    v93 = 0x200000LL;
  }
  if ( !a5 || (*(_DWORD *)(a5 + 56) & 0x80000) != 0 || (v16 & 0x40000) != 0 )
  {
    if ( a7 != 1 )
      return 3221225541LL;
    v12 |= 0x200u;
  }
  if ( (v12 & 0x200) == 0 )
  {
    result = MiAllowImageMap(v10, a5, a1, v13);
    if ( (int)result < 0 )
      return result;
    v18 = *(_DWORD *)(v10 + 2088);
    if ( (v18 & 0x10) == 0 || (*(_BYTE *)(v13 + 51) & 4) != 0 )
      goto LABEL_12;
    if ( (*(_BYTE *)(v13 + 44) & 1) == 0 )
    {
      v12 |= 1u;
LABEL_12:
      v8 = v91;
      goto LABEL_13;
    }
    if ( (v18 & 8) == 0 )
      goto LABEL_12;
    return 3221226089LL;
  }
LABEL_13:
  if ( (*(_BYTE *)(v10 + 720) & 1) == 0 || v10 == PsSecureSystemProcess )
    v12 |= 2u;
  if ( (*(_BYTE *)(v8 + 15) & 1) != 0 && (*(_DWORD *)(v10 + 2088) & 0x40) == 0 )
  {
    v12 |= 1u;
    if ( v12 < 0x400 )
      v12 &= ~2u;
  }
  v101 = 0LL;
  if ( ((v12 >> 9) & 1) != 0 )
    goto LABEL_20;
  v19 = a1 + 32;
  if ( a1 == (_DWORD *)-128LL )
    goto LABEL_20;
  while ( (v19[8] & 0xEu) < 0xC )
  {
    v19 = (_DWORD *)*((_QWORD *)v19 + 2);
    if ( !v19 )
      goto LABEL_20;
  }
  result = MiArbitraryCodeBlocked(a2[11]);
  if ( (int)result >= 0 )
  {
LABEL_20:
    BugCheckParameter2 = (ULONG_PTR)(a1 + 32);
    MiCheckPurgeAndUpMapCount((__int64)a1);
    v20 = a2[3];
    v89 = v20;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x20646156u);
    v22 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
    {
      MiDereferenceControlArea((__int64)a1);
      return 3221225626LL;
    }
    memset(PoolWithTag, 0, 0x88uLL);
    *(_QWORD *)(v22 + 16) = -2LL;
    v23 = 0;
    if ( a6 == 1 )
      v23 = 0x4000000;
    v24 = *(_DWORD *)(v22 + 48);
    *(_DWORD *)(v22 + 64) = *(_DWORD *)(v22 + 64) & 0xFBFFFFFF | v23;
    v25 = v24 & 0xFFFFFFF8 | 2;
    *(_DWORD *)(v22 + 48) = v25;
    v26 = v25 ^ ((unsigned __int16)v25 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)a2 + 12) << 8)) & 0x3F00;
    *(_DWORD *)(v22 + 48) = v26;
    if ( a5 )
    {
      v27 = MiReferenceFileObjectForMap(a5);
      v28 = *(_DWORD *)(v22 + 64);
      *(_QWORD *)(v22 + 128) = v27;
      LODWORD(v27) = v28 & 0xF7FFFFFF | (*(_DWORD *)(a5 + 60) >> 4) & 0x8000000;
      v26 = *(_DWORD *)(v22 + 48);
      *(_DWORD *)(v22 + 64) = v27;
    }
    *(_QWORD *)(v22 + 40) = 0LL;
    if ( ((v12 >> 9) & 1) != 0 )
    {
      v65 = v12 | 1;
      LOWORD(v12) = v12 & 0xFFFC | 1;
      *(_DWORD *)(v22 + 48) = v26 & 0xF7FFFF07 | 0x8000008;
      if ( v65 >= 0x400 )
        LOWORD(v12) = v65;
    }
    else
    {
      *(_DWORD *)(v22 + 48) = v26 & 0xFFFFFF07 | 0x38;
      if ( (*(_BYTE *)(v10 + 720) & 1) != 0 )
        *(_DWORD *)(v22 + 64) |= 0x10000000u;
      *(_DWORD *)(v22 + 52) ^= (v94 ^ *(_DWORD *)(v22 + 52)) & 0x7FFFFFFF;
      *(_BYTE *)(v22 + 34) = v94 >> 31;
    }
    CurrentThread = KeGetCurrentThread();
    v30 = *((_DWORD *)a2 + 16);
    v100 = 0LL;
    v92 = (__int64)CurrentThread;
    if ( (v30 & 1) == 0 || v93 == 0x200000 )
      v31 = v98 + *(unsigned int *)a4;
    else
      v31 = *a3;
    v97 = v31;
    if ( v93 == 0x200000 )
    {
      v89 = (a2[3] + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
      v20 = v89;
      LOWORD(v12) = v12 & 0xFFFC | 1;
      *(_DWORD *)(v22 + 52) ^= ((v89 >> 12) ^ *(_DWORD *)(v22 + 52)) & 0x7FFFFFFF;
      *(_BYTE *)(v22 + 34) = v89 >> 43;
      *(_DWORD *)(v22 + 64) |= 0x1000000u;
      LargePageVad = MiCreateLargePageVad(v10, v22, 0LL);
      if ( LargePageVad < 0 )
      {
        v76 = *(void **)(v22 + 128);
        if ( v76 )
          ObfDereferenceObject(v76);
        MiDereferenceControlArea((__int64)a1);
        ExFreePoolWithTag((PVOID)v22, 0);
        return (unsigned int)LargePageVad;
      }
      CurrentThread = (struct _KTHREAD *)v92;
    }
    v32 = (*(_BYTE *)(v22 + 48) & 0xF8) == 0x38
       && *(_QWORD *)(v10 + 736)
       && (*(_DWORD *)(v10 + 1740) & 0x1000) == 0
       && v10 != PsSecureSystemProcess
       && ((PspNotifyEnableMask & 1) != 0 || (PerfGlobalGroupMask & 4) != 0);
    v110 = 32;
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, v10);
    if ( (*(_DWORD *)(v10 + 772) & 0x20) != 0 )
    {
      PerSessionProtos = -1073741558;
      goto LABEL_179;
    }
    v33 = 332LL;
    v35 = v93;
    v36 = 452;
    if ( (a2[8] & 1) != 0 && v93 != 0x200000 )
    {
      if ( !(unsigned int)MiIsVaRangeAvailable(v10, v31, v20, *a2, a2[1]) )
      {
LABEL_178:
        PerSessionProtos = -1073741800;
        goto LABEL_179;
      }
LABEL_43:
      v37 = 1073741827;
      v38 = v97;
      v34 = v98;
      v33 = v97 - *(unsigned int *)a4;
      if ( v33 == v98 )
        v37 = 0;
      v39 = v97 >> 12;
      *(_DWORD *)(v22 + 24) = v97 >> 12;
      v95 = v39;
      *(_BYTE *)(v22 + 32) = BYTE4(v39);
      v40 = (v38 - 1 + v20) >> 12;
      *(_DWORD *)(v22 + 28) = v40;
      *(_BYTE *)(v22 + 33) = BYTE4(v40);
      v41 = BugCheckParameter2;
      v42 = *a4 >> 12;
      v43 = *(unsigned int *)(BugCheckParameter2 + 44);
      if ( v42 >= v43 )
      {
        do
        {
          v41 = *(_QWORD *)(v41 + 16);
          v42 -= v43;
          v43 = *(unsigned int *)(v41 + 44);
        }
        while ( v42 >= v43 );
        BugCheckParameter2 = v41;
      }
      *(_QWORD *)(v22 + 72) = v41;
      v44 = v37;
      v90 = v37;
      *(_QWORD *)(v22 + 80) = *(_QWORD *)(v41 + 8) + 8 * v42;
      *(_QWORD *)(v22 + 88) = *(_QWORD *)(v91 + 64) + 8 * (*(unsigned int *)(v91 + 8) - 1LL);
      if ( (a8 & 4) == 0 )
      {
        v90 = v37;
        if ( v10 != PsSecureSystemProcess )
        {
          v90 = v37;
          if ( v33 != v34 )
          {
            if ( (v12 & 0x400) == 0 && (a2[5] & 0x800000) == 0 || (v12 & 2) == 0 || (a1[14] & 0x800) != 0 )
            {
              v90 = v37;
              if ( (v12 & 0x400) != 0 )
                goto LABEL_178;
            }
            else
            {
              FixupVad = MiAllocateFixupVad(v22);
              if ( FixupVad )
              {
                ExFreePoolWithTag((PVOID)v22, 0);
                v22 = (__int64)FixupVad;
                v44 = 1073741878;
                v90 = 1073741878;
              }
              else
              {
                v90 = v37;
                v44 = v37;
                if ( (v12 & 0x400) != 0 )
                {
                  PerSessionProtos = -1073741670;
                  goto LABEL_179;
                }
              }
            }
          }
        }
      }
      if ( *((_DWORD *)a2 + 12) )
        *(_BYTE *)(*(_QWORD *)(v10 + 1296) + 320LL) = 1;
      v45 = a1;
      if ( (a1[14] & 0x4000000) != 0 )
      {
        SessionId = MmGetSessionIdEx(v10);
        PerSessionProtos = MiCreatePerSessionProtos(a1, SessionId);
        if ( PerSessionProtos < 0 )
          goto LABEL_179;
        v45 = a1;
        LOWORD(v12) = v12 | 0x80;
      }
      if ( (*(_DWORD *)(v22 + 64) & 0x10000000) != 0 )
      {
        v83 = *(unsigned int *)(v22 + 52);
        LODWORD(v83) = v83 & 0x7FFFFFFF;
        v84 = ((unsigned __int64)*(unsigned __int8 *)(v22 + 34) << 31) | v83;
        v85 = MiUpdatePrivateDemandZeroView(v10, v22, 0) + v84;
        *(_DWORD *)(v22 + 52) ^= (v85 ^ *(_DWORD *)(v22 + 52)) & 0x7FFFFFFF;
        *(_BYTE *)(v22 + 34) = v85 >> 31;
        v109[1] = v92;
        MiInsertVadEvent(v22, v109, 0);
        v45 = a1;
        LOWORD(v12) = v12 | 0x20;
      }
      PerSessionProtos = MiInsertSharedCommitNode(v45, v10, 0LL);
      if ( PerSessionProtos < 0 )
        goto LABEL_179;
      LOWORD(v12) = v12 | 0x40;
      v47 = MiControlAreaRequiresCharge((__int64)a1, (a8 & 8) != 0);
      if ( !v47 )
      {
        PerSessionProtos = -1073740277;
        goto LABEL_179;
      }
      if ( v47 == 2 )
      {
        PerSessionProtos = MiReferenceActiveSubsection((__int64 *)BugCheckParameter2, v48, 0x11u);
        if ( PerSessionProtos < 0 )
          goto LABEL_179;
        LOWORD(v12) = v12 | 0x100;
      }
      PerSessionProtos = MiInsertVadCharges(v22, (struct _KPROCESS *)v10);
      if ( PerSessionProtos >= 0 )
      {
        if ( v44 == 1073741878 )
          ++*(_QWORD *)(*(_QWORD *)(v10 + 1296) + 352LL);
        MiGetWsAndInsertVad(v22);
        v50 = 0LL;
        if ( v93 == 0x200000 )
        {
          MiLockVad(v92, v22);
          PerSessionProtos = MiMapUserLargePages(v22, *((unsigned int *)a2 + 12), 0LL);
          if ( PerSessionProtos < 0 )
          {
            UNLOCK_ADDRESS_SPACE_UNORDERED(v92, v10);
            goto LABEL_207;
          }
          MiUnlockVad(v92, v22, v86, v87);
        }
        v51 = v100;
        if ( v100 )
          MiAdvanceVadHint(v95, v40);
        v52 = (v101 << 16) + v97;
        v97 = v52;
        *a3 = v52;
        if ( !*(_BYTE *)(v102 + 50)
          || (v53 = *(_WORD *)(v102 + 48), v53 >= MEMORY[0xFFFFF7800000002C]) && v53 <= MEMORY[0xFFFFF7800000002E]
          || (v66 = *(_QWORD *)(v10 + 1064)) != 0 && ((v67 = *(_WORD *)(v66 + 8), v67 == 332) || v67 == 452) )
        {
          v54 = v90;
        }
        else
        {
          v54 = 1073741838;
          v90 = 1073741838;
        }
        if ( (PerfGlobalGroupMask & 0x8000) != 0 )
        {
          MiLogMapFileEvent(v22, 1061LL);
          v54 = v90;
        }
        v55 = v12 | 4;
        if ( (*(_BYTE *)(v22 + 48) & 0xF8) != 0x38 )
        {
          v59 = v92;
LABEL_94:
          if ( (v55 & 4) != 0 )
            UNLOCK_ADDRESS_SPACE(v59, v10, v51, v49);
          if ( (v55 & 0x200) == 0 && a5 && (*(_BYTE *)(v10 + 720) & 1) == 0 )
            *((_DWORD *)a2 + 16) |= 4u;
          return v90;
        }
        if ( (NtGlobalFlag & 0x40000) == 0
          || (v70 = v54 - 1073741827, v70 <= 0x33) && (v71 = v70, v72 = 0x8000000000801LL, _bittest64(&v72, v71)) )
        {
          v56 = (__int64)a1;
        }
        else
        {
          v51 = v91;
          if ( (*(_BYTE *)(v92 + 1752) & 0x20) != 0
            || (v73 = *(_WORD *)(v91 + 12), (v73 & 0x2000) != 0)
            || *(char *)(v91 + 14) >= 0 )
          {
            v56 = (__int64)a1;
LABEL_73:
            if ( v32 )
            {
              v104 = 3;
              if ( (*(_DWORD *)(v22 + 64) & 0x8000000) != 0 )
              {
                v57 = v104;
              }
              else
              {
                v104 = v104 & 0xFFFF0FFF | ((*(_BYTE *)(v51 + 15) & 0xF0) << 8);
                v57 = v104 ^ (v104 ^ (*(unsigned __int8 *)(v51 + 15) << 15)) & 0x70000;
              }
              v58 = 0;
              if ( v90 == 1073741838 )
                v58 = 2048;
              v104 = v57 & 0xFFFFF7FF | v58;
              v105 = v97;
              v107 = a2[3];
              if ( a2[3] != _InterlockedCompareExchange64((volatile signed __int64 *)(v51 + 24), -1LL, -1LL) )
                v104 |= 0x80000u;
              v106 = 0;
              v108 = 0;
              v50 = (char *)MiReferenceControlAreaFile(v56);
              v55 |= 8u;
            }
            if ( (v55 & 0x200) != 0 || !MiIsProcessCfgEnabled() )
            {
              if ( (*(_DWORD *)(v22 + 64) & 0x10000000) != 0 )
                v55 |= 8u;
            }
            else
            {
              v55 |= 0x18u;
            }
            v59 = v92;
            if ( (v55 & 8) == 0 )
              goto LABEL_94;
            MiLockVad(v92, v22);
            UNLOCK_ADDRESS_SPACE_UNORDERED(v92, v10);
            v55 &= ~4u;
            if ( (*(_DWORD *)(v22 + 64) & 0x10000000) != 0 )
            {
              MiUpdatePrivateDemandZeroView(v10, v22, 1);
              MiRemoveVadEvent(v22, v109);
              v55 &= ~0x20u;
            }
            if ( (v55 & 0x10) != 0 )
            {
              PerSessionProtos = MiCommitVadCfgBits(v22, 0LL, 0LL);
              if ( PerSessionProtos < 0 )
                goto LABEL_207;
              v59 = v92;
            }
            if ( !v32
              || (v32 = MiAddSecureEntry(v22, (_DWORD)v95 << 12, ((_DWORD)v40 << 12) | 0xFFFu, -2147483647, 0)) != 0 )
            {
              MiUnlockVad(v59, v22, v60, v61);
              if ( v32 )
              {
                PsCallImageNotifyRoutines(v50 + 88, v10, v103, v50);
                ObfDereferenceObject(v50);
                MmUnsecureVirtualMemory((HANDLE)(v10 ^ v32 ^ qword_1403CB688));
              }
              goto LABEL_94;
            }
            PerSessionProtos = -1073741670;
LABEL_207:
            MiReferenceVad(v22);
            if ( v50 )
              ObfDereferenceObject(v50);
            MiUnmapVad(v22, 0LL, 0LL);
            return (unsigned int)PerSessionProtos;
          }
          v74 = v52;
          v56 = (__int64)a1;
          *(_WORD *)(v91 + 12) = v73 | 0x2000;
          MiLoadUserSymbols(a1, v74, v10);
        }
        v51 = v91;
        goto LABEL_73;
      }
LABEL_179:
      if ( (v12 & 0x80u) == 0 )
      {
        v77 = (__int64)a1;
      }
      else
      {
        MmGetSessionIdEx(v10);
        v77 = (__int64)a1;
        MiDereferencePerSessionProtos(a1);
      }
      if ( (v12 & 0x100) != 0 )
        MiReturnCrossPartitionControlAreaCharges(v77);
      if ( (v12 & 0x40) != 0 )
        MiRemoveSharedCommitNode(v77, v10, 0LL);
      UNLOCK_ADDRESS_SPACE(v92, v10, v33, v34);
      if ( (v12 & 0x20) != 0 )
        MiRemoveVadEvent(v22, v109);
      if ( v22 )
      {
        if ( v93 == 0x200000 )
          MiFreeLargePageView(v10, v22, 0LL);
        v88 = *(void **)(v22 + 128);
        if ( v88 )
          ObfDereferenceObject(v88);
        ExFreePoolWithTag((PVOID)v22, 0);
      }
      MiDereferenceControlArea(v77);
      return (unsigned int)PerSessionProtos;
    }
    if ( v20 > 0x7FFFFFFF0000LL )
    {
      PerSessionProtos = -1073741801;
      goto LABEL_179;
    }
    if ( (v12 & 1) == 0 && (unsigned int)MiIsVaRangeAvailable(v10, v31, v20, *a2, a2[1]) )
      goto LABEL_43;
    v63 = a2[1];
    v34 = 0LL;
    v64 = 0LL;
    v96 = 0LL;
    if ( v98 < 0x100000000LL && v63 >= 0x100000000LL && (*(_BYTE *)(v91 + 15) & 1) == 0 )
      v63 = 0xFFFFFFFFLL;
    if ( (*(_BYTE *)(v91 + 14) & 0x40) != 0 )
    {
      v68 = *(_QWORD *)(v10 + 1064);
      if ( !v68 || (v69 = *(_WORD *)(v68 + 8), v69 != 332) && v69 != v36 )
      {
        v64 = 0x100000000LL;
        v96 = 0x100000000LL;
      }
    }
    if ( *a2 >= v63 )
    {
      PerSessionProtos = -1073741801;
    }
    else
    {
      PerSessionProtos = MiSelectUserAddress(
                           *((unsigned int *)a2 + 10),
                           *a2,
                           v63,
                           v89,
                           v35,
                           v64,
                           (unsigned __int8)*(_DWORD *)(v22 + 48) >> 3,
                           0,
                           &v100,
                           &v97);
      if ( PerSessionProtos >= 0 )
      {
        v20 = v89;
LABEL_117:
        if ( v93 == 0x200000 )
        {
          v78 = a2[3];
          if ( v20 - v78 < 0x10000 )
          {
            LOBYTE(v80) = v101;
          }
          else
          {
            v79 = ExGenRandom(1);
            v78 = a2[3];
            v80 = v79 % ((v20 - v78) >> 16);
            v101 = v80;
          }
          v81 = *(_QWORD *)(v22 + 56);
          *(_QWORD *)(v81 + 16) = v78 >> 12;
          *(_BYTE *)(v81 + 8) = v80;
        }
        goto LABEL_43;
      }
      v34 = 0LL;
    }
    v33 = a2[1];
    v14 = v63 == v33;
    v20 = v89;
    if ( !v14 )
      PerSessionProtos = MiSelectUserAddress(
                           *((unsigned int *)a2 + 10),
                           *a2,
                           v33,
                           v89,
                           v93,
                           v96,
                           (unsigned __int8)*(_DWORD *)(v22 + 48) >> 3,
                           0,
                           &v100,
                           &v97);
    if ( PerSessionProtos < 0 )
      goto LABEL_179;
    goto LABEL_117;
  }
  return result;
}
