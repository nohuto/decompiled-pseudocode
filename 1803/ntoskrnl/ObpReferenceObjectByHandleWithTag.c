/*
 * XREFs of ObpReferenceObjectByHandleWithTag @ 0x1405A4770
 * Callers:
 *     MmFreeVirtualMemory @ 0x1404AD570 (MmFreeVirtualMemory.c)
 *     NtResetWriteWatch @ 0x1404AF9A0 (NtResetWriteWatch.c)
 *     NtSetInformationVirtualMemory @ 0x1404B30D0 (NtSetInformationVirtualMemory.c)
 *     NtDuplicateObject @ 0x1404B6B60 (NtDuplicateObject.c)
 *     PspCreateThread @ 0x1404B98F8 (PspCreateThread.c)
 *     PspBuildCreateProcessContext @ 0x1404BA110 (PspBuildCreateProcessContext.c)
 *     NtTerminateThread @ 0x1404BB47C (NtTerminateThread.c)
 *     MiLockUnlockCommon @ 0x1404C0468 (MiLockUnlockCommon.c)
 *     NtQueryInformationThread @ 0x1404CF440 (NtQueryInformationThread.c)
 *     NtUnmapViewOfSectionEx @ 0x1404D6F40 (NtUnmapViewOfSectionEx.c)
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 *     NtCreateUserProcess @ 0x1404F200C (NtCreateUserProcess.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x1404F67F8 (ExpWnfCaptureScopeInstanceId.c)
 *     PspQueryQuotaLimits @ 0x1404F8FFC (PspQueryQuotaLimits.c)
 *     NtQueryInformationProcess @ 0x1404F9480 (NtQueryInformationProcess.c)
 *     PsReferencePartitionByHandle @ 0x140512414 (PsReferencePartitionByHandle.c)
 *     PopEtEnergyTrackerQuery @ 0x14051D9F0 (PopEtEnergyTrackerQuery.c)
 *     PopPowerRequestActionInfo @ 0x140523D80 (PopPowerRequestActionInfo.c)
 *     PsCreateSystemThreadEx @ 0x14052AC40 (PsCreateSystemThreadEx.c)
 *     MmPrefetchVirtualMemory @ 0x14052C778 (MmPrefetchVirtualMemory.c)
 *     MmProcessWorkingSetControl @ 0x14052D3D4 (MmProcessWorkingSetControl.c)
 *     NtCreateWorkerFactory @ 0x14052E3E4 (NtCreateWorkerFactory.c)
 *     NtIsProcessInJob @ 0x14052FBF4 (NtIsProcessInJob.c)
 *     NtAssignProcessToJobObject @ 0x140530290 (NtAssignProcessToJobObject.c)
 *     NtSetInformationJobObject @ 0x140532FE4 (NtSetInformationJobObject.c)
 *     NtQueryInformationJobObject @ 0x140535514 (NtQueryInformationJobObject.c)
 *     MiReadWriteVirtualMemory @ 0x140551A50 (MiReadWriteVirtualMemory.c)
 *     NtResumeProcess @ 0x140567A74 (NtResumeProcess.c)
 *     NtResumeThread @ 0x140567B94 (NtResumeThread.c)
 *     NtFlushVirtualMemory @ 0x140568028 (NtFlushVirtualMemory.c)
 *     NtTerminateProcess @ 0x14056E088 (NtTerminateProcess.c)
 *     PspSetQuotaLimits @ 0x14057899C (PspSetQuotaLimits.c)
 *     NtSuspendThread @ 0x140579210 (NtSuspendThread.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14057B220 (ObReferenceObjectByHandleWithTag.c)
 *     MiMapViewOfSectionCommon @ 0x140593B40 (MiMapViewOfSectionCommon.c)
 *     NtOpenProcessTokenEx @ 0x14059A540 (NtOpenProcessTokenEx.c)
 *     NtSetInformationThread @ 0x14059B270 (NtSetInformationThread.c)
 *     NtWaitForSingleObject @ 0x14059C7D0 (NtWaitForSingleObject.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     ObpLookupObjectName @ 0x1405A5B90 (ObpLookupObjectName.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1405B4210 (MiAllocateVirtualMemoryPrepare.c)
 *     NtProtectVirtualMemory @ 0x1405B5960 (NtProtectVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1405B5C20 (MmQueryVirtualMemory.c)
 *     NtGetNextThread @ 0x1405C2B40 (NtGetNextThread.c)
 *     NtAcquireProcessActivityReference @ 0x1405C343C (NtAcquireProcessActivityReference.c)
 *     PfpSourceGetPrefetchSupport @ 0x1405E883C (PfpSourceGetPrefetchSupport.c)
 *     PspCreateProcess @ 0x1405E9350 (PspCreateProcess.c)
 *     ObWaitForSingleObject @ 0x1405EE9B0 (ObWaitForSingleObject.c)
 *     NtGetNextProcess @ 0x14060E220 (NtGetNextProcess.c)
 *     DbgkpCreateNotificationEvent @ 0x140620BDC (DbgkpCreateNotificationEvent.c)
 *     PopCreateHiberFile @ 0x140625404 (PopCreateHiberFile.c)
 *     PopGetPolicyDeviceObject @ 0x140626D60 (PopGetPolicyDeviceObject.c)
 *     PspAssignPrimaryToken @ 0x1406408AC (PspAssignPrimaryToken.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1407082FC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x140708654 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x1407088BC (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140708A30 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140708F80 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlModifyFlags @ 0x14070948C (VrpHandleIoctlModifyFlags.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1407097C0 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     NtDebugActiveProcess @ 0x14070F9D8 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x14070FDBC (NtRemoveProcessDebug.c)
 *     DbgkpWerInitializeDeferredLiveDump @ 0x140712D60 (DbgkpWerInitializeDeferredLiveDump.c)
 *     NtAllocateUserPhysicalPages @ 0x14074FE5C (NtAllocateUserPhysicalPages.c)
 *     NtCreateEnclave @ 0x140752ED0 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x1407532E8 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x1407535B8 (NtLoadEnclaveData.c)
 *     PfpDeprioritizeOldPagesInWs @ 0x14075B794 (PfpDeprioritizeOldPagesInWs.c)
 *     PfSnAppLaunchScenarioControl @ 0x14075CA90 (PfSnAppLaunchScenarioControl.c)
 *     PopSetSpecialRequest @ 0x14075D828 (PopSetSpecialRequest.c)
 *     PopDeleteHiberFile @ 0x1407625E8 (PopDeleteHiberFile.c)
 *     PspConvertSiloToServerSilo @ 0x140778F94 (PspConvertSiloToServerSilo.c)
 *     PspQueryPooledQuotaLimits @ 0x14077A8A4 (PspQueryPooledQuotaLimits.c)
 *     PspQueryWorkingSetWatch @ 0x14077AA34 (PspQueryWorkingSetWatch.c)
 *     PspCreatePicoProcess @ 0x14077DA50 (PspCreatePicoProcess.c)
 *     PspCreatePicoThread @ 0x14077DCF0 (PspCreatePicoThread.c)
 *     NtAlertResumeThread @ 0x14077E33C (NtAlertResumeThread.c)
 *     NtAlertThread @ 0x14077E450 (NtAlertThread.c)
 *     NtSuspendProcess @ 0x14077E4C4 (NtSuspendProcess.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x14077E5E4 (PsIumEnableOnDemandDebugWithResponse.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x14077E674 (PsIumGetOnDemandDebugChallenge.c)
 *     ExpProfileCreate @ 0x1407C7550 (ExpProfileCreate.c)
 * Callees:
 *     ExFastReplenishHandleTableEntry @ 0x1400CAFEC (ExFastReplenishHandleTableEntry.c)
 *     ObpIncrPointerCountEx @ 0x1400EB080 (ObpIncrPointerCountEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExSlowReplenishHandleTableEntry @ 0x1400FE940 (ExSlowReplenishHandleTableEntry.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExfUnblockPushLock @ 0x1401A70F0 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140271018 (ObpPushStackInfo.c)
 *     ExHandleLogBadReference @ 0x1402B8000 (ExHandleLogBadReference.c)
 *     ObReferenceProcessHandleTable @ 0x1404B7304 (ObReferenceProcessHandleTable.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14054D4C4 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1405A4D70 (ExpLookupHandleTableEntry.c)
 *     ObpAuditObjectAccess @ 0x140758D94 (ObpAuditObjectAccess.c)
 *     ExpGetHandleExtraInfo @ 0x1407BD4E4 (ExpGetHandleExtraInfo.c)
 *     VfCheckUserHandle @ 0x140825800 (VfCheckUserHandle.c)
 */

__int64 __fastcall ObpReferenceObjectByHandleWithTag(
        ULONG_PTR BugCheckParameter1,
        int a2,
        __int64 a3,
        char a4,
        ULONG Tag,
        _QWORD *a6,
        _DWORD *a7,
        _QWORD *a8)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v11; // ecx
  _KPROCESS *Process; // rdi
  unsigned __int64 v14; // r9
  unsigned __int64 *v15; // rax
  unsigned __int64 *v16; // rdi
  __int64 v17; // rax
  signed __int64 v18; // rsi
  __int64 v19; // rbp
  __int64 v20; // rax
  __int128 v21; // rt0
  unsigned __int8 v22; // tt
  unsigned __int64 v23; // rbx
  __int64 v24; // rcx
  int v25; // esi
  unsigned __int64 v26; // rcx
  __int64 v27; // rbp
  char v28; // r10
  int v29; // r11d
  int v31; // ebp
  PVOID v32; // r8
  unsigned int v33; // edi
  __int64 v34; // r8
  unsigned __int64 v35; // rcx
  __int64 v36; // r9
  __int64 v37; // rax
  signed __int64 v38; // rbx
  ULONG_PTR v39; // rdi
  signed __int64 BugCheckParameter4; // rbx
  _QWORD *HandleExtraInfo; // rax
  int v42; // ecx
  signed __int32 v43[8]; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 v44[3]; // [rsp+30h] [rbp-58h] BYREF
  struct _EX_RUNDOWN_REF *v45; // [rsp+90h] [rbp+8h]
  char v49; // [rsp+B8h] [rbp+30h]
  __int64 v50; // [rsp+C8h] [rbp+40h]

  CurrentThread = KeGetCurrentThread();
  v11 = 0;
  v49 = 0;
  Process = CurrentThread->ApcState.Process;
  v45 = (struct _EX_RUNDOWN_REF *)Process;
  *a6 = 0LL;
  if ( a8 )
    *a8 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL )
  {
    if ( BugCheckParameter1 == -1LL )
    {
      if ( (POBJECT_TYPE *)a3 != PsProcessType && a3 )
        return 3221225508LL;
      v39 = (ULONG_PTR)CurrentThread->ApcState.Process;
      if ( (a2 & 0xFFE00000) != 0 && a4 )
      {
        return (unsigned int)-1073741790;
      }
      else
      {
        if ( a7 )
        {
          a7[1] = 0x1FFFFF;
          *a7 = 0;
        }
        if ( ObpTraceFlags )
        {
          ObpPushStackInfo(v39 - 48, 1, 1u, Tag);
          v11 = 0;
        }
        BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)(v39 - 48));
        if ( BugCheckParameter4 <= 1 )
          KeBugCheckEx(0x18u, 0LL, v39, 0x10uLL, BugCheckParameter4);
        *a6 = v39;
      }
      return v11;
    }
    if ( BugCheckParameter1 == -2LL )
    {
      if ( (POBJECT_TYPE *)a3 == PsThreadType || !a3 )
      {
        if ( (a2 & 0xFFE00000) != 0 && a4 )
        {
          return (unsigned int)-1073741790;
        }
        else
        {
          if ( a7 )
          {
            a7[1] = 0x1FFFFF;
            *a7 = 0;
          }
          if ( ObpTraceFlags )
          {
            ObpPushStackInfo((__int64)&CurrentThread[-1].ReadTransferCount, 1, 1u, Tag);
            v11 = 0;
          }
          v38 = _InterlockedIncrement64(&CurrentThread[-1].ReadTransferCount);
          if ( v38 <= 1 )
            KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)CurrentThread, 0x10uLL, v38);
          *a6 = CurrentThread;
        }
      }
      else
      {
        return (unsigned int)-1073741788;
      }
      return v11;
    }
    if ( a4 )
      return 3221225480LL;
    v14 = ObpKernelHandleTable;
    BugCheckParameter1 ^= 0xFFFFFFFF80000000uLL;
    --CurrentThread->KernelApcDisable;
    v50 = v14;
    goto LABEL_10;
  }
  if ( (MmVerifierData & 0x100) != 0 && !a4 )
    VfCheckUserHandle(BugCheckParameter1);
  --CurrentThread->KernelApcDisable;
  if ( Process == CurrentThread->Process )
  {
    if ( (Process[1].DirectoryTableBase & 0x400000000000000LL) == 0 )
    {
LABEL_108:
      v33 = -1073741816;
      goto LABEL_79;
    }
    v14 = Process[1].ActiveProcessors.Bitmap[5];
  }
  else
  {
    v14 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Process);
    v49 = 1;
  }
  v50 = v14;
  if ( !v14 )
    goto LABEL_108;
  if ( v14 == ObpKernelHandleTable )
  {
LABEL_86:
    v33 = -1073741816;
    goto LABEL_77;
  }
LABEL_10:
  if ( (BugCheckParameter1 & 0x3FC) == 0
    || (v15 = (unsigned __int64 *)ExpLookupHandleTableEntry(v14, BugCheckParameter1), (v16 = v15) == 0LL) )
  {
LABEL_84:
    if ( BugCheckParameter1 )
      ExHandleLogBadReference(v14, BugCheckParameter1, KeGetCurrentThread()->PreviousMode);
    goto LABEL_86;
  }
  _m_prefetchw(v15);
  v17 = *v15;
  v18 = v16[1];
  v44[1] = v18;
  v44[0] = v17;
  v19 = v17;
  if ( (v17 & 0x1FFFE) == 0 )
    goto LABEL_45;
  while ( 1 )
  {
    if ( (v19 & 1) == 0 )
    {
      ExpBlockOnLockedHandleEntry(v14, v16, v19);
      _m_prefetchw(v16);
      v18 = v16[1];
      v14 = v50;
      v44[0] = *v16;
      v19 = v44[0];
      v44[1] = v18;
      goto LABEL_73;
    }
    *(_QWORD *)&v21 = v19;
    *((_QWORD *)&v21 + 1) = v18;
    v22 = _InterlockedCompareExchange128((volatile signed __int64 *)v16, v18, v19 - 2, (signed __int64 *)&v21);
    v20 = v21;
    v19 = v21;
    *(_OWORD *)v44 = v21;
    v18 = *((_QWORD *)&v21 + 1);
    if ( v22 )
      break;
LABEL_73:
    if ( (v19 & 0x1FFFE) == 0 )
    {
      do
      {
LABEL_45:
        while ( 1 )
        {
          _m_prefetchw(v16);
          v34 = *v16;
          if ( (*v16 & 1) != 0 )
            break;
          if ( !v34 )
            goto LABEL_84;
          ExpBlockOnLockedHandleEntry(v14, v16, v34);
          v14 = v50;
        }
      }
      while ( v34 != _InterlockedCompareExchange64((volatile signed __int64 *)v16, v34 - 1, v34) );
      v23 = ((__int64)*v16 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
      *(_OWORD *)v44 = *(_OWORD *)v16;
      v35 = (int)(ExSlowReplenishHandleTableEntry(v16) + 1);
      v37 = _InterlockedExchangeAdd64((volatile signed __int64 *)v23, v35);
      if ( v37 <= 0 )
        KeBugCheckEx(0x18u, 0LL, v23 + 48, 0x10uLL, v35 + v37);
      _InterlockedExchangeAdd64((volatile signed __int64 *)v16, 1uLL);
      _InterlockedOr(v43, 0);
      if ( *(_QWORD *)(v36 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(v36 + 48), 0LL);
      goto LABEL_50;
    }
  }
  if ( (unsigned __int16)((unsigned __int64)v20 >> 1) != 16 )
  {
    v23 = (v20 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
    goto LABEL_17;
  }
  v44[0] = v20 ^ ((unsigned int)v20 ^ (2 * (unsigned int)((unsigned __int64)v20 >> 1) - 2)) & 0x1FFFE;
  v23 = ((__int64)v44[0] >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  ObpIncrPointerCountEx((volatile signed __int64 *)v23, 32752);
  v42 = ExFastReplenishHandleTableEntry((volatile signed __int64 *)v16, v44, 32752);
  if ( v42 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)v23, -v42);
LABEL_50:
  LODWORD(v18) = v44[1];
  v19 = v44[0];
LABEL_17:
  if ( ObpTraceFlags )
    ObpPushStackInfo(v23, 1, 1u, Tag);
  v24 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v23 + 24) ^ (unsigned int)BYTE1(v23);
  if ( !a3 || *(unsigned __int8 *)(a3 + 40) != (_DWORD)v24 )
  {
    v32 = (PVOID)ObTypeIndexTable[v24];
    if ( !v32 || v32 == MmBadPointer )
      KeBugCheckEx(0x189u, v23, (ULONG_PTR)v32, 0LL, 0LL);
    if ( a3 )
    {
      v33 = -1073741788;
      goto LABEL_76;
    }
  }
  v25 = v18 & 0x1FFFFFF;
  if ( !a4 )
    goto LABEL_27;
  if ( (~v25 & a2) != 0 )
  {
    v33 = -1073741790;
    goto LABEL_76;
  }
  if ( (*(_BYTE *)(v23 + 26) & 0x40) == 0
    || (v26 = v23 - ObpInfoMaskToOffset[*(_BYTE *)(v23 + 26) & 0x7F], !*(_BYTE *)(*(_QWORD *)v26 + 24LL)) )
  {
LABEL_27:
    v27 = v19 >> 17;
    if ( a7 )
    {
      v31 = v27 & 7;
      a7[1] = v25;
      *a7 = v31;
      if ( (v31 & 4) == 0 )
        goto LABEL_29;
    }
    else if ( (v27 & 4) == 0 )
    {
LABEL_29:
      v28 = 0;
      goto LABEL_30;
    }
    v28 = 1;
LABEL_30:
    v29 = v50;
    if ( a8 )
    {
      if ( *(_DWORD *)(v50 + 4) )
      {
        HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo(v50, BugCheckParameter1);
        if ( HandleExtraInfo )
          *a8 = *HandleExtraInfo;
      }
    }
    if ( v28 && a2 && !(unsigned __int8)ObpAuditObjectAccess(v29, BugCheckParameter1, (_DWORD)v16, v23, a2) )
    {
      v33 = -1073741816;
      goto LABEL_76;
    }
    *a6 = v23 + 48;
    if ( v49 )
      ExReleaseRundownProtection(v45 + 95);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    return 0LL;
  }
  if ( *(_QWORD *)(*(_QWORD *)v26 + 16LL) != 1LL )
  {
    v19 = v44[0];
    goto LABEL_27;
  }
  v33 = -1073700858;
LABEL_76:
  ObfDereferenceObjectWithTag((PVOID)(v23 + 48), Tag);
LABEL_77:
  if ( v49 )
    ExReleaseRundownProtection(v45 + 95);
LABEL_79:
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v33;
}
