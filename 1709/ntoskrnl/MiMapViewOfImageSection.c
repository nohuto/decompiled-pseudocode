/*
 * XREFs of MiMapViewOfImageSection @ 0x1404D1270
 * Callers:
 *     MiMapViewOfSection @ 0x1404CFC50 (MiMapViewOfSection.c)
 *     MiMapImageInSystemProcess @ 0x1406DF038 (MiMapImageInSystemProcess.c)
 * Callees:
 *     MiReferenceVad @ 0x14003D48C (MiReferenceVad.c)
 *     MiLockVad @ 0x14003D4A0 (MiLockVad.c)
 *     MiReferenceControlAreaFile @ 0x1400679F0 (MiReferenceControlAreaFile.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14009F9C0 (MiCheckPurgeAndUpMapCount.c)
 *     MiGetWsAndInsertVad @ 0x14009FAE0 (MiGetWsAndInsertVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400A0BBC (LOCK_ADDRESS_SPACE.c)
 *     MiReferenceActiveSubsection @ 0x1400A1320 (MiReferenceActiveSubsection.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400A20E0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiControlAreaRequiresCharge @ 0x1400A27AC (MiControlAreaRequiresCharge.c)
 *     MiIsProcessCfgEnabled @ 0x1400A53F4 (MiIsProcessCfgEnabled.c)
 *     MiUnlockVad @ 0x1400A5788 (MiUnlockVad.c)
 *     MiInsertVadEvent @ 0x1400A59A0 (MiInsertVadEvent.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1400A5A80 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     ExGenRandom @ 0x1400C3144 (ExGenRandom.c)
 *     MiDereferenceControlArea @ 0x140131C80 (MiDereferenceControlArea.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x140211AE8 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiUpdatePrivateDemandZeroView @ 0x140213E14 (MiUpdatePrivateDemandZeroView.c)
 *     MiRemoveVadEvent @ 0x14021CAD0 (MiRemoveVadEvent.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiAllocateFixupVad @ 0x140471D10 (MiAllocateFixupVad.c)
 *     MiUnmapVad @ 0x140499B30 (MiUnmapVad.c)
 *     MiInsertVadCharges @ 0x1404D0090 (MiInsertVadCharges.c)
 *     MiSelectUserAddress @ 0x1404D0540 (MiSelectUserAddress.c)
 *     MiInsertSharedCommitNode @ 0x1404D0A10 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x1404D0D00 (MiRemoveSharedCommitNode.c)
 *     MiReferenceFileObjectForMap @ 0x1404D1DA4 (MiReferenceFileObjectForMap.c)
 *     MiCommitVadCfgBits @ 0x1404D1EE4 (MiCommitVadCfgBits.c)
 *     MiAllowImageMap @ 0x1404D21DC (MiAllowImageMap.c)
 *     MiIsVaRangeAvailable @ 0x1404D2314 (MiIsVaRangeAvailable.c)
 *     PsCallImageNotifyRoutines @ 0x1404D2A40 (PsCallImageNotifyRoutines.c)
 *     MiAddSecureEntry @ 0x1404D3274 (MiAddSecureEntry.c)
 *     MiArbitraryCodeBlocked @ 0x1404D5370 (MiArbitraryCodeBlocked.c)
 *     MmUnsecureVirtualMemory @ 0x1405401E0 (MmUnsecureVirtualMemory.c)
 *     MiAdvanceVadHint @ 0x14056D510 (MiAdvanceVadHint.c)
 *     MiLoadUserSymbols @ 0x1405EF47C (MiLoadUserSymbols.c)
 *     MiLogMapFileEvent @ 0x1406DEFF0 (MiLogMapFileEvent.c)
 *     MiCreatePerSessionProtos @ 0x1406EB248 (MiCreatePerSessionProtos.c)
 *     MiDereferencePerSessionProtos @ 0x1406EB3BC (MiDereferencePerSessionProtos.c)
 *     MiCreateLargePageVad @ 0x1406EBC04 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x1406EBEE4 (MiFreeLargePageView.c)
 *     MiMapUserLargePages @ 0x1406EC0E4 (MiMapUserLargePages.c)
 */

__int64 __fastcall MiMapViewOfImageSection(
        _DWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        _QWORD *a5,
        unsigned __int64 *a6,
        __int64 a7,
        int a8,
        int a9,
        unsigned __int64 a10,
        int a11,
        char a12)
{
  int v14; // edx
  unsigned int v16; // ebx
  __int64 v17; // r8
  __int64 v18; // r15
  bool v19; // zf
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rcx
  __int64 result; // rax
  int v23; // ecx
  _DWORD *v24; // rax
  unsigned __int64 v25; // rcx
  PVOID PoolWithTag; // rax
  __int64 v27; // rsi
  int v28; // eax
  unsigned int v29; // ecx
  int v30; // eax
  int v31; // eax
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // r15
  __int64 v35; // r14
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // r11
  unsigned __int64 v38; // r10
  unsigned __int64 v39; // r9
  int v40; // edi
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rcx
  ULONG_PTR v43; // r8
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rax
  int v46; // r13d
  _QWORD *v47; // rdi
  int LargePageVad; // edi
  int v49; // eax
  int v50; // r11d
  char *v51; // r13
  unsigned __int64 v52; // r8
  unsigned __int64 v53; // r15
  unsigned __int16 v54; // ax
  int v55; // edi
  __int16 v56; // bx
  __int64 v57; // rdx
  int v58; // ecx
  int v59; // eax
  __int64 v60; // rdi
  _OWORD *FixupVad; // r13
  __int64 v62; // r10
  __int64 v63; // r13
  __int64 v64; // r15
  unsigned __int64 v65; // r15
  unsigned int v66; // eax
  __int64 v67; // rax
  __int64 v68; // rax
  __int16 v69; // cx
  __int16 v70; // cx
  unsigned __int64 v71; // rax
  __int64 v72; // rcx
  __int16 v73; // cx
  int v74; // eax
  void *v75; // rcx
  unsigned int v76; // eax
  __int64 v77; // r14
  unsigned __int64 v78; // rdi
  unsigned __int64 v79; // r15
  unsigned __int64 v80; // rdi
  unsigned __int64 v81; // rdx
  __int64 v82; // rcx
  unsigned int SessionId; // eax
  __int64 v84; // rdi
  unsigned __int64 v85; // rdi
  unsigned __int64 v86; // rdi
  void *v87; // rcx
  __int64 v88; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v89; // [rsp+58h] [rbp-B0h]
  unsigned int v90; // [rsp+58h] [rbp-B0h]
  __int64 v91; // [rsp+60h] [rbp-A8h]
  __int64 v92; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v93; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v94; // [rsp+78h] [rbp-90h]
  unsigned int v95; // [rsp+80h] [rbp-88h]
  int v96; // [rsp+84h] [rbp-84h] BYREF
  __int64 v97; // [rsp+88h] [rbp-80h]
  unsigned __int64 v98; // [rsp+90h] [rbp-78h]
  unsigned __int64 v99; // [rsp+98h] [rbp-70h]
  ULONG_PTR BugCheckParameter2; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v101; // [rsp+A8h] [rbp-60h]
  __int64 v102; // [rsp+B0h] [rbp-58h]
  char v103[8]; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v104; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v105; // [rsp+C8h] [rbp-40h]
  int v106; // [rsp+D0h] [rbp-38h]
  unsigned __int64 v107; // [rsp+D8h] [rbp-30h]
  int v108; // [rsp+E0h] [rbp-28h]
  __int64 v109[8]; // [rsp+F8h] [rbp-10h] BYREF
  int v110; // [rsp+138h] [rbp+30h]

  v14 = a11;
  v16 = 0;
  v95 = a11 & 0x7F;
  if ( v95 > (unsigned __int16)KeNumberNodes )
    return 3221225719LL;
  v17 = *(_QWORD *)a1;
  v18 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
  v92 = *(_QWORD *)a1;
  v102 = v18;
  if ( dword_14038833C == *(_DWORD *)(v18 + 60) && dword_140388340 == *(_DWORD *)(*(_QWORD *)(v17 + 56) + 68LL) )
    __debugbreak();
  v19 = (a1[14] & 0x10000000) == 0;
  v20 = *(_QWORD *)(v17 + 48);
  v21 = *(_QWORD *)(v17 + 32);
  v93 = v20;
  v98 = v21;
  if ( (!v19 || (*(_DWORD *)(a3 + 1740) & 0x2000) != 0) && (*(_BYTE *)(v17 + 15) & 1) == 0 )
    v16 = 1025;
  v97 = 0x10000LL;
  if ( (a11 & 0x20000000) != 0 )
  {
    if ( v21 < 0x100000000LL || v16 >= 0x400 )
      return 3221225496LL;
    if ( (*(_BYTE *)(v18 + 44) & 1) != 0 )
      return 3221226089LL;
    v97 = 0x200000LL;
    *a4 = 0LL;
  }
  if ( !a7 || (*(_DWORD *)(a7 + 56) & 0x80000) != 0 || (v14 & 0x40000) != 0 )
  {
    if ( a9 != 1 )
      return 3221225541LL;
    v16 |= 0x200u;
  }
  if ( (v16 & 0x200) == 0 )
  {
    result = MiAllowImageMap(a3, a7, a1, v18);
    if ( (int)result < 0 )
      return result;
    v23 = *(_DWORD *)(a3 + 2088);
    if ( (v23 & 0x10) == 0 || (*(_BYTE *)(v18 + 51) & 4) != 0 )
      goto LABEL_13;
    if ( (*(_BYTE *)(v18 + 44) & 1) == 0 )
    {
      v16 |= 1u;
LABEL_13:
      v17 = v92;
      goto LABEL_14;
    }
    if ( (v23 & 8) == 0 )
      goto LABEL_13;
    return 3221226089LL;
  }
LABEL_14:
  if ( (*(_BYTE *)(a3 + 720) & 1) == 0 || a3 == PsSecureSystemProcess )
    v16 |= 2u;
  if ( (*(_BYTE *)(v17 + 15) & 1) != 0 && (*(_DWORD *)(a3 + 2088) & 0x40) == 0 )
  {
    v16 |= 1u;
    if ( v16 < 0x400 )
      v16 &= ~2u;
  }
  v101 = 0LL;
  if ( (v16 & 0x200) != 0 )
    goto LABEL_21;
  v24 = a1 + 32;
  if ( a1 == (_DWORD *)-128LL )
    goto LABEL_21;
  while ( (v24[8] & 0xEu) < 0xC )
  {
    v24 = (_DWORD *)*((_QWORD *)v24 + 2);
    if ( !v24 )
      goto LABEL_21;
  }
  result = MiArbitraryCodeBlocked(a2);
  if ( (int)result >= 0 )
  {
LABEL_21:
    BugCheckParameter2 = (ULONG_PTR)(a1 + 32);
    MiCheckPurgeAndUpMapCount((__int64)a1);
    v25 = *a6;
    if ( !*a6 )
      v25 = *(_QWORD *)(a7 + 48) - *a5;
    v94 = 0x7FFFFFFDFFFFLL;
    v99 = (v25 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v89 = v99;
    if ( a10 )
    {
      v94 = 0xFFFFFFFFFFFFFFFFuLL >> a10;
      v20 = v93;
      if ( 0xFFFFFFFFFFFFFFFFuLL >> a10 > 0x7FFFFFFDFFFFLL )
        v94 = 0x7FFFFFFDFFFFLL;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x20646156u);
    v27 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
    {
      MiDereferenceControlArea((__int64)a1);
      return 3221225626LL;
    }
    memset(PoolWithTag, 0, 0x88uLL);
    v28 = *(_DWORD *)(v27 + 64);
    *(_QWORD *)(v27 + 16) = -2LL;
    v29 = v28 & 0xFBFFFFFF | ((a8 == 1) << 26);
    v30 = *(_DWORD *)(v27 + 48);
    *(_DWORD *)(v27 + 64) = v29;
    *(_DWORD *)(v27 + 48) = v30 & 0xFFFFC0FA | ((v95 & 0x3F) << 8) | 2;
    if ( a7 )
    {
      *(_QWORD *)(v27 + 128) = MiReferenceFileObjectForMap(a7);
      *(_DWORD *)(v27 + 64) ^= (*(_DWORD *)(v27 + 64) ^ (*(_DWORD *)(a7 + 60) >> 4)) & 0x8000000;
    }
    v31 = *(_DWORD *)(v27 + 48);
    *(_QWORD *)(v27 + 40) = 0LL;
    if ( (v16 & 0x200) != 0 )
    {
      *(_DWORD *)(v27 + 48) = v31 & 0xFFFFBF07 | 0x4008;
      v66 = v16 | 1;
      LOWORD(v16) = v16 & 0xFFFC | 1;
      if ( v66 >= 0x400 )
        LOWORD(v16) = v66;
    }
    else
    {
      *(_DWORD *)(v27 + 48) = v31 & 0xFFFFFF07 | 0x38;
      if ( (*(_BYTE *)(a3 + 720) & 1) != 0 )
        *(_DWORD *)(v27 + 64) |= 0x10000000u;
      *(_DWORD *)(v27 + 52) ^= (v20 ^ *(_DWORD *)(v27 + 52)) & 0x7FFFFFFF;
      *(_BYTE *)(v27 + 34) = v20 >> 31;
    }
    CurrentThread = KeGetCurrentThread();
    v33 = v98;
    v96 = 0;
    v91 = (__int64)CurrentThread;
    if ( *a4 )
      v34 = *a4 & 0xFFFFFFFFFFFF0000uLL;
    else
      v34 = v98 + (*(_DWORD *)a5 & 0xFFFF0000);
    v93 = v34;
    if ( v97 == 0x200000 )
    {
      LOWORD(v16) = v16 & 0xFFFC | 1;
      v89 = (v99 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
      v74 = (v89 >> 12) ^ *(_DWORD *)(v27 + 52);
      *(_BYTE *)(v27 + 34) = v89 >> 43;
      *(_DWORD *)(v27 + 52) ^= v74 & 0x7FFFFFFF;
      *(_DWORD *)(v27 + 64) |= 0x1000000u;
      LargePageVad = MiCreateLargePageVad(a3, v27);
      if ( LargePageVad < 0 )
      {
        v75 = *(void **)(v27 + 128);
        if ( v75 )
          ObfDereferenceObject(v75);
        MiDereferenceControlArea((__int64)a1);
        ExFreePoolWithTag((PVOID)v27, 0);
        return (unsigned int)LargePageVad;
      }
      v33 = v98;
    }
    if ( (*(_BYTE *)(v27 + 48) & 0xF8) == 0x38
      && *(_QWORD *)(a3 + 736)
      && (*(_DWORD *)(a3 + 1740) & 0x1000) == 0
      && a3 != PsSecureSystemProcess )
    {
      if ( (PspNotifyEnableMask & 1) != 0 || (PerfGlobalGroupMask & 4) != 0 )
      {
        v34 = v93;
        v35 = 1LL;
        goto LABEL_40;
      }
      v34 = v93;
    }
    v35 = 0LL;
LABEL_40:
    v110 = 32;
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, a3);
    if ( (*(_DWORD *)(a3 + 772) & 0x20) != 0 )
    {
      LargePageVad = -1073741558;
    }
    else if ( *a4 )
    {
      if ( (unsigned int)MiIsVaRangeAvailable(a3, v34, v89, v94) )
      {
LABEL_46:
        v39 = v98;
        v40 = 1073741827;
        v41 = v34 - (*(_DWORD *)a5 & 0xFFFF0000);
        if ( v41 == v98 )
          v40 = 0;
        *(_DWORD *)(v27 + 24) = v34 >> 12;
        v42 = (v34 + v38 - 1) >> 12;
        v94 = v34 >> 12;
        *(_BYTE *)(v27 + 32) = v34 >> 12 >> 32;
        *(_DWORD *)(v27 + 28) = v42;
        *(_BYTE *)(v27 + 33) = BYTE4(v42);
        *(_WORD *)a5 = 0;
        v98 = v42;
        v43 = BugCheckParameter2;
        v44 = *a5 >> 12;
        v45 = *(unsigned int *)(BugCheckParameter2 + 44);
        if ( v44 >= v45 )
        {
          do
          {
            v43 = *(_QWORD *)(v43 + 16);
            v44 -= v45;
            v45 = *(unsigned int *)(v43 + 44);
          }
          while ( v44 >= v45 );
          BugCheckParameter2 = v43;
        }
        *(_QWORD *)(v27 + 72) = v43;
        v46 = v40;
        v90 = v40;
        *(_QWORD *)(v27 + 80) = *(_QWORD *)(v43 + 8) + 8 * v44;
        v19 = (a12 & 4) == 0;
        *(_QWORD *)(v27 + 88) = *(_QWORD *)(v92 + 64) + 8 * (*(unsigned int *)(v92 + 8) - 1LL);
        if ( v19 )
        {
          v90 = v40;
          if ( v41 != v39 )
          {
            if ( (((v16 & 0x400) == 0) & !_bittest(&a11, 0x17u)) != 0 || (a1[14] & 0x800) != 0 || (v16 & 2) == 0 )
            {
              v90 = v40;
              if ( (v16 & 0x400) != 0 )
              {
                LargePageVad = -1073741800;
                goto LABEL_184;
              }
            }
            else
            {
              FixupVad = MiAllocateFixupVad(v27);
              if ( FixupVad )
              {
                ExFreePoolWithTag((PVOID)v27, 0);
                v27 = (__int64)FixupVad;
                v46 = 1073741878;
                v90 = 1073741878;
              }
              else
              {
                v90 = v40;
                v46 = v40;
                if ( (v16 & 0x400) != 0 )
                {
                  LargePageVad = -1073741670;
                  goto LABEL_184;
                }
              }
            }
          }
        }
        if ( v95 )
          *(_BYTE *)(*(_QWORD *)(a3 + 1296) + 232LL) = 1;
        v47 = a1;
        if ( (a1[14] & 0x4000000) != 0 )
        {
          SessionId = MmGetSessionIdEx(a3);
          LargePageVad = MiCreatePerSessionProtos(a1, SessionId);
          if ( LargePageVad < 0 )
            goto LABEL_184;
          v47 = a1;
          LOWORD(v16) = v16 | 0x80;
        }
        if ( (*(_DWORD *)(v27 + 64) & 0x10000000) != 0 )
        {
          v84 = *(unsigned int *)(v27 + 52);
          LODWORD(v84) = v84 & 0x7FFFFFFF;
          v85 = ((unsigned __int64)*(unsigned __int8 *)(v27 + 34) << 31) | v84;
          v86 = MiUpdatePrivateDemandZeroView(a3, v27, 0) + v85;
          *(_DWORD *)(v27 + 52) ^= (v86 ^ *(_DWORD *)(v27 + 52)) & 0x7FFFFFFF;
          *(_BYTE *)(v27 + 34) = v86 >> 31;
          MiInsertVadEvent(v27, v109, 0);
          v47 = a1;
          LOWORD(v16) = v16 | 0x20;
        }
        LargePageVad = MiInsertSharedCommitNode(v47, a3, 0);
        if ( LargePageVad >= 0 )
        {
          LOWORD(v16) = v16 | 0x40;
          v49 = MiControlAreaRequiresCharge((__int64)a1);
          if ( v49 )
          {
            if ( v49 != 2 )
              goto LABEL_59;
            LargePageVad = MiReferenceActiveSubsection((__int64 *)BugCheckParameter2, v50, 0x11u);
            if ( LargePageVad >= 0 )
            {
              LOWORD(v16) = v16 | 0x100;
LABEL_59:
              LargePageVad = MiInsertVadCharges(v27, (struct _KPROCESS *)a3);
              if ( LargePageVad >= 0 )
              {
                if ( v46 == 1073741878 )
                  ++*(_QWORD *)(*(_QWORD *)(a3 + 1296) + 248LL);
                MiGetWsAndInsertVad(v27);
                v51 = 0LL;
                if ( v97 == 0x200000 )
                {
                  MiLockVad(v91, v27);
                  LargePageVad = MiMapUserLargePages(v27, v95);
                  if ( LargePageVad < 0 )
                  {
                    UNLOCK_ADDRESS_SPACE_UNORDERED(v91, a3);
                    goto LABEL_204;
                  }
                  MiUnlockVad(v91, v27);
                }
                if ( v96 == 1 )
                  MiAdvanceVadHint(v94, v98, 0LL);
                v52 = v99;
                *a6 = v99;
                v53 = (v101 << 16) + v34;
                v93 = v53;
                *a4 = v53;
                if ( !*(_BYTE *)(v102 + 50)
                  || (v54 = *(_WORD *)(v102 + 48), v54 >= MEMORY[0xFFFFF7800000002C])
                  && v54 <= MEMORY[0xFFFFF7800000002E]
                  || (v67 = *(_QWORD *)(a3 + 1064)) != 0 && ((v69 = *(_WORD *)(v67 + 8), v69 == 332) || v69 == 452) )
                {
                  v55 = v90;
                }
                else
                {
                  v55 = 1073741838;
                  v90 = 1073741838;
                }
                if ( (PerfGlobalGroupMask & 0x8000) != 0 )
                {
                  MiLogMapFileEvent(v27, 1061LL);
                  v52 = v99;
                }
                v56 = v16 | 4;
                if ( (*(_BYTE *)(v27 + 48) & 0xF8) != 0x38 )
                {
                  v60 = v91;
LABEL_95:
                  if ( (v56 & 4) != 0 )
                    UNLOCK_ADDRESS_SPACE(v60, a3);
                  return v90;
                }
                if ( (NtGlobalFlag & 0x40000) != 0 )
                {
                  v71 = (unsigned int)(v55 - 1073741827);
                  if ( (unsigned int)v71 > 0x33 || (v72 = 0x8000000000801LL, !_bittest64(&v72, v71)) )
                  {
                    v57 = v92;
                    if ( (*(_BYTE *)(v91 + 1752) & 0x20) != 0 )
                      goto LABEL_74;
                    v73 = *(_WORD *)(v92 + 12);
                    if ( (v73 & 0x2000) != 0 || *(char *)(v92 + 14) >= 0 )
                      goto LABEL_74;
                    *(_WORD *)(v92 + 12) = v73 | 0x2000;
                    MiLoadUserSymbols(a1, v53, a3);
                    v52 = v99;
                  }
                }
                v57 = v92;
LABEL_74:
                if ( v35 )
                {
                  v104 = 3;
                  if ( (*(_DWORD *)(v27 + 64) & 0x8000000) != 0 )
                  {
                    v58 = v104;
                  }
                  else
                  {
                    v104 = v104 & 0xFFFF0FFF | ((*(_BYTE *)(v57 + 15) & 0xF0) << 8);
                    v58 = (v104 ^ (*(unsigned __int8 *)(v57 + 15) << 15)) & 0x70000 ^ v104;
                  }
                  v105 = v53;
                  v59 = 0;
                  v107 = v52;
                  if ( v55 == 1073741838 )
                    v59 = 2048;
                  v104 = v58 & 0xFFFFF7FF | v59;
                  if ( v52 != _InterlockedCompareExchange64((volatile signed __int64 *)(v57 + 24), -1LL, -1LL) )
                    v104 |= 0x80000u;
                  v106 = 0;
                  v108 = 0;
                  v51 = (char *)MiReferenceControlAreaFile((__int64)a1);
                  v56 |= 8u;
                }
                if ( (v56 & 0x200) != 0 || !MiIsProcessCfgEnabled() )
                {
                  if ( (*(_DWORD *)(v27 + 64) & 0x10000000) != 0 )
                    LOBYTE(v56) = v56 | 8;
                }
                else
                {
                  LOBYTE(v56) = v56 | 0x18;
                }
                v60 = v91;
                if ( (v56 & 8) == 0 )
                  goto LABEL_95;
                MiLockVad(v91, v27);
                UNLOCK_ADDRESS_SPACE_UNORDERED(v91, a3);
                LOBYTE(v56) = v56 & 0xFB;
                if ( (*(_DWORD *)(v27 + 64) & 0x10000000) != 0 )
                {
                  MiUpdatePrivateDemandZeroView(a3, v27, 1);
                  MiRemoveVadEvent(v27, v109);
                  LOBYTE(v56) = v56 & 0xDF;
                }
                if ( (v56 & 0x10) == 0 )
                  goto LABEL_91;
                LargePageVad = MiCommitVadCfgBits(v27, 0LL, 0LL);
                if ( LargePageVad >= 0 )
                {
                  v60 = v91;
LABEL_91:
                  if ( !v35
                    || (v35 = MiAddSecureEntry(v27, (_DWORD)v94 << 12, ((_DWORD)v98 << 12) | 0xFFFu, -2147483647, 0)) != 0 )
                  {
                    MiUnlockVad(v60, v27);
                    if ( v35 )
                    {
                      PsCallImageNotifyRoutines(v51 + 88, a3, v103, v51);
                      ObfDereferenceObject(v51);
                      MmUnsecureVirtualMemory((HANDLE)(a3 ^ qword_1403884F0 ^ v35));
                    }
                    goto LABEL_95;
                  }
                  LargePageVad = -1073741670;
                }
LABEL_204:
                MiReferenceVad(v27);
                if ( v51 )
                  ObfDereferenceObject(v51);
                MiUnmapVad(v27, 0);
                return (unsigned int)LargePageVad;
              }
            }
          }
          else
          {
            LargePageVad = -1073740277;
          }
        }
LABEL_184:
        CurrentThread = (struct _KTHREAD *)v91;
        goto LABEL_185;
      }
      LargePageVad = -1073741800;
    }
    else
    {
      v36 = v89;
      if ( v89 <= 0x7FFFFFFDFFFFLL )
      {
        v37 = v94;
        if ( (v16 & 1) == 0 )
        {
          if ( (unsigned int)MiIsVaRangeAvailable(a3, v34, v89, v94) )
          {
LABEL_45:
            v38 = v89;
            goto LABEL_46;
          }
          v36 = v89;
        }
        v62 = a10;
        v63 = a10;
        v64 = 0LL;
        if ( v33 < 0x100000000LL && v37 >= 0x100000000LL && (*(_BYTE *)(v92 + 15) & 1) == 0 && a10 < 0x20 )
        {
          v62 = 32LL;
          a10 = 32LL;
        }
        if ( (*(_BYTE *)(v92 + 14) & 0x40) != 0 )
        {
          v68 = *(_QWORD *)(a3 + 1064);
          if ( !v68 || (v70 = *(_WORD *)(v68 + 8), v70 != 332) && v70 != 452 )
            v64 = 0x100000000LL;
        }
        LargePageVad = MiSelectUserAddress(
                         a11,
                         v62,
                         v36,
                         v97,
                         v64,
                         (unsigned __int8)*(_DWORD *)(v27 + 48) >> 3,
                         0,
                         &v96,
                         &v93);
        if ( LargePageVad < 0 )
        {
          if ( a10 == v63 )
          {
            v65 = v89;
          }
          else
          {
            v88 = v64;
            v65 = v89;
            LargePageVad = MiSelectUserAddress(
                             a11,
                             v63,
                             v89,
                             v97,
                             v88,
                             (unsigned __int8)*(_DWORD *)(v27 + 48) >> 3,
                             0,
                             &v96,
                             &v93);
          }
          if ( LargePageVad < 0 )
            goto LABEL_184;
        }
        else
        {
          v65 = v89;
        }
        if ( v97 == 0x200000 )
        {
          v78 = v65;
          v79 = v99;
          v80 = (v78 - v99) >> 16;
          if ( v80 )
          {
            v81 = (unsigned int)ExGenRandom(1) % v80;
            v101 = v81;
          }
          else
          {
            LOBYTE(v81) = v101;
          }
          v82 = *(_QWORD *)(v27 + 56);
          *(_QWORD *)(v82 + 16) = v79 >> 12;
          *(_BYTE *)(v82 + 8) = v81;
        }
        v34 = v93;
        goto LABEL_45;
      }
      LargePageVad = -1073741801;
    }
LABEL_185:
    if ( (v16 & 0x80u) == 0 )
    {
      v77 = (__int64)a1;
    }
    else
    {
      v76 = MmGetSessionIdEx(a3);
      v77 = (__int64)a1;
      MiDereferencePerSessionProtos(a1, v76);
    }
    if ( (v16 & 0x100) != 0 )
      MiReturnCrossPartitionControlAreaCharges(v77);
    if ( (v16 & 0x40) != 0 )
      MiRemoveSharedCommitNode(v77, a3, 0);
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, a3);
    if ( (v16 & 0x20) != 0 )
      MiRemoveVadEvent(v27, v109);
    if ( v27 )
    {
      if ( v97 == 0x200000 )
        MiFreeLargePageView(a3, v27, 0LL);
      v87 = *(void **)(v27 + 128);
      if ( v87 )
        ObfDereferenceObject(v87);
      ExFreePoolWithTag((PVOID)v27, 0);
    }
    MiDereferenceControlArea(v77);
    return (unsigned int)LargePageVad;
  }
  return result;
}
