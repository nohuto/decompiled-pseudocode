/*
 * XREFs of CmpInitializeHive @ 0x1404395AC
 * Callers:
 *     CmpInitHiveFromFile @ 0x1404D6800 (CmpInitHiveFromFile.c)
 *     HvRefreshHive @ 0x14066C778 (HvRefreshHive.c)
 *     CmRestoreKey @ 0x140671810 (CmRestoreKey.c)
 *     CmpCreateTemporaryHive @ 0x140672A78 (CmpCreateTemporaryHive.c)
 *     CmpLoadHiveVolatile @ 0x140672BD8 (CmpLoadHiveVolatile.c)
 *     CmpInitializeSystemHive @ 0x1408078A0 (CmpInitializeSystemHive.c)
 *     CmInitSystem1 @ 0x140807ADC (CmInitSystem1.c)
 *     CmpInitializePreloadedHive @ 0x1408082A4 (CmpInitializePreloadedHive.c)
 * Callees:
 *     ExInitializePushLock @ 0x140023310 (ExInitializePushLock.c)
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     CmpDeleteHive @ 0x14007EE7C (CmpDeleteHive.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     ExInitializeResourceLite @ 0x140093AD0 (ExInitializeResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     SetFailureLocation @ 0x1401DEAE4 (SetFailureLocation.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpReorganizeHive @ 0x140439CAC (CmpReorganizeHive.c)
 *     HvInitializeHive @ 0x140439E6C (HvInitializeHive.c)
 *     CmpInitSecurityCache @ 0x14043A5B8 (CmpInitSecurityCache.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14043A5F4 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmpAllocate @ 0x14048DD10 (CmpAllocate.c)
 *     CmCheckRegistry @ 0x1404B6EBC (CmCheckRegistry.c)
 *     CmpDestroySecurityCache @ 0x1404CF38C (CmpDestroySecurityCache.c)
 *     HvFreeHive @ 0x1404D2664 (HvFreeHive.c)
 *     CmpReleaseGlobalQuota @ 0x1404D2918 (CmpReleaseGlobalQuota.c)
 *     CmpGetVolumeClusterSize @ 0x1404D8B8C (CmpGetVolumeClusterSize.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpLogHiveInitializeEvent @ 0x140660FF4 (CmpLogHiveInitializeEvent.c)
 *     CmpRemoveHiveFromMapping @ 0x140667944 (CmpRemoveHiveFromMapping.c)
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
  int v25; // eax
  unsigned int v26; // r8d
  int v27; // eax
  __int64 v28; // rcx
  ULONG_PTR *v29; // rax
  _QWORD *v31; // rax
  int v32; // ebx
  __int64 v33; // rax
  int v34; // r9d
  int v35; // ecx
  int v36; // r8d
  __int64 v37; // rdx
  ULONG_PTR v38; // r14
  __int64 v39; // rcx
  _QWORD *v40; // rax
  int cData; // [rsp+20h] [rbp-E0h]
  BOOLEAN v42; // [rsp+61h] [rbp-9Fh]
  __int16 v43; // [rsp+64h] [rbp-9Ch] BYREF
  __int16 v44; // [rsp+68h] [rbp-98h] BYREF
  int v45; // [rsp+6Ch] [rbp-94h]
  int v46; // [rsp+70h] [rbp-90h]
  unsigned int v47; // [rsp+74h] [rbp-8Ch]
  int v48; // [rsp+78h] [rbp-88h]
  unsigned int v49; // [rsp+7Ch] [rbp-84h] BYREF
  int v50; // [rsp+80h] [rbp-80h] BYREF
  __int64 v51; // [rsp+88h] [rbp-78h]
  __int64 v52; // [rsp+90h] [rbp-70h]
  __int64 v53; // [rsp+98h] [rbp-68h]
  __int64 v54; // [rsp+A0h] [rbp-60h]
  __int64 v55; // [rsp+A8h] [rbp-58h]
  ULONG_PTR *v56; // [rsp+B0h] [rbp-50h]
  __int64 v57[5]; // [rsp+B8h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF
  int *v59; // [rsp+100h] [rbp+0h]
  __int64 v60; // [rsp+108h] [rbp+8h]
  __int16 *v61; // [rsp+110h] [rbp+10h]
  __int64 v62; // [rsp+118h] [rbp+18h]
  __int16 *v63; // [rsp+120h] [rbp+20h]
  __int64 v64; // [rsp+128h] [rbp+28h]
  __int64 v65; // [rsp+130h] [rbp+30h]
  __int64 v66; // [rsp+138h] [rbp+38h]
  __int64 v67; // [rsp+140h] [rbp+40h]
  int v68; // [rsp+148h] [rbp+48h]
  int v69; // [rsp+14Ch] [rbp+4Ch]
  __int64 v70; // [rsp+150h] [rbp+50h]
  __int64 v71; // [rsp+158h] [rbp+58h]
  __int64 v72; // [rsp+160h] [rbp+60h]
  int v73; // [rsp+168h] [rbp+68h]
  int v74; // [rsp+16Ch] [rbp+6Ch]

  v56 = a1;
  v51 = a7;
  v54 = a9;
  v53 = a10;
  v52 = a11;
  v47 = a4;
  v13 = 0LL;
  v48 = a3;
  v14 = 0;
  v55 = a5;
  v42 = 0;
  if ( a2 > 2 && a2 != 5 )
  {
    v32 = -1073741811;
    SetFailureLocation(a12, 0, 1, -1073741811, 0);
    goto LABEL_82;
  }
  if ( (a3 & 0xFFE17CEC) != 0 )
  {
    cData = 16;
LABEL_56:
    v32 = -1073741811;
    SetFailureLocation(a12, 0, 1, -1073741811, cData);
    return (unsigned int)v32;
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
  if ( !a6 )
    goto LABEL_14;
  if ( (a3 & 0x8001) == 1 )
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
LABEL_14:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v42 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v42 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v32 = -1073741431;
    goto LABEL_95;
  }
  v46 = 1;
  v45 = 1;
  if ( a6 && *(_QWORD *)a6 )
  {
    VolumeClusterSize = CmpGetVolumeClusterSize(*(HANDLE *)a6);
    v32 = VolumeClusterSize;
    if ( VolumeClusterSize < 0 )
    {
      SetFailureLocation(a12, 0, 1, VolumeClusterSize, 160);
      goto LABEL_95;
    }
    v46 = v45;
  }
  v19 = (void *)CmpAllocate(0x17A8uLL);
  v13 = (ULONG_PTR)v19;
  if ( !v19 )
  {
    v32 = -1073741670;
    SetFailureLocation(a12, 0, 1, -1073741670, 176);
LABEL_95:
    if ( v42 )
    {
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
    return (unsigned int)v32;
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
    v32 = -1073741670;
    SetFailureLocation(a12, 0, 1, -1073741670, 192);
    v14 = 0;
    goto LABEL_82;
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
    v22 = v47;
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
  v25 = 0;
  *(_DWORD *)(v13 + 2856) = 0;
  *(_QWORD *)(v13 + 2864) = 0LL;
  if ( (a8 & 0x8000000) != 0 )
    v25 = 128;
  *(_DWORD *)(v13 + 2872) = 0;
  *(_DWORD *)(v13 + 5360) = v25;
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
  v57[0] = (__int64)CmpAllocate;
  v57[1] = (__int64)CmpFree;
  v49 = v26;
  v57[3] = (__int64)CmpFileWrite;
  *(_QWORD *)(v13 + 56) = a12;
  v57[4] = (__int64)CmpFileRead;
  *(_QWORD *)a12 = v13;
  v27 = HvInitializeHive(v13, v55, (__int64)v57, v46, v51, v54, v53, v52, (__int64)&v49);
  v32 = v27;
  if ( v27 < 0 )
  {
    SetFailureLocation(a12, 0, 1, v27, 224);
LABEL_81:
    v14 = 1;
LABEL_82:
    if ( v13 )
    {
      if ( v14 )
      {
        CmpDestroySecurityCache(v13);
        v38 = v13 + 5368;
        if ( *(_QWORD *)v38 != v38 )
        {
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
          v39 = *(_QWORD *)v38;
          v40 = *(_QWORD **)(v13 + 5376);
          if ( *(_QWORD *)(*(_QWORD *)v38 + 8LL) != v38 || *v40 != v38 )
            __fastfail(3u);
          *v40 = v39;
          *(_QWORD *)(v39 + 8) = v40;
          ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
        }
        if ( (*(_DWORD *)(v13 + 5360) & 2) != 0 )
          CmpRemoveHiveFromMapping(v13);
        if ( (*(_DWORD *)(v13 + 144) & 8) == 0 )
        {
          LOBYTE(v37) = 1;
          HvFreeHive(v13, v37);
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 5496), 0xFFFFFFFF) == 1 )
          CmpDeleteHive(v13);
      }
      else
      {
        CmpReleaseGlobalQuota(6056LL);
        ExFreePoolWithTag((PVOID)v13, 0);
      }
    }
    goto LABEL_95;
  }
  if ( (v48 & 0x180000) == 0x80000 )
  {
    v33 = *(_QWORD *)(v13 + 64);
    if ( *(_DWORD *)(v33 + 24) < 6u || (*(_DWORD *)(v33 + 144) & 2) == 0 )
    {
      v32 = -1073741811;
      goto LABEL_81;
    }
  }
  if ( ((a2 - 1) & 0xFFFFFFFA) == 0 && a2 != 6 )
  {
    v32 = CmCheckRegistry(v13);
    if ( v32 == -2147483606 )
    {
      if ( stru_14033C3C0.LevelPlus1 <= 5 )
      {
        v32 = 0;
      }
      else
      {
        v32 = 0;
        if ( TlgKeywordOn(&stru_14033C3C0, 0x400000000000uLL) )
        {
          v50 = v34;
          v35 = *(unsigned __int16 *)(a12 + 8);
          v36 = *(unsigned __int16 *)(a12 + 10);
          v65 = a12 + 8;
          v67 = a12 + 12;
          v59 = &v50;
          v68 = 12 * v35;
          v72 = a12 + 108;
          v61 = &v43;
          v73 = 12 * v36;
          v43 = v35;
          v44 = v36;
          v60 = 4LL;
          v62 = 2LL;
          v63 = &v44;
          v64 = 2LL;
          v66 = 2LL;
          v69 = 0;
          v70 = a12 + 10;
          v71 = 2LL;
          v74 = 0;
          TlgWrite(&stru_14033C3C0, &unk_1402AAE1E, 0LL, 0LL, 9u, &pData);
        }
      }
    }
    if ( v32 < 0 )
    {
      SetFailureLocation(a12, 0, 1, v32, 240);
      goto LABEL_81;
    }
  }
  CmpReorganizeHive(v13, v51);
  CmpLockRegistry(v28);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v13 + 2848), 1u);
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v13 + 2840));
  if ( a2 )
  {
    v32 = HvCheckAndUpdateHiveBackupTimeStamp(v13);
  }
  else
  {
    *(_BYTE *)(v13 + 175) = 1;
    v32 = 0;
  }
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v13 + 2840));
  ExReleaseResourceLite(*(PERESOURCE *)(v13 + 2848));
  CmpUnlockRegistry();
  if ( v32 < 0 )
  {
    SetFailureLocation(a12, 0, 1, v32, 256);
    goto LABEL_81;
  }
  if ( (a8 & 0x1000000) != 0 )
  {
    *(_QWORD *)(v13 + 2736) = v13 + 2728;
    *v20 = v20;
  }
  else
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
    v31 = (_QWORD *)qword_1407ACD50;
    if ( *(__int64 **)qword_1407ACD50 != &CmpHiveListHead )
      __fastfail(3u);
    *v20 = &CmpHiveListHead;
    *(_QWORD *)(v13 + 2736) = v31;
    *v31 = v20;
    qword_1407ACD50 = v13 + 2728;
    ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  }
  v29 = v56;
  *(_QWORD *)(v13 + 56) = 0LL;
  *v29 = v13;
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    CmpLogHiveInitializeEvent(v13, a2, v51, v49);
  return 0;
}
