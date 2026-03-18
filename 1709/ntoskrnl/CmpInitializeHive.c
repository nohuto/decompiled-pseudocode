/*
 * XREFs of CmpInitializeHive @ 0x140470188
 * Callers:
 *     CmpInitHiveFromFile @ 0x1404DE1EC (CmpInitHiveFromFile.c)
 *     HvRefreshHive @ 0x140696DF0 (HvRefreshHive.c)
 *     CmRestoreKey @ 0x14069C888 (CmRestoreKey.c)
 *     CmpCreateTemporaryHive @ 0x14069DB4C (CmpCreateTemporaryHive.c)
 *     CmpLoadHiveVolatile @ 0x14069DCAC (CmpLoadHiveVolatile.c)
 *     CmpInitializeSystemHive @ 0x14083BCC8 (CmpInitializeSystemHive.c)
 *     CmInitSystem1 @ 0x14083BF10 (CmInitSystem1.c)
 *     CmpInitializePreloadedHive @ 0x14083C6D0 (CmpInitializePreloadedHive.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     ExInitializePushLock @ 0x140025A30 (ExInitializePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     ExInitializeResourceLite @ 0x140089610 (ExInitializeResourceLite.c)
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     CmpDeleteHive @ 0x1400AFD08 (CmpDeleteHive.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     SetFailureLocation @ 0x1401E2FD4 (SetFailureLocation.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     CmpDestroySecurityCache @ 0x140470024 (CmpDestroySecurityCache.c)
 *     CmpReorganizeHive @ 0x140470880 (CmpReorganizeHive.c)
 *     HvInitializeHive @ 0x140470A40 (HvInitializeHive.c)
 *     CmpInitSecurityCache @ 0x14047115C (CmpInitSecurityCache.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140471198 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmCheckRegistry @ 0x140471AFC (CmCheckRegistry.c)
 *     HvFreeHive @ 0x140479C44 (HvFreeHive.c)
 *     CmpReleaseGlobalQuota @ 0x140479EB8 (CmpReleaseGlobalQuota.c)
 *     CmpAllocate @ 0x14047D780 (CmpAllocate.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpGetVolumeClusterSize @ 0x1404E4280 (CmpGetVolumeClusterSize.c)
 *     CmpLogHiveInitializeEvent @ 0x140689F78 (CmpLogHiveInitializeEvent.c)
 *     CmpRemoveHiveFromMapping @ 0x140692404 (CmpRemoveHiveFromMapping.c)
 */

__int64 __fastcall CmpInitializeHive(
        ULONG_PTR *a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  ULONG_PTR v13; // rdi
  char v14; // r12
  __int64 v15; // rcx
  __int64 v16; // rax
  struct _KTHREAD *CurrentThread; // rax
  int VolumeClusterSize; // eax
  void *v19; // rax
  _QWORD *v20; // r12
  char *PoolWithTag; // rax
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned int v25; // r8d
  int v26; // eax
  ULONG_PTR *v27; // rax
  _QWORD *v29; // rax
  int v30; // ebx
  __int64 v31; // rax
  int v32; // r9d
  int v33; // ecx
  int v34; // r8d
  __int64 v35; // rdx
  ULONG_PTR v36; // r14
  __int64 v37; // rcx
  _QWORD *v38; // rax
  int cData; // [rsp+20h] [rbp-E0h]
  BOOLEAN v40; // [rsp+61h] [rbp-9Fh]
  __int16 v41; // [rsp+64h] [rbp-9Ch] BYREF
  __int16 v42; // [rsp+68h] [rbp-98h] BYREF
  int v43; // [rsp+6Ch] [rbp-94h]
  int v44; // [rsp+70h] [rbp-90h]
  unsigned int v45; // [rsp+74h] [rbp-8Ch]
  int v46; // [rsp+78h] [rbp-88h]
  unsigned int v47; // [rsp+7Ch] [rbp-84h] BYREF
  int v48; // [rsp+80h] [rbp-80h] BYREF
  __int64 v49; // [rsp+88h] [rbp-78h]
  __int64 v50; // [rsp+90h] [rbp-70h]
  __int64 v51; // [rsp+98h] [rbp-68h]
  __int64 v52; // [rsp+A0h] [rbp-60h]
  __int64 v53; // [rsp+A8h] [rbp-58h]
  ULONG_PTR *v54; // [rsp+B0h] [rbp-50h]
  _QWORD v55[5]; // [rsp+B8h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF
  int *v57; // [rsp+100h] [rbp+0h]
  __int64 v58; // [rsp+108h] [rbp+8h]
  __int16 *v59; // [rsp+110h] [rbp+10h]
  __int64 v60; // [rsp+118h] [rbp+18h]
  __int16 *v61; // [rsp+120h] [rbp+20h]
  __int64 v62; // [rsp+128h] [rbp+28h]
  __int64 v63; // [rsp+130h] [rbp+30h]
  __int64 v64; // [rsp+138h] [rbp+38h]
  __int64 v65; // [rsp+140h] [rbp+40h]
  int v66; // [rsp+148h] [rbp+48h]
  int v67; // [rsp+14Ch] [rbp+4Ch]
  __int64 v68; // [rsp+150h] [rbp+50h]
  __int64 v69; // [rsp+158h] [rbp+58h]
  __int64 v70; // [rsp+160h] [rbp+60h]
  int v71; // [rsp+168h] [rbp+68h]
  int v72; // [rsp+16Ch] [rbp+6Ch]

  v54 = a1;
  v49 = a7;
  v52 = a9;
  v51 = a10;
  v50 = a11;
  v45 = a4;
  v13 = 0LL;
  v46 = a3;
  v14 = 0;
  v53 = a5;
  v40 = 0;
  if ( a2 > 2 && a2 != 5 )
  {
    v30 = -1073741811;
    SetFailureLocation(a12, 0, 1, -1073741811, 0);
    goto LABEL_84;
  }
  if ( (a3 & 0xFFE17CEC) != 0 )
  {
    cData = 16;
LABEL_56:
    v30 = -1073741811;
    SetFailureLocation(a12, 0, 1, -1073741811, cData);
    return (unsigned int)v30;
  }
  if ( a4 > 2 )
  {
    cData = 32;
    goto LABEL_56;
  }
  if ( !a5 && a2 == 1 )
  {
    cData = 48;
    goto LABEL_56;
  }
  if ( a6 )
  {
    if ( (a3 & 1) != 0 && (a3 & 0x8000) == 0 )
    {
      cData = 64;
      goto LABEL_56;
    }
    if ( !*(_QWORD *)a6 && (*(_QWORD *)(a6 + 8) || *(_QWORD *)(a6 + 16)) )
    {
      cData = 80;
      goto LABEL_56;
    }
    v15 = *(_QWORD *)(a6 + 8);
    if ( v15 && !a4 )
    {
      cData = 96;
      goto LABEL_56;
    }
    v16 = *(_QWORD *)(a6 + 16);
    if ( v16 && a4 != 2 )
    {
      cData = 112;
      goto LABEL_56;
    }
    if ( *(_QWORD *)(a6 + 24) && (*(_QWORD *)a6 || v15 || v16) )
    {
      cData = 128;
      goto LABEL_56;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v40 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v40 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v30 = -1073741431;
    goto LABEL_97;
  }
  v44 = 1;
  v43 = 1;
  if ( a6 && *(_QWORD *)a6 )
  {
    VolumeClusterSize = CmpGetVolumeClusterSize(*(HANDLE *)a6);
    v30 = VolumeClusterSize;
    if ( VolumeClusterSize < 0 )
    {
      SetFailureLocation(a12, 0, 1, VolumeClusterSize, 160);
      goto LABEL_97;
    }
    v44 = v43;
  }
  v19 = (void *)CmpAllocate(0x17A8uLL);
  v13 = (ULONG_PTR)v19;
  if ( !v19 )
  {
    v30 = -1073741670;
    SetFailureLocation(a12, 0, 1, -1073741670, 176);
LABEL_97:
    if ( v40 )
    {
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    return (unsigned int)v30;
  }
  memset(v19, 0, 0x17A8uLL);
  *(_DWORD *)(v13 + 4088) = 0;
  *(_QWORD *)(v13 + 4096) = 0LL;
  *(_QWORD *)(v13 + 4104) = 0LL;
  *(_BYTE *)(v13 + 4112) = 0;
  *(_QWORD *)(v13 + 4120) = 0LL;
  *(_BYTE *)(v13 + 4168) = 0;
  *(_DWORD *)(v13 + 4172) = 0;
  *(_QWORD *)(v13 + 5416) = 0LL;
  *(_QWORD *)(v13 + 5424) = 0LL;
  *(_QWORD *)(v13 + 5432) = 0LL;
  *(_DWORD *)(v13 + 5496) = 1;
  *(_DWORD *)(v13 + 6032) = 0;
  *(_QWORD *)(v13 + 6040) = 0LL;
  v20 = (_QWORD *)(v13 + 2728);
  *(_QWORD *)(v13 + 4184) = v13 + 4176;
  *(_QWORD *)(v13 + 4176) = v13 + 4176;
  *(_QWORD *)(v13 + 2736) = v13 + 2728;
  *(_QWORD *)(v13 + 2728) = v13 + 2728;
  ExInitializePushLock((PKSPIN_LOCK)(v13 + 2776));
  *(_QWORD *)(v13 + 2792) = v13 + 2784;
  *(_QWORD *)(v13 + 2784) = v13 + 2784;
  *(_DWORD *)(v13 + 4204) = 16;
  *(_QWORD *)(v13 + 2800) = 0LL;
  *(_DWORD *)(v13 + 2808) = 0;
  *(_DWORD *)(v13 + 2828) = 0;
  *(_QWORD *)(v13 + 4192) = 0LL;
  *(_DWORD *)(v13 + 4200) = 0;
  *(_QWORD *)(v13 + 5400) = 0LL;
  *(_QWORD *)(v13 + 5408) = 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xD8uLL, 0x38344D43u);
  if ( !PoolWithTag )
  {
    v30 = -1073741670;
    SetFailureLocation(a12, 0, 1, -1073741670, 192);
    v14 = 0;
    goto LABEL_84;
  }
  *(_QWORD *)(v13 + 2832) = PoolWithTag;
  *(_QWORD *)(v13 + 2840) = PoolWithTag + 56;
  *(_QWORD *)(v13 + 2848) = PoolWithTag + 112;
  *(_QWORD *)(v13 + 3000) = 0LL;
  *(_DWORD *)(v13 + 2992) = 0;
  *(_QWORD *)(v13 + 3016) = 0LL;
  *(_DWORD *)(v13 + 3008) = 0;
  *(_QWORD *)(v13 + 3032) = 0LL;
  *(_DWORD *)(v13 + 3024) = 0;
  if ( a6 )
  {
    *(_QWORD *)(v13 + 2664) = *(_QWORD *)a6;
    *(_QWORD *)(v13 + 2680) = *(_QWORD *)(a6 + 24);
    v22 = v45;
    *(_QWORD *)(v13 + 2688) = 0LL;
    if ( v22 )
    {
      if ( v22 != 1 )
      {
        *(_QWORD *)(v13 + 2672) = 0LL;
        *(_QWORD *)(v13 + 2696) = *(_QWORD *)(a6 + 8);
        *(_QWORD *)(v13 + 2704) = *(_QWORD *)(a6 + 16);
        goto LABEL_26;
      }
      *(_QWORD *)(v13 + 2672) = *(_QWORD *)(a6 + 8);
    }
    else
    {
      *(_QWORD *)(v13 + 2672) = 0LL;
    }
    *(_QWORD *)(v13 + 2696) = 0LL;
    *(_QWORD *)(v13 + 2704) = 0LL;
  }
  else
  {
    memset((void *)(v13 + 2664), 0, 0x30uLL);
  }
LABEL_26:
  v23 = *(_QWORD *)(v13 + 2832);
  *(_QWORD *)(v13 + 2712) = 0LL;
  *(_QWORD *)(v13 + 2720) = 0LL;
  *(_QWORD *)(v23 + 8) = 0LL;
  *(_DWORD *)(v23 + 16) = 0;
  *(_DWORD *)v23 = 1;
  KeInitializeEvent((PRKEVENT)(v23 + 24), SynchronizationEvent, 0);
  v24 = *(_QWORD *)(v13 + 2840);
  *(_QWORD *)(v24 + 8) = 0LL;
  *(_DWORD *)(v24 + 16) = 0;
  *(_DWORD *)v24 = 1;
  KeInitializeEvent((PRKEVENT)(v24 + 24), SynchronizationEvent, 0);
  ExInitializeResourceLite(*(PERESOURCE *)(v13 + 2848));
  memset((void *)(v13 + 5440), 0, 0x30uLL);
  *(_DWORD *)(v13 + 5488) = 0;
  *(_DWORD *)(v13 + 2856) = 0;
  *(_QWORD *)(v13 + 2864) = 0LL;
  *(_DWORD *)(v13 + 2872) = 0;
  *(_QWORD *)(v13 + 2880) = 0LL;
  *(_DWORD *)(v13 + 2888) = 0;
  *(_DWORD *)(v13 + 2904) = 0;
  *(_QWORD *)(v13 + 2912) = 0LL;
  *(_DWORD *)(v13 + 2920) = 0;
  *(_QWORD *)(v13 + 2928) = 0LL;
  *(_DWORD *)(v13 + 2936) = 0;
  *(_QWORD *)(v13 + 2944) = 0LL;
  *(_QWORD *)(v13 + 2952) = 0LL;
  *(_DWORD *)(v13 + 2960) = 0;
  *(_DWORD *)(v13 + 5360) = 0;
  if ( (a8 & 0x8000000) != 0 )
    *(_DWORD *)(v13 + 5360) = 128;
  if ( a8 < 0 )
    *(_DWORD *)(v13 + 5360) |= 0x800u;
  *(_QWORD *)(v13 + 5376) = v13 + 5368;
  *(_QWORD *)(v13 + 5368) = v13 + 5368;
  *(_QWORD *)(v13 + 2752) = v13 + 2744;
  *(_QWORD *)(v13 + 2744) = v13 + 2744;
  *(_QWORD *)(v13 + 5384) = 0LL;
  *(_QWORD *)(v13 + 5392) = 0LL;
  *(_QWORD *)(v13 + 2968) = 0LL;
  *(_DWORD *)(v13 + 2964) = 0;
  *(_QWORD *)(v13 + 2976) = 0LL;
  *(_QWORD *)(v13 + 2984) = 0LL;
  *(_DWORD *)(v13 + 5492) = 0;
  *(_DWORD *)(v13 + 6028) = 0;
  CmpInitSecurityCache(v13);
  v55[0] = CmpAllocate;
  v55[1] = CmpFree;
  v47 = v25;
  v55[3] = CmpFileWrite;
  *(_QWORD *)(v13 + 56) = a12;
  v55[4] = CmpFileRead;
  *(_QWORD *)a12 = v13;
  v26 = HvInitializeHive(v13, v53, (__int64)v55, v44, v49, v52, v51, v50, (__int64)&v47);
  v30 = v26;
  if ( v26 < 0 )
  {
    SetFailureLocation(a12, 0, 1, v26, 224);
LABEL_83:
    v14 = 1;
LABEL_84:
    if ( v13 )
    {
      if ( v14 )
      {
        CmpDestroySecurityCache(v13);
        v36 = v13 + 5368;
        if ( *(_QWORD *)v36 != v36 )
        {
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
          v37 = *(_QWORD *)v36;
          if ( *(_QWORD *)(*(_QWORD *)v36 + 8LL) != v36 || (v38 = *(_QWORD **)(v13 + 5376), *v38 != v36) )
            __fastfail(3u);
          *v38 = v37;
          *(_QWORD *)(v37 + 8) = v38;
          ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
        }
        if ( (*(_DWORD *)(v13 + 5360) & 2) != 0 )
          CmpRemoveHiveFromMapping(v13);
        if ( (*(_DWORD *)(v13 + 144) & 8) == 0 )
        {
          LOBYTE(v35) = 1;
          HvFreeHive(v13, v35);
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 5496), 0xFFFFFFFF) == 1 )
          CmpDeleteHive((PERESOURCE *)v13);
      }
      else
      {
        CmpReleaseGlobalQuota(6056LL);
        ExFreePoolWithTag((PVOID)v13, 0);
      }
    }
    goto LABEL_97;
  }
  if ( (v46 & 0x80000) != 0 && (v46 & 0x100000) == 0 )
  {
    v31 = *(_QWORD *)(v13 + 64);
    if ( *(_DWORD *)(v31 + 24) < 6u || (*(_DWORD *)(v31 + 144) & 2) == 0 )
    {
      v30 = -1073741811;
      goto LABEL_83;
    }
  }
  if ( ((a2 - 1) & 0xFFFFFFFA) == 0 && a2 != 6 )
  {
    v30 = CmCheckRegistry(v13);
    if ( v30 == -2147483606 )
    {
      if ( stru_1403549F0.LevelPlus1 <= 5 )
      {
        v30 = 0;
      }
      else
      {
        v30 = 0;
        if ( TlgKeywordOn(&stru_1403549F0, 0x400000000000uLL) )
        {
          v48 = v32;
          v33 = *(unsigned __int16 *)(a12 + 8);
          v34 = *(unsigned __int16 *)(a12 + 10);
          v63 = a12 + 8;
          v65 = a12 + 12;
          v57 = &v48;
          v66 = 12 * v33;
          v70 = a12 + 108;
          v59 = &v41;
          v71 = 12 * v34;
          v41 = v33;
          v42 = v34;
          v58 = 4LL;
          v60 = 2LL;
          v61 = &v42;
          v62 = 2LL;
          v64 = 2LL;
          v67 = 0;
          v68 = a12 + 10;
          v69 = 2LL;
          v72 = 0;
          TlgWrite(&stru_1403549F0, &unk_1402CEBFD, 0LL, 0LL, 9u, &pData);
        }
      }
    }
    if ( v30 < 0 )
    {
      SetFailureLocation(a12, 0, 1, v30, 240);
      goto LABEL_83;
    }
  }
  CmpReorganizeHive(v13, v49);
  CmpLockRegistry();
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v13 + 2848), 1u);
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v13 + 2840));
  if ( a2 )
  {
    v30 = HvCheckAndUpdateHiveBackupTimeStamp(v13);
  }
  else
  {
    *(_BYTE *)(v13 + 175) = 1;
    v30 = 0;
  }
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v13 + 2840));
  ExReleaseResourceLite(*(PERESOURCE *)(v13 + 2848));
  CmpUnlockRegistry();
  if ( v30 < 0 )
  {
    SetFailureLocation(a12, 0, 1, v30, 256);
    goto LABEL_83;
  }
  if ( (a8 & 0x1000000) != 0 )
  {
    *(_QWORD *)(v13 + 2736) = v13 + 2728;
    *v20 = v20;
  }
  else
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
    v29 = (_QWORD *)qword_1407F3DD0;
    if ( *(__int64 **)qword_1407F3DD0 != &CmpHiveListHead )
      __fastfail(3u);
    *v20 = &CmpHiveListHead;
    *(_QWORD *)(v13 + 2736) = v29;
    *v29 = v20;
    qword_1407F3DD0 = v13 + 2728;
    ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  }
  v27 = v54;
  *(_QWORD *)(v13 + 56) = 0LL;
  *v27 = v13;
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    CmpLogHiveInitializeEvent(v13, a2, v49, v47);
  return 0;
}
