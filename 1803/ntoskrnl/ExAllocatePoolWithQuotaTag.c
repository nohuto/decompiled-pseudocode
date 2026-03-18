/*
 * XREFs of ExAllocatePoolWithQuotaTag @ 0x1400EF190
 * Callers:
 *     IopVerifierExAllocatePoolWithQuota @ 0x140002260 (IopVerifierExAllocatePoolWithQuota.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x1400078DC (CmpAllocateTransientPoolWithQuotaTag.c)
 *     NtGetWriteWatch @ 0x140024440 (NtGetWriteWatch.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140060FB0 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     PopCaptureReasonContext @ 0x140076BDC (PopCaptureReasonContext.c)
 *     PiControlAllocateBufferForUserModeCaller @ 0x140077238 (PiControlAllocateBufferForUserModeCaller.c)
 *     RtlInsertDynamicFunctionTable @ 0x1400AF690 (RtlInsertDynamicFunctionTable.c)
 *     RtlIsUntrustedObject @ 0x1400BAED0 (RtlIsUntrustedObject.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x1400D05A8 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     IopAllocateIrpPrivate @ 0x1400FDE70 (IopAllocateIrpPrivate.c)
 *     IopVerifierExAllocatePoolWithQuota_2 @ 0x1401604F0 (IopVerifierExAllocatePoolWithQuota_2.c)
 *     FsRtlAllocatePoolWithQuota @ 0x140225270 (FsRtlAllocatePoolWithQuota.c)
 *     FsRtlAllocatePoolWithQuotaTag @ 0x1402252A0 (FsRtlAllocatePoolWithQuotaTag.c)
 *     IopVerifierExAllocatePoolWithQuota_3 @ 0x140237444 (IopVerifierExAllocatePoolWithQuota_3.c)
 *     IopVerifierExAllocatePoolWithQuota_4 @ 0x140238890 (IopVerifierExAllocatePoolWithQuota_4.c)
 *     PsSetCpuQuotaInformation @ 0x140283F24 (PsSetCpuQuotaInformation.c)
 *     ExAllocatePoolWithQuota @ 0x1402B8AC0 (ExAllocatePoolWithQuota.c)
 *     ExGetWakeTimerList @ 0x1402BAC10 (ExGetWakeTimerList.c)
 *     CmpNameFromAttributes @ 0x14049E868 (CmpNameFromAttributes.c)
 *     CmpAllocatePostBlock @ 0x1404A2F7C (CmpAllocatePostBlock.c)
 *     CmpNotifyChangeKey @ 0x1404A3080 (CmpNotifyChangeKey.c)
 *     PspBuildCreateProcessContext @ 0x1404BA110 (PspBuildCreateProcessContext.c)
 *     NtQueryDirectoryObject @ 0x1404D2500 (NtQueryDirectoryObject.c)
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 *     IopCreateFile @ 0x1404F3030 (IopCreateFile.c)
 *     FsRtlAllocateExtraCreateParameter @ 0x1404F3F20 (FsRtlAllocateExtraCreateParameter.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x1404F3FE0 (FsRtlAllocateExtraCreateParameterList.c)
 *     ExpWnfCreateNameInstance @ 0x1404F5F84 (ExpWnfCreateNameInstance.c)
 *     ExpWnfSubscribeNameInstance @ 0x1404F6C20 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfWriteStateData @ 0x1404F7310 (ExpWnfWriteStateData.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1405093A8 (PiControlMakeUserModeCallersCopy.c)
 *     NtCreateWorkerFactory @ 0x14052E3E4 (NtCreateWorkerFactory.c)
 *     IopAllocateMiniCompletionPacket @ 0x14052EBDC (IopAllocateMiniCompletionPacket.c)
 *     NtSetInformationJobObject @ 0x140532FE4 (NtSetInformationJobObject.c)
 *     PspCaptureUserProcessParameters @ 0x140550820 (PspCaptureUserProcessParameters.c)
 *     ExLockUserBuffer @ 0x14055FA68 (ExLockUserBuffer.c)
 *     NtQueueApcThreadEx @ 0x14056BB80 (NtQueueApcThreadEx.c)
 *     RtlpProcessIFEOKeyFilter @ 0x14056CFD0 (RtlpProcessIFEOKeyFilter.c)
 *     PspReadIFEONodeOptions @ 0x140574290 (PspReadIFEONodeOptions.c)
 *     PspReadIFEOPerfOptions @ 0x140574410 (PspReadIFEOPerfOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x140574600 (RtlQueryImageFileKeyOption.c)
 *     RtlAcquirePrivilege @ 0x140574B08 (RtlAcquirePrivilege.c)
 *     NtRegisterThreadTerminatePort @ 0x1405802B4 (NtRegisterThreadTerminatePort.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14058A1CC (ExpGetSystemFirmwareTableInformation.c)
 *     NtTraceControl @ 0x14058F8F0 (NtTraceControl.c)
 *     NtQueryInformationFile @ 0x140596F20 (NtQueryInformationFile.c)
 *     IopXxxControlFile @ 0x1405A1A20 (IopXxxControlFile.c)
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 *     RtlQueryModuleInformation @ 0x14060C3C0 (RtlQueryModuleInformation.c)
 *     PspIsDfssEnabled @ 0x140630D50 (PspIsDfssEnabled.c)
 *     CmpSaveKeyByFileCopy @ 0x140703540 (CmpSaveKeyByFileCopy.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x14070929C (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     DbgkpQueueMessage @ 0x14070F184 (DbgkpQueueMessage.c)
 *     DbgkRegisterErrorPort @ 0x140710660 (DbgkRegisterErrorPort.c)
 *     KeEnableProfiling @ 0x140742338 (KeEnableProfiling.c)
 *     PsCreateVsmEnclave @ 0x14077F3CC (PsCreateVsmEnclave.c)
 *     PsInitializeVsmEnclave @ 0x14077FA20 (PsInitializeVsmEnclave.c)
 *     PspPrepareEnclaveThreadWait @ 0x14077FE6C (PspPrepareEnclaveThreadWait.c)
 *     PspVsmEnclaveHashAllocator @ 0x1407801D8 (PspVsmEnclaveHashAllocator.c)
 *     RtlAddResourceAttributeAce @ 0x140783F00 (RtlAddResourceAttributeAce.c)
 *     RtlAllocateAndInitializeSidEx @ 0x140784CE8 (RtlAllocateAndInitializeSidEx.c)
 *     RtlGetAppContainerParent @ 0x1407850D0 (RtlGetAppContainerParent.c)
 *     NtQuerySecurityPolicy @ 0x14078BF64 (NtQuerySecurityPolicy.c)
 *     ExpGetDeviceDataInformation @ 0x1407BADD0 (ExpGetDeviceDataInformation.c)
 *     ExpQueryElamCertInfo @ 0x1407BB76C (ExpQueryElamCertInfo.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1407BBE3C (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpStringCapture @ 0x1407BC448 (ExpStringCapture.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x140813360 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x14082F570 (VerifierPortExAllocatePoolWithQuotaTag.c)
 * Callees:
 *     MmIsSpecialPoolAddress @ 0x14004C860 (MmIsSpecialPoolAddress.c)
 *     PspExpandQuota @ 0x14007FFFC (PspExpandQuota.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140271018 (ObpPushStackInfo.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

PVOID __stdcall ExAllocatePoolWithQuotaTag(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  unsigned __int32 v3; // r9d
  __int32 v4; // r13d
  PEPROCESS Process; // rdi
  POOL_TYPE v6; // ebp
  unsigned __int64 PoolWithTag; // rax
  char *v8; // r15
  __int16 v9; // cx
  char *v10; // rbx
  __int64 v11; // r8
  char *v12; // r9
  unsigned int v13; // edx
  __int64 v14; // rsi
  __int64 v15; // rbp
  unsigned __int64 *v16; // r14
  char v17; // r8
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  bool v21; // zf
  signed __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  signed __int64 BugCheckParameter4; // rbx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  NTSTATUS v32; // esi
  signed __int32 v33[8]; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v34; // [rsp+30h] [rbp-48h] BYREF
  __int64 v35; // [rsp+38h] [rbp-40h]
  char v36; // [rsp+80h] [rbp+8h]
  char *v38; // [rsp+98h] [rbp+20h]

  v3 = PoolType & 0xFFFFFFF7;
  v4 = PoolType & 8;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (PoolType & 8) == 0 )
    v3 = PoolType;
  v6 = v3 + 8;
  if ( Process == PsInitialSystemProcess )
    v6 = v3;
  PoolWithTag = (unsigned __int64)ExAllocatePoolWithTag(v6, NumberOfBytes, Tag);
  v8 = (char *)PoolWithTag;
  if ( (PoolWithTag & 0xFFF) == 0 )
  {
    if ( !PoolWithTag && !v4 )
      RtlRaiseStatus(-1073741670);
    return v8;
  }
  if ( ExpSpecialAllocations && (unsigned int)MmIsSpecialPoolAddress(PoolWithTag) || (v6 & 8) == 0 )
    return v8;
  v9 = *((_WORD *)v8 - 7);
  v10 = v8 - 16;
  v11 = ExpPoolQuotaCookie;
  v12 = 0LL;
  v13 = (unsigned __int8)v9;
  v38 = 0LL;
  *((_QWORD *)v8 - 1) = (unsigned __int64)(v8 - 16) ^ ExpPoolQuotaCookie;
  if ( (v9 & 0x400) != 0 )
  {
    v12 = &v10[-16 * (unsigned __int8)*(_WORD *)v10];
    v38 = v12;
    v13 = (unsigned __int8)*((_WORD *)v12 + 1);
    *((_QWORD *)v12 + 1) = (unsigned __int64)v12 ^ v11;
  }
  v14 = 16LL * v13;
  if ( Process == PsInitialSystemProcess )
  {
LABEL_21:
    v26 = ExpPoolQuotaCookie;
    *((_QWORD *)v10 + 1) = (unsigned __int64)Process ^ (unsigned __int64)v10 ^ ExpPoolQuotaCookie;
    if ( v12 )
      *((_QWORD *)v12 + 1) = (unsigned __int64)Process ^ (unsigned __int64)v12 ^ v26;
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)Process - 48);
    BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)&Process[-1].Spare2[39]);
    if ( BugCheckParameter4 <= 1 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Process, 0x10uLL, BugCheckParameter4);
    return v8;
  }
  v15 = v6 & 1;
  v16 = (unsigned __int64 *)(Process[1].ActiveProcessors.Bitmap[4] + ((unsigned __int64)(unsigned int)v15 << 7));
  v17 = PspResourceFlags[8 * v15];
  v36 = v17;
  v35 = 8 * v15;
  _m_prefetchw(v16);
  v18 = *v16;
  _InterlockedOr(v33, 0);
LABEL_12:
  v19 = v16[8];
LABEL_13:
  v34 = v19;
  while ( 1 )
  {
    v20 = v18 + v14;
    if ( v18 + v14 < v18 )
      break;
    if ( v20 <= v19 )
    {
      v22 = _InterlockedCompareExchange64((volatile signed __int64 *)v16, v20, v18);
      v21 = v18 == v22;
      v18 = v22;
      if ( !v21 )
        goto LABEL_12;
      _m_prefetchw(v16 + 1);
      v23 = v16[1];
      if ( v20 > v23 )
      {
        do
        {
          v30 = v23;
          v23 = _InterlockedCompareExchange64((volatile signed __int64 *)v16 + 1, v20, v23);
        }
        while ( v23 != v30 && v20 > v23 );
      }
      if ( (v17 & 4) != 0 )
      {
        v24 = v14 + _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].ThreadListHead.Blink + v15, v14);
        _m_prefetchw(&Process[1].DeepFreezeStartTime + v15);
        v25 = *(&Process[1].DeepFreezeStartTime + v15);
        if ( v24 > v25 )
        {
          do
          {
            v29 = v25;
            v25 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&Process[1].DeepFreezeStartTime + v15,
                    v24,
                    v25);
          }
          while ( v25 != v29 && v24 > v25 );
        }
      }
      goto LABEL_20;
    }
    if ( (v17 & 1) == 0 || !v16[10] )
      break;
    v31 = _InterlockedExchange64((volatile __int64 *)v16 + 9, 0LL);
    if ( v31 )
    {
      v19 = v31 + _InterlockedExchangeAdd64((volatile signed __int64 *)v16 + 8, v31);
      goto LABEL_13;
    }
    if ( !PspExpandQuota(v15, (__int64)v16, v18, v14, &v34) )
      break;
    v19 = v34;
    v17 = v36;
  }
  v32 = *(_DWORD *)&PspResourceFlags[v35 + 4];
  if ( v32 >= 0 )
  {
LABEL_20:
    v12 = v38;
    goto LABEL_21;
  }
  ExFreePoolWithTag(v8, Tag);
  if ( !v4 )
    RtlRaiseStatus(v32);
  return 0LL;
}
