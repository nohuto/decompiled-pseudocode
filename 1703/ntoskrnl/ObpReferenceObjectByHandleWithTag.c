/*
 * XREFs of ObpReferenceObjectByHandleWithTag @ 0x140531800
 * Callers:
 *     NtGetNextThread @ 0x14041F564 (NtGetNextThread.c)
 *     NtQueryInformationThread @ 0x140424560 (NtQueryInformationThread.c)
 *     NtResumeThread @ 0x140440E14 (NtResumeThread.c)
 *     PspSetQuotaLimits @ 0x14044B53C (PspSetQuotaLimits.c)
 *     PspCreateProcess @ 0x14045D9C0 (PspCreateProcess.c)
 *     NtQueryInformationJobObject @ 0x140476D50 (NtQueryInformationJobObject.c)
 *     NtUnmapViewOfSectionEx @ 0x14047B280 (NtUnmapViewOfSectionEx.c)
 *     NtSetInformationThread @ 0x14047D650 (NtSetInformationThread.c)
 *     NtSetInformationVirtualMemory @ 0x14049A7B0 (NtSetInformationVirtualMemory.c)
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 *     NtFlushVirtualMemory @ 0x1404C6810 (NtFlushVirtualMemory.c)
 *     NtSuspendThread @ 0x1404C7B8C (NtSuspendThread.c)
 *     MiLockUnlockCommon @ 0x1404C84A0 (MiLockUnlockCommon.c)
 *     NtMapViewOfSection @ 0x1404C9130 (NtMapViewOfSection.c)
 *     MmPrefetchVirtualMemory @ 0x1404C9B00 (MmPrefetchVirtualMemory.c)
 *     MmProcessWorkingSetControl @ 0x1404CA12C (MmProcessWorkingSetControl.c)
 *     NtQueryInformationProcess @ 0x1404EA100 (NtQueryInformationProcess.c)
 *     PspQueryQuotaLimits @ 0x1404ECDE0 (PspQueryQuotaLimits.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x1404EFED4 (ExpWnfCaptureScopeInstanceId.c)
 *     NtOpenProcessTokenEx @ 0x14050EFA0 (NtOpenProcessTokenEx.c)
 *     NtDuplicateObject @ 0x140517390 (NtDuplicateObject.c)
 *     MiReadWriteVirtualMemory @ 0x140518020 (MiReadWriteVirtualMemory.c)
 *     NtFreeVirtualMemory @ 0x14051A3B0 (NtFreeVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x14051B090 (MmQueryVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x14051D2E0 (NtProtectVirtualMemory.c)
 *     NtWaitForSingleObject @ 0x140527B30 (NtWaitForSingleObject.c)
 *     ObpLookupObjectName @ 0x14052F630 (ObpLookupObjectName.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     PspCreateThread @ 0x1405410D4 (PspCreateThread.c)
 *     PspBuildCreateProcessContext @ 0x140542C84 (PspBuildCreateProcessContext.c)
 *     NtCreateUserProcess @ 0x140544094 (NtCreateUserProcess.c)
 *     NtAssignProcessToJobObject @ 0x14054B1F4 (NtAssignProcessToJobObject.c)
 *     NtIsProcessInJob @ 0x14054CBA8 (NtIsProcessInJob.c)
 *     NtTerminateProcess @ 0x14054E9C0 (NtTerminateProcess.c)
 *     NtCreateWorkerFactory @ 0x14055D844 (NtCreateWorkerFactory.c)
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 *     NtAcquireProcessActivityReference @ 0x14056CA3C (NtAcquireProcessActivityReference.c)
 *     PfpSourceGetPrefetchSupport @ 0x140578C50 (PfpSourceGetPrefetchSupport.c)
 *     ObWaitForSingleObject @ 0x140579C50 (ObWaitForSingleObject.c)
 *     NtGetNextProcess @ 0x14057BB10 (NtGetNextProcess.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140679694 (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1406799C8 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x140679C08 (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140679E44 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14067A1F8 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlModifyFlags @ 0x14067A6E8 (VrpHandleIoctlModifyFlags.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14067AA04 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     NtDebugActiveProcess @ 0x140680094 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140680480 (NtRemoveProcessDebug.c)
 *     DbgkpWerInitializeDeferredLiveDump @ 0x1406831C0 (DbgkpWerInitializeDeferredLiveDump.c)
 *     NtAllocateUserPhysicalPages @ 0x1406B8F84 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1406B9738 (NtFreeUserPhysicalPages.c)
 *     NtCreateEnclave @ 0x1406BBE40 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x1406BC21C (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x1406BC4E4 (NtLoadEnclaveData.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1406C0DE0 (ObReferenceObjectByHandleWithTag.c)
 *     PfpDeprioritizeOldPagesInWs @ 0x1406C39C4 (PfpDeprioritizeOldPagesInWs.c)
 *     PfSnAppLaunchScenarioControl @ 0x1406C4BC4 (PfSnAppLaunchScenarioControl.c)
 *     PspConvertSiloToServerSilo @ 0x1406DE940 (PspConvertSiloToServerSilo.c)
 *     PspQueryPooledQuotaLimits @ 0x1406E0404 (PspQueryPooledQuotaLimits.c)
 *     PspQueryWorkingSetWatch @ 0x1406E05B4 (PspQueryWorkingSetWatch.c)
 *     PspAssignPrimaryToken @ 0x1406E0B70 (PspAssignPrimaryToken.c)
 *     PspSetJobMemoryPartition @ 0x1406E1C40 (PspSetJobMemoryPartition.c)
 *     PspCreatePicoProcess @ 0x1406E3710 (PspCreatePicoProcess.c)
 *     PspCreatePicoThread @ 0x1406E3980 (PspCreatePicoThread.c)
 *     NtAlertResumeThread @ 0x1406E3FCC (NtAlertResumeThread.c)
 *     NtAlertThread @ 0x1406E40E0 (NtAlertThread.c)
 *     NtResumeProcess @ 0x1406E4154 (NtResumeProcess.c)
 *     NtSuspendProcess @ 0x1406E41C8 (NtSuspendProcess.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x1406E42E4 (PsIumEnableOnDemandDebugWithResponse.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x1406E4374 (PsIumGetOnDemandDebugChallenge.c)
 *     ExpProfileCreate @ 0x1407203E0 (ExpProfileCreate.c)
 * Callees:
 *     ExFastReplenishHandleTableEntry @ 0x140036060 (ExFastReplenishHandleTableEntry.c)
 *     PsDereferenceSiloContext @ 0x14003ABD0 (PsDereferenceSiloContext.c)
 *     ObpIncrPointerCountEx @ 0x140044638 (ObpIncrPointerCountEx.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExSlowReplenishHandleTableEntry @ 0x1400EE890 (ExSlowReplenishHandleTableEntry.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     ExfUnblockPushLock @ 0x14017DAD0 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140226DAC (ObpPushStackInfo.c)
 *     ExHandleLogBadReference @ 0x14025A50C (ExHandleLogBadReference.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404B0F24 (ExpBlockOnLockedHandleEntry.c)
 *     ObReferenceProcessHandleTable @ 0x140517F9C (ObReferenceProcessHandleTable.c)
 *     ExpLookupHandleTableEntry @ 0x140531E20 (ExpLookupHandleTableEntry.c)
 *     ObpAuditObjectAccess @ 0x1406C0E1C (ObpAuditObjectAccess.c)
 *     ExpGetHandleExtraInfo @ 0x1407172E0 (ExpGetHandleExtraInfo.c)
 *     VfCheckUserHandle @ 0x1407767AC (VfCheckUserHandle.c)
 */

__int64 __fastcall ObpReferenceObjectByHandleWithTag(
        ULONG_PTR BugCheckParameter1,
        int a2,
        __int64 a3,
        char a4,
        int a5,
        _QWORD *a6,
        int *a7,
        _QWORD *a8)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v11; // ecx
  _KPROCESS *Process; // rdi
  unsigned __int64 v14; // r9
  _QWORD *v15; // rax
  _QWORD *v16; // rdi
  __int64 v17; // rcx
  signed __int64 v18; // r15
  __int64 v19; // r14
  __int64 v20; // rax
  __int128 v21; // rt0
  unsigned __int8 v22; // tt
  unsigned __int64 v23; // rbx
  __int64 v24; // rcx
  int v25; // edx
  __int64 v26; // r14
  char v27; // al
  char v28; // r10
  int v29; // r11d
  unsigned __int64 v31; // rcx
  int v32; // eax
  PVOID v33; // r8
  unsigned int v34; // edi
  __int64 v35; // r8
  unsigned __int64 v36; // rcx
  __int64 v37; // r9
  __int64 v38; // rax
  signed __int64 v39; // rbx
  ULONG_PTR v40; // rdi
  signed __int64 BugCheckParameter4; // rbx
  _QWORD *HandleExtraInfo; // rax
  volatile signed __int64 *v43; // r14
  int v44; // ecx
  signed __int32 v45[8]; // [rsp+0h] [rbp-98h] BYREF
  __int128 v46; // [rsp+30h] [rbp-68h] BYREF
  __int64 v47; // [rsp+40h] [rbp-58h]
  struct _EX_RUNDOWN_REF *v48; // [rsp+A0h] [rbp+8h]
  char v52; // [rsp+C8h] [rbp+30h]
  __int64 v53; // [rsp+D8h] [rbp+40h]

  CurrentThread = KeGetCurrentThread();
  v11 = 0;
  v52 = 0;
  Process = CurrentThread->ApcState.Process;
  v48 = (struct _EX_RUNDOWN_REF *)Process;
  *a6 = 0LL;
  if ( a8 )
    *a8 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL )
  {
    if ( BugCheckParameter1 == -1LL )
    {
      if ( (POBJECT_TYPE *)a3 != PsProcessType && a3 )
        return 3221225508LL;
      v40 = (ULONG_PTR)CurrentThread->ApcState.Process;
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
          ObpPushStackInfo(v40 - 48, 1, 1u, a5);
          v11 = 0;
        }
        BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)(v40 - 48));
        if ( BugCheckParameter4 <= 1 )
          KeBugCheckEx(0x18u, 0LL, v40, 0x10uLL, BugCheckParameter4);
        *a6 = v40;
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
            ObpPushStackInfo((__int64)&CurrentThread[-1].OtherOperationCount, 1, 1u, a5);
            v11 = 0;
          }
          v39 = _InterlockedIncrement64(&CurrentThread[-1].OtherOperationCount);
          if ( v39 <= 1 )
            KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)CurrentThread, 0x10uLL, v39);
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
    v53 = v14;
    goto LABEL_10;
  }
  if ( (MmVerifierData & 0x100) != 0 && !a4 )
    VfCheckUserHandle((HANDLE)BugCheckParameter1);
  --CurrentThread->KernelApcDisable;
  if ( Process == CurrentThread->Process )
  {
    if ( (Process[1].DirectoryTableBase & 0x400000000000000LL) == 0 )
    {
LABEL_112:
      v34 = -1073741816;
      goto LABEL_83;
    }
    v14 = Process[1].ActiveProcessors.Bitmap[5];
  }
  else
  {
    v14 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Process);
    v52 = 1;
  }
  v53 = v14;
  if ( !v14 )
    goto LABEL_112;
  if ( v14 == ObpKernelHandleTable )
  {
LABEL_88:
    v34 = -1073741816;
    goto LABEL_81;
  }
LABEL_10:
  if ( (BugCheckParameter1 & 0x3FC) == 0
    || (v15 = (_QWORD *)ExpLookupHandleTableEntry(v14, BugCheckParameter1), (v16 = v15) == 0LL) )
  {
LABEL_86:
    if ( BugCheckParameter1 )
      ExHandleLogBadReference(v14, BugCheckParameter1, KeGetCurrentThread()->PreviousMode);
    goto LABEL_88;
  }
  _m_prefetchw(v15);
  v17 = *v15;
  v18 = v15[1];
  *((_QWORD *)&v46 + 1) = v18;
  *(_QWORD *)&v46 = v17;
  v19 = v17;
  if ( (v17 & 0x1FFFE) == 0 )
    goto LABEL_49;
  while ( 1 )
  {
    if ( (v19 & 1) == 0 )
    {
      ExpBlockOnLockedHandleEntry(v14, v16, v19);
      _m_prefetchw(v16);
      v18 = v16[1];
      v14 = v53;
      *(_QWORD *)&v46 = *v16;
      v19 = v46;
      *((_QWORD *)&v46 + 1) = v18;
      goto LABEL_77;
    }
    v47 = v19 - 2;
    *(_QWORD *)&v21 = v19;
    *((_QWORD *)&v21 + 1) = v18;
    v22 = _InterlockedCompareExchange128(v16, v18, v19 - 2, (signed __int64 *)&v21);
    v20 = v21;
    v19 = v21;
    v46 = v21;
    v18 = *((_QWORD *)&v21 + 1);
    if ( v22 )
      break;
LABEL_77:
    if ( (v19 & 0x1FFFE) == 0 )
    {
      do
      {
LABEL_49:
        while ( 1 )
        {
          _m_prefetchw(v16);
          v35 = *v16;
          if ( (*v16 & 1) != 0 )
            break;
          if ( !v35 )
            goto LABEL_86;
          ExpBlockOnLockedHandleEntry(v14, v16, v35);
          v14 = v53;
        }
      }
      while ( v35 != _InterlockedCompareExchange64(v16, v35 - 1, v35) );
      v23 = ((__int64)*v16 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
      v46 = *(_OWORD *)v16;
      v36 = (int)(ExSlowReplenishHandleTableEntry(v16) + 1);
      v38 = _InterlockedExchangeAdd64((volatile signed __int64 *)v23, v36);
      if ( v38 <= 0 )
        KeBugCheckEx(0x18u, 0LL, v23 + 48, 0x10uLL, v36 + v38);
      _InterlockedExchangeAdd64(v16, 1uLL);
      _InterlockedOr(v45, 0);
      if ( *(_QWORD *)(v37 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(v37 + 48), 0LL);
      goto LABEL_54;
    }
  }
  if ( (unsigned __int16)((unsigned __int64)v20 >> 1) != 16 )
  {
    v23 = (v20 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
    goto LABEL_17;
  }
  *(_QWORD *)&v46 = ((unsigned int)v19 ^ (2 * (unsigned int)((unsigned __int64)v20 >> 1) - 2)) & 0x1FFFE ^ (unsigned __int64)v19;
  v43 = (volatile signed __int64 *)(((__int64)v46 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
  v23 = (unsigned __int64)v43;
  ObpIncrPointerCountEx(v43, 32752);
  v44 = ExFastReplenishHandleTableEntry(v16, (unsigned __int64 *)&v46, 32752);
  if ( v44 )
    _InterlockedExchangeAdd64(v43, -v44);
LABEL_54:
  LODWORD(v18) = DWORD2(v46);
  v19 = v46;
LABEL_17:
  if ( ObpTraceFlags )
    ObpPushStackInfo(v23, 1, 1u, a5);
  v24 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v23 + 24) ^ (unsigned int)BYTE1(v23);
  if ( !a3 || *(unsigned __int8 *)(a3 + 40) != (_DWORD)v24 )
  {
    v33 = (PVOID)ObTypeIndexTable[v24];
    if ( !v33 || v33 == MmBadPointer )
      KeBugCheckEx(0x189u, v23, (ULONG_PTR)v33, 0LL, 0LL);
    if ( a3 )
    {
      v34 = -1073741788;
      goto LABEL_80;
    }
  }
  v25 = v18 & 0x1FFFFFF;
  if ( !a4 )
    goto LABEL_24;
  if ( (~v25 & a2) != 0 )
  {
    v34 = -1073741790;
    goto LABEL_80;
  }
  if ( (*(_BYTE *)(v23 + 26) & 0x40) == 0
    || (v31 = v23 - ObpInfoMaskToOffset[*(_BYTE *)(v23 + 26) & 0x7F], !*(_BYTE *)(*(_QWORD *)v31 + 24LL)) )
  {
LABEL_24:
    v26 = (v19 >> 17) & 7;
    v27 = v26 | 8;
    if ( a7 )
    {
      a7[1] = v25;
      if ( (v18 & 0x2000000) == 0 )
        v27 = v26;
      v32 = v27 & 7;
      *a7 = v32;
      if ( (v32 & 4) == 0 )
        goto LABEL_28;
    }
    else
    {
      if ( (v18 & 0x2000000) == 0 )
        v27 = v26;
      if ( (v27 & 4) == 0 )
      {
LABEL_28:
        v28 = 0;
        goto LABEL_29;
      }
    }
    v28 = 1;
LABEL_29:
    v29 = v53;
    if ( a8 )
    {
      if ( *(_DWORD *)(v53 + 4) )
      {
        HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo(v53, BugCheckParameter1);
        if ( HandleExtraInfo )
          *a8 = *HandleExtraInfo;
      }
    }
    if ( v28 && a2 && !(unsigned __int8)ObpAuditObjectAccess(v29, BugCheckParameter1, (_DWORD)v16, v23, a2) )
    {
      v34 = -1073741816;
      goto LABEL_80;
    }
    *a6 = v23 + 48;
    if ( v52 )
      ExReleaseRundownProtection(v48 + 95);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    return 0LL;
  }
  if ( *(_QWORD *)(*(_QWORD *)v31 + 16LL) != 1LL )
  {
    LODWORD(v18) = DWORD2(v46);
    v19 = v46;
    goto LABEL_24;
  }
  v34 = -1073700858;
LABEL_80:
  PsDereferenceSiloContext((void *)(v23 + 48));
LABEL_81:
  if ( v52 )
    ExReleaseRundownProtection(v48 + 95);
LABEL_83:
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v34;
}
