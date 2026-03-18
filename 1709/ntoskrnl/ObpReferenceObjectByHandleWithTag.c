/*
 * XREFs of ObpReferenceObjectByHandleWithTag @ 0x1404B1130
 * Callers:
 *     MmPrefetchVirtualMemory @ 0x140444728 (MmPrefetchVirtualMemory.c)
 *     PspSetQuotaLimits @ 0x140449BF0 (PspSetQuotaLimits.c)
 *     NtAcquireProcessActivityReference @ 0x1404513BC (NtAcquireProcessActivityReference.c)
 *     NtGetNextThread @ 0x14046DCC8 (NtGetNextThread.c)
 *     PspCreateThread @ 0x140492B18 (PspCreateThread.c)
 *     MmFreeVirtualMemory @ 0x140494760 (MmFreeVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1404965C0 (MiAllocateVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x140497B10 (NtProtectVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x140497DA0 (MmQueryVirtualMemory.c)
 *     NtUnmapViewOfSectionEx @ 0x140499FA0 (NtUnmapViewOfSectionEx.c)
 *     NtWaitForSingleObject @ 0x1404A3A80 (NtWaitForSingleObject.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ObpLookupObjectName @ 0x1404B2490 (ObpLookupObjectName.c)
 *     NtOpenProcessTokenEx @ 0x1404C5240 (NtOpenProcessTokenEx.c)
 *     NtQueryInformationProcess @ 0x1404C7870 (NtQueryInformationProcess.c)
 *     NtQueryInformationThread @ 0x1404CB7E0 (NtQueryInformationThread.c)
 *     NtSetInformationThread @ 0x1404CD4F0 (NtSetInformationThread.c)
 *     NtMapViewOfSection @ 0x1404CF7E0 (NtMapViewOfSection.c)
 *     NtSetInformationVirtualMemory @ 0x1404D43D0 (NtSetInformationVirtualMemory.c)
 *     PspQueryQuotaLimits @ 0x1404D5DF4 (PspQueryQuotaLimits.c)
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 *     MiAllocateUserStack @ 0x1404D9354 (MiAllocateUserStack.c)
 *     NtTerminateThread @ 0x1404D94C0 (NtTerminateThread.c)
 *     NtTerminateProcess @ 0x1404D9A54 (NtTerminateProcess.c)
 *     NtFlushVirtualMemory @ 0x1404E6F84 (NtFlushVirtualMemory.c)
 *     NtCreateWorkerFactory @ 0x1404EB4C8 (NtCreateWorkerFactory.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140502F44 (ExpWnfCaptureScopeInstanceId.c)
 *     NtDuplicateObject @ 0x1405075A0 (NtDuplicateObject.c)
 *     MiReadWriteVirtualMemory @ 0x1405082D0 (MiReadWriteVirtualMemory.c)
 *     NtIsProcessInJob @ 0x14050BA10 (NtIsProcessInJob.c)
 *     NtAssignProcessToJobObject @ 0x14050BC70 (NtAssignProcessToJobObject.c)
 *     NtQueryInformationJobObject @ 0x14050E9DC (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 *     NtCreateUserProcess @ 0x14053B4F4 (NtCreateUserProcess.c)
 *     PspBuildCreateProcessContext @ 0x14053D9A0 (PspBuildCreateProcessContext.c)
 *     MiLockUnlockCommon @ 0x140540A60 (MiLockUnlockCommon.c)
 *     PsCreateSystemThreadEx @ 0x1405549A0 (PsCreateSystemThreadEx.c)
 *     NtResumeProcess @ 0x1405758A4 (NtResumeProcess.c)
 *     NtResumeThread @ 0x1405759C4 (NtResumeThread.c)
 *     NtSuspendProcess @ 0x1405827C8 (NtSuspendProcess.c)
 *     NtSuspendThread @ 0x1405828E4 (NtSuspendThread.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140594210 (ObReferenceObjectByHandleWithTag.c)
 *     PspCreateProcess @ 0x140599DF0 (PspCreateProcess.c)
 *     DbgkpCreateNotificationEvent @ 0x1405C474C (DbgkpCreateNotificationEvent.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1406A3C8C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1406A3FE4 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x1406A424C (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1406A43C0 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x1406A491C (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlModifyFlags @ 0x1406A4E34 (VrpHandleIoctlModifyFlags.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1406A5150 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     NtDebugActiveProcess @ 0x1406AB268 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x1406AB654 (NtRemoveProcessDebug.c)
 *     DbgkpWerInitializeDeferredLiveDump @ 0x1406AE4B0 (DbgkpWerInitializeDeferredLiveDump.c)
 *     NtAllocateUserPhysicalPages @ 0x1406E5CD8 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1406E649C (NtFreeUserPhysicalPages.c)
 *     NtCreateEnclave @ 0x1406E9454 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x1406E9854 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x1406E9B24 (NtLoadEnclaveData.c)
 *     MmProcessWorkingSetControl @ 0x1406EC9D0 (MmProcessWorkingSetControl.c)
 *     ObWaitForSingleObject @ 0x1406F0010 (ObWaitForSingleObject.c)
 *     PfpDeprioritizeOldPagesInWs @ 0x1406F2430 (PfpDeprioritizeOldPagesInWs.c)
 *     PfpSourceGetPrefetchSupport @ 0x1406F37E4 (PfpSourceGetPrefetchSupport.c)
 *     PfSnAppLaunchScenarioControl @ 0x1406F4540 (PfSnAppLaunchScenarioControl.c)
 *     PspConvertSiloToServerSilo @ 0x140714DA8 (PspConvertSiloToServerSilo.c)
 *     PspQueryPooledQuotaLimits @ 0x14071672C (PspQueryPooledQuotaLimits.c)
 *     PspQueryWorkingSetWatch @ 0x1407168B0 (PspQueryWorkingSetWatch.c)
 *     PspAssignPrimaryToken @ 0x140716E70 (PspAssignPrimaryToken.c)
 *     PspCreatePicoProcess @ 0x140719FC0 (PspCreatePicoProcess.c)
 *     PspCreatePicoThread @ 0x14071A240 (PspCreatePicoThread.c)
 *     NtAlertResumeThread @ 0x14071A93C (NtAlertResumeThread.c)
 *     NtAlertThread @ 0x14071AA50 (NtAlertThread.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x14071AAC4 (PsIumEnableOnDemandDebugWithResponse.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x14071AB54 (PsIumGetOnDemandDebugChallenge.c)
 *     NtGetNextProcess @ 0x14071C6A0 (NtGetNextProcess.c)
 *     ExpProfileCreate @ 0x140760250 (ExpProfileCreate.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ExSlowReplenishHandleTableEntry @ 0x140082980 (ExSlowReplenishHandleTableEntry.c)
 *     ObpIncrPointerCountEx @ 0x14008AB18 (ObpIncrPointerCountEx.c)
 *     PsDereferenceSiloContext @ 0x1401262F0 (PsDereferenceSiloContext.c)
 *     ExFastReplenishHandleTableEntry @ 0x14012B3EC (ExFastReplenishHandleTableEntry.c)
 *     ExfUnblockPushLock @ 0x14017D4F0 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140239558 (ObpPushStackInfo.c)
 *     ExHandleLogBadReference @ 0x140283E9C (ExHandleLogBadReference.c)
 *     ExpLookupHandleTableEntry @ 0x1404B1720 (ExpLookupHandleTableEntry.c)
 *     ObReferenceProcessHandleTable @ 0x140506A2C (ObReferenceProcessHandleTable.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14059D508 (ExpBlockOnLockedHandleEntry.c)
 *     ObpAuditObjectAccess @ 0x1406EF914 (ObpAuditObjectAccess.c)
 *     ExpGetHandleExtraInfo @ 0x140756A50 (ExpGetHandleExtraInfo.c)
 *     VfCheckUserHandle @ 0x1407B85A8 (VfCheckUserHandle.c)
 */

__int64 __fastcall ObpReferenceObjectByHandleWithTag(
        ULONG_PTR BugCheckParameter1,
        int a2,
        __int64 a3,
        char a4,
        int a5,
        _QWORD *a6,
        _DWORD *a7,
        _QWORD *a8)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v11; // ecx
  _KPROCESS *Process; // rdi
  ULONG_PTR v14; // r9
  unsigned __int64 *v15; // rax
  PVOID v16; // r8
  unsigned __int64 *v17; // rdi
  __int64 v18; // rcx
  signed __int64 v19; // rbp
  __int64 v20; // r15
  __int64 v21; // rax
  __int128 v22; // rt0
  unsigned __int8 v23; // tt
  unsigned __int64 v24; // rbx
  __int64 v25; // rcx
  int v26; // ebp
  unsigned __int64 v27; // rcx
  __int64 v28; // r15
  char v29; // r10
  int v30; // r11d
  unsigned int v32; // edi
  signed __int64 v33; // r8
  unsigned __int64 v34; // rcx
  __int64 v35; // r9
  __int64 v36; // rax
  signed __int64 v37; // rbx
  ULONG_PTR v38; // rdi
  signed __int64 BugCheckParameter4; // rbx
  _QWORD *HandleExtraInfo; // rax
  volatile signed __int64 *v41; // r15
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
      if ( (a2 & 0xFFE00000) != 0 && a4 )
      {
        return (unsigned int)-1073741790;
      }
      else
      {
        v38 = (ULONG_PTR)CurrentThread->ApcState.Process;
        if ( a7 )
        {
          a7[1] = 0x1FFFFF;
          *a7 = 0;
        }
        if ( ObpTraceFlags )
        {
          ObpPushStackInfo(v38 - 48, 1, 1u, a5);
          v11 = 0;
        }
        BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)(v38 - 48));
        if ( BugCheckParameter4 <= 1 )
          KeBugCheckEx(0x18u, 0LL, v38, 0x10uLL, BugCheckParameter4);
        *a6 = v38;
      }
      return v11;
    }
    if ( BugCheckParameter1 == -2LL )
    {
      if ( (POBJECT_TYPE *)a3 != PsThreadType && a3 )
        return 3221225508LL;
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
          ObpPushStackInfo((__int64)&CurrentThread[-1].ReadTransferCount, 1, 1u, a5);
          v11 = 0;
        }
        v37 = _InterlockedIncrement64(&CurrentThread[-1].ReadTransferCount);
        if ( v37 <= 1 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)CurrentThread, 0x10uLL, v37);
        *a6 = CurrentThread;
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
      v32 = -1073741816;
      goto LABEL_80;
    }
    v14 = Process[1].ActiveProcessors.Bitmap[5];
  }
  else
  {
    v14 = ObReferenceProcessHandleTable(Process);
    v49 = 1;
  }
  v50 = v14;
  if ( !v14 )
    goto LABEL_108;
  if ( v14 == ObpKernelHandleTable )
  {
LABEL_84:
    v32 = -1073741816;
    goto LABEL_78;
  }
LABEL_10:
  if ( (BugCheckParameter1 & 0x3FC) == 0
    || (v15 = (unsigned __int64 *)ExpLookupHandleTableEntry(v14, BugCheckParameter1), (v17 = v15) == 0LL) )
  {
LABEL_82:
    if ( BugCheckParameter1 )
      ExHandleLogBadReference(v14, BugCheckParameter1, KeGetCurrentThread()->PreviousMode);
    goto LABEL_84;
  }
  _m_prefetchw(v15);
  v18 = *v15;
  v19 = v15[1];
  v44[1] = v19;
  v44[0] = v18;
  v20 = v18;
  if ( (v18 & 0x1FFFE) == 0 )
    goto LABEL_45;
  while ( 1 )
  {
    if ( (v20 & 1) == 0 )
    {
      ExpBlockOnLockedHandleEntry(v14, v17, v20);
      _m_prefetchw(v17);
      v19 = v17[1];
      v14 = v50;
      v44[0] = *v17;
      v20 = v44[0];
      v44[1] = v19;
      goto LABEL_73;
    }
    *(_QWORD *)&v22 = v20;
    *((_QWORD *)&v22 + 1) = v19;
    v23 = _InterlockedCompareExchange128((volatile signed __int64 *)v17, v19, v20 - 2, (signed __int64 *)&v22);
    v21 = v22;
    v20 = v22;
    *(_OWORD *)v44 = v22;
    v19 = *((_QWORD *)&v22 + 1);
    if ( v23 )
      break;
LABEL_73:
    if ( (v20 & 0x1FFFE) == 0 )
    {
      do
      {
LABEL_45:
        while ( 1 )
        {
          _m_prefetchw(v17);
          v33 = *v17;
          if ( (*v17 & 1) != 0 )
            break;
          if ( !v33 )
            goto LABEL_82;
          ExpBlockOnLockedHandleEntry(v14, v17, v33);
          v14 = v50;
        }
      }
      while ( v33 != _InterlockedCompareExchange64((volatile signed __int64 *)v17, v33 - 1, v33) );
      v24 = ((__int64)*v17 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
      *(_OWORD *)v44 = *(_OWORD *)v17;
      v34 = (int)(ExSlowReplenishHandleTableEntry(v17) + 1);
      v36 = _InterlockedExchangeAdd64((volatile signed __int64 *)v24, v34);
      if ( v36 <= 0 )
        KeBugCheckEx(0x18u, 0LL, v24 + 48, 0x10uLL, v34 + v36);
      _InterlockedExchangeAdd64((volatile signed __int64 *)v17, 1uLL);
      _InterlockedOr(v43, 0);
      if ( *(_QWORD *)(v35 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(v35 + 48), 0LL);
      goto LABEL_50;
    }
  }
  if ( (unsigned __int16)((unsigned __int64)v21 >> 1) != 16 )
  {
    v24 = (v21 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
    goto LABEL_17;
  }
  v44[0] = ((unsigned int)v20 ^ (2 * (unsigned int)((unsigned __int64)v21 >> 1) - 2)) & 0x1FFFE ^ (unsigned __int64)v20;
  v41 = (volatile signed __int64 *)(((__int64)v44[0] >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
  v24 = (unsigned __int64)v41;
  ObpIncrPointerCountEx(v41, 32752);
  v42 = ExFastReplenishHandleTableEntry((volatile signed __int64 *)v17, v44, 32752);
  if ( v42 )
    _InterlockedExchangeAdd64(v41, -v42);
LABEL_50:
  LODWORD(v19) = v44[1];
  v20 = v44[0];
LABEL_17:
  if ( ObpTraceFlags )
    ObpPushStackInfo(v24, 1, 1u, a5);
  v25 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v24 + 24) ^ (unsigned int)BYTE1(v24);
  if ( !a3 || *(unsigned __int8 *)(a3 + 40) != (_DWORD)v25 )
  {
    v16 = (PVOID)ObTypeIndexTable[v25];
    if ( !v16 || v16 == MmBadPointer )
      KeBugCheckEx(0x189u, v24, (ULONG_PTR)v16, 0LL, 0LL);
    if ( a3 )
    {
      v32 = -1073741788;
      goto LABEL_77;
    }
  }
  v26 = v19 & 0x1FFFFFF;
  if ( !a4 )
    goto LABEL_27;
  if ( (~v26 & a2) != 0 )
  {
    v32 = -1073741790;
    goto LABEL_77;
  }
  if ( (*(_BYTE *)(v24 + 26) & 0x40) == 0
    || (v27 = v24 - ObpInfoMaskToOffset[*(_BYTE *)(v24 + 26) & 0x7F], !*(_BYTE *)(*(_QWORD *)v27 + 24LL)) )
  {
LABEL_27:
    v28 = v20 >> 17;
    if ( a7 )
    {
      a7[1] = v26;
      *a7 = v28 & 7;
      if ( (v28 & 4) == 0 )
        goto LABEL_29;
    }
    else if ( (v28 & 4) == 0 )
    {
LABEL_29:
      v29 = 0;
      goto LABEL_30;
    }
    v29 = 1;
LABEL_30:
    v30 = v50;
    if ( a8 )
    {
      if ( *(_DWORD *)(v50 + 4) )
      {
        HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo(v50, BugCheckParameter1, v16, 0x140000000uLL);
        if ( HandleExtraInfo )
          *a8 = *HandleExtraInfo;
      }
    }
    if ( v29 && a2 && !(unsigned __int8)ObpAuditObjectAccess(v30, BugCheckParameter1, (_DWORD)v17, v24, a2) )
    {
      v32 = -1073741816;
      goto LABEL_77;
    }
    *a6 = v24 + 48;
    if ( v49 )
      ExReleaseRundownProtection_0(v45 + 95);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    return 0LL;
  }
  if ( *(_QWORD *)(*(_QWORD *)v27 + 16LL) != 1LL )
  {
    v20 = v44[0];
    goto LABEL_27;
  }
  v32 = -1073700858;
LABEL_77:
  PsDereferenceSiloContext((void *)(v24 + 48));
LABEL_78:
  if ( v49 )
    ExReleaseRundownProtection_0(v45 + 95);
LABEL_80:
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v32;
}
