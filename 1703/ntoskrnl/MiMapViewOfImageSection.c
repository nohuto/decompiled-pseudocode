/*
 * XREFs of MiMapViewOfImageSection @ 0x140511460
 * Callers:
 *     MiMapViewOfSection @ 0x1405198A0 (MiMapViewOfSection.c)
 *     MiMapImageInSystemProcess @ 0x1406B306C (MiMapImageInSystemProcess.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140022EC0 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiUnlockVad @ 0x1400403D0 (MiUnlockVad.c)
 *     ExGenRandom @ 0x14004F864 (ExGenRandom.c)
 *     MiIsProcessCfgEnabled @ 0x14006341C (MiIsProcessCfgEnabled.c)
 *     MiArbitraryCodeBlocked @ 0x14007D6D0 (MiArbitraryCodeBlocked.c)
 *     MiReferenceControlAreaFile @ 0x140096B20 (MiReferenceControlAreaFile.c)
 *     MiControlAreaRequiresCharge @ 0x1400996E8 (MiControlAreaRequiresCharge.c)
 *     MiInsertVadEvent @ 0x140099800 (MiInsertVadEvent.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400998FC (LOCK_ADDRESS_SPACE.c)
 *     MiReferenceActiveSubsection @ 0x14009A070 (MiReferenceActiveSubsection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14009A340 (MiCheckPurgeAndUpMapCount.c)
 *     MiGetWsAndInsertVad @ 0x14009A420 (MiGetWsAndInsertVad.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14009B6E0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiReferenceVad @ 0x1400CE328 (MiReferenceVad.c)
 *     MiLockVad @ 0x1400CE340 (MiLockVad.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     MiDereferenceControlArea @ 0x14013645C (MiDereferenceControlArea.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14020AC6C (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14020CE14 (MiUpdatePrivateDemandZeroView.c)
 *     MiRemoveVadEvent @ 0x140214988 (MiRemoveVadEvent.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiAdvanceVadHint @ 0x1404345F0 (MiAdvanceVadHint.c)
 *     MiAllowImageMap @ 0x1404415B0 (MiAllowImageMap.c)
 *     MiUnmapVad @ 0x14047B5C0 (MiUnmapVad.c)
 *     MiCommitVadCfgBits @ 0x14049B12C (MiCommitVadCfgBits.c)
 *     MiIsVaRangeAvailable @ 0x14049E3E4 (MiIsVaRangeAvailable.c)
 *     MiAllocateFixupVad @ 0x1404B70D4 (MiAllocateFixupVad.c)
 *     PsCallImageNotifyRoutines @ 0x1404FA3F0 (PsCallImageNotifyRoutines.c)
 *     MiReferenceFileObjectForMap @ 0x140511430 (MiReferenceFileObjectForMap.c)
 *     MmUnsecureVirtualMemory @ 0x140511FC0 (MmUnsecureVirtualMemory.c)
 *     MiInsertSharedCommitNode @ 0x140512070 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x140512380 (MiRemoveSharedCommitNode.c)
 *     MiSelectUserAddress @ 0x1405126A0 (MiSelectUserAddress.c)
 *     MiAddSecureEntry @ 0x1405127E0 (MiAddSecureEntry.c)
 *     MiInsertVadCharges @ 0x1405136C0 (MiInsertVadCharges.c)
 *     MiLoadUserSymbols @ 0x1405D4CB0 (MiLoadUserSymbols.c)
 *     MiLogMapFileEvent @ 0x1406B3024 (MiLogMapFileEvent.c)
 *     MiCreatePerSessionProtos @ 0x1406BDE0C (MiCreatePerSessionProtos.c)
 *     MiDereferencePerSessionProtos @ 0x1406BDF80 (MiDereferencePerSessionProtos.c)
 *     MiCreateLargePageVad @ 0x1406BE7A4 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x1406BEB6C (MiFreeLargePageView.c)
 *     MiMapUserLargePages @ 0x1406BEE28 (MiMapUserLargePages.c)
 */

__int64 __fastcall MiMapViewOfImageSection(
        __int64 a1,
        __int64 a2,
        __int64 a3,
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
  unsigned int v15; // ebx
  __int64 v16; // r12
  __int64 v17; // r8
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rax
  __int64 result; // rax
  int v21; // ecx
  int v22; // edx
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r13
  PVOID PoolWithTag; // rax
  __int64 v27; // rsi
  int v28; // eax
  int v29; // eax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v31; // r14
  __int64 v32; // r13
  int v33; // edx
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // r12
  unsigned __int64 v36; // r9
  int v37; // edi
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // r12
  __int64 v40; // r8
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  bool v44; // zf
  __int64 v45; // rcx
  int PerSessionProtos; // edi
  unsigned int v47; // edi
  int v48; // eax
  unsigned __int16 *v49; // r15
  unsigned __int64 v50; // r8
  unsigned __int64 v51; // r14
  unsigned __int16 v52; // ax
  __int64 v53; // rdi
  int v54; // ecx
  char v55; // bl
  __int64 v56; // rdx
  int v57; // ecx
  int v58; // eax
  __int64 v59; // r14
  int v60; // edx
  int v61; // ecx
  unsigned __int64 v62; // r14
  int v63; // r12d
  int v64; // edx
  unsigned int v65; // ecx
  __int64 v66; // rax
  __int16 v67; // cx
  unsigned int v68; // ecx
  unsigned __int64 v69; // rax
  __int64 v70; // rcx
  __int16 v71; // cx
  int v72; // eax
  int LargePageVad; // r13d
  void *v74; // rcx
  void *v75; // rcx
  int v76; // r9d
  unsigned __int64 v77; // r14
  unsigned __int64 v78; // rdi
  unsigned __int64 v79; // rdx
  __int64 v80; // rcx
  unsigned int SessionId; // eax
  __int64 v82; // rdi
  unsigned __int64 v83; // rdi
  unsigned __int64 v84; // rdi
  unsigned __int64 v85; // [rsp+48h] [rbp-C0h]
  unsigned int v86; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v87; // [rsp+50h] [rbp-B8h] BYREF
  struct _KTHREAD *v88; // [rsp+58h] [rbp-B0h]
  unsigned int v89; // [rsp+60h] [rbp-A8h]
  int v90; // [rsp+64h] [rbp-A4h] BYREF
  unsigned __int64 FixupVad; // [rsp+68h] [rbp-A0h]
  __int64 v92; // [rsp+70h] [rbp-98h]
  __int64 v93; // [rsp+78h] [rbp-90h]
  unsigned __int64 v94; // [rsp+80h] [rbp-88h]
  unsigned __int64 v95; // [rsp+88h] [rbp-80h]
  __int64 v96; // [rsp+90h] [rbp-78h]
  unsigned __int64 v97; // [rsp+98h] [rbp-70h]
  __int64 v98; // [rsp+A0h] [rbp-68h]
  char v99[8]; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v100; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v101; // [rsp+B8h] [rbp-50h]
  int v102; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v103; // [rsp+C8h] [rbp-40h]
  int v104; // [rsp+D0h] [rbp-38h]
  _QWORD v105[8]; // [rsp+E8h] [rbp-20h] BYREF
  int v106; // [rsp+128h] [rbp+20h]

  v15 = 0;
  v89 = a11 & 0x7F;
  if ( v89 > (unsigned __int16)KeNumberNodes )
    return 3221225719LL;
  v16 = *(_QWORD *)a1;
  v92 = v16;
  v17 = *(_QWORD *)(v16 + 56);
  v98 = v17;
  if ( dword_14036C01C == *(_DWORD *)(v17 + 60) && dword_14036C020 == *(_DWORD *)(*(_QWORD *)(v16 + 56) + 68LL) )
    __debugbreak();
  v18 = *(_QWORD *)(v16 + 48);
  v19 = *(_QWORD *)(v16 + 32);
  v87 = v18;
  v94 = v19;
  v93 = 0x10000LL;
  if ( (a11 & 0x20000000) != 0 )
  {
    if ( v19 < 0x100000000LL || (*(_DWORD *)(a1 + 56) & 0x10000000) != 0 )
      return 3221225496LL;
    if ( (*(_BYTE *)(v17 + 44) & 1) != 0 )
      return 3221226089LL;
    v93 = 0x200000LL;
    *a4 = 0LL;
  }
  if ( (*(_DWORD *)(a7 + 56) & 0x80000) == 0 )
  {
    result = MiAllowImageMap(a2, a7, a1, v17);
    if ( (int)result < 0 )
      return result;
    v17 = v98;
  }
  v21 = *(_DWORD *)(a7 + 56) & 0x80000;
  if ( v21 && a9 != 1 )
    return 3221225541LL;
  if ( !*(_QWORD *)(a3 + 720) || a3 == PsSecureSystemProcess )
    v15 = 2;
  v22 = *(_DWORD *)(a3 + 768);
  if ( (v22 & 0x8000000) != 0 && (*(_BYTE *)(v17 + 51) & 4) == 0 )
  {
    if ( (*(_BYTE *)(v17 + 44) & 1) != 0 )
    {
      if ( (v22 & 0x1000000) != 0 )
        return 3221226089LL;
    }
    else
    {
      v15 |= 1u;
    }
  }
  if ( (*(_BYTE *)(v16 + 15) & ((v22 & 0x20000) == 0)) != 0 )
  {
    v15 |= 1u;
    if ( (*(_DWORD *)(a1 + 56) & 0x10000000) == 0 )
      v15 &= ~2u;
  }
  v97 = 0LL;
  if ( v21 )
    goto LABEL_16;
  v23 = a1 + 128;
  if ( a1 == -128 )
    goto LABEL_16;
  while ( (*(_BYTE *)(v23 + 32) & 0xEu) < 0xC )
  {
    v23 = *(_QWORD *)(v23 + 16);
    if ( !v23 )
      goto LABEL_16;
  }
  result = MiArbitraryCodeBlocked(a2);
  if ( (int)result >= 0 )
  {
LABEL_16:
    v96 = a1 + 128;
    MiCheckPurgeAndUpMapCount(a1);
    v24 = *a6;
    if ( !*a6 )
      v24 = *(_QWORD *)(a7 + 48) - *a5;
    v25 = (v24 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v95 = v25;
    v85 = v25;
    FixupVad = 0x7FFFFFFDFFFFLL;
    if ( a10 )
    {
      FixupVad = 0xFFFFFFFFFFFFFFFFuLL >> a10;
      v18 = v87;
      if ( 0xFFFFFFFFFFFFFFFFuLL >> a10 > 0x7FFFFFFDFFFFLL )
        FixupVad = 0x7FFFFFFDFFFFLL;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x20646156u);
    v27 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
    {
      MiDereferenceControlArea(a1);
      return 3221225626LL;
    }
    memset(PoolWithTag, 0, 0x88uLL);
    *(_QWORD *)(v27 + 16) = -2LL;
    v28 = *(_DWORD *)(v27 + 48);
    *(_DWORD *)(v27 + 64) = *(_DWORD *)(v27 + 64) & 0xFBFFFFFF | ((a8 == 1) << 26);
    *(_DWORD *)(v27 + 48) = v28 & 0xFFFFC0FA | ((v89 & 0x3F) << 8) | 2;
    *(_QWORD *)(v27 + 128) = MiReferenceFileObjectForMap(a7);
    v29 = (*(_DWORD *)(v27 + 64) ^ (*(_DWORD *)(a7 + 60) >> 4)) & 0x8000000;
    *(_QWORD *)(v27 + 40) = 0LL;
    *(_DWORD *)(v27 + 64) ^= v29;
    if ( (*(_DWORD *)(a7 + 56) & 0x80000) != 0 )
    {
      v64 = v15 | 1;
      v65 = *(_DWORD *)(v27 + 48) & 0xFFFFFF07 | 8;
      v15 = v15 & 0xFFFFFFFC | 1;
      *(_DWORD *)(v27 + 48) = v65;
      v44 = (*(_DWORD *)(a1 + 56) & 0x10000000) == 0;
      *(_DWORD *)(v27 + 48) = v65 | 0x4000;
      if ( !v44 )
        v15 = v64;
    }
    else
    {
      *(_DWORD *)(v27 + 48) = *(_DWORD *)(v27 + 48) & 0xFFFFFF07 | 0x38;
      if ( *(_QWORD *)(a3 + 720) )
        *(_DWORD *)(v27 + 64) |= 0x10000000u;
      *(_DWORD *)(v27 + 52) ^= (v18 ^ *(_DWORD *)(v27 + 52)) & 0x7FFFFFFF;
      *(_BYTE *)(v27 + 34) = v18 >> 31;
    }
    CurrentThread = KeGetCurrentThread();
    v90 = 0;
    v88 = CurrentThread;
    if ( *a4 )
      v31 = *a4 & 0xFFFFFFFFFFFF0000uLL;
    else
      v31 = v94 + (*(_DWORD *)a5 & 0xFFFF0000);
    v87 = v31;
    if ( v93 == 0x200000 )
    {
      v85 = (v25 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
      v15 = v15 & 0xFFFFFFFC | 1;
      v72 = (v85 >> 12) ^ *(_DWORD *)(v27 + 52);
      *(_BYTE *)(v27 + 34) = v85 >> 43;
      *(_DWORD *)(v27 + 52) ^= v72 & 0x7FFFFFFF;
      *(_DWORD *)(v27 + 64) |= 0x1000000u;
      LargePageVad = MiCreateLargePageVad(a3, v27);
      if ( LargePageVad < 0 )
      {
        v74 = *(void **)(v27 + 128);
        if ( v74 )
          ObfDereferenceObject(v74);
        MiDereferenceControlArea(a1);
        ExFreePoolWithTag((PVOID)v27, 0);
        return (unsigned int)LargePageVad;
      }
      CurrentThread = v88;
    }
    if ( (*(_BYTE *)(v27 + 48) & 0xF8) == 0x38
      && *(_QWORD *)(a3 + 736)
      && (PEPROCESS)a3 != PsInitialSystemProcess
      && a3 != PsSecureSystemProcess )
    {
      if ( (PspNotifyEnableMask & 1) != 0 || (PerfGlobalGroupMask & 4) != 0 )
      {
        v31 = v87;
        v32 = 1LL;
        goto LABEL_33;
      }
      v31 = v87;
    }
    v32 = 0LL;
LABEL_33:
    v106 = 32;
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, a3);
    if ( (*(_DWORD *)(a3 + 772) & 0x20) != 0 )
    {
      PerSessionProtos = -1073741558;
      goto LABEL_167;
    }
    if ( *a4 )
    {
      v35 = v85;
      if ( !MiIsVaRangeAvailable(a3, v31, v85, FixupVad) )
        goto LABEL_166;
      goto LABEL_39;
    }
    v33 = v85;
    if ( v85 > 0x7FFFFFFDFFFFLL )
    {
      PerSessionProtos = -1073741801;
      goto LABEL_167;
    }
    v34 = FixupVad;
    if ( (v15 & 1) == 0 )
    {
      if ( MiIsVaRangeAvailable(a3, v31, v85, FixupVad) )
      {
        v35 = v85;
LABEL_39:
        v36 = v94;
        v37 = 1073741827;
        v38 = v31 - (*(_DWORD *)a5 & 0xFFFF0000);
        if ( v38 == v94 )
          v37 = 0;
        *(_DWORD *)(v27 + 24) = v31 >> 12;
        v94 = v31 >> 12;
        *(_BYTE *)(v27 + 32) = v31 >> 12 >> 32;
        v39 = (v31 + v35 - 1) >> 12;
        *(_DWORD *)(v27 + 28) = v39;
        *(_BYTE *)(v27 + 33) = BYTE4(v39);
        *(_WORD *)a5 = 0;
        v40 = v96;
        v41 = *a5 >> 12;
        v42 = *(unsigned int *)(v96 + 44);
        if ( v41 >= v42 )
        {
          do
          {
            v40 = *(_QWORD *)(v40 + 16);
            v41 -= v42;
            v42 = *(unsigned int *)(v40 + 44);
          }
          while ( v41 >= v42 );
          v96 = v40;
        }
        *(_QWORD *)(v27 + 72) = v40;
        v86 = v37;
        v43 = v92;
        *(_QWORD *)(v27 + 80) = *(_QWORD *)(v40 + 8) + 8 * v41;
        v44 = (a12 & 4) == 0;
        *(_QWORD *)(v27 + 88) = *(_QWORD *)(v43 + 64) + 8 * (*(unsigned int *)(v43 + 8) - 1LL);
        v45 = a1;
        if ( !v44 )
          goto LABEL_44;
        v86 = v37;
        if ( v38 == v36 )
          goto LABEL_44;
        v60 = *(_DWORD *)(a1 + 56);
        if ( (((v60 & 0x10000000) == 0) & !_bittest(&a11, 0x17u)) == 0
          && (*(_DWORD *)(a1 + 56) & 0x800) == 0
          && (v15 & 2) != 0 )
        {
          FixupVad = (unsigned __int64)MiAllocateFixupVad(v27);
          if ( FixupVad )
          {
            ExFreePoolWithTag((PVOID)v27, 0);
            v45 = a1;
            v27 = FixupVad;
            v86 = 1073741878;
          }
          else
          {
            v45 = a1;
            v86 = v37;
            if ( (*(_DWORD *)(a1 + 56) & 0x10000000) != 0 )
            {
              PerSessionProtos = -1073741670;
LABEL_168:
              if ( (v15 & 0x80u) != 0 )
              {
                MmGetSessionIdEx((struct _KPROCESS *)a3);
                MiDereferencePerSessionProtos(a1);
                v45 = a1;
              }
              if ( v15 >= 0x100 )
              {
                MiReturnCrossPartitionControlAreaCharges(v45);
                v45 = a1;
              }
              if ( (v15 & 0x40) != 0 )
                MiRemoveSharedCommitNode(v45, a3, 0LL);
              UNLOCK_ADDRESS_SPACE((__int64)v88, a3);
              if ( (v15 & 0x20) != 0 )
                MiRemoveVadEvent(v27, v105);
              if ( v27 )
              {
                if ( v93 == 0x200000 )
                  MiFreeLargePageView(a3, v27, 0LL);
                v75 = *(void **)(v27 + 128);
                if ( v75 )
                  ObfDereferenceObject(v75);
                ExFreePoolWithTag((PVOID)v27, 0);
              }
              MiDereferenceControlArea(a1);
              return (unsigned int)PerSessionProtos;
            }
          }
          goto LABEL_44;
        }
        v86 = v37;
        if ( (v60 & 0x10000000) == 0 )
        {
          v45 = a1;
LABEL_44:
          if ( v89 )
            *(_BYTE *)(*(_QWORD *)(a3 + 1296) + 232LL) = 1;
          if ( (*(_DWORD *)(v45 + 56) & 0x4000000) != 0 )
          {
            SessionId = MmGetSessionIdEx((struct _KPROCESS *)a3);
            PerSessionProtos = MiCreatePerSessionProtos(a1, SessionId);
            if ( PerSessionProtos < 0 )
              goto LABEL_167;
            v45 = a1;
            v15 |= 0x80u;
          }
          if ( (*(_DWORD *)(v27 + 64) & 0x10000000) != 0 )
          {
            v82 = *(unsigned int *)(v27 + 52);
            LODWORD(v82) = v82 & 0x7FFFFFFF;
            v83 = ((unsigned __int64)*(unsigned __int8 *)(v27 + 34) << 31) | v82;
            v84 = MiUpdatePrivateDemandZeroView(a3, v27, 0) + v83;
            *(_DWORD *)(v27 + 52) ^= (v84 ^ *(_DWORD *)(v27 + 52)) & 0x7FFFFFFF;
            *(_BYTE *)(v27 + 34) = v84 >> 31;
            MiInsertVadEvent(v27, v105, 0);
            v45 = a1;
            v15 |= 0x20u;
          }
          PerSessionProtos = MiInsertSharedCommitNode(v45, a3, 0LL);
          if ( PerSessionProtos >= 0 )
          {
            v15 |= 0x40u;
            v47 = 8;
            if ( (a12 & 8) != 0 )
              v47 = 520;
            v48 = MiControlAreaRequiresCharge();
            if ( v48 )
            {
              if ( v48 != 2 )
                goto LABEL_54;
              PerSessionProtos = MiReferenceActiveSubsection(v96, v47, 0x11u);
              if ( PerSessionProtos >= 0 )
              {
                v15 |= 0x100u;
LABEL_54:
                PerSessionProtos = MiInsertVadCharges(v27, a3);
                if ( PerSessionProtos >= 0 )
                {
                  if ( v86 == 1073741878 )
                    ++*(_QWORD *)(*(_QWORD *)(a3 + 1296) + 248LL);
                  MiGetWsAndInsertVad(v27);
                  v49 = 0LL;
                  if ( v93 == 0x200000 )
                  {
                    MiLockVad((__int64)v88, v27);
                    PerSessionProtos = MiMapUserLargePages(v27, v89);
                    if ( PerSessionProtos < 0 )
                    {
                      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v88, a3);
                      goto LABEL_207;
                    }
                    MiUnlockVad((__int64)v88, v27);
                  }
                  if ( v90 == 1 )
                    MiAdvanceVadHint(v94, v39, 0);
                  v50 = v95;
                  *a6 = v95;
                  v51 = (v97 << 16) + v31;
                  v87 = v51;
                  *a4 = v51;
                  if ( *(_BYTE *)(v98 + 50)
                    && ((v52 = *(_WORD *)(v98 + 48), v52 < MEMORY[0xFFFFF7800000002C])
                     || v52 > MEMORY[0xFFFFF7800000002E]) )
                  {
                    v53 = a3;
                    v66 = *(_QWORD *)(a3 + 1064);
                    if ( !v66 || (v67 = *(_WORD *)(v66 + 8), v67 != 332) && v67 != 452 )
                    {
                      v54 = 1073741838;
                      v86 = 1073741838;
LABEL_65:
                      if ( (PerfGlobalGroupMask & 0x8000) != 0 )
                      {
                        MiLogMapFileEvent(v27, 1061LL);
                        v54 = v86;
                        v50 = v95;
                      }
                      v55 = v15 | 4;
                      if ( (*(_BYTE *)(v27 + 48) & 0xF8) != 0x38 )
                      {
                        v59 = (__int64)v88;
LABEL_91:
                        if ( (v55 & 4) != 0 )
                          UNLOCK_ADDRESS_SPACE(v59, v53);
                        return v86;
                      }
                      if ( (NtGlobalFlag & 0x40000) != 0 )
                      {
                        v68 = v54 - 1073741827;
                        if ( v68 > 0x33 || (v69 = v68, v70 = 0x8000000000801LL, !_bittest64(&v70, v69)) )
                        {
                          v56 = v92;
                          if ( ((__int64)v88[1].Queue & 0x20) != 0 )
                            goto LABEL_70;
                          v71 = *(_WORD *)(v92 + 12);
                          if ( (v71 & 0x2000) != 0 || *(char *)(v92 + 14) >= 0 )
                            goto LABEL_70;
                          *(_WORD *)(v92 + 12) = v71 | 0x2000;
                          MiLoadUserSymbols(a1, v51, v53);
                          v50 = v95;
                        }
                      }
                      v56 = v92;
LABEL_70:
                      if ( v32 )
                      {
                        v100 = 3;
                        if ( (*(_DWORD *)(v27 + 64) & 0x8000000) != 0 )
                        {
                          v57 = v100;
                        }
                        else
                        {
                          v100 = v100 & 0xFFFF0FFF | ((*(_BYTE *)(v56 + 15) & 0xF0) << 8);
                          v57 = (v100 ^ (*(unsigned __int8 *)(v56 + 15) << 15)) & 0x70000 ^ v100;
                        }
                        v58 = 0;
                        v101 = v51;
                        if ( v86 == 1073741838 )
                          v58 = 2048;
                        v103 = v50;
                        v100 = v57 & 0xFFFFF7FF | v58;
                        if ( v50 != _InterlockedCompareExchange64((volatile signed __int64 *)(v56 + 24), -1LL, -1LL) )
                          v100 |= 0x80000u;
                        v102 = 0;
                        v104 = 0;
                        v49 = (unsigned __int16 *)MiReferenceControlAreaFile(a1);
                        v55 |= 8u;
                      }
                      if ( (*(_DWORD *)(a7 + 56) & 0x80000) != 0 || !MiIsProcessCfgEnabled() )
                      {
                        if ( (*(_DWORD *)(v27 + 64) & 0x10000000) != 0 )
                          v55 |= 8u;
                      }
                      else
                      {
                        v55 |= 0x18u;
                      }
                      v59 = (__int64)v88;
                      if ( (v55 & 8) == 0 )
                        goto LABEL_91;
                      MiLockVad((__int64)v88, v27);
                      UNLOCK_ADDRESS_SPACE_UNORDERED(v59, v53);
                      v55 &= ~4u;
                      if ( (*(_DWORD *)(v27 + 64) & 0x10000000) != 0 )
                      {
                        MiUpdatePrivateDemandZeroView(v53, v27, 1);
                        MiRemoveVadEvent(v27, v105);
                        v55 &= ~0x20u;
                      }
                      if ( (v55 & 0x10) == 0 )
                        goto LABEL_87;
                      PerSessionProtos = MiCommitVadCfgBits(v27, 0LL, 0LL);
                      if ( PerSessionProtos >= 0 )
                      {
                        v53 = a3;
LABEL_87:
                        if ( !v32
                          || (v32 = MiAddSecureEntry(
                                      v27,
                                      (_DWORD)v94 << 12,
                                      ((_DWORD)v39 << 12) | 0xFFFu,
                                      -2147483647,
                                      0)) != 0 )
                        {
                          MiUnlockVad(v59, v27);
                          if ( v32 )
                          {
                            PsCallImageNotifyRoutines(v49 + 44, *(_QWORD *)(v53 + 736), (__int64)v99, (__int64)v49);
                            ObfDereferenceObject(v49);
                            MmUnsecureVirtualMemory((HANDLE)v32);
                          }
                          goto LABEL_91;
                        }
                        PerSessionProtos = -1073741670;
                      }
LABEL_207:
                      MiReferenceVad(v27);
                      if ( v49 )
                        ObfDereferenceObject(v49);
                      MiUnmapVad(v27, 0);
                      return (unsigned int)PerSessionProtos;
                    }
                  }
                  else
                  {
                    v53 = a3;
                  }
                  v54 = v86;
                  goto LABEL_65;
                }
              }
            }
            else
            {
              PerSessionProtos = -1073740277;
            }
          }
LABEL_167:
          v45 = a1;
          goto LABEL_168;
        }
LABEL_166:
        PerSessionProtos = -1073741800;
        goto LABEL_167;
      }
      v33 = v85;
    }
    v61 = a10;
    v62 = a10;
    if ( v94 < 0x100000000LL && v34 >= 0x100000000LL && (*(_BYTE *)(v16 + 15) & 1) == 0 && a10 < 0x20 )
    {
      v61 = 32;
      a10 = 32LL;
    }
    v63 = v93;
    PerSessionProtos = MiSelectUserAddress(
                         a11,
                         v61,
                         v33,
                         v93,
                         (unsigned __int8)*(_DWORD *)(v27 + 48) >> 3,
                         0,
                         (__int64)&v90,
                         (__int64)&v87);
    if ( PerSessionProtos < 0 )
    {
      if ( a10 == v62 )
      {
        v35 = v85;
      }
      else
      {
        v76 = v63;
        v35 = v85;
        PerSessionProtos = MiSelectUserAddress(
                             a11,
                             v62,
                             v85,
                             v76,
                             (unsigned __int8)*(_DWORD *)(v27 + 48) >> 3,
                             0,
                             (__int64)&v90,
                             (__int64)&v87);
      }
      if ( PerSessionProtos < 0 )
        goto LABEL_167;
    }
    else
    {
      v35 = v85;
    }
    if ( v93 == 0x200000 )
    {
      v77 = v95;
      v78 = (v35 - v95) >> 16;
      if ( v78 )
      {
        v79 = (unsigned int)ExGenRandom(1) % v78;
        v97 = v79;
      }
      else
      {
        LOBYTE(v79) = v97;
      }
      v80 = *(_QWORD *)(v27 + 56);
      *(_QWORD *)(v80 + 16) = v77 >> 12;
      *(_BYTE *)(v80 + 8) = v79;
    }
    v31 = v87;
    goto LABEL_39;
  }
  return result;
}
