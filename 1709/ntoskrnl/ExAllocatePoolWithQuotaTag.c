/*
 * XREFs of ExAllocatePoolWithQuotaTag @ 0x140060B70
 * Callers:
 *     RtlIsUntrustedObject @ 0x14000C7D0 (RtlIsUntrustedObject.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x1400159C4 (IopVerifierExAllocatePoolWithQuota.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140024180 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     NtGetWriteWatch @ 0x140031CA0 (NtGetWriteWatch.c)
 *     IopAllocateIrpPrivate @ 0x140082210 (IopAllocateIrpPrivate.c)
 *     RtlInsertDynamicFunctionTable @ 0x1400AC660 (RtlInsertDynamicFunctionTable.c)
 *     PopCaptureReasonContext @ 0x1400B54B8 (PopCaptureReasonContext.c)
 *     PiControlAllocateBufferForUserModeCaller @ 0x1400FEB34 (PiControlAllocateBufferForUserModeCaller.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x1400FEBE0 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     IopVerifierExAllocatePoolWithQuota_2 @ 0x14015B9D4 (IopVerifierExAllocatePoolWithQuota_2.c)
 *     FsRtlAllocatePoolWithQuota @ 0x1401E7950 (FsRtlAllocatePoolWithQuota.c)
 *     FsRtlAllocatePoolWithQuotaTag @ 0x1401E7980 (FsRtlAllocatePoolWithQuotaTag.c)
 *     IopVerifierExAllocatePoolWithQuota_3 @ 0x1401FA4E0 (IopVerifierExAllocatePoolWithQuota_3.c)
 *     IopVerifierExAllocatePoolWithQuota_4 @ 0x1401FBBB8 (IopVerifierExAllocatePoolWithQuota_4.c)
 *     PsSetCpuQuotaInformation @ 0x14024DB44 (PsSetCpuQuotaInformation.c)
 *     ExAllocatePoolWithQuota @ 0x1402844A0 (ExAllocatePoolWithQuota.c)
 *     ExGetWakeTimerList @ 0x140286510 (ExGetWakeTimerList.c)
 *     PspReadIFEOPerfOptions @ 0x14044CA90 (PspReadIFEOPerfOptions.c)
 *     CmUnloadKey @ 0x14046DF74 (CmUnloadKey.c)
 *     NtDeleteValueKey @ 0x140474B2C (NtDeleteValueKey.c)
 *     CmpAllocatePostBlock @ 0x14047981C (CmpAllocatePostBlock.c)
 *     CmpNotifyChangeKey @ 0x140479920 (CmpNotifyChangeKey.c)
 *     NtSetValueKey @ 0x14047AFF0 (NtSetValueKey.c)
 *     NtQueryDirectoryObject @ 0x140484130 (NtQueryDirectoryObject.c)
 *     NtQueryInformationFile @ 0x14049A060 (NtQueryInformationFile.c)
 *     NtTraceControl @ 0x14049AB40 (NtTraceControl.c)
 *     NtQueryValueKey @ 0x1404A8B80 (NtQueryValueKey.c)
 *     IopXxxControlFile @ 0x1404AD980 (IopXxxControlFile.c)
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 *     NtQueueApcThreadEx @ 0x1404D9590 (NtQueueApcThreadEx.c)
 *     CmLoadDifferencingKey @ 0x1404E2048 (CmLoadDifferencingKey.c)
 *     CmCreateKey @ 0x1404E2CA0 (CmCreateKey.c)
 *     CmpNameFromAttributes @ 0x1404E3564 (CmpNameFromAttributes.c)
 *     NtCreateWorkerFactory @ 0x1404EB4C8 (NtCreateWorkerFactory.c)
 *     IopAllocateMiniCompletionPacket @ 0x1404EBA2C (IopAllocateMiniCompletionPacket.c)
 *     ExpWnfWriteStateData @ 0x1404FF464 (ExpWnfWriteStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x14050080C (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfCreateNameInstance @ 0x1405010B0 (ExpWnfCreateNameInstance.c)
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 *     PiControlMakeUserModeCallersCopy @ 0x140525AE4 (PiControlMakeUserModeCallersCopy.c)
 *     PspCaptureUserProcessParameters @ 0x140538864 (PspCaptureUserProcessParameters.c)
 *     FsRtlAllocateExtraCreateParameter @ 0x14053B130 (FsRtlAllocateExtraCreateParameter.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x14053B1F0 (FsRtlAllocateExtraCreateParameterList.c)
 *     IopCreateFile @ 0x14053C790 (IopCreateFile.c)
 *     PspBuildCreateProcessContext @ 0x14053D9A0 (PspBuildCreateProcessContext.c)
 *     ExLockUserBuffer @ 0x14056EEE8 (ExLockUserBuffer.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x140570C40 (ExpGetSystemFirmwareTableInformation.c)
 *     RtlpProcessIFEOKeyFilter @ 0x14057E480 (RtlpProcessIFEOKeyFilter.c)
 *     PspReadIFEONodeOptions @ 0x140584B70 (PspReadIFEONodeOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x140584CF0 (RtlQueryImageFileKeyOption.c)
 *     RtlAcquirePrivilege @ 0x1405859DC (RtlAcquirePrivilege.c)
 *     NtRegisterThreadTerminatePort @ 0x14059BAD0 (NtRegisterThreadTerminatePort.c)
 *     PspIsDfssEnabled @ 0x1405C3280 (PspIsDfssEnabled.c)
 *     RtlQueryModuleInformation @ 0x1405CCA60 (RtlQueryModuleInformation.c)
 *     DbgkRegisterErrorPort @ 0x1405EBA80 (DbgkRegisterErrorPort.c)
 *     NtCompactKeys @ 0x1406876C0 (NtCompactKeys.c)
 *     NtRenameKey @ 0x14068812C (NtRenameKey.c)
 *     CmpSaveKeyByFileCopy @ 0x14069E3E0 (CmpSaveKeyByFileCopy.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x1406A4C3C (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     DbgkpQueueMessage @ 0x1406AAA14 (DbgkpQueueMessage.c)
 *     KeEnableProfiling @ 0x1406D84B8 (KeEnableProfiling.c)
 *     PsCreateVsmEnclave @ 0x14071B904 (PsCreateVsmEnclave.c)
 *     PsInitializeVsmEnclave @ 0x14071BEF4 (PsInitializeVsmEnclave.c)
 *     PspPrepareEnclaveThreadWait @ 0x14071C350 (PspPrepareEnclaveThreadWait.c)
 *     PspVsmEnclaveHashAllocator @ 0x14071C67C (PspVsmEnclaveHashAllocator.c)
 *     RtlAddResourceAttributeAce @ 0x1407207F0 (RtlAddResourceAttributeAce.c)
 *     RtlGetAppContainerParent @ 0x140721930 (RtlGetAppContainerParent.c)
 *     NtQuerySecurityPolicy @ 0x140727C3C (NtQuerySecurityPolicy.c)
 *     ExpGetDeviceDataInformation @ 0x140754024 (ExpGetDeviceDataInformation.c)
 *     ExpQueryElamCertInfo @ 0x140754E40 (ExpQueryElamCertInfo.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x14075536C (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpStringCapture @ 0x14075597C (ExpStringCapture.c)
 * Callees:
 *     MmIsSpecialPoolAddress @ 0x14006660C (MmIsSpecialPoolAddress.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     PspExpandQuota @ 0x1400F1198 (PspExpandQuota.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140239558 (ObpPushStackInfo.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

PVOID __stdcall ExAllocatePoolWithQuotaTag(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  int v3; // ebp
  unsigned __int32 v4; // ebx
  POOL_TYPE v5; // ecx
  POOL_TYPE v6; // ebx
  PEPROCESS Process; // rsi
  char *PoolWithTag; // rax
  char *v9; // r15
  char *v10; // rbp
  __int64 v11; // rdx
  char *v12; // r13
  unsigned int v13; // ecx
  bool v14; // zf
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // r10
  __int64 v19; // rcx
  char v20; // r8
  unsigned __int64 *v21; // rbx
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  signed __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  signed __int64 BugCheckParameter4; // rdi
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  NTSTATUS v35; // ebx
  signed __int32 v36[8]; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 v37; // [rsp+30h] [rbp-58h] BYREF
  __int64 v38; // [rsp+38h] [rbp-50h]
  __int64 v39; // [rsp+40h] [rbp-48h]
  char v40; // [rsp+90h] [rbp+8h]
  int v42; // [rsp+A8h] [rbp+20h]

  v42 = 1;
  v3 = 1;
  v4 = PoolType;
  if ( (PoolType & 8) != 0 )
  {
    v3 = 0;
    v42 = 0;
    v4 = PoolType & 0xFFFFFFF7;
  }
  v5 = v4;
  v6 = v4 + 8;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process == PsInitialSystemProcess )
    v6 = v5;
  PoolWithTag = (char *)ExAllocatePoolWithTag(v6, NumberOfBytes, Tag);
  v9 = PoolWithTag;
  if ( ((unsigned __int16)PoolWithTag & 0xFFF) == 0 )
  {
    if ( !PoolWithTag && v3 )
      RtlRaiseStatus(-1073741670);
    return v9;
  }
  if ( ExpSpecialAllocations && (unsigned int)MmIsSpecialPoolAddress(PoolWithTag) || (v6 & 8) == 0 )
    return v9;
  v10 = v9 - 16;
  v11 = ExpPoolQuotaCookie;
  v12 = 0LL;
  v13 = (unsigned __int8)*((_WORD *)v9 - 7);
  v14 = (*(v9 - 13) & 4) == 0;
  *((_QWORD *)v9 - 1) = (unsigned __int64)(v9 - 16) ^ ExpPoolQuotaCookie;
  if ( !v14 )
  {
    v12 = &v10[-16 * (unsigned __int8)*(_WORD *)v10];
    v13 = (unsigned __int8)*((_WORD *)v12 + 1);
    *((_QWORD *)v12 + 1) = (unsigned __int64)v12 ^ v11;
  }
  v15 = 16LL * v13;
  if ( Process == PsInitialSystemProcess )
  {
LABEL_20:
    v29 = ExpPoolQuotaCookie;
    *((_QWORD *)v10 + 1) = (unsigned __int64)Process ^ (unsigned __int64)v10 ^ ExpPoolQuotaCookie;
    if ( v12 )
      *((_QWORD *)v12 + 1) = (unsigned __int64)Process ^ (unsigned __int64)v12 ^ v29;
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)Process - 48);
    BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)&Process[-1].Spare2[39]);
    if ( BugCheckParameter4 <= 1 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Process, 0x10uLL, BugCheckParameter4);
    return v9;
  }
  v16 = Process[1].ActiveProcessors.Bitmap[4];
  v17 = v6 & 1;
  v18 = (unsigned int)v17;
  v38 = (unsigned int)v17;
  v19 = 8 * v17;
  v20 = PspResourceFlags[8 * v17];
  v21 = (unsigned __int64 *)(v16 + (v17 << 7));
  v40 = PspResourceFlags[v19];
  v39 = v19;
  _m_prefetchw(v21);
  v22 = *v21;
  _InterlockedOr(v36, 0);
LABEL_12:
  v23 = v21[8];
LABEL_13:
  v37 = v23;
  while ( 1 )
  {
    v24 = v22 + v15;
    if ( v22 + v15 < v22 )
      break;
    if ( v24 <= v23 )
    {
      v25 = _InterlockedCompareExchange64((volatile signed __int64 *)v21, v24, v22);
      v14 = v22 == v25;
      v22 = v25;
      if ( !v14 )
        goto LABEL_12;
      _m_prefetchw(v21 + 1);
      v26 = v21[1];
      if ( v24 > v26 )
      {
        do
        {
          v33 = v26;
          v26 = _InterlockedCompareExchange64((volatile signed __int64 *)v21 + 1, v24, v26);
        }
        while ( v26 != v33 && v24 > v26 );
      }
      if ( (v20 & 4) != 0 )
      {
        v27 = v15 + _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].ThreadListHead.Blink + v18, v15);
        _m_prefetchw(&Process[1].DeepFreezeStartTime + v18);
        v28 = *(&Process[1].DeepFreezeStartTime + v18);
        if ( v27 > v28 )
        {
          do
          {
            v32 = v28;
            v28 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&Process[1].DeepFreezeStartTime + v18,
                    v27,
                    v28);
          }
          while ( v28 != v32 && v27 > v28 );
        }
      }
      goto LABEL_20;
    }
    if ( (v20 & 1) == 0 || !v21[10] )
      break;
    v34 = _InterlockedExchange64((volatile __int64 *)v21 + 9, 0LL);
    if ( v34 )
    {
      v23 = v34 + _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, v34);
      goto LABEL_13;
    }
    if ( !(unsigned __int8)PspExpandQuota(v18, (_DWORD)v21, v22, v15, (__int64)&v37) )
      break;
    v23 = v37;
    v18 = v38;
    v20 = v40;
  }
  v35 = *(_DWORD *)&PspResourceFlags[v39 + 4];
  if ( v35 >= 0 )
    goto LABEL_20;
  ExFreePoolWithTag(v9, Tag);
  if ( v42 )
    RtlRaiseStatus(v35);
  return 0LL;
}
