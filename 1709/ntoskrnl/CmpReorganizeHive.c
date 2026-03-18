/*
 * XREFs of CmpReorganizeHive @ 0x140470880
 * Callers:
 *     CmpInitializeHive @ 0x140470188 (CmpInitializeHive.c)
 * Callees:
 *     RtlClearAllBits @ 0x140016020 (RtlClearAllBits.c)
 *     HvpMapEntryGetFreeBin @ 0x140016924 (HvpMapEntryGetFreeBin.c)
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     ExInitializePushLock @ 0x140025A30 (ExInitializePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     RtlSetAllBits @ 0x14012CF30 (RtlSetAllBits.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmpClearKeyAccessBits @ 0x14045205C (CmpClearKeyAccessBits.c)
 *     HvMarkBaseBlockDirty @ 0x14046F414 (HvMarkBaseBlockDirty.c)
 *     CmpDestroySecurityCache @ 0x140470024 (CmpDestroySecurityCache.c)
 *     CmCheckRegistry @ 0x140471AFC (CmCheckRegistry.c)
 *     HvpGetCellMap @ 0x14047D620 (HvpGetCellMap.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpDoFileSetSizeEx @ 0x1404E657C (CmpDoFileSetSizeEx.c)
 *     CmpCopySyncTree @ 0x1405A4F80 (CmpCopySyncTree.c)
 *     CmpCopyKeyPartial @ 0x1405A5AF4 (CmpCopyKeyPartial.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1405EC790 (CmpUpdateReorganizeRegistryValues.c)
 *     CmpLogReorganizeEvent @ 0x14068BAE4 (CmpLogReorganizeEvent.c)
 *     CmpCreateTemporaryHive @ 0x14069DB4C (CmpCreateTemporaryHive.c)
 *     CmpDestroyTemporaryHive @ 0x14069DC04 (CmpDestroyTemporaryHive.c)
 *     HvViewMapAddressForFileOffset @ 0x14069FEE4 (HvViewMapAddressForFileOffset.c)
 *     HvViewMapPinForFileOffset @ 0x1406A027C (HvViewMapPinForFileOffset.c)
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
  __int64 v15; // rdx
  int v16; // ebx
  int v17; // r9d
  int v18; // r9d
  int v19; // r10d
  unsigned int v20; // r13d
  __int64 v21; // rdx
  unsigned int v22; // r12d
  __int64 v23; // rdx
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // r8d
  unsigned int i; // edi
  _BYTE *CellMap; // rax
  _BYTE *v32; // rbx
  __int64 FreeBin; // rax
  unsigned int v34; // r8d
  __int64 v35; // rdx
  int v36; // ecx
  __int64 v37; // rdx
  ULONG_PTR v38; // r8
  _QWORD *v39; // rcx
  ULONG_PTR v40; // r10
  _QWORD *v41; // r9
  __int64 *v42; // rdi
  __int64 v43; // rax
  _QWORD *v44; // rdx
  _QWORD *v45; // rdx
  _QWORD *v46; // r11
  _QWORD *v47; // r8
  __int64 v48; // rbx
  _QWORD *v49; // r13
  _WORD *v50; // rdx
  _QWORD *v51; // r8
  _QWORD *v52; // rax
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int64 v61; // rbx
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm0
  __int64 v68; // rax
  char *v69; // rdx
  char *v70; // rax
  __int128 v71; // xmm0
  _OWORD *v72; // rax
  __int64 v73; // r8
  __int128 v74; // xmm1
  __int128 v75; // xmm0
  __int128 v76; // xmm1
  __int128 v77; // xmm0
  __int128 v78; // xmm1
  __int128 v79; // xmm0
  __int128 v80; // xmm1
  __int128 v81; // xmm1
  __int128 v82; // xmm0
  __int128 v83; // xmm1
  __int128 v84; // xmm0
  __int128 v85; // xmm1
  __int128 v86; // xmm0
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  int v90; // r11d
  __int64 v91; // rdx
  int v92; // eax
  unsigned int v93; // r8d
  __int64 v94; // rax
  _QWORD *v95; // rcx
  ULONG_PTR v96; // rdx
  _QWORD *v97; // rax
  __int64 v98; // r9
  _QWORD *v99; // r9
  int v100; // eax
  unsigned int v101; // r13d
  unsigned int v102; // edi
  __int64 v103; // rcx
  LARGE_INTEGER v104; // rbx
  unsigned int v105; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v106; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int64 v107; // [rsp+48h] [rbp-B8h] BYREF
  int v108; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v109; // [rsp+58h] [rbp-A8h]
  __int64 v110; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v111; // [rsp+68h] [rbp-98h] BYREF
  int v112; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v113; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v114; // [rsp+78h] [rbp-88h] BYREF
  __int64 v115; // [rsp+80h] [rbp-80h] BYREF
  __int64 v116; // [rsp+88h] [rbp-78h]
  _WORD v117[496]; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+470h] [rbp+370h] BYREF
  int *v119; // [rsp+490h] [rbp+390h]
  __int64 v120; // [rsp+498h] [rbp+398h]
  unsigned int *v121; // [rsp+4A0h] [rbp+3A0h]
  __int64 v122; // [rsp+4A8h] [rbp+3A8h]
  unsigned int *v123; // [rsp+4B0h] [rbp+3B0h]
  __int64 v124; // [rsp+4B8h] [rbp+3B8h]
  _WORD *v125; // [rsp+4C0h] [rbp+3C0h]
  __int64 v126; // [rsp+4C8h] [rbp+3C8h]
  _WORD *v127; // [rsp+4D0h] [rbp+3D0h]
  int v128; // [rsp+4D8h] [rbp+3D8h]
  int v129; // [rsp+4DCh] [rbp+3DCh]
  _WORD *v130; // [rsp+4E0h] [rbp+3E0h]
  __int64 v131; // [rsp+4E8h] [rbp+3E8h]
  _WORD *v132; // [rsp+4F0h] [rbp+3F0h]
  int v133; // [rsp+4F8h] [rbp+3F8h]
  int v134; // [rsp+4FCh] [rbp+3FCh]
  EVENT_DATA_DESCRIPTOR v135; // [rsp+500h] [rbp+400h] BYREF
  __int64 *v136; // [rsp+520h] [rbp+420h]
  __int64 v137; // [rsp+528h] [rbp+428h]
  int *v138; // [rsp+530h] [rbp+430h]
  __int64 v139; // [rsp+538h] [rbp+438h]
  int *v140; // [rsp+540h] [rbp+440h]
  __int64 v141; // [rsp+548h] [rbp+448h]
  EVENT_DATA_DESCRIPTOR v142; // [rsp+550h] [rbp+450h] BYREF
  int *v143; // [rsp+570h] [rbp+470h]
  __int64 v144; // [rsp+578h] [rbp+478h]
  ULONG_PTR *v145; // [rsp+580h] [rbp+480h]
  __int64 v146; // [rsp+588h] [rbp+488h]
  EVENT_DATA_DESCRIPTOR v147; // [rsp+590h] [rbp+490h] BYREF
  unsigned __int64 *v148; // [rsp+5B0h] [rbp+4B0h]
  __int64 v149; // [rsp+5B8h] [rbp+4B8h]

  v2 = 0;
  v116 = a2;
  v109 = 0LL;
  v110 = 0LL;
  v5 = 0LL;
  memset(&v117[320], 0, 0x160uLL);
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
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    v2 = -1073741431;
    goto LABEL_10;
  }
  v8 = *(_QWORD *)(a1 + 64);
  v9 = MEMORY[0xFFFFF78000000014] & 0xFFFFFFFC;
  v107 = MEMORY[0xFFFFF78000000014] & 0xFFFFFFFFFFFFFFFCuLL;
  v10 = *(_QWORD *)(v8 + 168);
  if ( v10 <= (MEMORY[0xFFFFF78000000014] & 0xFFFFFFFFFFFFFFFCuLL) )
  {
    v7 = 864000000000LL * (unsigned int)CmpReorganizeDelayDays;
    if ( (MEMORY[0xFFFFF78000000014] & 0xFFFFFFFFFFFFFFFCuLL) - v10 < v7 )
    {
LABEL_9:
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
LABEL_10:
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return v2;
    }
  }
  if ( v10 == 2 || v10 != 1 && (*(_DWORD *)(a1 + 5360) & 0x400) == 0 )
  {
    LODWORD(v107) = v9 | 2;
    CmpClearKeyAccessBits(a1, a2);
    *(_QWORD *)(*(_QWORD *)(a1 + 64) + 168LL) = v107;
    goto LABEL_9;
  }
  LODWORD(v107) = v9 | 1;
  TemporaryHive = CmpCreateTemporaryHive(v7, v8 + 112, v8 + 148);
  v13 = TemporaryHive;
  if ( !TemporaryHive )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    v2 = -1073741670;
    goto LABEL_10;
  }
  *(_DWORD *)(*(_QWORD *)(TemporaryHive + 64) + 24LL) = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 24LL);
  v14 = *(_QWORD *)(TemporaryHive + 64);
  *(_DWORD *)(TemporaryHive + 196) = *(_DWORD *)(a1 + 196);
  *(_DWORD *)(v14 + 144) |= *(_DWORD *)(*(_QWORD *)(a1 + 64) + 144LL) & 2;
  v15 = *(unsigned int *)(*(_QWORD *)(a1 + 64) + 36LL);
  if ( (_DWORD)v15 == -1 )
  {
    v16 = 0;
    goto LABEL_122;
  }
  v17 = CmpCopyKeyPartial(a1, v15, TemporaryHive, 0xFFFFFFFFLL, 6);
  if ( v17 == -1 || (*(_DWORD *)(*(_QWORD *)(v13 + 64) + 36LL) = v17, !(unsigned __int8)CmpCopySyncTree(a1, 66, 0)) )
  {
    v16 = -1073741670;
    goto LABEL_122;
  }
  v16 = CmCheckRegistry(v13);
  if ( v16 < 0 )
  {
    if ( stru_1403549F0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1403549F0, 0x400000000000uLL) )
    {
      v119 = &v108;
      v121 = &v106;
      v123 = &v105;
      v125 = &v117[324];
      v127 = &v117[326];
      LOWORD(v106) = v117[324];
      v128 = 12 * v117[324];
      v130 = &v117[325];
      v133 = 12 * v117[325];
      v108 = v16;
      LOWORD(v105) = v117[325];
      v120 = 4LL;
      v122 = 2LL;
      v124 = 2LL;
      v126 = 2LL;
      v129 = 0;
      v131 = 2LL;
      v132 = &v117[374];
      v134 = 0;
      TlgWrite(&stru_1403549F0, &unk_1402CEDB4, 0LL, 0LL, 9u, &pData);
    }
    if ( v16 == -1073741492 || v16 == -2147483606 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 168LL) = v107;
      CmpLockRegistry();
      ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 2848), 1u);
      ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 2840));
      HvMarkBaseBlockDirty(a1);
      ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 2840));
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
      CmpUnlockRegistry();
    }
    goto LABEL_122;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) & 4) == 0 && *(_DWORD *)(a1 + 6028) != *(_DWORD *)(v13 + 6028) )
  {
    if ( stru_1403549F0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1403549F0, 0x400000000000uLL) )
    {
      v112 = v18;
      v143 = &v112;
      v145 = &v111;
      LODWORD(v111) = v19;
      v144 = 4LL;
      v146 = 4LL;
      TlgWrite(&stru_1403549F0, &unk_1402CED5C, 0LL, 0LL, 4u, &v142);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 64) + 168LL) = v107;
    CmpLockRegistry();
    ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 2848), 1u);
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 2840));
    HvMarkBaseBlockDirty(a1);
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 2840));
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
    CmpUnlockRegistry();
    v16 = -1073741492;
    goto LABEL_122;
  }
  *(_QWORD *)(v13 + 56) = 0LL;
  v106 = *(_DWORD *)(v13 + 1400);
  v20 = v106;
  CmpLockRegistry();
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 2848), 1u);
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 2840));
  v16 = CmpDoFileSetSizeEx(a1, 0LL, v106 + 4096, 1LL);
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 2840));
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
  CmpUnlockRegistry();
  if ( v16 >= 0 )
  {
    v105 = *(_DWORD *)(a1 + 1400);
    v22 = ((v106 >> 12) + 3) & 0xFFFFFFFC;
    if ( v22 < *(_DWORD *)(a1 + 92) )
    {
      v22 = *(_DWORD *)(a1 + 92);
    }
    else
    {
      LOBYTE(v21) = 1;
      v109 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 24))(v22, v21, 842157379LL);
      if ( !v109 )
      {
        v16 = -1073741801;
        goto LABEL_122;
      }
      LOBYTE(v23) = 1;
      v110 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 24))(v22, v23, 842157379LL);
      v5 = v110;
      if ( !v110 )
      {
        v16 = -1073741801;
LABEL_118:
        if ( v109 )
          (*(void (__fastcall **)(__int64, _QWORD))(a1 + 32))(v109, v22);
        if ( v110 )
          (*(void (__fastcall **)(__int64, _QWORD))(a1 + 32))(v110, v22);
        goto LABEL_122;
      }
    }
    if ( (*(_BYTE *)(a1 + 124) & 4) == 0 || (v16 = HvViewMapPinForFileOffset(a1 + 200, 4096LL, v106), v16 >= 0) )
    {
      v24 = v109;
      if ( v109 || v5 )
      {
        v26 = *(_QWORD *)(a1 + 80);
        if ( v26 )
          (*(void (__fastcall **)(__int64, _QWORD))(a1 + 32))(v26, *(unsigned int *)(a1 + 92));
        v27 = *(_QWORD *)(a1 + 104);
        if ( v27 )
          (*(void (__fastcall **)(__int64, _QWORD))(a1 + 32))(v27, *(unsigned int *)(a1 + 92));
        v25 = v110;
      }
      else
      {
        v25 = *(_QWORD *)(a1 + 104);
        v24 = *(_QWORD *)(a1 + 80);
      }
      v109 = 0LL;
      *(_QWORD *)(a1 + 80) = v24;
      *(_DWORD *)(a1 + 72) = v20 >> 9;
      *(_QWORD *)(a1 + 104) = v25;
      *(_DWORD *)(a1 + 96) = v20 >> 9;
      *(_DWORD *)(a1 + 92) = v22;
      v110 = 0LL;
      RtlSetAllBits((PRTL_BITMAP)(a1 + 72));
      *(_DWORD *)(a1 + 88) = *(_DWORD *)(a1 + 72);
      RtlClearAllBits((PRTL_BITMAP)(a1 + 96));
      v28 = *(_QWORD *)(a1 + 64);
      *(_DWORD *)(a1 + 112) = 0;
      v29 = *(_DWORD *)(v28 + 36);
      *(_DWORD *)(v28 + 36) = *(_DWORD *)(*(_QWORD *)(v13 + 64) + 36LL);
      *(_DWORD *)(*(_QWORD *)(v13 + 64) + 36LL) = v29;
      if ( (*(_BYTE *)(a1 + 124) & 4) != 0 )
      {
        for ( i = 0; i < *(_DWORD *)(v13 + 1400); i += 4096 )
        {
          CellMap = (_BYTE *)HvpGetCellMap(v13, i);
          v32 = CellMap;
          if ( !CellMap )
            KeBugCheckEx(0x51u, 1uLL, v13, i, 0x623uLL);
          FreeBin = HvpMapEntryGetFreeBin(CellMap);
          if ( FreeBin )
            v34 = *(_DWORD *)(FreeBin + 20);
          else
            v34 = i - *(_DWORD *)v32;
          v35 = *((_QWORD *)v32 + 1) & 0xFLL;
          v36 = *(_DWORD *)((*((_QWORD *)v32 + 1) & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          *((_QWORD *)v32 + 2) = *((_QWORD *)v32 + 1) & 0xFFFFFFFFFFFFFFF0uLL;
          *((_QWORD *)v32 + 1) = v35;
          v37 = v34 + 4096;
          if ( (((unsigned int)v37 ^ (v34 + v36 + 4095)) & 0xFFFC0000) == 0 )
            *((_QWORD *)v32 + 1) |= HvViewMapAddressForFileOffset(a1 + 200, v37);
          ExInitializePushLock((PKSPIN_LOCK)v32 + 3);
        }
        *(_BYTE *)(v13 + 124) |= 4u;
      }
      v108 = 0;
      v38 = v13 - a1;
      v39 = (_QWORD *)(v13 + 2008);
      v111 = v13 - a1;
      v40 = a1 - v13;
      do
      {
        v41 = (_QWORD *)((char *)v39 + v40);
        v42 = 0LL;
        v43 = *(_QWORD *)((char *)v39 + v40);
        if ( (_QWORD *)v43 != (_QWORD *)((char *)v39 + v40) )
        {
          v42 = *(__int64 **)((char *)v39 + v40);
          if ( *(_QWORD **)(v43 + 8) != v41 || (v44 = *(_QWORD **)((char *)v39 + v40 + 8), (_QWORD *)*v44 != v41) )
            __fastfail(3u);
          *v44 = v43;
          *(_QWORD *)(v43 + 8) = v44;
        }
        v45 = (_QWORD *)*v39;
        v46 = 0LL;
        if ( (_QWORD *)*v39 != v39 )
        {
          v46 = (_QWORD *)*v39;
          if ( (_QWORD *)v45[1] != v39 || (v47 = *(_QWORD **)((char *)v39 + v40 + v38 + 8), (_QWORD *)*v47 != v39) )
            __fastfail(3u);
          *v47 = v45;
          v45[1] = v47;
        }
        v48 = 4LL;
        v49 = (_QWORD *)((char *)v39 + v40 + 8);
        v50 = v117;
        v51 = v49 - 77;
        v52 = v49 - 77;
        do
        {
          v53 = *(_OWORD *)v52;
          v54 = *((_OWORD *)v52 + 1);
          v52 += 16;
          *(_OWORD *)v50 = v53;
          v55 = *((_OWORD *)v52 - 6);
          *((_OWORD *)v50 + 1) = v54;
          v56 = *((_OWORD *)v52 - 5);
          *((_OWORD *)v50 + 2) = v55;
          v57 = *((_OWORD *)v52 - 4);
          *((_OWORD *)v50 + 3) = v56;
          v58 = *((_OWORD *)v52 - 3);
          *((_OWORD *)v50 + 4) = v57;
          v59 = *((_OWORD *)v52 - 2);
          *((_OWORD *)v50 + 5) = v58;
          v60 = *((_OWORD *)v52 - 1);
          *((_OWORD *)v50 + 6) = v59;
          v50 += 64;
          *((_OWORD *)v50 - 1) = v60;
          --v48;
        }
        while ( v48 );
        v61 = 4LL;
        v62 = *((_OWORD *)v52 + 1);
        *(_OWORD *)v50 = *(_OWORD *)v52;
        v63 = *((_OWORD *)v52 + 2);
        *((_OWORD *)v50 + 1) = v62;
        v64 = *((_OWORD *)v52 + 3);
        *((_OWORD *)v50 + 2) = v63;
        v65 = *((_OWORD *)v52 + 4);
        *((_OWORD *)v50 + 3) = v64;
        v66 = *((_OWORD *)v52 + 5);
        *((_OWORD *)v50 + 4) = v65;
        v67 = *((_OWORD *)v52 + 6);
        v68 = v52[14];
        *((_OWORD *)v50 + 5) = v66;
        *((_OWORD *)v50 + 6) = v67;
        *((_QWORD *)v50 + 14) = v68;
        v69 = (char *)v49 + v111 - 616;
        v70 = v69;
        do
        {
          v71 = *(_OWORD *)v70;
          v70 += 128;
          *(_OWORD *)v51 = v71;
          v51 += 16;
          *((_OWORD *)v51 - 7) = *((_OWORD *)v70 - 7);
          *((_OWORD *)v51 - 6) = *((_OWORD *)v70 - 6);
          *((_OWORD *)v51 - 5) = *((_OWORD *)v70 - 5);
          *((_OWORD *)v51 - 4) = *((_OWORD *)v70 - 4);
          *((_OWORD *)v51 - 3) = *((_OWORD *)v70 - 3);
          *((_OWORD *)v51 - 2) = *((_OWORD *)v70 - 2);
          *((_OWORD *)v51 - 1) = *((_OWORD *)v70 - 1);
          --v61;
        }
        while ( v61 );
        *(_OWORD *)v51 = *(_OWORD *)v70;
        *((_OWORD *)v51 + 1) = *((_OWORD *)v70 + 1);
        *((_OWORD *)v51 + 2) = *((_OWORD *)v70 + 2);
        *((_OWORD *)v51 + 3) = *((_OWORD *)v70 + 3);
        *((_OWORD *)v51 + 4) = *((_OWORD *)v70 + 4);
        *((_OWORD *)v51 + 5) = *((_OWORD *)v70 + 5);
        *((_OWORD *)v51 + 6) = *((_OWORD *)v70 + 6);
        v51[14] = *((_QWORD *)v70 + 14);
        v72 = v117;
        v73 = 4LL;
        do
        {
          v74 = v72[1];
          *(_OWORD *)v69 = *v72;
          v75 = v72[2];
          *((_OWORD *)v69 + 1) = v74;
          v76 = v72[3];
          *((_OWORD *)v69 + 2) = v75;
          v77 = v72[4];
          *((_OWORD *)v69 + 3) = v76;
          v78 = v72[5];
          *((_OWORD *)v69 + 4) = v77;
          v79 = v72[6];
          *((_OWORD *)v69 + 5) = v78;
          v80 = v72[7];
          v72 += 8;
          *((_OWORD *)v69 + 6) = v79;
          v69 += 128;
          *((_OWORD *)v69 - 1) = v80;
          --v73;
        }
        while ( v73 );
        v38 = v111;
        v81 = v72[1];
        *(_OWORD *)v69 = *v72;
        v82 = v72[2];
        *((_OWORD *)v69 + 1) = v81;
        v83 = v72[3];
        *((_OWORD *)v69 + 2) = v82;
        v84 = v72[4];
        *((_OWORD *)v69 + 3) = v83;
        v85 = v72[5];
        *((_OWORD *)v69 + 4) = v84;
        v86 = v72[6];
        v87 = *((_QWORD *)v72 + 14);
        *((_OWORD *)v69 + 5) = v85;
        *((_OWORD *)v69 + 6) = v86;
        *((_QWORD *)v69 + 14) = v87;
        *v49 = v41;
        *v41 = v41;
        *(_QWORD *)((char *)v49 + v38) = v39;
        *v39 = v39;
        if ( v42 )
        {
          v88 = *v42;
          if ( *(__int64 **)(*v42 + 8) != v42 )
            __fastfail(3u);
          *v39 = v88;
          *(_QWORD *)((char *)v49 + v38) = v42;
          *(_QWORD *)(v88 + 8) = v39;
          *v42 = (__int64)v39;
        }
        if ( v46 )
        {
          v89 = *v46;
          if ( *(_QWORD **)(*v46 + 8LL) != v46 )
            __fastfail(3u);
          *v41 = v89;
          *v49 = v46;
          *(_QWORD *)(v89 + 8) = v41;
          *v46 = v41;
        }
        v90 = v108;
        v91 = 632LL * v108;
        if ( *(v39 - 75) == v91 + a1 + 1416 )
          *(v39 - 75) = v13 + v91 + 1416;
        if ( *(_QWORD *)((char *)v39 + v40 - 600) == v13 + v91 + 1416 )
          *(_QWORD *)((char *)v39 + v40 - 600) = v91 + a1 + 1416;
        v39 += 79;
        v108 = v90 + 1;
      }
      while ( v90 + 1 <= 1 );
      v92 = *(_DWORD *)(a1 + 144);
      if ( (v92 & 0x10) != 0 )
      {
        *(_DWORD *)(a1 + 144) = v92 & 0xFFFFFFEF;
        *(_DWORD *)(v13 + 144) |= 0x10u;
      }
      CmpDestroySecurityCache(a1);
      v93 = 0;
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 40LL) = *(_DWORD *)(*(_QWORD *)(v13 + 64) + 40LL);
      *(_DWORD *)(a1 + 3040) = *(_DWORD *)(v13 + 3040);
      *(_DWORD *)(a1 + 3044) = *(_DWORD *)(v13 + 3044);
      *(_DWORD *)(a1 + 3048) = *(_DWORD *)(v13 + 3048);
      *(_QWORD *)(a1 + 3056) = *(_QWORD *)(v13 + 3056);
      do
      {
        v94 = 16LL * v93;
        v95 = (_QWORD *)(v94 + a1 + 3064);
        v96 = v94 + v13 + 3064;
        v95[1] = v95;
        *v95 = v95;
        while ( *(_QWORD *)v96 != v96 )
        {
          v97 = *(_QWORD **)v96;
          if ( *(_QWORD *)(*(_QWORD *)v96 + 8LL) != v96 || (v98 = *v97, *(_QWORD **)(*v97 + 8LL) != v97) )
            __fastfail(3u);
          *(_QWORD *)v96 = v98;
          *(_QWORD *)(v98 + 8) = v96;
          v99 = (_QWORD *)v95[1];
          if ( (_QWORD *)*v99 != v95 )
            __fastfail(3u);
          *v97 = v95;
          v97[1] = v99;
          *v99 = v97;
          v95[1] = v97;
        }
        ++v93;
      }
      while ( v93 < 0x40 );
      v100 = *(_DWORD *)(v13 + 6016);
      *(_QWORD *)(v13 + 3056) = 0LL;
      *(_QWORD *)(v13 + 3040) = 0LL;
      *(_DWORD *)(a1 + 6016) = v100;
      *(_DWORD *)(a1 + 6020) = *(_DWORD *)(v13 + 6020);
      *(_DWORD *)(a1 + 6024) = *(_DWORD *)(v13 + 6024);
      if ( stru_1403549F0.LevelPlus1 <= 5 )
      {
        v102 = v106;
        v101 = v105;
      }
      else
      {
        v101 = v105;
        v102 = v106;
        if ( TlgKeywordOn(&stru_1403549F0, 0x400000000000uLL) )
        {
          v103 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 168LL);
          v136 = &v115;
          v138 = (int *)&v113;
          v140 = (int *)&v114;
          v115 = v103;
          v113 = v105;
          v114 = v106;
          v137 = 8LL;
          v139 = 4LL;
          v141 = 4LL;
          TlgWrite(&stru_1403549F0, &unk_1402CED16, 0LL, 0LL, 5u, &v135);
        }
      }
      v104.QuadPart = v107;
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 168LL) = v107;
      CmpLockRegistry();
      ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 2848), 1u);
      ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 2840));
      HvMarkBaseBlockDirty(a1);
      ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 2840));
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
      CmpUnlockRegistry();
      CmpLogReorganizeEvent(v116, v101, v102);
      if ( v102 < v105 )
      {
        if ( CmpFirstReorganize )
        {
          CmpReorganizeTotalBytesSaved = 0LL;
          CmpReorganizeLastRun = v104;
          CmpFirstReorganize = 0;
        }
        CmpReorganizeTotalBytesSaved += v105 - v102;
        CmpUpdateReorganizeRegistryValues();
      }
      v16 = 0;
    }
    goto LABEL_118;
  }
LABEL_122:
  CmpDestroyTemporaryHive((PVOID)v13);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v16 < 0 && stru_1403549F0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1403549F0, 0x400000000000uLL) )
    {
      LODWORD(v107) = v16;
      v148 = &v107;
      v149 = 4LL;
      TlgWrite(&stru_1403549F0, &unk_1402CECE4, 0LL, 0LL, 3u, &v147);
    }
  }
  return (unsigned int)v16;
}
