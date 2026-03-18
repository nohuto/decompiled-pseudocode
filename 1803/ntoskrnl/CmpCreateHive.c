/*
 * XREFs of CmpCreateHive @ 0x140497630
 * Callers:
 *     CmpInitHiveFromFile @ 0x14049DBFC (CmpInitHiveFromFile.c)
 *     CmRestoreKey @ 0x140701768 (CmRestoreKey.c)
 *     CmpCreateTemporaryHive @ 0x140702B18 (CmpCreateTemporaryHive.c)
 *     CmpLoadHiveVolatile @ 0x140702BD0 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14070306C (CmpRefreshHive.c)
 *     CmpInitializeSystemHive @ 0x1408B02A4 (CmpInitializeSystemHive.c)
 *     CmInitSystem1 @ 0x1408B04E0 (CmInitSystem1.c)
 *     CmpInitializePreloadedHive @ 0x1408B0CD8 (CmpInitializePreloadedHive.c)
 * Callees:
 *     CmpRecheckHiveVolumePolicy @ 0x140006AD0 (CmpRecheckHiveVolumePolicy.c)
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwSetInformationObject @ 0x1401A8040 (ZwSetInformationObject.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     SetFailureLocation @ 0x140221604 (SetFailureLocation.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140495B50 (CmpVolumeManagerGetContextForFile.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x140496660 (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 *     HvHiveStartFileBacked @ 0x140496704 (HvHiveStartFileBacked.c)
 *     CmpReorganizeHive @ 0x140497D1C (CmpReorganizeHive.c)
 *     CmpHiveInitialize @ 0x140497F38 (CmpHiveInitialize.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140498080 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmCheckRegistry @ 0x140499094 (CmCheckRegistry.c)
 *     CmpGetVolumeClusterSize @ 0x140499488 (CmpGetVolumeClusterSize.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     ObDuplicateObject @ 0x1404B6D20 (ObDuplicateObject.c)
 *     CmpAllocate @ 0x140514D70 (CmpAllocate.c)
 *     HvHiveStartMemoryBacked @ 0x14063469C (HvHiveStartMemoryBacked.c)
 *     CmpLogHiveInitializeEvent @ 0x1406EE37C (CmpLogHiveInitializeEvent.c)
 *     CmpDestroyHive @ 0x1406F76D8 (CmpDestroyHive.c)
 */

__int64 __fastcall CmpCreateHive(
        ULONG_PTR *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        _OWORD *a9,
        _OWORD *a10,
        _BYTE *a11,
        __int64 a12)
{
  unsigned int v14; // r12d
  ULONG_PTR v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rax
  struct _KTHREAD *CurrentThread; // rax
  int VolumeClusterSize; // eax
  __int64 v20; // rax
  void *v21; // rcx
  void *v22; // rcx
  HANDLE *v23; // r12
  __int16 *v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // eax
  char v31; // al
  _QWORD *v32; // rbx
  ULONG_PTR *v33; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  _QWORD *v37; // rax
  int ContextForFile; // ebx
  void *v39; // rcx
  __int64 v40; // rax
  int v41; // r9d
  int v42; // ecx
  int v43; // r8d
  int cData; // [rsp+20h] [rbp-E0h]
  int v45; // [rsp+30h] [rbp-D0h]
  BOOLEAN v46; // [rsp+70h] [rbp-90h]
  char v47; // [rsp+71h] [rbp-8Fh]
  __int16 ObjectInformation[2]; // [rsp+78h] [rbp-88h] BYREF
  __int16 v50; // [rsp+7Ch] [rbp-84h] BYREF
  __int16 v51; // [rsp+80h] [rbp-80h] BYREF
  __int16 v52; // [rsp+84h] [rbp-7Ch] BYREF
  __int16 v53; // [rsp+88h] [rbp-78h] BYREF
  __int16 v54; // [rsp+8Ch] [rbp-74h] BYREF
  __int16 v55; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v56; // [rsp+94h] [rbp-6Ch]
  int v57; // [rsp+98h] [rbp-68h]
  unsigned int v58; // [rsp+9Ch] [rbp-64h] BYREF
  int v59; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v60; // [rsp+A8h] [rbp-58h]
  _OWORD *v61; // [rsp+B0h] [rbp-50h]
  __int64 v62; // [rsp+B8h] [rbp-48h]
  _BYTE *v63; // [rsp+C0h] [rbp-40h]
  _OWORD *v64; // [rsp+C8h] [rbp-38h]
  ULONG_PTR *v65; // [rsp+D0h] [rbp-30h]
  _QWORD v66[5]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v67[48]; // [rsp+100h] [rbp+0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp+30h] BYREF
  int *v69; // [rsp+150h] [rbp+50h]
  __int64 v70; // [rsp+158h] [rbp+58h]
  __int16 *v71; // [rsp+160h] [rbp+60h]
  __int64 v72; // [rsp+168h] [rbp+68h]
  __int16 *v73; // [rsp+170h] [rbp+70h]
  __int64 v74; // [rsp+178h] [rbp+78h]
  __int64 v75; // [rsp+180h] [rbp+80h]
  __int64 v76; // [rsp+188h] [rbp+88h]
  __int64 v77; // [rsp+190h] [rbp+90h]
  int v78; // [rsp+198h] [rbp+98h]
  int v79; // [rsp+19Ch] [rbp+9Ch]
  __int64 v80; // [rsp+1A0h] [rbp+A0h]
  __int64 v81; // [rsp+1A8h] [rbp+A8h]
  __int64 v82; // [rsp+1B0h] [rbp+B0h]
  int v83; // [rsp+1B8h] [rbp+B8h]
  int v84; // [rsp+1BCh] [rbp+BCh]

  v62 = a5;
  v14 = a2;
  v60 = a7;
  v15 = 0LL;
  v61 = a9;
  v64 = a10;
  v65 = a1;
  v63 = a11;
  v57 = a4;
  v46 = 0;
  v47 = 0;
  memset(v67, 0, sizeof(v67));
  if ( v14 > 2 && v14 != 5 )
  {
    ContextForFile = -1073741811;
    SetFailureLocation(a12, 0, 1, -1073741811, 0);
    goto LABEL_103;
  }
  if ( (a3 & 0xFF617CEC) != 0 )
  {
    cData = 16;
    goto LABEL_83;
  }
  if ( a4 > 2 )
  {
    cData = 32;
    goto LABEL_83;
  }
  if ( v14 == 1 && !v62 )
  {
    cData = 48;
LABEL_83:
    ContextForFile = -1073741811;
    SetFailureLocation(a12, 0, 1, -1073741811, cData);
    return (unsigned int)ContextForFile;
  }
  if ( a6 )
  {
    if ( (a3 & 1) != 0 && (a3 & 0x8000) == 0 )
    {
      cData = 64;
      goto LABEL_83;
    }
    if ( !*(_QWORD *)a6 && (*(_QWORD *)(a6 + 8) || *(_QWORD *)(a6 + 16)) )
    {
      cData = 80;
      goto LABEL_83;
    }
    v16 = *(_QWORD *)(a6 + 8);
    if ( v16 && !a4 )
    {
      cData = 96;
      goto LABEL_83;
    }
    v17 = *(_QWORD *)(a6 + 16);
    if ( v17 && a4 != 2 )
    {
      cData = 112;
      goto LABEL_83;
    }
    if ( *(_QWORD *)(a6 + 24) && (*(_QWORD *)a6 || v16 || v17) )
    {
      cData = 128;
      goto LABEL_83;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v46 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v46 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ContextForFile = -1073741431;
    goto LABEL_61;
  }
  v56 = 1;
  if ( a6
    && *(_QWORD *)a6
    && (VolumeClusterSize = CmpGetVolumeClusterSize(*(HANDLE *)a6),
        ContextForFile = VolumeClusterSize,
        VolumeClusterSize < 0) )
  {
    SetFailureLocation(a12, 0, 1, VolumeClusterSize, 160);
  }
  else
  {
    v20 = CmpAllocate(0x12F8uLL);
    v15 = v20;
    if ( v20 )
    {
      CmpHiveInitialize(v20);
      if ( a6 )
      {
        if ( *(_QWORD *)a6 )
        {
          ContextForFile = ObDuplicateObject((ULONG_PTR)PsInitialSystemProcess, 0, 512, 2, 0);
          if ( ContextForFile < 0 )
            goto LABEL_103;
          v21 = *(void **)(v15 + 1536);
          ObjectInformation[0] = 256;
          ZwSetInformationObject(v21, ObjectHandleFlagInformation, ObjectInformation, 2u);
        }
        if ( *(_QWORD *)(a6 + 24) )
        {
          ContextForFile = ObDuplicateObject((ULONG_PTR)PsInitialSystemProcess, 0, 512, 2, 0);
          if ( ContextForFile < 0 )
            goto LABEL_103;
          v39 = *(void **)(v15 + 1552);
          v50 = 256;
          ZwSetInformationObject(v39, ObjectHandleFlagInformation, &v50, 2u);
        }
        if ( v57 == 1 )
        {
          if ( *(_QWORD *)(a6 + 8) )
          {
            v23 = (HANDLE *)(v15 + 1544);
            ContextForFile = ObDuplicateObject((ULONG_PTR)PsInitialSystemProcess, 0, 512, 2, 0);
            if ( ContextForFile < 0 )
              goto LABEL_103;
            v51 = 256;
            v24 = &v51;
            goto LABEL_32;
          }
        }
        else if ( v57 == 2 )
        {
          if ( *(_QWORD *)(a6 + 8) )
          {
            ContextForFile = ObDuplicateObject((ULONG_PTR)PsInitialSystemProcess, 0, 512, v57, 0);
            if ( ContextForFile < 0 )
              goto LABEL_103;
            v22 = *(void **)(v15 + 1568);
            v52 = 256;
            ZwSetInformationObject(v22, ObjectHandleFlagInformation, &v52, 2u);
          }
          if ( *(_QWORD *)(a6 + 16) )
          {
            v23 = (HANDLE *)(v15 + 1576);
            ContextForFile = ObDuplicateObject((ULONG_PTR)PsInitialSystemProcess, 0, 512, 2, 0);
            if ( ContextForFile < 0 )
              goto LABEL_103;
            v53 = 256;
            v24 = &v53;
LABEL_32:
            ZwSetInformationObject(*v23, ObjectHandleFlagInformation, v24, 2u);
            v14 = a2;
            goto LABEL_33;
          }
        }
        v14 = a2;
      }
LABEL_33:
      if ( (a8 & 0x8000000) != 0 )
        *(_DWORD *)(v15 + 4152) |= 0x80u;
      if ( a8 < 0 )
        *(_DWORD *)(v15 + 4152) |= 0x800u;
      CmpAttachToRegistryProcess(v67);
      *(_QWORD *)(v15 + 56) = a12;
      v66[0] = CmpAllocate;
      v66[1] = CmpFree;
      v66[3] = CmpFileWrite;
      v66[4] = CmpFileRead;
      v47 = 1;
      *(_QWORD *)a12 = v15;
      v58 = 0;
      if ( v14 == 5 || v14 == 2 || !v14 && a6 && *(_QWORD *)a6 )
      {
        if ( CmpUseSectionBackedHives )
          a3 |= 0x20000u;
        ContextForFile = CmpVolumeManagerGetContextForFile(v25, *(void **)a6, v26, (PPRIVILEGE_SET *)(v15 + 4848));
        if ( ContextForFile < 0 )
          goto LABEL_103;
        if ( CmpVolumeContextMustHiveFilePagesBeKeptLocal(*(_QWORD *)(v15 + 4848)) )
          a3 |= 0x800000u;
        v14 = a2;
        ContextForFile = HvHiveStartFileBacked(v15, a2 == 0, a3, v57, v66, v56, v45, v60, v61, v64, v63, &v58, a12);
        if ( ContextForFile < 0 )
        {
          SetFailureLocation(a12, 0, 1, ContextForFile, 228);
          goto LABEL_103;
        }
      }
      else
      {
        ContextForFile = HvHiveStartMemoryBacked(
                           v15,
                           v62,
                           (__int64)v66,
                           v56,
                           v60,
                           (__int64)v61,
                           (__int64)v64,
                           (__int64)v63,
                           (__int64)&v58,
                           a12);
        if ( ContextForFile < 0 )
        {
          SetFailureLocation(a12, 0, 1, ContextForFile, 232);
          goto LABEL_103;
        }
      }
      if ( (a3 & 0x80000) == 0
        || (a3 & 0x100000) != 0
        || (v40 = *(_QWORD *)(v15 + 64), *(_DWORD *)(v40 + 24) >= 6u) && (*(_DWORD *)(v40 + 144) & 2) != 0 )
      {
        if ( ((v14 - 1) & 0xFFFFFFFA) != 0 || v14 == 6 )
          goto LABEL_49;
        ContextForFile = CmCheckRegistry(v15);
        if ( ContextForFile == -2147483606 )
        {
          if ( stru_140397090.LevelPlus1 <= 5 )
          {
            ContextForFile = 0;
          }
          else
          {
            ContextForFile = 0;
            if ( TlgKeywordOn(&stru_140397090, 0x400000000000uLL) )
            {
              v59 = v41;
              v42 = *(unsigned __int16 *)(a12 + 8);
              v43 = *(unsigned __int16 *)(a12 + 10);
              v75 = a12 + 8;
              v77 = a12 + 12;
              v69 = &v59;
              v78 = 12 * v42;
              v82 = a12 + 108;
              v71 = &v54;
              v83 = 12 * v43;
              v54 = v42;
              v55 = v43;
              v70 = 4LL;
              v72 = 2LL;
              v73 = &v55;
              v74 = 2LL;
              v76 = 2LL;
              v79 = 0;
              v80 = a12 + 10;
              v81 = 2LL;
              v84 = 0;
              TlgWrite(&stru_140397090, &unk_140308558, 0LL, 0LL, 9u, &pData);
            }
          }
        }
        if ( ContextForFile >= 0 )
        {
LABEL_49:
          CmpReorganizeHive(v15);
          CmpLockRegistry();
          ExAcquirePushLockSharedEx(v15 + 72, 0LL);
          ExAcquirePushLockExclusiveEx(v15 + 80, 0LL);
          v30 = 0;
          if ( a2 )
            v30 = HvCheckAndUpdateHiveBackupTimeStamp(v15);
          else
            *(_BYTE *)(v15 + 191) = 1;
          ContextForFile = v30;
          v31 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 80), 0xFFFFFFFFFFFFFFFFuLL);
          if ( (v31 & 2) != 0 && (v31 & 4) == 0 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v15 + 80), v27, v28, v29);
          KeAbPostRelease(v15 + 80);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 72), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v15 + 72));
          KeAbPostRelease(v15 + 72);
          CmpUnlockRegistry();
          if ( ContextForFile >= 0 )
          {
            v32 = (_QWORD *)(v15 + 1600);
            if ( (a8 & 0x1000000) != 0 )
            {
              *(_QWORD *)(v15 + 1608) = v15 + 1600;
              *v32 = v32;
            }
            else
            {
              ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
              v37 = (_QWORD *)qword_140862710;
              if ( *(__int64 **)qword_140862710 != &CmpHiveListHead )
                __fastfail(3u);
              *v32 = &CmpHiveListHead;
              *(_QWORD *)(v15 + 1608) = v37;
              *v37 = v32;
              qword_140862710 = v15 + 1600;
              ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL, v35, v36);
              CmpRecheckHiveVolumePolicy(v15);
            }
            v33 = v65;
            *(_QWORD *)(v15 + 56) = 0LL;
            *v33 = v15;
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            v46 = 0;
            if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
              CmpLogHiveInitializeEvent(v15, a2, v60, v58);
            ContextForFile = 0;
LABEL_60:
            KiUnstackDetachProcess((__int64)v67, 0LL);
            goto LABEL_61;
          }
          SetFailureLocation(a12, 0, 1, ContextForFile, 256);
        }
        else
        {
          SetFailureLocation(a12, 0, 1, ContextForFile, 240);
        }
      }
      else
      {
        ContextForFile = -1073741811;
      }
LABEL_103:
      if ( v15 )
        CmpDestroyHive((PVOID)v15);
      if ( !v47 )
        goto LABEL_61;
      goto LABEL_60;
    }
    ContextForFile = -1073741670;
    SetFailureLocation(a12, 0, 1, -1073741670, 176);
  }
LABEL_61:
  if ( v46 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)ContextForFile;
}
