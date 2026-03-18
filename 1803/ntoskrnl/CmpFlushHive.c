/*
 * XREFs of CmpFlushHive @ 0x14049D2A8
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400070F8 (CmpLoadKeyCommon.c)
 *     CmpDoFlushAll @ 0x1401551E0 (CmpDoFlushAll.c)
 *     CmpDoReconcileNextHive @ 0x14049A6D0 (CmpDoReconcileNextHive.c)
 *     CmpDoFlushNextHive @ 0x14049B930 (CmpDoFlushNextHive.c)
 *     CmpInitHiveFromFile @ 0x14049DBFC (CmpInitHiveFromFile.c)
 *     CmpCompleteUnloadKey @ 0x14054D8E8 (CmpCompleteUnloadKey.c)
 *     NtFlushKey @ 0x14057A130 (NtFlushKey.c)
 *     CmpTransMgrPrepare @ 0x1405DEE1C (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x1405DFE68 (CmpTransMgrSyncHive.c)
 *     CmpMountPreloadedHives @ 0x1406309E0 (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x140632C90 (CmpLoadHiveThread.c)
 *     CmShutdownSystem @ 0x1406EFFE4 (CmShutdownSystem.c)
 *     CmReplaceKey @ 0x1406F1CD8 (CmReplaceKey.c)
 *     CmFreezeRegistry @ 0x1406F68BC (CmFreezeRegistry.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     CmpArmLazyWriter @ 0x1400690C0 (CmpArmLazyWriter.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140069270 (KiQueryUnbiasedInterruptTime.c)
 *     RtlNumberOfSetBits @ 0x14008B0F0 (RtlNumberOfSetBits.c)
 *     HvUnCOWReconciledPages @ 0x1400B6314 (HvUnCOWReconciledPages.c)
 *     RtlMergeBitMaps @ 0x1400B6478 (RtlMergeBitMaps.c)
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x140493B34 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvWriteHivePrimaryFile @ 0x140498210 (HvWriteHivePrimaryFile.c)
 *     CmpFileFlushAndPurge @ 0x14049968C (CmpFileFlushAndPurge.c)
 *     HvWriteLogFile @ 0x140499A0C (HvWriteLogFile.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x140499B4C (HvTruncateCurrentLogFileIfRequired.c)
 *     HvpLogTypeToLogArrayIndex @ 0x140499C3C (HvpLogTypeToLogArrayIndex.c)
 *     HvStoreModifiedData @ 0x140499C58 (HvStoreModifiedData.c)
 *     CmpGenerateFlushControlData @ 0x14049A2D0 (CmpGenerateFlushControlData.c)
 *     CmpReleaseWriteQueue @ 0x14049A59C (CmpReleaseWriteQueue.c)
 *     CmpWakeWriteQueueWaiters @ 0x14049A7E4 (CmpWakeWriteQueueWaiters.c)
 *     CmpLogFlushPhaseStart @ 0x14049A820 (CmpLogFlushPhaseStart.c)
 *     CmpLogFlushPhaseEnd @ 0x14049A89C (CmpLogFlushPhaseEnd.c)
 *     CmpLockRegistryFreezeAware @ 0x14049BC3C (CmpLockRegistryFreezeAware.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     HvpMarkDirty @ 0x1404E3FF0 (HvpMarkDirty.c)
 *     HvFreeDirtyData @ 0x14054D894 (HvFreeDirtyData.c)
 *     CmpBoostActiveHiveWriter @ 0x140566B44 (CmpBoostActiveHiveWriter.c)
 *     HvFreeUnreconciledData @ 0x14057915C (HvFreeUnreconciledData.c)
 *     HvSwapLogFiles @ 0x14057DB90 (HvSwapLogFiles.c)
 *     HvIsCurrentLogSwappable @ 0x140581BCC (HvIsCurrentLogSwappable.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x1405839A4 (HvTruncateAllLogFilesIfRequired.c)
 *     HvResetLogFileStatusAll @ 0x140583A34 (HvResetLogFileStatusAll.c)
 *     CmpWaitOnHiveWriteQueue @ 0x1405848F4 (CmpWaitOnHiveWriteQueue.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x1406FB6C0 (HvExtendHivePrimaryFileValidDataLength.c)
 *     HvFoldBackDirtyData @ 0x1406FB740 (HvFoldBackDirtyData.c)
 *     HvFoldBackUnreconciledData @ 0x1406FB800 (HvFoldBackUnreconciledData.c)
 */

__int64 __fastcall CmpFlushHive(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  int valid; // r15d
  REGHANDLE v5; // rbx
  int v6; // eax
  unsigned int v7; // r13d
  unsigned int v8; // ebx
  volatile signed __int64 *v9; // r12
  int v10; // eax
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  unsigned int v16; // r14d
  __int64 v17; // rcx
  char v18; // al
  int v19; // r13d
  volatile signed __int64 *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // al
  int v25; // eax
  __int64 v26; // rcx
  int v27; // esi
  unsigned int v28; // r13d
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  struct _KEVENT *v36; // rax
  LONG v37; // edx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  char v41; // al
  struct _KEVENT *v42; // rdi
  bool v43; // cf
  LONG v44; // esi
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  char v48; // bl
  REGHANDLE v49; // rbx
  int v51; // eax
  __int64 v52; // rcx
  __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rdx
  char v57; // bl
  __int64 v58; // rcx
  int v59; // esi
  ULONGLONG v60; // rax
  unsigned int v61; // r9d
  __int64 v62; // rax
  unsigned int v63; // r9d
  ULONGLONG v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  unsigned int v67; // r9d
  __int64 v68; // rax
  int v69; // eax
  unsigned int v70; // eax
  __int64 v71; // rcx
  _WORD v72[2]; // [rsp+34h] [rbp-CCh] BYREF
  int v73; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v74; // [rsp+40h] [rbp-C0h] BYREF
  int v75; // [rsp+44h] [rbp-BCh]
  unsigned int v76; // [rsp+48h] [rbp-B8h]
  int v77; // [rsp+50h] [rbp-B0h]
  unsigned int v78; // [rsp+54h] [rbp-ACh]
  int v79; // [rsp+60h] [rbp-A0h] BYREF
  struct _KEVENT *v80; // [rsp+68h] [rbp-98h]
  int v81; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v82; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v83; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v84; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v85; // [rsp+84h] [rbp-7Ch] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-78h] BYREF
  EVENT_DESCRIPTOR v87; // [rsp+98h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v88; // [rsp+A8h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[5]; // [rsp+C0h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  _DWORD *v91; // [rsp+130h] [rbp+30h]
  __int64 v92; // [rsp+138h] [rbp+38h]
  __int64 v93; // [rsp+140h] [rbp+40h]
  _DWORD v94[2]; // [rsp+148h] [rbp+48h] BYREF
  _DWORD *v95; // [rsp+150h] [rbp+50h]
  __int64 v96; // [rsp+158h] [rbp+58h]
  __int64 v97; // [rsp+160h] [rbp+60h]
  _DWORD v98[2]; // [rsp+168h] [rbp+68h] BYREF
  unsigned int *v99; // [rsp+170h] [rbp+70h]
  __int64 v100; // [rsp+178h] [rbp+78h]
  EVENT_DATA_DESCRIPTOR v101; // [rsp+180h] [rbp+80h] BYREF
  unsigned int *v102; // [rsp+1A0h] [rbp+A0h]
  int v103; // [rsp+1A8h] [rbp+A8h]
  int v104; // [rsp+1ACh] [rbp+ACh]
  int *v105; // [rsp+1B0h] [rbp+B0h]
  int v106; // [rsp+1B8h] [rbp+B8h]
  int v107; // [rsp+1BCh] [rbp+BCh]
  EVENT_DATA_DESCRIPTOR v108; // [rsp+1C0h] [rbp+C0h] BYREF
  int *v109; // [rsp+1E0h] [rbp+E0h]
  int v110; // [rsp+1E8h] [rbp+E8h]
  int v111; // [rsp+1ECh] [rbp+ECh]

  v81 = 0;
  valid = 0;
  if ( stru_140397090.LevelPlus1 > 4 )
  {
    v82 = a2;
    v91 = v94;
    v93 = *(_QWORD *)(BugCheckParameter2 + 1856);
    v94[0] = *(unsigned __int16 *)(BugCheckParameter2 + 1848);
    v95 = v98;
    v97 = *(_QWORD *)(BugCheckParameter2 + 1840);
    v98[0] = *(unsigned __int16 *)(BugCheckParameter2 + 1832);
    v99 = &v82;
    v92 = 2LL;
    v94[1] = 0;
    v96 = 2LL;
    v98[1] = 0;
    v100 = 4LL;
    TlgWrite(&stru_140397090, &unk_14030834A, 0LL, 0LL, 7u, &pData);
  }
  v5 = EtwpRegTraceHandle;
  v83 = a2;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_START;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
  {
    v60 = *(_QWORD *)(BugCheckParameter2 + 1840);
    v61 = 0;
    v72[0] = 0;
    if ( v60 )
    {
      UserData[0].Ptr = v60;
      v61 = 1;
      UserData[0].Size = *(unsigned __int16 *)(BugCheckParameter2 + 1832);
      UserData[0].Reserved = 0;
    }
    v62 = v61;
    v63 = v61 + 1;
    UserData[v62].Ptr = (ULONGLONG)v72;
    *(_QWORD *)&UserData[v62].Size = 2LL;
    v64 = *(_QWORD *)(BugCheckParameter2 + 1856);
    if ( v64 )
    {
      v65 = v63++;
      UserData[v65].Ptr = v64;
      UserData[v65].Size = *(unsigned __int16 *)(BugCheckParameter2 + 1848);
      *(&UserData[0].Reserved + 1 * v65) = 0;
    }
    v66 = v63;
    v67 = v63 + 1;
    UserData[v66].Ptr = (ULONGLONG)v72;
    *(_QWORD *)&UserData[v66].Size = 2LL;
    v68 = v67;
    UserData[v68].Ptr = (ULONGLONG)&v83;
    *(_QWORD *)&UserData[v68].Size = 4LL;
    EtwWrite(v5, &EventDescriptor, 0LL, v67 + 1, UserData);
  }
  v6 = *(_DWORD *)(BugCheckParameter2 + 160);
  if ( (v6 & 0x8001) != 0 )
    goto LABEL_77;
  if ( !*(_QWORD *)(BugCheckParameter2 + 1536) )
  {
    valid = -1073741811;
    goto LABEL_77;
  }
  v7 = 0;
  v8 = a2 | 0xC;
  v9 = (volatile signed __int64 *)(BugCheckParameter2 + 72);
  if ( (v6 & 2) == 0 )
    v8 = a2;
  LODWORD(v80) = (v8 >> 4) & 1;
  v10 = v8 & 1;
  v11 = v8 & 2;
  v79 = v10;
  v73 = v11;
  while ( 1 )
  {
    if ( v10 )
      CmpLockRegistry();
    else
      CmpLockRegistryFreezeAware(0);
    ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 72, 0LL);
    if ( v11 )
    {
      v15 = *(_DWORD *)(BugCheckParameter2 + 4280);
      if ( (v15 & 2) != 0 || (v15 & 1) != 0 && (v8 & 4) == 0 )
      {
        if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          goto LABEL_130;
        goto LABEL_131;
      }
    }
    if ( (v8 & 4) != 0 && (*(_DWORD *)(BugCheckParameter2 + 4280) & 2) != 0 )
      goto LABEL_87;
    if ( (*(_DWORD *)(BugCheckParameter2 + 4280) & 1) == 0 )
      break;
    if ( (v8 & 4) != 0 )
    {
      v59 = 0;
    }
    else if ( *(_DWORD *)(BugCheckParameter2 + 104) || (v59 = 2, *(_BYTE *)(BugCheckParameter2 + 191)) )
    {
      v59 = 1;
    }
    valid = CmpWaitOnHiveWriteQueue(BugCheckParameter2, BugCheckParameter2 + 4232, v8);
    if ( valid >= 0 )
      v7 += v59;
    v11 = v73;
LABEL_116:
    if ( v7 >= 2 )
      goto LABEL_77;
    v10 = v79;
  }
  CmpGenerateFlushControlData(BugCheckParameter2, v8, (int *)&v74);
  v16 = v74;
  v17 = 4LL;
  if ( stru_140397090.LevelPlus1 > 4 )
  {
    v104 = 0;
    v107 = 0;
    v85 = v76;
    v102 = &v84;
    v105 = (int *)&v85;
    v84 = v74;
    v103 = 4;
    v106 = 4;
    TlgWrite(&stru_140397090, &unk_1403082FF, 0LL, 0LL, 4u, &v101);
  }
  if ( (v16 & 0x358) == 0 )
  {
    v57 = _InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v57 & 2) != 0 && (v57 & 4) == 0 )
LABEL_130:
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 72), v12, v13, v14);
LABEL_131:
    KeAbPostRelease(BugCheckParameter2 + 72);
    CmpUnlockRegistry();
    valid = 0;
    goto LABEL_77;
  }
  if ( (v16 & 2) != 0 )
  {
    v51 = *(_DWORD *)(BugCheckParameter2 + 4280);
    v17 = BugCheckParameter2 + 4256;
    if ( (v51 & 2) == 0 )
    {
      *(_DWORD *)(BugCheckParameter2 + 4280) = v51 | 2;
      v16 = v74;
      *(_QWORD *)v17 = KeGetCurrentThread();
      goto LABEL_22;
    }
LABEL_87:
    CmpWaitOnHiveWriteQueue(BugCheckParameter2, BugCheckParameter2 + 4256, v8);
    goto LABEL_116;
  }
  if ( (v16 & 0x2000) != 0 )
    CmpBoostActiveHiveWriter(v17, BugCheckParameter2 + 4256);
LABEL_22:
  if ( (v16 & 1) != 0 )
  {
    *(_DWORD *)(BugCheckParameter2 + 4280) |= 1u;
    v16 = v74;
    *(_QWORD *)(BugCheckParameter2 + 4232) = KeGetCurrentThread();
  }
  v18 = (v16 & 0x110) != 0;
  v19 = (v16 >> 6) & 1;
  if ( (v16 & 8) == 0 )
  {
LABEL_28:
    if ( (v16 & 0x158) != 0 )
      v25 = HvStoreModifiedData(BugCheckParameter2, v18, v19);
    else
      v25 = 0;
    if ( v25 )
    {
      v69 = v25 - 1;
      if ( !v69 )
      {
        valid = 0;
        LOBYTE(v27) = v75 | 2;
        v75 |= 2u;
        goto LABEL_68;
      }
      valid = -1073741823;
      if ( v69 == 1 )
      {
        LOBYTE(v27) = v75;
        goto LABEL_68;
      }
    }
    if ( (v16 & 0x80u) != 0 )
    {
      v70 = *(_DWORD *)(BugCheckParameter2 + 272);
      if ( v70 > *(_DWORD *)(BugCheckParameter2 + 4284) )
      {
        v77 = *(_DWORD *)(BugCheckParameter2 + 4284);
        *(_DWORD *)(BugCheckParameter2 + 4284) = 0;
        v78 = v70 + 4096;
      }
      else
      {
        v74 = v16 & 0xFFFFFF7F;
      }
    }
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 72), v12, v13, v14);
    KeAbPostRelease(BugCheckParameter2 + 72);
    CmpUnlockRegistry();
    v16 = v74;
    if ( (v74 & 0x80u) != 0 )
    {
      CmpLogFlushPhaseStart(v26, 1);
      v28 = (unsigned int)v80;
      valid = HvExtendHivePrimaryFileValidDataLength(BugCheckParameter2, v78, (unsigned int)v80);
      CmpLogFlushPhaseEnd(v71, 1, valid);
      v27 = v75;
      if ( valid < 0 )
        goto LABEL_53;
      v27 = v75 | 0x21;
      v75 |= 0x21u;
    }
    else
    {
      v27 = v75;
      v28 = (unsigned int)v80;
    }
    if ( (v16 & 8) != 0 )
    {
      CmpLogFlushPhaseStart(v26, 2);
      valid = HvWriteLogFile(BugCheckParameter2, v29, v30, &v81);
      CmpLogFlushPhaseEnd(v31, 2, valid);
      if ( valid < 0 )
        goto LABEL_53;
      HvTruncateCurrentLogFileIfRequired(BugCheckParameter2, v32);
      v27 |= 2u;
      v75 = v27;
    }
    if ( (v16 & 0x10) != 0 )
    {
      CmpLogFlushPhaseStart(v26, 3);
      valid = HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, 0, 1, v28);
      CmpLogFlushPhaseEnd(v55, 3, valid);
      if ( valid < 0 )
      {
        v16 |= 0x400u;
        v74 = v16;
        goto LABEL_53;
      }
      v27 |= 0x20u;
      v75 = v27;
    }
    CmpLogFlushPhaseStart(v26, 4);
    if ( (v16 & 0x448) == 0x48 )
    {
      RtlMergeBitMaps(BugCheckParameter2 + 1728, (unsigned int *)(BugCheckParameter2 + 1680));
      HvFreeDirtyData(BugCheckParameter2);
      v27 |= 4u;
      v75 = v27;
    }
    CmpLogFlushPhaseEnd(v33, 4, valid);
    if ( (v16 & 0x20) != 0 )
    {
      v56 = v76 >> 2;
      LOBYTE(v56) = (v76 & 4) != 0;
      HvSwapLogFiles(BugCheckParameter2, v56);
      v27 |= 8u;
      v75 = v27;
    }
    if ( (v16 & 0x45) == 0x41 )
    {
      CmpLockRegistry();
      ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 72, 0LL);
      v36 = (struct _KEVENT *)CmpReleaseWriteQueue(v35, BugCheckParameter2 + 4232);
      v37 = -1073741823;
      if ( (v75 & 2) != 0 )
        v37 = valid;
      CmpWakeWriteQueueWaiters(v36, v37);
      *(_DWORD *)(BugCheckParameter2 + 4280) &= ~1u;
      v75 = v27 | 0x10;
      v41 = _InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v41 & 2) != 0 && (v41 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 72), v38, v39, v40);
      KeAbPostRelease(BugCheckParameter2 + 72);
      CmpUnlockRegistry();
      v27 = v75;
      v16 = v74;
    }
    if ( (v16 & 0x40) != 0 )
    {
      CmpLogFlushPhaseStart(v34, 5);
      valid = HvWriteHivePrimaryFile(BugCheckParameter2, 1, v28, v53);
      CmpLogFlushPhaseEnd(v54, 5, valid);
      if ( valid < 0 )
        goto LABEL_53;
      v27 |= 0x20u;
      v75 = v27;
    }
    if ( (v16 & 0x100) != 0 )
    {
      CmpLogFlushPhaseStart(v34, 6);
      valid = HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, 1, 1, v28);
      CmpLogFlushPhaseEnd(v58, 6, valid);
      if ( valid < 0 )
        goto LABEL_53;
      v27 |= 0x20u;
      v75 = v27;
      HvTruncateAllLogFilesIfRequired(BugCheckParameter2);
    }
    if ( (v16 & 0x200) != 0 && (v27 & 0x20) == 0 )
    {
      CmpLogFlushPhaseStart(v34, 7);
      if ( (int)CmpFileFlushAndPurge(BugCheckParameter2, 0) >= 0 )
      {
        v27 |= 0x20u;
        v75 = v27;
      }
      CmpLogFlushPhaseEnd(v52, 7, (v27 & 0x20) == 0 ? 0xC0000001 : 0);
    }
    valid = 0;
LABEL_53:
    CmpLockRegistry();
    ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 72, 0LL);
    if ( valid < 0 && (v16 & 0x80u) != 0 && (v27 & 1) == 0 )
      *(_DWORD *)(BugCheckParameter2 + 4284) = v77;
    if ( (v27 & 0x20) != 0 )
    {
      *(_DWORD *)(BugCheckParameter2 + 4284) = 0;
      *(_DWORD *)(BugCheckParameter2 + 4280) |= 4u;
    }
    if ( valid < 0 )
    {
      if ( (v27 & 2) != 0 && (v16 & 0x400) != 0 )
      {
        *(_DWORD *)(BugCheckParameter2 + 176) -= v81;
        --*(_DWORD *)(BugCheckParameter2 + 168);
        v27 &= ~2u;
        v75 = v27;
      }
      goto LABEL_59;
    }
    if ( (v16 & 0x800) != 0 )
    {
      *(_QWORD *)(BugCheckParameter2 + 4184) = KiQueryUnbiasedInterruptTime();
      if ( (v16 & 0x1000) != 0 )
        goto LABEL_110;
      CmpArmLazyWriter(1LL, 0LL, 0);
    }
    if ( (v16 & 0x1000) == 0 )
    {
LABEL_59:
      v19 = (v16 >> 6) & 1;
      if ( v19 )
      {
        if ( valid < 0 )
        {
          HvFoldBackUnreconciledData(BugCheckParameter2);
        }
        else
        {
          HvUnCOWReconciledPages(BugCheckParameter2);
          HvFreeUnreconciledData(BugCheckParameter2);
          if ( (v16 & 1) != 0 && (v27 & 0x10) == 0 )
          {
            HvResetLogFileStatusAll(BugCheckParameter2);
            *(_DWORD *)(BugCheckParameter2 + 176) = 0;
            if ( (unsigned __int8)HvIsCurrentLogSwappable(BugCheckParameter2) )
              HvSwapLogFiles(BugCheckParameter2, 0LL);
          }
          else
          {
            v17 = *(unsigned int *)(BugCheckParameter2 + 164);
            if ( (unsigned int)(v17 - 4) <= 1 )
            {
              v17 = (unsigned int)HvpLogTypeToLogArrayIndex(5 - (unsigned int)((_DWORD)v17 != 4));
              *(_BYTE *)(v17 + BugCheckParameter2 + 188) = 0;
            }
          }
        }
      }
      if ( (v16 & 0x110) != 0 )
        HvFreeUnreconciledData(BugCheckParameter2);
      if ( (v16 & 8) != 0 && (v27 & 4) == 0 )
      {
        if ( (v27 & 2) != 0 )
        {
          if ( !v19 )
          {
            RtlMergeBitMaps(BugCheckParameter2 + 112, (unsigned int *)(BugCheckParameter2 + 1680));
            *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
          }
          HvFreeDirtyData(BugCheckParameter2);
        }
        else
        {
          HvFoldBackDirtyData(BugCheckParameter2);
        }
      }
      goto LABEL_68;
    }
LABEL_110:
    CmpArmLazyWriter(1LL, 0LL, 1);
    goto LABEL_59;
  }
  v20 = (volatile signed __int64 *)(BugCheckParameter2 + 80);
  ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 80, 0LL);
  if ( (unsigned __int8)HvpMarkDirty(BugCheckParameter2) )
  {
    v24 = _InterlockedExchangeAdd64(v20, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v24 & 2) != 0 && (v24 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 80), v21, v22, v23);
    KeAbPostRelease(BugCheckParameter2 + 80);
    v18 = (v16 & 0x110) != 0;
    v16 = v74;
    goto LABEL_28;
  }
  if ( (_InterlockedExchangeAdd64(v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 80), v21, v22, v23);
  KeAbPostRelease(BugCheckParameter2 + 80);
  LOBYTE(v27) = v75;
  valid = -1073741823;
  LOBYTE(v16) = v74;
LABEL_68:
  if ( (v16 & 1) == 0 || (v27 & 0x10) != 0 )
  {
    v80 = 0LL;
  }
  else
  {
    *(_DWORD *)(BugCheckParameter2 + 4280) &= ~1u;
    v80 = (struct _KEVENT *)CmpReleaseWriteQueue(v17, BugCheckParameter2 + 4232);
  }
  if ( (v16 & 2) != 0 )
  {
    *(_DWORD *)(BugCheckParameter2 + 4280) &= ~2u;
    v42 = (struct _KEVENT *)CmpReleaseWriteQueue(v17, BugCheckParameter2 + 4256);
  }
  else
  {
    v42 = 0LL;
  }
  v43 = (v27 & 2) != 0;
  v44 = -1073741823;
  CmpWakeWriteQueueWaiters(v80, v43 ? 0 : 0xC0000001);
  if ( v19 )
    v44 = valid;
  CmpWakeWriteQueueWaiters(v42, v44);
  v48 = _InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v48 & 2) != 0 && (v48 & 4) == 0 )
    ExfTryToWakePushLock(v9, v45, v46, v47);
  KeAbPostRelease((ULONG_PTR)v9);
  CmpUnlockRegistry();
LABEL_77:
  v49 = EtwpRegTraceHandle;
  v79 = valid;
  v87 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_STOP;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &v87) )
  {
    v88.Reserved = 0;
    v88.Ptr = (ULONGLONG)&v79;
    v88.Size = 4;
    EtwWrite(v49, &v87, 0LL, 1u, &v88);
  }
  if ( stru_140397090.LevelPlus1 > 4 )
  {
    v111 = 0;
    v109 = &v73;
    v73 = valid;
    v110 = 4;
    TlgWrite(&stru_140397090, &unk_1403082DC, 0LL, 0LL, 3u, &v108);
  }
  return (unsigned int)valid;
}
