/*
 * XREFs of CmpFlushHive @ 0x1404D6DE0
 * Callers:
 *     CmpLoadKeyCommon @ 0x14007EF3C (CmpLoadKeyCommon.c)
 *     CmpDoFlushAll @ 0x14013D204 (CmpDoFlushAll.c)
 *     CmpTransMgrPrepare @ 0x14042E724 (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x14042E8D4 (CmpTransMgrSyncHive.c)
 *     NtFlushKey @ 0x140455BC8 (NtFlushKey.c)
 *     CmpCompleteUnloadKey @ 0x1404CD454 (CmpCompleteUnloadKey.c)
 *     CmpDoFlushNextHive @ 0x1404D8270 (CmpDoFlushNextHive.c)
 *     CmpDoReconcileNextHive @ 0x1404D89C0 (CmpDoReconcileNextHive.c)
 *     CmpLoadHiveThread @ 0x1405BC800 (CmpLoadHiveThread.c)
 *     CmShutdownSystem @ 0x14066270C (CmShutdownSystem.c)
 *     CmReplaceKey @ 0x14066430C (CmReplaceKey.c)
 *     CmFreezeRegistry @ 0x1406689BC (CmFreezeRegistry.c)
 * Callees:
 *     HvSynchronizeAndDropTemporaryBins @ 0x14003B8EC (HvSynchronizeAndDropTemporaryBins.c)
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     RtlMergeBitMaps @ 0x14006DC7C (RtlMergeBitMaps.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     CmpArmLazyWriter @ 0x1400A8190 (CmpArmLazyWriter.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     HvWriteHivePrimaryFile @ 0x1404391D8 (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1404394A0 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     CmpBoostActiveHiveWriter @ 0x14043B768 (CmpBoostActiveHiveWriter.c)
 *     HvFreeUnreconciledData @ 0x140450E24 (HvFreeUnreconciledData.c)
 *     HvSwapLogFiles @ 0x14045816C (HvSwapLogFiles.c)
 *     HvIsCurrentLogSwappable @ 0x14045BE38 (HvIsCurrentLogSwappable.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x14045DE44 (HvTruncateAllLogFilesIfRequired.c)
 *     HvResetLogFileStatusAll @ 0x14045DEE8 (HvResetLogFileStatusAll.c)
 *     HvUpdateUnreconciledVector @ 0x1404B64D8 (HvUpdateUnreconciledVector.c)
 *     HvStoreModifiedData @ 0x1404B7370 (HvStoreModifiedData.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x1404D39B0 (HvTruncateCurrentLogFileIfRequired.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1404D3C0C (HvpLogTypeToLogArrayIndex.c)
 *     HvFreeDirtyData @ 0x1404D3C28 (HvFreeDirtyData.c)
 *     HvWriteLogFile @ 0x1404D3CF0 (HvWriteLogFile.c)
 *     CmpLogFlushPhaseEnd @ 0x1404D814C (CmpLogFlushPhaseEnd.c)
 *     CmpLogFlushPhaseStart @ 0x1404D81E8 (CmpLogFlushPhaseStart.c)
 *     CmpLockRegistryFreezeAware @ 0x1404D8558 (CmpLockRegistryFreezeAware.c)
 *     CmpWakeWriteQueueWaiters @ 0x1404D867C (CmpWakeWriteQueueWaiters.c)
 *     CmpReleaseWriteQueue @ 0x1404D86B8 (CmpReleaseWriteQueue.c)
 *     CmpGenerateFlushControlData @ 0x1404D8714 (CmpGenerateFlushControlData.c)
 *     CmpFileFlushAndPurge @ 0x1404DB67C (CmpFileFlushAndPurge.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     HvpMarkDirty @ 0x140515690 (HvpMarkDirty.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140575D50 (CmpWaitOnHiveWriteQueue.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x14066C518 (HvExtendHivePrimaryFileValidDataLength.c)
 *     HvFoldBackDirtyData @ 0x14066C64C (HvFoldBackDirtyData.c)
 *     HvFoldBackUnreconciledData @ 0x14066C70C (HvFoldBackUnreconciledData.c)
 */

__int64 __fastcall CmpFlushHive(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  __int64 valid; // r14
  __int64 v5; // rcx
  int v6; // eax
  REGHANDLE v7; // rbx
  unsigned int v9; // r15d
  unsigned int v10; // edi
  int v11; // r13d
  int v12; // eax
  unsigned int v13; // esi
  __int64 v14; // rcx
  int v15; // r15d
  char v16; // al
  struct _FAST_MUTEX *v17; // rcx
  int v18; // eax
  unsigned int v19; // r15d
  unsigned int v20; // edi
  __int64 v21; // rcx
  char v22; // di
  unsigned int v23; // r12d
  unsigned int v24; // r8d
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rdx
  struct _ERESOURCE *v34; // rcx
  __int64 v35; // r12
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r9
  __int64 v43; // rcx
  unsigned int v44; // r9d
  _DWORD *v45; // r8
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // r8
  int v57; // esi
  ULONGLONG v58; // rax
  unsigned int v59; // r9d
  __int64 v60; // rax
  unsigned int v61; // r9d
  ULONGLONG v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  unsigned int v65; // r9d
  __int64 v66; // rax
  REGHANDLE v67; // rcx
  int v68; // eax
  unsigned int v69; // edi
  __int64 v70; // rcx
  _WORD v71[2]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v72; // [rsp+34h] [rbp-CCh]
  unsigned int v73; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v74; // [rsp+40h] [rbp-C0h] BYREF
  int v75; // [rsp+44h] [rbp-BCh]
  int v76; // [rsp+48h] [rbp-B8h]
  unsigned int v77; // [rsp+50h] [rbp-B0h]
  unsigned int v78; // [rsp+54h] [rbp-ACh]
  unsigned int v79; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v80; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v81; // [rsp+70h] [rbp-90h] BYREF
  int v82; // [rsp+74h] [rbp-8Ch] BYREF
  int v83; // [rsp+78h] [rbp-88h] BYREF
  int v84; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-78h] BYREF
  EVENT_DESCRIPTOR v86; // [rsp+98h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v87; // [rsp+A8h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[5]; // [rsp+C0h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  _DWORD *v90; // [rsp+130h] [rbp+30h]
  __int64 v91; // [rsp+138h] [rbp+38h]
  __int64 v92; // [rsp+140h] [rbp+40h]
  _DWORD v93[2]; // [rsp+148h] [rbp+48h] BYREF
  _DWORD *v94; // [rsp+150h] [rbp+50h]
  __int64 v95; // [rsp+158h] [rbp+58h]
  __int64 v96; // [rsp+160h] [rbp+60h]
  _DWORD v97[2]; // [rsp+168h] [rbp+68h] BYREF
  unsigned int *v98; // [rsp+170h] [rbp+70h]
  __int64 v99; // [rsp+178h] [rbp+78h]
  EVENT_DATA_DESCRIPTOR v100; // [rsp+190h] [rbp+90h] BYREF
  int *v101; // [rsp+1B0h] [rbp+B0h]
  int v102; // [rsp+1B8h] [rbp+B8h]
  int v103; // [rsp+1BCh] [rbp+BCh]
  int *v104; // [rsp+1C0h] [rbp+C0h]
  int v105; // [rsp+1C8h] [rbp+C8h]
  int v106; // [rsp+1CCh] [rbp+CCh]
  EVENT_DATA_DESCRIPTOR v107; // [rsp+1E0h] [rbp+E0h] BYREF
  int *v108; // [rsp+200h] [rbp+100h]
  __int64 v109; // [rsp+208h] [rbp+108h]

  v73 = 0;
  LODWORD(valid) = 0;
  if ( stru_14033C3C0.LevelPlus1 > 4 )
  {
    v79 = a2;
    v90 = v93;
    v92 = *(_QWORD *)(BugCheckParameter2 + 3032);
    v93[0] = *(unsigned __int16 *)(BugCheckParameter2 + 3024);
    v94 = v97;
    v96 = *(_QWORD *)(BugCheckParameter2 + 3016);
    v97[0] = *(unsigned __int16 *)(BugCheckParameter2 + 3008);
    v98 = &v79;
    v91 = 2LL;
    v93[1] = 0;
    v95 = 2LL;
    v97[1] = 0;
    v99 = 4LL;
    TlgWrite(&stru_14033C3C0, &unk_1402AAC53, 0LL, 0LL, 7u, &pData);
  }
  v80 = a2;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_START;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
  {
    v58 = *(_QWORD *)(BugCheckParameter2 + 3016);
    v59 = 0;
    v71[0] = 0;
    if ( v58 )
    {
      UserData[0].Ptr = v58;
      v59 = 1;
      UserData[0].Size = *(unsigned __int16 *)(BugCheckParameter2 + 3008);
      UserData[0].Reserved = 0;
    }
    v60 = v59;
    v61 = v59 + 1;
    UserData[v60].Ptr = (ULONGLONG)v71;
    *(_QWORD *)&UserData[v60].Size = 2LL;
    v62 = *(_QWORD *)(BugCheckParameter2 + 3032);
    if ( v62 )
    {
      v63 = v61++;
      UserData[v63].Ptr = v62;
      UserData[v63].Size = *(unsigned __int16 *)(BugCheckParameter2 + 3024);
      *(&UserData[0].Reserved + 1 * v63) = 0;
    }
    v64 = v61;
    v65 = v61 + 1;
    UserData[v64].Ptr = (ULONGLONG)v71;
    *(_QWORD *)&UserData[v64].Size = 2LL;
    v66 = v65;
    UserData[v66].Ptr = (ULONGLONG)&v80;
    v67 = EtwpRegTraceHandle;
    *(_QWORD *)&UserData[v66].Size = 4LL;
    EtwWrite(v67, &EventDescriptor, 0LL, v65 + 1, UserData);
  }
  v6 = *(_DWORD *)(BugCheckParameter2 + 144);
  if ( (v6 & 0x8001) != 0 )
    goto LABEL_5;
  if ( !*(_QWORD *)(BugCheckParameter2 + 2664) )
  {
    LODWORD(valid) = -1073741811;
    goto LABEL_5;
  }
  v9 = 0;
  v10 = a2 | 0xC;
  if ( (v6 & 2) == 0 )
    v10 = a2;
  v11 = v10 & 1;
  v72 = (v10 >> 4) & 1;
  while ( 1 )
  {
    if ( (v10 & 1) != 0 )
      CmpLockRegistry(v5);
    else
      CmpLockRegistryFreezeAware(0LL);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(BugCheckParameter2 + 2848), 1u);
    if ( (v10 & 2) != 0 )
    {
      v12 = *(_DWORD *)(BugCheckParameter2 + 5488);
      if ( (v12 & 2) != 0 || (v12 & 1) != 0 && (v10 & 4) == 0 )
      {
LABEL_19:
        ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
        CmpUnlockRegistry();
        LODWORD(valid) = 0;
        goto LABEL_5;
      }
    }
    if ( (v10 & 4) == 0 || (*(_DWORD *)(BugCheckParameter2 + 5488) & 2) == 0 )
      break;
LABEL_126:
    CmpWaitOnHiveWriteQueue(BugCheckParameter2, BugCheckParameter2 + 5464, v10);
LABEL_115:
    if ( v9 >= 2 )
      goto LABEL_5;
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 5488) & 1) != 0 )
  {
    if ( (v10 & 4) != 0 )
    {
      v57 = 0;
    }
    else if ( *(_DWORD *)(BugCheckParameter2 + 88) || (v57 = 2, *(_BYTE *)(BugCheckParameter2 + 175)) )
    {
      v57 = 1;
    }
    LODWORD(valid) = CmpWaitOnHiveWriteQueue(BugCheckParameter2, BugCheckParameter2 + 5440, v10);
    if ( (int)valid >= 0 )
      v9 += v57;
    goto LABEL_115;
  }
  CmpGenerateFlushControlData(BugCheckParameter2, v10, &v74);
  v13 = v74;
  v14 = 4LL;
  if ( stru_14033C3C0.LevelPlus1 > 4 )
  {
    v103 = 0;
    v106 = 0;
    v82 = v76;
    v101 = (int *)&v81;
    v104 = &v82;
    v81 = v74;
    v102 = 4;
    v105 = 4;
    TlgWrite(&stru_14033C3C0, &unk_1402AAC08, 0LL, 0LL, 4u, &v100);
  }
  if ( (v13 & 0x358) == 0 )
    goto LABEL_19;
  if ( (v13 & 2) != 0 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 5488) & 2) == 0 )
    {
      *(_DWORD *)(BugCheckParameter2 + 5488) |= 2u;
      v13 = v74;
      *(_QWORD *)(BugCheckParameter2 + 5464) = KeGetCurrentThread();
      goto LABEL_28;
    }
    goto LABEL_126;
  }
  if ( (v13 & 0x2000) != 0 )
    CmpBoostActiveHiveWriter(v14, BugCheckParameter2 + 5464);
LABEL_28:
  if ( (v13 & 1) != 0 )
  {
    *(_DWORD *)(BugCheckParameter2 + 5488) |= 1u;
    v13 = v74;
    *(_QWORD *)(BugCheckParameter2 + 5440) = KeGetCurrentThread();
  }
  v15 = (v13 >> 6) & 1;
  if ( (v13 & 8) == 0 )
  {
LABEL_33:
    if ( (v13 & 0x158) != 0 )
      v18 = HvStoreModifiedData(BugCheckParameter2, (v13 & 0x110) != 0, (v13 & 0x40) != 0);
    else
      v18 = 0;
    if ( v18 )
    {
      v68 = v18 - 1;
      if ( !v68 )
      {
        LODWORD(valid) = 0;
        v22 = v75 | 2;
        goto LABEL_72;
      }
      LODWORD(valid) = -1073741823;
      if ( v68 == 1 )
        goto LABEL_128;
    }
    if ( (v13 & 0x80u) != 0 )
    {
      v69 = *(_DWORD *)(BugCheckParameter2 + 1400);
      v19 = *(_DWORD *)(BugCheckParameter2 + 5492);
      if ( v69 > v19 )
      {
        v20 = v69 + 4096;
        *(_DWORD *)(BugCheckParameter2 + 5492) = 0;
LABEL_38:
        ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
        CmpUnlockRegistry();
        if ( (v13 & 0x80u) != 0 )
        {
          CmpLogFlushPhaseStart(v21, 1LL);
          v23 = v72;
          valid = (unsigned int)HvExtendHivePrimaryFileValidDataLength(BugCheckParameter2, v20, v72);
          CmpLogFlushPhaseEnd(v70, 1LL, valid);
          v22 = v75;
          if ( (int)valid < 0 )
            goto LABEL_57;
          v22 = v75 | 0x21;
        }
        else
        {
          v22 = v75;
          v23 = v72;
        }
        if ( (v13 & 8) != 0 )
        {
          CmpLogFlushPhaseStart(v21, 2LL);
          valid = (unsigned int)HvWriteLogFile(BugCheckParameter2, 1, v24, &v73);
          CmpLogFlushPhaseEnd(v25, 2LL, valid);
          if ( (int)valid < 0 )
            goto LABEL_57;
          HvTruncateCurrentLogFileIfRequired(BugCheckParameter2, v26, v27, v28);
          v22 |= 2u;
        }
        if ( (v13 & 0x10) != 0 )
        {
          CmpLogFlushPhaseStart(v21, 3LL);
          valid = (unsigned int)HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, 0, 1, v23);
          CmpLogFlushPhaseEnd(v40, 3LL, valid);
          if ( (int)valid < 0 )
          {
            v13 |= 0x400u;
            goto LABEL_57;
          }
          v22 |= 0x20u;
        }
        CmpLogFlushPhaseStart(v21, 4LL);
        if ( (v13 & 0x448) == 0x48 )
        {
          RtlMergeBitMaps(BugCheckParameter2 + 2904, (unsigned int *)(BugCheckParameter2 + 2856));
          HvFreeDirtyData(BugCheckParameter2);
          v22 |= 4u;
        }
        CmpLogFlushPhaseEnd(v29, 4LL, (unsigned int)valid);
        if ( (v13 & 0x20) != 0 )
        {
          HvSwapLogFiles(BugCheckParameter2, ((unsigned __int8)v76 >> 2) & 1, v30);
          v22 |= 8u;
        }
        if ( (v13 & 0x45) == 0x41 )
        {
          if ( v11 )
            CmpLockRegistry(v21);
          else
            CmpLockRegistryFreezeAware(0LL);
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(BugCheckParameter2 + 2848), 1u);
          v32 = CmpReleaseWriteQueue(v31, BugCheckParameter2 + 5440);
          v33 = (unsigned int)valid;
          if ( (v22 & 2) == 0 )
            v33 = 3221225473LL;
          CmpWakeWriteQueueWaiters(v32, v33);
          v34 = *(struct _ERESOURCE **)(BugCheckParameter2 + 2848);
          v22 |= 0x10u;
          *(_DWORD *)(BugCheckParameter2 + 5488) &= ~1u;
          ExReleaseResourceLite(v34);
          CmpUnlockRegistry();
        }
        if ( (v13 & 0x40) != 0 )
        {
          CmpLogFlushPhaseStart(v21, 5LL);
          LOBYTE(v41) = 1;
          valid = (unsigned int)HvWriteHivePrimaryFile(BugCheckParameter2, v41, v23, v42);
          CmpLogFlushPhaseEnd(v43, 5LL, valid);
          if ( (int)valid < 0 )
            goto LABEL_57;
          v22 |= 0x20u;
        }
        if ( (v13 & 0x100) != 0 )
        {
          CmpLogFlushPhaseStart(v21, 6LL);
          valid = (unsigned int)HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, 1, 1, v23);
          CmpLogFlushPhaseEnd(v49, 6LL, valid);
          if ( (int)valid < 0 )
            goto LABEL_57;
          v22 |= 0x20u;
          HvTruncateAllLogFilesIfRequired(BugCheckParameter2, v50, v51, v52);
        }
        if ( (v13 & 0x200) != 0 && (v22 & 0x20) == 0 )
        {
          CmpLogFlushPhaseStart(v21, 7LL);
          if ( (unsigned __int8)CmpFileFlushAndPurge(BugCheckParameter2, 0LL) )
            v22 |= 0x20u;
          CmpLogFlushPhaseEnd(v39, 7LL, (v22 & 0x20) == 0 ? 0xC0000001 : 0);
        }
LABEL_57:
        CmpLockRegistry(v21);
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(BugCheckParameter2 + 2848), 1u);
        if ( (int)valid < 0 && (v13 & 0x80u) != 0 && (v22 & 1) == 0 )
          *(_DWORD *)(BugCheckParameter2 + 5492) = v19;
        if ( (v22 & 0x20) != 0 )
        {
          *(_DWORD *)(BugCheckParameter2 + 5488) |= 4u;
          *(_DWORD *)(BugCheckParameter2 + 5492) = 0;
        }
        if ( (int)valid < 0 )
        {
          if ( (v22 & 2) != 0 && (v13 & 0x400) != 0 )
          {
            *(_DWORD *)(BugCheckParameter2 + 160) -= v73;
            --*(_DWORD *)(BugCheckParameter2 + 152);
            v22 &= ~2u;
          }
          goto LABEL_63;
        }
        if ( (v13 & 0x800) != 0 )
        {
          *(_QWORD *)(BugCheckParameter2 + 5392) = KiQueryUnbiasedInterruptTime();
          if ( (v13 & 0x1000) != 0 )
            goto LABEL_109;
          CmpArmLazyWriter(1, 0LL, 0);
        }
        if ( (v13 & 0x1000) == 0 )
        {
LABEL_63:
          v15 = (v13 >> 6) & 1;
          if ( v15 )
          {
            v44 = *(_DWORD *)(BugCheckParameter2 + 2936);
            v45 = *(_DWORD **)(BugCheckParameter2 + 2928);
            if ( (int)valid < 0 )
            {
              HvSynchronizeAndDropTemporaryBins(BugCheckParameter2, 1, v45, v44, 1);
              HvFoldBackUnreconciledData(BugCheckParameter2);
            }
            else
            {
              HvSynchronizeAndDropTemporaryBins(BugCheckParameter2, 1, v45, v44, 0);
              HvFreeUnreconciledData(BugCheckParameter2);
              if ( (v13 & 1) != 0 && (v22 & 0x10) == 0 )
              {
                HvResetLogFileStatusAll(BugCheckParameter2, v46, v47, v48);
                *(_DWORD *)(BugCheckParameter2 + 160) = 0;
                if ( HvIsCurrentLogSwappable(BugCheckParameter2, v53, v54, v55) )
                  HvSwapLogFiles(BugCheckParameter2, 0LL, v56);
              }
              else
              {
                v14 = *(unsigned int *)(BugCheckParameter2 + 148);
                if ( (unsigned int)(v14 - 4) <= 1 )
                {
                  v14 = (unsigned int)HvpLogTypeToLogArrayIndex(5 - (unsigned int)((_DWORD)v14 != 4));
                  *(_BYTE *)(v14 + BugCheckParameter2 + 172) = 0;
                }
              }
            }
          }
          if ( (v13 & 0x110) != 0 )
            HvFreeUnreconciledData(BugCheckParameter2);
          if ( (v13 & 8) != 0 && (v22 & 4) == 0 )
          {
            if ( (v22 & 2) != 0 )
            {
              if ( !v15 )
                HvUpdateUnreconciledVector((_RTL_BITMAP *)BugCheckParameter2, 1);
              HvFreeDirtyData(BugCheckParameter2);
            }
            else
            {
              HvFoldBackDirtyData(BugCheckParameter2);
            }
          }
          goto LABEL_72;
        }
LABEL_109:
        CmpArmLazyWriter(1, 0LL, 1);
        goto LABEL_63;
      }
      v13 &= ~0x80u;
    }
    v19 = v77;
    v20 = v78;
    goto LABEL_38;
  }
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
  v16 = HvpMarkDirty(BugCheckParameter2);
  v17 = *(struct _FAST_MUTEX **)(BugCheckParameter2 + 2840);
  if ( v16 )
  {
    ExReleaseFastMutexUnsafe(v17);
    goto LABEL_33;
  }
  ExReleaseFastMutexUnsafe(v17);
  LODWORD(valid) = -1073741823;
LABEL_128:
  v22 = v75;
LABEL_72:
  if ( (v13 & 1) == 0 || (v22 & 0x10) != 0 )
  {
    v35 = 0LL;
  }
  else
  {
    *(_DWORD *)(BugCheckParameter2 + 5488) &= ~1u;
    v35 = CmpReleaseWriteQueue(v14, BugCheckParameter2 + 5440);
  }
  if ( (v13 & 2) != 0 )
  {
    *(_DWORD *)(BugCheckParameter2 + 5488) &= ~2u;
    v36 = CmpReleaseWriteQueue(v14, BugCheckParameter2 + 5464);
  }
  else
  {
    v36 = 0LL;
  }
  if ( (v22 & 2) != 0 )
    v37 = 0LL;
  else
    v37 = 3221225473LL;
  CmpWakeWriteQueueWaiters(v35, v37);
  v38 = (unsigned int)valid;
  if ( !v15 )
    v38 = 3221225473LL;
  CmpWakeWriteQueueWaiters(v36, v38);
  ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
  CmpUnlockRegistry();
LABEL_5:
  v7 = EtwpRegTraceHandle;
  v83 = valid;
  v86 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_STOP;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &v86) )
  {
    *(_QWORD *)&v87.Size = 4LL;
    v87.Ptr = (ULONGLONG)&v83;
    EtwWrite(v7, &v86, 0LL, 1u, &v87);
  }
  if ( stru_14033C3C0.LevelPlus1 > 4 )
  {
    v84 = valid;
    v108 = &v84;
    v109 = 4LL;
    TlgWrite(&stru_14033C3C0, &unk_1402AABE5, 0LL, 0LL, 3u, &v107);
  }
  return (unsigned int)valid;
}
