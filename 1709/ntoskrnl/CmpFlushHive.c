/*
 * XREFs of CmpFlushHive @ 0x1404DD950
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400AF5E8 (CmpLoadKeyCommon.c)
 *     CmpDoFlushAll @ 0x1401E3C7C (CmpDoFlushAll.c)
 *     CmFreezeRegistry @ 0x14044E168 (CmFreezeRegistry.c)
 *     CmpCompleteUnloadKey @ 0x14046FBB4 (CmpCompleteUnloadKey.c)
 *     CmpDoFlushNextHive @ 0x1404E3960 (CmpDoFlushNextHive.c)
 *     CmpDoReconcileNextHive @ 0x1404E3D10 (CmpDoReconcileNextHive.c)
 *     NtFlushKey @ 0x14059294C (NtFlushKey.c)
 *     CmpTransMgrPrepare @ 0x1405A5024 (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x1405A6BC4 (CmpTransMgrSyncHive.c)
 *     CmpLoadHiveThread @ 0x1405BE770 (CmpLoadHiveThread.c)
 *     CmShutdownSystem @ 0x14068BC1C (CmShutdownSystem.c)
 *     CmReplaceKey @ 0x14068D9FC (CmReplaceKey.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x140016954 (CmpArmLazyWriter.c)
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     RtlMergeBitMaps @ 0x140116B14 (RtlMergeBitMaps.c)
 *     HvSynchronizeAndDropTemporaryBins @ 0x140130A30 (HvSynchronizeAndDropTemporaryBins.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     HvpMarkDirty @ 0x14047D1F0 (HvpMarkDirty.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpLockRegistryFreezeAware @ 0x1404E3B7C (CmpLockRegistryFreezeAware.c)
 *     HvWriteLogFile @ 0x1404E3F18 (HvWriteLogFile.c)
 *     CmpFileFlushAndPurge @ 0x1404E410C (CmpFileFlushAndPurge.c)
 *     HvWriteHivePrimaryFile @ 0x1404E4520 (HvWriteHivePrimaryFile.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x1404E5C44 (HvTruncateCurrentLogFileIfRequired.c)
 *     CmpGenerateFlushControlData @ 0x1404E5CC4 (CmpGenerateFlushControlData.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1404E5FD4 (HvpLogTypeToLogArrayIndex.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1404E63B0 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvFreeDirtyData @ 0x1404E6528 (HvFreeDirtyData.c)
 *     CmpBoostActiveHiveWriter @ 0x1404E66A0 (CmpBoostActiveHiveWriter.c)
 *     HvIsCurrentLogSwappable @ 0x1404E6A78 (HvIsCurrentLogSwappable.c)
 *     HvSwapLogFiles @ 0x1404E6ABC (HvSwapLogFiles.c)
 *     HvStoreModifiedData @ 0x1405138AC (HvStoreModifiedData.c)
 *     HvUpdateUnreconciledVector @ 0x14056FAF4 (HvUpdateUnreconciledVector.c)
 *     CmpLogFlushPhaseEnd @ 0x14058CF88 (CmpLogFlushPhaseEnd.c)
 *     CmpLogFlushPhaseStart @ 0x14058EC70 (CmpLogFlushPhaseStart.c)
 *     HvFreeUnreconciledData @ 0x14058F61C (HvFreeUnreconciledData.c)
 *     CmpReleaseWriteQueue @ 0x1405959A4 (CmpReleaseWriteQueue.c)
 *     CmpWakeWriteQueueWaiters @ 0x140597ECC (CmpWakeWriteQueueWaiters.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x14059D944 (HvTruncateAllLogFilesIfRequired.c)
 *     HvResetLogFileStatusAll @ 0x14059D9E8 (HvResetLogFileStatusAll.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140693AF0 (CmpWaitOnHiveWriteQueue.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x140696B8C (HvExtendHivePrimaryFileValidDataLength.c)
 *     HvFoldBackDirtyData @ 0x140696CC0 (HvFoldBackDirtyData.c)
 *     HvFoldBackUnreconciledData @ 0x140696D80 (HvFoldBackUnreconciledData.c)
 */

__int64 __fastcall CmpFlushHive(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  __int64 valid; // r14
  REGHANDLE v5; // rdi
  int v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // r15d
  int v9; // r13d
  int v10; // eax
  unsigned int v11; // esi
  __int64 v12; // rcx
  int v13; // r15d
  char v14; // al
  struct _FAST_MUTEX *v15; // rcx
  int v16; // eax
  unsigned int v17; // r15d
  unsigned int v18; // edi
  __int64 v19; // rcx
  char v20; // di
  unsigned int v21; // r12d
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  struct _ERESOURCE *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r12
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rdx
  REGHANDLE v36; // rbx
  int v38; // eax
  __int64 v39; // rcx
  unsigned int v40; // r9d
  _DWORD *v41; // r8
  __int64 v42; // r8
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rcx
  ULONGLONG v49; // rax
  unsigned int v50; // r9d
  __int64 v51; // rax
  unsigned int v52; // r9d
  ULONGLONG v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  unsigned int v56; // r9d
  __int64 v57; // rax
  int v58; // esi
  int v59; // eax
  unsigned int v60; // edi
  __int64 v61; // rcx
  _WORD v62[2]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v63; // [rsp+34h] [rbp-CCh]
  int v64; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v65; // [rsp+40h] [rbp-C0h] BYREF
  int v66; // [rsp+44h] [rbp-BCh]
  unsigned int v67; // [rsp+48h] [rbp-B8h]
  unsigned int v68; // [rsp+50h] [rbp-B0h]
  unsigned int v69; // [rsp+54h] [rbp-ACh]
  unsigned int v70; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v71; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v72; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v73; // [rsp+74h] [rbp-8Ch] BYREF
  int v74; // [rsp+78h] [rbp-88h] BYREF
  int v75; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-78h] BYREF
  EVENT_DESCRIPTOR v77; // [rsp+98h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v78; // [rsp+A8h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[5]; // [rsp+C0h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  _DWORD *v81; // [rsp+130h] [rbp+30h]
  __int64 v82; // [rsp+138h] [rbp+38h]
  __int64 v83; // [rsp+140h] [rbp+40h]
  _DWORD v84[2]; // [rsp+148h] [rbp+48h] BYREF
  _DWORD *v85; // [rsp+150h] [rbp+50h]
  __int64 v86; // [rsp+158h] [rbp+58h]
  __int64 v87; // [rsp+160h] [rbp+60h]
  _DWORD v88[2]; // [rsp+168h] [rbp+68h] BYREF
  unsigned int *v89; // [rsp+170h] [rbp+70h]
  __int64 v90; // [rsp+178h] [rbp+78h]
  EVENT_DATA_DESCRIPTOR v91; // [rsp+180h] [rbp+80h] BYREF
  int *v92; // [rsp+1A0h] [rbp+A0h]
  int v93; // [rsp+1A8h] [rbp+A8h]
  int v94; // [rsp+1ACh] [rbp+ACh]
  int *v95; // [rsp+1B0h] [rbp+B0h]
  int v96; // [rsp+1B8h] [rbp+B8h]
  int v97; // [rsp+1BCh] [rbp+BCh]
  EVENT_DATA_DESCRIPTOR v98; // [rsp+1C0h] [rbp+C0h] BYREF
  int *v99; // [rsp+1E0h] [rbp+E0h]
  __int64 v100; // [rsp+1E8h] [rbp+E8h]

  v64 = 0;
  LODWORD(valid) = 0;
  if ( stru_1403549F0.LevelPlus1 > 4 )
  {
    v70 = a2;
    v81 = v84;
    v83 = *(_QWORD *)(BugCheckParameter2 + 3032);
    v84[0] = *(unsigned __int16 *)(BugCheckParameter2 + 3024);
    v85 = v88;
    v87 = *(_QWORD *)(BugCheckParameter2 + 3016);
    v88[0] = *(unsigned __int16 *)(BugCheckParameter2 + 3008);
    v89 = &v70;
    v82 = 2LL;
    v84[1] = 0;
    v86 = 2LL;
    v88[1] = 0;
    v90 = 4LL;
    TlgWrite(&stru_1403549F0, &unk_1402CEA32, 0LL, 0LL, 7u, &pData);
  }
  v5 = EtwpRegTraceHandle;
  v71 = a2;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_START;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
  {
    v49 = *(_QWORD *)(BugCheckParameter2 + 3016);
    v50 = 0;
    v62[0] = 0;
    if ( v49 )
    {
      UserData[0].Ptr = v49;
      v50 = 1;
      UserData[0].Size = *(unsigned __int16 *)(BugCheckParameter2 + 3008);
      UserData[0].Reserved = 0;
    }
    v51 = v50;
    v52 = v50 + 1;
    UserData[v51].Ptr = (ULONGLONG)v62;
    *(_QWORD *)&UserData[v51].Size = 2LL;
    v53 = *(_QWORD *)(BugCheckParameter2 + 3032);
    if ( v53 )
    {
      v54 = v52++;
      UserData[v54].Ptr = v53;
      UserData[v54].Size = *(unsigned __int16 *)(BugCheckParameter2 + 3024);
      *(&UserData[0].Reserved + 1 * v54) = 0;
    }
    v55 = v52;
    v56 = v52 + 1;
    UserData[v55].Ptr = (ULONGLONG)v62;
    *(_QWORD *)&UserData[v55].Size = 2LL;
    v57 = v56;
    UserData[v57].Ptr = (ULONGLONG)&v71;
    *(_QWORD *)&UserData[v57].Size = 4LL;
    EtwWrite(v5, &EventDescriptor, 0LL, v56 + 1, UserData);
  }
  v6 = *(_DWORD *)(BugCheckParameter2 + 144);
  if ( (v6 & 0x8001) != 0 )
    goto LABEL_76;
  if ( !*(_QWORD *)(BugCheckParameter2 + 2664) )
  {
    LODWORD(valid) = -1073741811;
    goto LABEL_76;
  }
  v7 = a2 | 0xC;
  v8 = 0;
  if ( (v6 & 2) == 0 )
    v7 = a2;
  v9 = v7 & 1;
  v63 = (v7 >> 4) & 1;
  while ( 1 )
  {
    if ( (v7 & 1) != 0 )
      CmpLockRegistry();
    else
      CmpLockRegistryFreezeAware(0LL);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(BugCheckParameter2 + 2848), 1u);
    if ( (v7 & 2) != 0 )
    {
      v10 = *(_DWORD *)(BugCheckParameter2 + 5488);
      if ( (v10 & 2) != 0 || (v10 & 1) != 0 && (v7 & 4) == 0 )
      {
LABEL_104:
        ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
        CmpUnlockRegistry();
        LODWORD(valid) = 0;
        goto LABEL_76;
      }
    }
    if ( (v7 & 4) == 0 || (*(_DWORD *)(BugCheckParameter2 + 5488) & 2) == 0 )
      break;
LABEL_126:
    CmpWaitOnHiveWriteQueue(BugCheckParameter2, BugCheckParameter2 + 5464, v7);
LABEL_127:
    if ( v8 >= 2 )
      goto LABEL_76;
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 5488) & 1) != 0 )
  {
    if ( (v7 & 4) != 0 )
    {
      v58 = 0;
    }
    else if ( *(_DWORD *)(BugCheckParameter2 + 88) || (v58 = 2, *(_BYTE *)(BugCheckParameter2 + 175)) )
    {
      v58 = 1;
    }
    LODWORD(valid) = CmpWaitOnHiveWriteQueue(BugCheckParameter2, BugCheckParameter2 + 5440, v7);
    if ( (int)valid >= 0 )
      v8 += v58;
    goto LABEL_127;
  }
  CmpGenerateFlushControlData(BugCheckParameter2, v7, &v65);
  v11 = v65;
  v12 = 4LL;
  if ( stru_1403549F0.LevelPlus1 > 4 )
  {
    v94 = 0;
    v97 = 0;
    v73 = v67;
    v92 = (int *)&v72;
    v95 = (int *)&v73;
    v72 = v65;
    v93 = 4;
    v96 = 4;
    TlgWrite(&stru_1403549F0, &unk_1402CE9E7, 0LL, 0LL, 4u, &v91);
  }
  if ( (v11 & 0x358) == 0 )
    goto LABEL_104;
  if ( (v11 & 2) != 0 )
  {
    v38 = *(_DWORD *)(BugCheckParameter2 + 5488);
    if ( (v38 & 2) == 0 )
    {
      *(_DWORD *)(BugCheckParameter2 + 5488) = v38 | 2;
      v11 = v65;
      *(_QWORD *)(BugCheckParameter2 + 5464) = KeGetCurrentThread();
      goto LABEL_22;
    }
    goto LABEL_126;
  }
  if ( (v11 & 0x2000) != 0 )
    CmpBoostActiveHiveWriter(v12, BugCheckParameter2 + 5464);
LABEL_22:
  if ( (v11 & 1) != 0 )
  {
    *(_DWORD *)(BugCheckParameter2 + 5488) |= 1u;
    v11 = v65;
    *(_QWORD *)(BugCheckParameter2 + 5440) = KeGetCurrentThread();
  }
  v13 = (v11 >> 6) & 1;
  if ( (v11 & 8) == 0 )
  {
LABEL_27:
    if ( (v11 & 0x158) != 0 )
      v16 = HvStoreModifiedData(BugCheckParameter2);
    else
      v16 = 0;
    if ( v16 )
    {
      v59 = v16 - 1;
      if ( !v59 )
      {
        LODWORD(valid) = 0;
        v20 = v66 | 2;
        goto LABEL_66;
      }
      LODWORD(valid) = -1073741823;
      if ( v59 == 1 )
        goto LABEL_130;
    }
    if ( (v11 & 0x80u) != 0 )
    {
      v60 = *(_DWORD *)(BugCheckParameter2 + 1400);
      v17 = *(_DWORD *)(BugCheckParameter2 + 5492);
      if ( v60 > v17 )
      {
        v18 = v60 + 4096;
        *(_DWORD *)(BugCheckParameter2 + 5492) = 0;
LABEL_32:
        ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
        CmpUnlockRegistry();
        if ( (v11 & 0x80u) != 0 )
        {
          CmpLogFlushPhaseStart(v19, 1LL);
          v21 = v63;
          valid = (unsigned int)HvExtendHivePrimaryFileValidDataLength(BugCheckParameter2, v18, v63);
          CmpLogFlushPhaseEnd(v61, 1LL, valid);
          v20 = v66;
          if ( (int)valid < 0 )
            goto LABEL_51;
          v20 = v66 | 0x21;
        }
        else
        {
          v20 = v66;
          v21 = v63;
        }
        if ( (v11 & 8) != 0 )
        {
          CmpLogFlushPhaseStart(v19, 2LL);
          LOBYTE(v22) = 1;
          valid = (unsigned int)HvWriteLogFile(BugCheckParameter2, v22, v23, &v64);
          CmpLogFlushPhaseEnd(v24, 2LL, valid);
          if ( (int)valid < 0 )
            goto LABEL_51;
          HvTruncateCurrentLogFileIfRequired(BugCheckParameter2);
          v20 |= 2u;
        }
        if ( (v11 & 0x10) != 0 )
        {
          CmpLogFlushPhaseStart(v19, 3LL);
          LOBYTE(v42) = 1;
          valid = (unsigned int)HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, 0LL, v42, v21);
          CmpLogFlushPhaseEnd(v43, 3LL, valid);
          if ( (int)valid < 0 )
          {
            v11 |= 0x400u;
            goto LABEL_51;
          }
          v20 |= 0x20u;
        }
        CmpLogFlushPhaseStart(v19, 4LL);
        if ( (v11 & 0x448) == 0x48 )
        {
          RtlMergeBitMaps((unsigned int *)(BugCheckParameter2 + 2904), BugCheckParameter2 + 2856);
          HvFreeDirtyData(BugCheckParameter2);
          v20 |= 4u;
        }
        CmpLogFlushPhaseEnd(v25, 4LL, (unsigned int)valid);
        if ( (v11 & 0x20) != 0 )
        {
          v45 = v67 >> 2;
          LOBYTE(v45) = (v67 & 4) != 0;
          HvSwapLogFiles(BugCheckParameter2, v45);
          v20 |= 8u;
        }
        if ( (v11 & 0x45) == 0x41 )
        {
          if ( v9 )
            CmpLockRegistry();
          else
            CmpLockRegistryFreezeAware(0LL);
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(BugCheckParameter2 + 2848), 1u);
          v28 = CmpReleaseWriteQueue(v27, BugCheckParameter2 + 5440);
          v29 = (unsigned int)valid;
          if ( (v20 & 2) == 0 )
            v29 = 3221225473LL;
          CmpWakeWriteQueueWaiters(v28, v29);
          v30 = *(struct _ERESOURCE **)(BugCheckParameter2 + 2848);
          v20 |= 0x10u;
          *(_DWORD *)(BugCheckParameter2 + 5488) &= ~1u;
          ExReleaseResourceLite(v30);
          CmpUnlockRegistry();
        }
        if ( (v11 & 0x40) != 0 )
        {
          CmpLogFlushPhaseStart(v26, 5LL);
          valid = (unsigned int)HvWriteHivePrimaryFile(BugCheckParameter2);
          CmpLogFlushPhaseEnd(v39, 5LL, valid);
          if ( (int)valid < 0 )
            goto LABEL_51;
          v20 |= 0x20u;
        }
        if ( (v11 & 0x100) != 0 )
        {
          CmpLogFlushPhaseStart(v26, 6LL);
          LOBYTE(v46) = 1;
          LOBYTE(v47) = 1;
          valid = (unsigned int)HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, v47, v46, v21);
          CmpLogFlushPhaseEnd(v48, 6LL, valid);
          if ( (int)valid < 0 )
            goto LABEL_51;
          v20 |= 0x20u;
          HvTruncateAllLogFilesIfRequired(BugCheckParameter2);
        }
        if ( (v11 & 0x200) != 0 && (v20 & 0x20) == 0 )
        {
          CmpLogFlushPhaseStart(v26, 7LL);
          if ( (unsigned __int8)CmpFileFlushAndPurge(BugCheckParameter2, 0LL) )
            v20 |= 0x20u;
          CmpLogFlushPhaseEnd(v44, 7LL, (v20 & 0x20) == 0 ? 0xC0000001 : 0);
        }
LABEL_51:
        CmpLockRegistry();
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(BugCheckParameter2 + 2848), 1u);
        if ( (int)valid < 0 && (v11 & 0x80u) != 0 && (v20 & 1) == 0 )
          *(_DWORD *)(BugCheckParameter2 + 5492) = v17;
        if ( (v20 & 0x20) != 0 )
        {
          *(_DWORD *)(BugCheckParameter2 + 5488) |= 4u;
          *(_DWORD *)(BugCheckParameter2 + 5492) = 0;
        }
        if ( (int)valid < 0 )
        {
          if ( (v20 & 2) != 0 && (v11 & 0x400) != 0 )
          {
            *(_DWORD *)(BugCheckParameter2 + 160) -= v64;
            --*(_DWORD *)(BugCheckParameter2 + 152);
            v20 &= ~2u;
          }
          goto LABEL_57;
        }
        if ( (v11 & 0x800) != 0 )
        {
          *(_QWORD *)(BugCheckParameter2 + 5392) = KiQueryUnbiasedInterruptTime();
          if ( (v11 & 0x1000) != 0 )
            goto LABEL_109;
          CmpArmLazyWriter(1LL, 0LL, 0);
        }
        if ( (v11 & 0x1000) == 0 )
        {
LABEL_57:
          v13 = (v11 >> 6) & 1;
          if ( v13 )
          {
            v40 = *(_DWORD *)(BugCheckParameter2 + 2936);
            v41 = *(_DWORD **)(BugCheckParameter2 + 2928);
            if ( (int)valid < 0 )
            {
              HvSynchronizeAndDropTemporaryBins(BugCheckParameter2, 1, v41, v40, 1);
              HvFoldBackUnreconciledData(BugCheckParameter2);
            }
            else
            {
              HvSynchronizeAndDropTemporaryBins(BugCheckParameter2, 1, v41, v40, 0);
              HvFreeUnreconciledData(BugCheckParameter2);
              if ( (v11 & 1) != 0 && (v20 & 0x10) == 0 )
              {
                HvResetLogFileStatusAll(BugCheckParameter2);
                *(_DWORD *)(BugCheckParameter2 + 160) = 0;
                if ( (unsigned __int8)HvIsCurrentLogSwappable(BugCheckParameter2) )
                  HvSwapLogFiles(BugCheckParameter2, 0LL);
              }
              else
              {
                v12 = *(unsigned int *)(BugCheckParameter2 + 148);
                if ( (unsigned int)(v12 - 4) <= 1 )
                {
                  v12 = (unsigned int)HvpLogTypeToLogArrayIndex(5 - (unsigned int)((_DWORD)v12 != 4));
                  *(_BYTE *)(v12 + BugCheckParameter2 + 172) = 0;
                }
              }
            }
          }
          if ( (v11 & 0x110) != 0 )
            HvFreeUnreconciledData(BugCheckParameter2);
          if ( (v11 & 8) != 0 && (v20 & 4) == 0 )
          {
            if ( (v20 & 2) != 0 )
            {
              if ( !v13 )
              {
                LOBYTE(v31) = 1;
                HvUpdateUnreconciledVector(BugCheckParameter2, v31);
              }
              HvFreeDirtyData(BugCheckParameter2);
            }
            else
            {
              HvFoldBackDirtyData(BugCheckParameter2);
            }
          }
          goto LABEL_66;
        }
LABEL_109:
        CmpArmLazyWriter(1LL, 0LL, 1);
        goto LABEL_57;
      }
      v11 &= ~0x80u;
    }
    v17 = v68;
    v18 = v69;
    goto LABEL_32;
  }
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
  v14 = HvpMarkDirty(BugCheckParameter2, 0, 0x1000u, 0);
  v15 = *(struct _FAST_MUTEX **)(BugCheckParameter2 + 2840);
  if ( v14 )
  {
    ExReleaseFastMutexUnsafe(v15);
    goto LABEL_27;
  }
  ExReleaseFastMutexUnsafe(v15);
  LODWORD(valid) = -1073741823;
LABEL_130:
  v20 = v66;
LABEL_66:
  if ( (v11 & 1) == 0 || (v20 & 0x10) != 0 )
  {
    v32 = 0LL;
  }
  else
  {
    *(_DWORD *)(BugCheckParameter2 + 5488) &= ~1u;
    v32 = CmpReleaseWriteQueue(v12, BugCheckParameter2 + 5440);
  }
  if ( (v11 & 2) != 0 )
  {
    *(_DWORD *)(BugCheckParameter2 + 5488) &= ~2u;
    v33 = CmpReleaseWriteQueue(v12, BugCheckParameter2 + 5464);
  }
  else
  {
    v33 = 0LL;
  }
  if ( (v20 & 2) != 0 )
    v34 = 0LL;
  else
    v34 = 3221225473LL;
  CmpWakeWriteQueueWaiters(v32, v34);
  v35 = (unsigned int)valid;
  if ( !v13 )
    v35 = 3221225473LL;
  CmpWakeWriteQueueWaiters(v33, v35);
  ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
  CmpUnlockRegistry();
LABEL_76:
  v36 = EtwpRegTraceHandle;
  v74 = valid;
  v77 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_STOP;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &v77) )
  {
    *(_QWORD *)&v78.Size = 4LL;
    v78.Ptr = (ULONGLONG)&v74;
    EtwWrite(v36, &v77, 0LL, 1u, &v78);
  }
  if ( stru_1403549F0.LevelPlus1 > 4 )
  {
    v75 = valid;
    v99 = &v75;
    v100 = 4LL;
    TlgWrite(&stru_1403549F0, &unk_1402CE9C4, 0LL, 0LL, 3u, &v98);
  }
  return (unsigned int)valid;
}
