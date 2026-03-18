/*
 * XREFs of CmpReorganizeHive @ 0x140439CAC
 * Callers:
 *     CmpInitializeHive @ 0x1404395AC (CmpInitializeHive.c)
 * Callees:
 *     ExInitializePushLock @ 0x140023310 (ExInitializePushLock.c)
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     RtlClearAllBits @ 0x14006E050 (RtlClearAllBits.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     HvpMapEntryGetFreeBin @ 0x1400A80DC (HvpMapEntryGetFreeBin.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     RtlSetAllBits @ 0x14012DAF0 (RtlSetAllBits.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpDoFileSetSizeEx @ 0x14043B560 (CmpDoFileSetSizeEx.c)
 *     CmpClearKeyAccessBits @ 0x14043B7E0 (CmpClearKeyAccessBits.c)
 *     CmCheckRegistry @ 0x1404B6EBC (CmCheckRegistry.c)
 *     CmpDestroySecurityCache @ 0x1404CF38C (CmpDestroySecurityCache.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     HvpGetCellMap @ 0x140515540 (HvpGetCellMap.c)
 *     CmpCopyKeyPartial @ 0x140571EDC (CmpCopyKeyPartial.c)
 *     CmpCopySyncTree @ 0x14058D7BC (CmpCopySyncTree.c)
 *     HvMarkBaseBlockDirty @ 0x1405D0948 (HvMarkBaseBlockDirty.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1405D1584 (CmpUpdateReorganizeRegistryValues.c)
 *     CmpLogReorganizeEvent @ 0x1406625D8 (CmpLogReorganizeEvent.c)
 *     CmpCreateTemporaryHive @ 0x140672A78 (CmpCreateTemporaryHive.c)
 *     CmpDestroyTemporaryHive @ 0x140672B30 (CmpDestroyTemporaryHive.c)
 *     HvViewMapAddressForFileOffset @ 0x1406759AC (HvViewMapAddressForFileOffset.c)
 *     HvViewMapPinForFileOffset @ 0x140675D44 (HvViewMapPinForFileOffset.c)
 */

__int64 __fastcall CmpReorganizeHive(ULONG_PTR a1, __int64 a2)
{
  unsigned int v2; // r14d
  __int64 v5; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // r9
  unsigned int v9; // edx
  unsigned __int64 v10; // r8
  __int64 TemporaryHive; // rax
  ULONG_PTR v13; // r15
  __int64 v14; // rdx
  int v15; // ebx
  int v16; // r9d
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // r9d
  int v20; // r10d
  __int64 v21; // rcx
  unsigned int v22; // r13d
  __int64 v23; // rdx
  unsigned int v24; // r12d
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  int v31; // r8d
  unsigned int i; // edi
  _BYTE *CellMap; // rax
  _BYTE *v34; // rbx
  __int64 FreeBin; // rax
  unsigned int v36; // r8d
  __int64 v37; // rdx
  int v38; // ecx
  __int64 v39; // rdx
  ULONG_PTR v40; // r8
  _QWORD *v41; // rcx
  ULONG_PTR v42; // r10
  _QWORD *v43; // r9
  __int64 *v44; // rdi
  __int64 v45; // rax
  _QWORD *v46; // rdx
  _QWORD *v47; // rdx
  _QWORD *v48; // r11
  _QWORD *v49; // r8
  __int64 v50; // rbx
  _QWORD *v51; // r13
  _WORD *v52; // rdx
  _QWORD *v53; // r8
  _QWORD *v54; // rax
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int64 v63; // rbx
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  __int128 v69; // xmm0
  __int64 v70; // rax
  char *v71; // rdx
  char *v72; // rax
  __int128 v73; // xmm0
  _OWORD *v74; // rax
  __int64 v75; // r8
  __int128 v76; // xmm1
  __int128 v77; // xmm0
  __int128 v78; // xmm1
  __int128 v79; // xmm0
  __int128 v80; // xmm1
  __int128 v81; // xmm0
  __int128 v82; // xmm1
  __int128 v83; // xmm1
  __int128 v84; // xmm0
  __int128 v85; // xmm1
  __int128 v86; // xmm0
  __int128 v87; // xmm1
  __int128 v88; // xmm0
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  int v92; // r11d
  __int64 v93; // rdx
  int v94; // eax
  unsigned int v95; // r8d
  __int64 v96; // rax
  __int64 *v97; // rcx
  __int64 **v98; // rdx
  __int64 *v99; // rax
  __int64 v100; // r9
  __int64 **v101; // r9
  int v102; // eax
  unsigned int v103; // r13d
  unsigned int v104; // edi
  __int64 v105; // rcx
  LARGE_INTEGER v106; // rbx
  __int64 v107; // rcx
  unsigned int v108; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v109; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int64 v110; // [rsp+48h] [rbp-B8h] BYREF
  int v111; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v112; // [rsp+58h] [rbp-A8h]
  __int64 v113; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v114; // [rsp+68h] [rbp-98h] BYREF
  int v115; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v116; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v117; // [rsp+78h] [rbp-88h] BYREF
  __int64 v118; // [rsp+80h] [rbp-80h] BYREF
  __int64 v119; // [rsp+88h] [rbp-78h]
  _WORD v120[496]; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+470h] [rbp+370h] BYREF
  int *v122; // [rsp+490h] [rbp+390h]
  __int64 v123; // [rsp+498h] [rbp+398h]
  unsigned int *v124; // [rsp+4A0h] [rbp+3A0h]
  __int64 v125; // [rsp+4A8h] [rbp+3A8h]
  unsigned int *v126; // [rsp+4B0h] [rbp+3B0h]
  __int64 v127; // [rsp+4B8h] [rbp+3B8h]
  _WORD *v128; // [rsp+4C0h] [rbp+3C0h]
  __int64 v129; // [rsp+4C8h] [rbp+3C8h]
  _WORD *v130; // [rsp+4D0h] [rbp+3D0h]
  int v131; // [rsp+4D8h] [rbp+3D8h]
  int v132; // [rsp+4DCh] [rbp+3DCh]
  _WORD *v133; // [rsp+4E0h] [rbp+3E0h]
  __int64 v134; // [rsp+4E8h] [rbp+3E8h]
  _WORD *v135; // [rsp+4F0h] [rbp+3F0h]
  int v136; // [rsp+4F8h] [rbp+3F8h]
  int v137; // [rsp+4FCh] [rbp+3FCh]
  EVENT_DATA_DESCRIPTOR v138; // [rsp+510h] [rbp+410h] BYREF
  __int64 *v139; // [rsp+530h] [rbp+430h]
  __int64 v140; // [rsp+538h] [rbp+438h]
  int *v141; // [rsp+540h] [rbp+440h]
  __int64 v142; // [rsp+548h] [rbp+448h]
  int *v143; // [rsp+550h] [rbp+450h]
  __int64 v144; // [rsp+558h] [rbp+458h]
  EVENT_DATA_DESCRIPTOR v145; // [rsp+570h] [rbp+470h] BYREF
  int *v146; // [rsp+590h] [rbp+490h]
  __int64 v147; // [rsp+598h] [rbp+498h]
  ULONG_PTR *v148; // [rsp+5A0h] [rbp+4A0h]
  __int64 v149; // [rsp+5A8h] [rbp+4A8h]
  EVENT_DATA_DESCRIPTOR v150; // [rsp+5C0h] [rbp+4C0h] BYREF
  unsigned __int64 *v151; // [rsp+5E0h] [rbp+4E0h]
  __int64 v152; // [rsp+5E8h] [rbp+4E8h]

  v2 = 0;
  v119 = a2;
  v112 = 0LL;
  v113 = 0LL;
  v5 = 0LL;
  memset(&v120[320], 0, 0x160uLL);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 144LL) & 1) != 0
    || !*(_QWORD *)(a1 + 2664) && (*(_DWORD *)(a1 + 144) & 0x10) == 0
    || (*(_DWORD *)(a1 + 144) & 0x8001) != 0
    || !*(_DWORD *)(a1 + 148)
    || !a2 )
  {
    return 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    v2 = -1073741431;
    goto LABEL_10;
  }
  v8 = *(_QWORD *)(a1 + 64);
  v9 = MEMORY[0xFFFFF78000000014] & 0xFFFFFFFC;
  v110 = MEMORY[0xFFFFF78000000014] & 0xFFFFFFFFFFFFFFFCuLL;
  v10 = *(_QWORD *)(v8 + 168);
  if ( v10 <= (MEMORY[0xFFFFF78000000014] & 0xFFFFFFFFFFFFFFFCuLL) )
  {
    v7 = 864000000000LL * (unsigned int)CmpReorganizeDelayDays;
    if ( (MEMORY[0xFFFFF78000000014] & 0xFFFFFFFFFFFFFFFCuLL) - v10 < v7 )
    {
LABEL_9:
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
LABEL_10:
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return v2;
    }
  }
  if ( v10 == 2 || v10 != 1 && (*(_DWORD *)(a1 + 5360) & 0x400) == 0 )
  {
    LODWORD(v110) = v9 | 2;
    CmpClearKeyAccessBits(a1);
    *(_QWORD *)(*(_QWORD *)(a1 + 64) + 168LL) = v110;
    goto LABEL_9;
  }
  LODWORD(v110) = v9 | 1;
  TemporaryHive = CmpCreateTemporaryHive(v7, v8 + 112, v8 + 148);
  v13 = TemporaryHive;
  if ( !TemporaryHive )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    v2 = -1073741670;
    goto LABEL_10;
  }
  *(_DWORD *)(*(_QWORD *)(TemporaryHive + 64) + 24LL) = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 24LL);
  *(_DWORD *)(TemporaryHive + 196) = *(_DWORD *)(a1 + 196);
  v14 = *(unsigned int *)(*(_QWORD *)(a1 + 64) + 36LL);
  if ( (_DWORD)v14 == -1 )
  {
    v15 = 0;
    goto LABEL_123;
  }
  v16 = CmpCopyKeyPartial(a1, v14, TemporaryHive, 0xFFFFFFFFLL, 6);
  if ( v16 == -1 || (*(_DWORD *)(*(_QWORD *)(v13 + 64) + 36LL) = v16, !(unsigned __int8)CmpCopySyncTree(a1, 66, 0)) )
  {
    v15 = -1073741670;
    goto LABEL_123;
  }
  v15 = CmCheckRegistry(v13);
  if ( v15 < 0 )
  {
    if ( stru_14033C3C0.LevelPlus1 > 5 && TlgKeywordOn(&stru_14033C3C0, 0x400000000000uLL) )
    {
      v122 = &v111;
      v124 = &v109;
      v126 = &v108;
      v128 = &v120[324];
      v130 = &v120[326];
      LOWORD(v109) = v120[324];
      v131 = 12 * v120[324];
      v133 = &v120[325];
      v136 = 12 * v120[325];
      v111 = v15;
      LOWORD(v108) = v120[325];
      v123 = 4LL;
      v125 = 2LL;
      v127 = 2LL;
      v129 = 2LL;
      v132 = 0;
      v134 = 2LL;
      v135 = &v120[374];
      v137 = 0;
      TlgWrite(&stru_14033C3C0, &unk_1402AAFD5, 0LL, 0LL, 9u, &pData);
    }
    if ( v15 == -1073741492 || v15 == -2147483606 )
    {
      v17 = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(v17 + 168) = v110;
      CmpLockRegistry(v17);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 2848), 1u);
      ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 2840));
      HvMarkBaseBlockDirty(a1);
      ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 2840));
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
      CmpUnlockRegistry();
    }
    goto LABEL_123;
  }
  v18 = *(unsigned int *)(*(_QWORD *)(a1 + 64) + 4088LL);
  if ( (v18 & 4) == 0 && *(_DWORD *)(a1 + 6028) != *(_DWORD *)(v13 + 6028) )
  {
    if ( stru_14033C3C0.LevelPlus1 > 5 && TlgKeywordOn(&stru_14033C3C0, 0x400000000000uLL) )
    {
      v115 = v19;
      v146 = &v115;
      v148 = &v114;
      LODWORD(v114) = v20;
      v147 = 4LL;
      v149 = 4LL;
      TlgWrite(&stru_14033C3C0, &unk_1402AAF7D, 0LL, 0LL, 4u, &v145);
    }
    v21 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(v21 + 168) = v110;
    CmpLockRegistry(v21);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 2848), 1u);
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 2840));
    HvMarkBaseBlockDirty(a1);
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 2840));
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
    CmpUnlockRegistry();
    v15 = -1073741492;
    goto LABEL_123;
  }
  *(_QWORD *)(v13 + 56) = 0LL;
  v109 = *(_DWORD *)(v13 + 1400);
  v22 = v109;
  CmpLockRegistry(v18);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 2848), 1u);
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 2840));
  v15 = CmpDoFileSetSizeEx(a1, 0LL, v109 + 4096, 1LL);
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 2840));
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
  CmpUnlockRegistry();
  if ( v15 >= 0 )
  {
    v108 = *(_DWORD *)(a1 + 1400);
    v24 = ((v109 >> 12) + 3) & 0xFFFFFFFC;
    if ( v24 < *(_DWORD *)(a1 + 92) )
    {
      v24 = *(_DWORD *)(a1 + 92);
    }
    else
    {
      LOBYTE(v23) = 1;
      v112 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 24))(v24, v23, 842157379LL);
      if ( !v112 )
      {
        v15 = -1073741801;
        goto LABEL_123;
      }
      LOBYTE(v25) = 1;
      v113 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 24))(v24, v25, 842157379LL);
      v5 = v113;
      if ( !v113 )
      {
        v15 = -1073741801;
LABEL_119:
        if ( v112 )
          (*(void (__fastcall **)(__int64, _QWORD))(a1 + 32))(v112, v24);
        if ( v113 )
          (*(void (__fastcall **)(__int64, _QWORD))(a1 + 32))(v113, v24);
        goto LABEL_123;
      }
    }
    if ( (*(_BYTE *)(a1 + 124) & 4) == 0 || (v15 = HvViewMapPinForFileOffset(a1 + 200, 4096LL, v109), v15 >= 0) )
    {
      v26 = v112;
      if ( v112 || v5 )
      {
        v28 = *(_QWORD *)(a1 + 80);
        if ( v28 )
          (*(void (__fastcall **)(__int64, _QWORD))(a1 + 32))(v28, *(unsigned int *)(a1 + 92));
        v29 = *(_QWORD *)(a1 + 104);
        if ( v29 )
          (*(void (__fastcall **)(__int64, _QWORD))(a1 + 32))(v29, *(unsigned int *)(a1 + 92));
        v27 = v113;
      }
      else
      {
        v27 = *(_QWORD *)(a1 + 104);
        v26 = *(_QWORD *)(a1 + 80);
      }
      v112 = 0LL;
      *(_QWORD *)(a1 + 80) = v26;
      *(_DWORD *)(a1 + 72) = v22 >> 9;
      *(_QWORD *)(a1 + 104) = v27;
      *(_DWORD *)(a1 + 96) = v22 >> 9;
      *(_DWORD *)(a1 + 92) = v24;
      v113 = 0LL;
      RtlSetAllBits((PRTL_BITMAP)(a1 + 72));
      *(_DWORD *)(a1 + 88) = *(_DWORD *)(a1 + 72);
      RtlClearAllBits((PRTL_BITMAP)(a1 + 96));
      v30 = *(_QWORD *)(a1 + 64);
      *(_DWORD *)(a1 + 112) = 0;
      v31 = *(_DWORD *)(v30 + 36);
      *(_DWORD *)(v30 + 36) = *(_DWORD *)(*(_QWORD *)(v13 + 64) + 36LL);
      *(_DWORD *)(*(_QWORD *)(v13 + 64) + 36LL) = v31;
      if ( (*(_BYTE *)(a1 + 124) & 4) != 0 )
      {
        for ( i = 0; i < *(_DWORD *)(v13 + 1400); i += 4096 )
        {
          CellMap = (_BYTE *)HvpGetCellMap(v13, i);
          v34 = CellMap;
          if ( !CellMap )
            KeBugCheckEx(0x51u, 1uLL, v13, i, 0x61BuLL);
          FreeBin = HvpMapEntryGetFreeBin(CellMap);
          if ( FreeBin )
            v36 = *(_DWORD *)(FreeBin + 20);
          else
            v36 = i - *(_DWORD *)v34;
          v37 = *((_QWORD *)v34 + 1) & 0xFLL;
          v38 = *(_DWORD *)((*((_QWORD *)v34 + 1) & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          *((_QWORD *)v34 + 2) = *((_QWORD *)v34 + 1) & 0xFFFFFFFFFFFFFFF0uLL;
          *((_QWORD *)v34 + 1) = v37;
          v39 = v36 + 4096;
          if ( (((unsigned int)v39 ^ (v36 + v38 + 4095)) & 0xFFFC0000) == 0 )
            *((_QWORD *)v34 + 1) |= HvViewMapAddressForFileOffset(a1 + 200, v39);
          ExInitializePushLock((PKSPIN_LOCK)v34 + 3);
        }
        *(_BYTE *)(v13 + 124) |= 4u;
      }
      v111 = 0;
      v40 = v13 - a1;
      v41 = (_QWORD *)(v13 + 2008);
      v114 = v13 - a1;
      v42 = a1 - v13;
      do
      {
        v43 = (_QWORD *)((char *)v41 + v42);
        v44 = 0LL;
        v45 = *(_QWORD *)((char *)v41 + v42);
        if ( (_QWORD *)v45 != (_QWORD *)((char *)v41 + v42) )
        {
          v44 = *(__int64 **)((char *)v41 + v42);
          v46 = *(_QWORD **)((char *)v41 + v42 + 8);
          if ( *(_QWORD **)(v45 + 8) != v43 || (_QWORD *)*v46 != v43 )
            __fastfail(3u);
          *v46 = v45;
          *(_QWORD *)(v45 + 8) = v46;
        }
        v47 = (_QWORD *)*v41;
        v48 = 0LL;
        if ( (_QWORD *)*v41 != v41 )
        {
          v48 = (_QWORD *)*v41;
          v49 = *(_QWORD **)((char *)v41 + v42 + v40 + 8);
          if ( (_QWORD *)v47[1] != v41 || (_QWORD *)*v49 != v41 )
            __fastfail(3u);
          *v49 = v47;
          v47[1] = v49;
        }
        v50 = 4LL;
        v51 = (_QWORD *)((char *)v41 + v42 + 8);
        v52 = v120;
        v53 = v51 - 77;
        v54 = v51 - 77;
        do
        {
          v55 = *(_OWORD *)v54;
          v56 = *((_OWORD *)v54 + 1);
          v54 += 16;
          *(_OWORD *)v52 = v55;
          v57 = *((_OWORD *)v54 - 6);
          *((_OWORD *)v52 + 1) = v56;
          v58 = *((_OWORD *)v54 - 5);
          *((_OWORD *)v52 + 2) = v57;
          v59 = *((_OWORD *)v54 - 4);
          *((_OWORD *)v52 + 3) = v58;
          v60 = *((_OWORD *)v54 - 3);
          *((_OWORD *)v52 + 4) = v59;
          v61 = *((_OWORD *)v54 - 2);
          *((_OWORD *)v52 + 5) = v60;
          v62 = *((_OWORD *)v54 - 1);
          *((_OWORD *)v52 + 6) = v61;
          v52 += 64;
          *((_OWORD *)v52 - 1) = v62;
          --v50;
        }
        while ( v50 );
        v63 = 4LL;
        v64 = *((_OWORD *)v54 + 1);
        *(_OWORD *)v52 = *(_OWORD *)v54;
        v65 = *((_OWORD *)v54 + 2);
        *((_OWORD *)v52 + 1) = v64;
        v66 = *((_OWORD *)v54 + 3);
        *((_OWORD *)v52 + 2) = v65;
        v67 = *((_OWORD *)v54 + 4);
        *((_OWORD *)v52 + 3) = v66;
        v68 = *((_OWORD *)v54 + 5);
        *((_OWORD *)v52 + 4) = v67;
        v69 = *((_OWORD *)v54 + 6);
        v70 = v54[14];
        *((_OWORD *)v52 + 5) = v68;
        *((_OWORD *)v52 + 6) = v69;
        *((_QWORD *)v52 + 14) = v70;
        v71 = (char *)v51 + v114 - 616;
        v72 = v71;
        do
        {
          v73 = *(_OWORD *)v72;
          v72 += 128;
          *(_OWORD *)v53 = v73;
          v53 += 16;
          *((_OWORD *)v53 - 7) = *((_OWORD *)v72 - 7);
          *((_OWORD *)v53 - 6) = *((_OWORD *)v72 - 6);
          *((_OWORD *)v53 - 5) = *((_OWORD *)v72 - 5);
          *((_OWORD *)v53 - 4) = *((_OWORD *)v72 - 4);
          *((_OWORD *)v53 - 3) = *((_OWORD *)v72 - 3);
          *((_OWORD *)v53 - 2) = *((_OWORD *)v72 - 2);
          *((_OWORD *)v53 - 1) = *((_OWORD *)v72 - 1);
          --v63;
        }
        while ( v63 );
        *(_OWORD *)v53 = *(_OWORD *)v72;
        *((_OWORD *)v53 + 1) = *((_OWORD *)v72 + 1);
        *((_OWORD *)v53 + 2) = *((_OWORD *)v72 + 2);
        *((_OWORD *)v53 + 3) = *((_OWORD *)v72 + 3);
        *((_OWORD *)v53 + 4) = *((_OWORD *)v72 + 4);
        *((_OWORD *)v53 + 5) = *((_OWORD *)v72 + 5);
        *((_OWORD *)v53 + 6) = *((_OWORD *)v72 + 6);
        v53[14] = *((_QWORD *)v72 + 14);
        v74 = v120;
        v75 = 4LL;
        do
        {
          v76 = v74[1];
          *(_OWORD *)v71 = *v74;
          v77 = v74[2];
          *((_OWORD *)v71 + 1) = v76;
          v78 = v74[3];
          *((_OWORD *)v71 + 2) = v77;
          v79 = v74[4];
          *((_OWORD *)v71 + 3) = v78;
          v80 = v74[5];
          *((_OWORD *)v71 + 4) = v79;
          v81 = v74[6];
          *((_OWORD *)v71 + 5) = v80;
          v82 = v74[7];
          v74 += 8;
          *((_OWORD *)v71 + 6) = v81;
          v71 += 128;
          *((_OWORD *)v71 - 1) = v82;
          --v75;
        }
        while ( v75 );
        v40 = v114;
        v83 = v74[1];
        *(_OWORD *)v71 = *v74;
        v84 = v74[2];
        *((_OWORD *)v71 + 1) = v83;
        v85 = v74[3];
        *((_OWORD *)v71 + 2) = v84;
        v86 = v74[4];
        *((_OWORD *)v71 + 3) = v85;
        v87 = v74[5];
        *((_OWORD *)v71 + 4) = v86;
        v88 = v74[6];
        v89 = *((_QWORD *)v74 + 14);
        *((_OWORD *)v71 + 5) = v87;
        *((_OWORD *)v71 + 6) = v88;
        *((_QWORD *)v71 + 14) = v89;
        *v51 = v43;
        *v43 = v43;
        *(_QWORD *)((char *)v51 + v40) = v41;
        *v41 = v41;
        if ( v44 )
        {
          v90 = *v44;
          if ( *(__int64 **)(*v44 + 8) != v44 )
            __fastfail(3u);
          *v41 = v90;
          *(_QWORD *)((char *)v51 + v40) = v44;
          *(_QWORD *)(v90 + 8) = v41;
          *v44 = (__int64)v41;
        }
        if ( v48 )
        {
          v91 = *v48;
          if ( *(_QWORD **)(*v48 + 8LL) != v48 )
            __fastfail(3u);
          *v43 = v91;
          *v51 = v48;
          *(_QWORD *)(v91 + 8) = v43;
          *v48 = v43;
        }
        v92 = v111;
        v93 = 632LL * v111;
        if ( *(v41 - 75) == v93 + a1 + 1416 )
          *(v41 - 75) = v13 + v93 + 1416;
        if ( *(_QWORD *)((char *)v41 + v42 - 600) == v13 + v93 + 1416 )
          *(_QWORD *)((char *)v41 + v42 - 600) = v93 + a1 + 1416;
        v41 += 79;
        v111 = v92 + 1;
      }
      while ( v92 + 1 <= 1 );
      v94 = *(_DWORD *)(a1 + 144);
      if ( (v94 & 0x10) != 0 )
      {
        *(_DWORD *)(a1 + 144) = v94 & 0xFFFFFFEF;
        *(_DWORD *)(v13 + 144) |= 0x10u;
      }
      CmpDestroySecurityCache(a1);
      v95 = 0;
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 40LL) = *(_DWORD *)(*(_QWORD *)(v13 + 64) + 40LL);
      *(_DWORD *)(a1 + 3040) = *(_DWORD *)(v13 + 3040);
      *(_DWORD *)(a1 + 3044) = *(_DWORD *)(v13 + 3044);
      *(_DWORD *)(a1 + 3048) = *(_DWORD *)(v13 + 3048);
      *(_QWORD *)(a1 + 3056) = *(_QWORD *)(v13 + 3056);
      do
      {
        v96 = 16LL * v95;
        v97 = (__int64 *)(v96 + a1 + 3064);
        v98 = (__int64 **)(v96 + v13 + 3064);
        v97[1] = (__int64)v97;
        *v97 = (__int64)v97;
        while ( *v98 != (__int64 *)v98 )
        {
          v99 = *v98;
          v100 = **v98;
          if ( (__int64 **)(*v98)[1] != v98 || *(__int64 **)(v100 + 8) != v99 )
            __fastfail(3u);
          *v98 = (__int64 *)v100;
          *(_QWORD *)(v100 + 8) = v98;
          v101 = (__int64 **)v97[1];
          if ( *v101 != v97 )
            __fastfail(3u);
          *v99 = (__int64)v97;
          v99[1] = (__int64)v101;
          *v101 = v99;
          v97[1] = (__int64)v99;
        }
        ++v95;
      }
      while ( v95 < 0x40 );
      v102 = *(_DWORD *)(v13 + 6016);
      *(_QWORD *)(v13 + 3056) = 0LL;
      *(_QWORD *)(v13 + 3040) = 0LL;
      *(_DWORD *)(a1 + 6016) = v102;
      *(_DWORD *)(a1 + 6020) = *(_DWORD *)(v13 + 6020);
      *(_DWORD *)(a1 + 6024) = *(_DWORD *)(v13 + 6024);
      if ( stru_14033C3C0.LevelPlus1 <= 5 )
      {
        v104 = v109;
        v103 = v108;
      }
      else
      {
        v103 = v108;
        v104 = v109;
        if ( TlgKeywordOn(&stru_14033C3C0, 0x400000000000uLL) )
        {
          v105 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 168LL);
          v139 = &v118;
          v141 = (int *)&v116;
          v143 = (int *)&v117;
          v118 = v105;
          v116 = v108;
          v117 = v109;
          v140 = 8LL;
          v142 = 4LL;
          v144 = 4LL;
          TlgWrite(&stru_14033C3C0, &unk_1402AAF37, 0LL, 0LL, 5u, &v138);
        }
      }
      v106.QuadPart = v110;
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 168LL) = v110;
      CmpLockRegistry(v97);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 2848), 1u);
      ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 2840));
      HvMarkBaseBlockDirty(a1);
      ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 2840));
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
      CmpUnlockRegistry();
      CmpLogReorganizeEvent(v119, v103, v104);
      if ( v104 < v108 )
      {
        if ( CmpFirstReorganize )
        {
          v107 = 0LL;
          CmpReorganizeLastRun = v106;
          CmpFirstReorganize = 0;
        }
        else
        {
          v107 = CmpReorganizeTotalBytesSaved;
        }
        CmpReorganizeTotalBytesSaved = v108 - v104 + v107;
        CmpUpdateReorganizeRegistryValues();
      }
      v15 = 0;
    }
    goto LABEL_119;
  }
LABEL_123:
  CmpDestroyTemporaryHive(v13);
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v15 < 0 && stru_14033C3C0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_14033C3C0, 0x400000000000uLL) )
    {
      LODWORD(v110) = v15;
      v151 = &v110;
      v152 = 4LL;
      TlgWrite(&stru_14033C3C0, &unk_1402AAF05, 0LL, 0LL, 3u, &v150);
    }
  }
  return (unsigned int)v15;
}
