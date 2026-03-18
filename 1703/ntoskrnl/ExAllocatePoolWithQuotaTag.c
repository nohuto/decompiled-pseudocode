/*
 * XREFs of ExAllocatePoolWithQuotaTag @ 0x14004B900
 * Callers:
 *     IopVerifierExAllocatePoolWithQuota @ 0x140022E90 (IopVerifierExAllocatePoolWithQuota.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140032020 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x140033E50 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     RtlInsertDynamicFunctionTable @ 0x140066B00 (RtlInsertDynamicFunctionTable.c)
 *     RtlIsUntrustedObject @ 0x140066F30 (RtlIsUntrustedObject.c)
 *     PopCaptureReasonContext @ 0x14007276C (PopCaptureReasonContext.c)
 *     IopAllocateIrpPrivate @ 0x1400ED9B0 (IopAllocateIrpPrivate.c)
 *     NtGetWriteWatch @ 0x140101A00 (NtGetWriteWatch.c)
 *     PiControlAllocateBufferForUserModeCaller @ 0x1401228B0 (PiControlAllocateBufferForUserModeCaller.c)
 *     IopVerifierExAllocatePoolWithQuota_2 @ 0x14014B3F4 (IopVerifierExAllocatePoolWithQuota_2.c)
 *     FsRtlAllocatePoolWithQuota @ 0x1401E3690 (FsRtlAllocatePoolWithQuota.c)
 *     FsRtlAllocatePoolWithQuotaTag @ 0x1401E36C0 (FsRtlAllocatePoolWithQuotaTag.c)
 *     IopVerifierExAllocatePoolWithQuota_3 @ 0x1401F47F4 (IopVerifierExAllocatePoolWithQuota_3.c)
 *     IopVerifierExAllocatePoolWithQuota_4 @ 0x1401F5D70 (IopVerifierExAllocatePoolWithQuota_4.c)
 *     PsSetCpuQuotaInformation @ 0x140238A68 (PsSetCpuQuotaInformation.c)
 *     ExAllocatePoolWithQuota @ 0x14025AD60 (ExAllocatePoolWithQuota.c)
 *     ExGetWakeTimerList @ 0x14025CC34 (ExGetWakeTimerList.c)
 *     CmCreateKey @ 0x14042DEF0 (CmCreateKey.c)
 *     RtlpProcessIFEOKeyFilter @ 0x140443CEC (RtlpProcessIFEOKeyFilter.c)
 *     PspReadIFEOPerfOptions @ 0x1404495D0 (PspReadIFEOPerfOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x1404497B8 (RtlQueryImageFileKeyOption.c)
 *     RtlAcquirePrivilege @ 0x14044BAB8 (RtlAcquirePrivilege.c)
 *     NtQueryDirectoryObject @ 0x14047C040 (NtQueryDirectoryObject.c)
 *     PiControlMakeUserModeCallersCopy @ 0x14047FBFC (PiControlMakeUserModeCallersCopy.c)
 *     NtTraceControl @ 0x14047FD70 (NtTraceControl.c)
 *     NtSetValueKey @ 0x14048EDA0 (NtSetValueKey.c)
 *     CmpNotifyChangeKey @ 0x140491AD8 (CmpNotifyChangeKey.c)
 *     CmpAllocatePostBlock @ 0x140491DB4 (CmpAllocatePostBlock.c)
 *     PspReadIFEOMitigationOptions @ 0x1404A0D20 (PspReadIFEOMitigationOptions.c)
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 *     NtQueueApcThreadEx @ 0x1404C9748 (NtQueueApcThreadEx.c)
 *     CmUnloadKey @ 0x1404CB114 (CmUnloadKey.c)
 *     NtDeleteValueKey @ 0x1404CE698 (NtDeleteValueKey.c)
 *     CmLoadDifferencingKey @ 0x1404D48BC (CmLoadDifferencingKey.c)
 *     CmpNameFromAttributes @ 0x1404D5588 (CmpNameFromAttributes.c)
 *     ExpWnfWriteStateData @ 0x1404EE2D4 (ExpWnfWriteStateData.c)
 *     ExpWnfCreateNameInstance @ 0x1404EF640 (ExpWnfCreateNameInstance.c)
 *     ExpWnfSubscribeNameInstance @ 0x1404F01B0 (ExpWnfSubscribeNameInstance.c)
 *     NtQueryValueKey @ 0x1405074B0 (NtQueryValueKey.c)
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 *     IopXxxControlFile @ 0x14052BAD0 (IopXxxControlFile.c)
 *     IopCreateFile @ 0x140541AA0 (IopCreateFile.c)
 *     PspBuildCreateProcessContext @ 0x140542C84 (PspBuildCreateProcessContext.c)
 *     FsRtlAllocateExtraCreateParameter @ 0x1405451B0 (FsRtlAllocateExtraCreateParameter.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x140545270 (FsRtlAllocateExtraCreateParameterList.c)
 *     PspCaptureUserProcessParameters @ 0x1405464D4 (PspCaptureUserProcessParameters.c)
 *     ExLockUserBuffer @ 0x14055C224 (ExLockUserBuffer.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14055C888 (ExpGetSystemFirmwareTableInformation.c)
 *     NtCreateWorkerFactory @ 0x14055D844 (NtCreateWorkerFactory.c)
 *     IopAllocateMiniCompletionPacket @ 0x14055DE1C (IopAllocateMiniCompletionPacket.c)
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 *     NtRegisterThreadTerminatePort @ 0x140574ACC (NtRegisterThreadTerminatePort.c)
 *     RtlQueryModuleInformation @ 0x140580100 (RtlQueryModuleInformation.c)
 *     PspIsDfssEnabled @ 0x1405A5620 (PspIsDfssEnabled.c)
 *     DbgkRegisterErrorPort @ 0x1405D1A50 (DbgkRegisterErrorPort.c)
 *     NtCompactKeys @ 0x14065E844 (NtCompactKeys.c)
 *     NtRenameKey @ 0x14065F2B4 (NtRenameKey.c)
 *     CmpSaveKeyByFileCopy @ 0x140673320 (CmpSaveKeyByFileCopy.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x14067A4F4 (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     DbgkpQueueMessage @ 0x14067F83C (DbgkpQueueMessage.c)
 *     KeEnableProfiling @ 0x1406AD1B8 (KeEnableProfiling.c)
 *     RtlAddResourceAttributeAce @ 0x1406E89D0 (RtlAddResourceAttributeAce.c)
 *     RtlGetAppContainerParent @ 0x1406E9A30 (RtlGetAppContainerParent.c)
 *     NtQuerySecurityPolicy @ 0x1406F01C0 (NtQuerySecurityPolicy.c)
 *     ExpGetDeviceDataInformation @ 0x140714E94 (ExpGetDeviceDataInformation.c)
 *     ExpQueryElamCertInfo @ 0x140715718 (ExpQueryElamCertInfo.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x140715C44 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpStringCapture @ 0x140716250 (ExpStringCapture.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     PspExpandQuota @ 0x14002C68C (PspExpandQuota.c)
 *     MmIsSpecialPoolAddress @ 0x1400A5B4C (MmIsSpecialPoolAddress.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140226DAC (ObpPushStackInfo.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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
  __int64 v10; // rdx
  char *v11; // rbp
  char *v12; // r13
  bool v13; // zf
  __int64 v14; // r14
  __int64 v15; // r14
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
  signed __int64 BugCheckParameter4; // rdi
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  NTSTATUS v34; // ebx
  signed __int32 v35[8]; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 v36; // [rsp+30h] [rbp-58h] BYREF
  __int64 v37; // [rsp+38h] [rbp-50h]
  __int64 v38; // [rsp+40h] [rbp-48h]
  char v39; // [rsp+90h] [rbp+8h]
  int v41; // [rsp+A8h] [rbp+20h]

  v41 = 1;
  v3 = 1;
  v4 = PoolType;
  if ( (PoolType & 8) != 0 )
  {
    v3 = 0;
    v41 = 0;
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
  v10 = ExpPoolQuotaCookie;
  v11 = v9 - 16;
  v12 = 0LL;
  v13 = (*(v9 - 13) & 4) == 0;
  *((_QWORD *)v9 - 1) = (unsigned __int64)(v9 - 16) ^ ExpPoolQuotaCookie;
  v14 = (unsigned __int8)*((_WORD *)v9 - 7);
  if ( !v13 )
  {
    v12 = &v11[-16 * (unsigned __int8)*(_WORD *)v11];
    *((_QWORD *)v12 + 1) = (unsigned __int64)v12 ^ v10;
    v14 = (unsigned __int8)*((_WORD *)v12 + 1);
  }
  v15 = 16 * v14;
  if ( Process == PsInitialSystemProcess )
  {
LABEL_21:
    *((_QWORD *)v11 + 1) = (unsigned __int64)Process ^ (unsigned __int64)v11 ^ v10;
    if ( v12 )
      *((_QWORD *)v12 + 1) = (unsigned __int64)Process ^ (unsigned __int64)v12 ^ v10;
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
  v37 = (unsigned int)v17;
  v19 = 8 * v17;
  v20 = PspResourceFlags[8 * v17];
  v21 = (unsigned __int64 *)(v16 + (v17 << 7));
  v39 = PspResourceFlags[v19];
  v38 = v19;
  _m_prefetchw(v21);
  v22 = *v21;
  _InterlockedOr(v35, 0);
LABEL_12:
  v23 = v21[8];
LABEL_13:
  v36 = v23;
  while ( 1 )
  {
    v24 = v22 + v15;
    if ( v22 + v15 < v22 )
      break;
    if ( v24 <= v23 )
    {
      v25 = _InterlockedCompareExchange64((volatile signed __int64 *)v21, v24, v22);
      v13 = v22 == v25;
      v22 = v25;
      if ( !v13 )
        goto LABEL_12;
      _m_prefetchw(v21 + 1);
      v26 = v21[1];
      if ( v24 > v26 )
      {
        do
        {
          v32 = v26;
          v26 = _InterlockedCompareExchange64((volatile signed __int64 *)v21 + 1, v24, v26);
        }
        while ( v26 != v32 && v24 > v26 );
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
            v31 = v28;
            v28 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&Process[1].DeepFreezeStartTime + v18,
                    v27,
                    v28);
          }
          while ( v28 != v31 && v27 > v28 );
        }
      }
      goto LABEL_20;
    }
    if ( (v20 & 1) == 0 || !v21[10] )
      break;
    v33 = _InterlockedExchange64((volatile __int64 *)v21 + 9, 0LL);
    if ( v33 )
    {
      v23 = v33 + _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, v33);
      goto LABEL_13;
    }
    if ( !PspExpandQuota(v18, (__int64)v21, v22, v15, &v36) )
      break;
    v23 = v36;
    v18 = v37;
    v20 = v39;
  }
  v34 = *(_DWORD *)&PspResourceFlags[v38 + 4];
  if ( v34 >= 0 )
  {
LABEL_20:
    v10 = ExpPoolQuotaCookie;
    goto LABEL_21;
  }
  ExFreePoolWithTag(v9, Tag);
  if ( v41 )
    RtlRaiseStatus(v34);
  return 0LL;
}
