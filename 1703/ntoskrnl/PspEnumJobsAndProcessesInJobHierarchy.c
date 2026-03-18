/*
 * XREFs of PspEnumJobsAndProcessesInJobHierarchy @ 0x140478B80
 * Callers:
 *     PspAddSchedulingGroupToJobChain @ 0x1404372D4 (PspAddSchedulingGroupToJobChain.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x140446EEC (PspQueryJobHierarchyProcessIdList.c)
 *     PspSetBackgroundJobTree @ 0x140458E30 (PspSetBackgroundJobTree.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x14045E3B0 (PspDoesJobHierarchyPermitUILimits.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140478450 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspEnforceLimits @ 0x140478970 (PspEnforceLimits.c)
 *     PspEstablishJobHierarchy @ 0x14054BD84 (PspEstablishJobHierarchy.c)
 *     PspIsSetJobIoAttribution @ 0x14054D180 (PspIsSetJobIoAttribution.c)
 *     PspSetJobIoAttribution @ 0x14054D468 (PspSetJobIoAttribution.c)
 *     PspRemoveIoAttribution @ 0x14054DD78 (PspRemoveIoAttribution.c)
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 *     PspFreezeJobTree @ 0x14055F98C (PspFreezeJobTree.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x14055FCF4 (PspSetEnergyTrackingStateJobTree.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140560A90 (PspAllocateAndQueryNotificationChannel.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1405617B4 (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1406DF834 (PspTerminateSiloSubsystemProcesses.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1406E17A8 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspRemoveRateControl @ 0x1406E194C (PspRemoveRateControl.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x1406E19D4 (PspSendNoWakeChargeLimitNotification.c)
 *     PspSetJobRateControl @ 0x1406E1D28 (PspSetJobRateControl.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400EFD50 (ObReferenceObjectSafeWithTag.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     PspGetNextChildJob @ 0x1404786C4 (PspGetNextChildJob.c)
 *     PspCallJobHierarchyCallbacks @ 0x140478DC0 (PspCallJobHierarchyCallbacks.c)
 */

__int64 __fastcall PspEnumJobsAndProcessesInJobHierarchy(char *Object, int a2, int a3, int a4, __int64 a5, int a6)
{
  int v6; // r15d
  char *v7; // r13
  unsigned int v8; // ebx
  char *v9; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  char *NextChildJob; // rdi
  char *v12; // r12
  __int64 v13; // rbx
  unsigned int v15; // edi
  int v16; // [rsp+30h] [rbp-58h]
  int v18; // [rsp+98h] [rbp+10h]
  int v19; // [rsp+A0h] [rbp+18h]
  int v20; // [rsp+A8h] [rbp+20h]
  int v21; // [rsp+B8h] [rbp+30h]

  v20 = a4;
  v19 = a3;
  v18 = a2;
  v6 = a6;
  v7 = Object;
  if ( (a6 & 8) != 0 )
  {
    v6 = a6 | 1;
    v8 = a6 | 1;
  }
  else
  {
    v8 = a6 & 0xFFFFFFFE;
  }
  v21 = v8;
  v16 = 0;
  v9 = Object;
  while ( 1 )
  {
    if ( (v6 & 2) == 0 )
    {
      v16 = PspCallJobHierarchyCallbacks((_DWORD)v9, a2, a3, a4, a5, v6);
      v15 = v16;
      if ( v16 < 0 )
        goto LABEL_27;
      v6 = v8;
    }
    CurrentThread = KeGetCurrentThread();
    NextChildJob = 0LL;
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)(v9 + 56), 1u);
    v12 = (char *)*((_QWORD *)v9 + 132);
    if ( v12 != v9 + 1056 )
    {
      while ( !ObReferenceObjectSafeWithTag((__int64)(v12 - 1040)) )
      {
        v12 = *(char **)v12;
        if ( v12 == v9 + 1056 )
          goto LABEL_18;
      }
      NextChildJob = v12 - 1040;
LABEL_18:
      v7 = Object;
    }
    ExReleaseResourceLite((PERESOURCE)(v9 + 56));
    if ( CurrentThread )
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    if ( !NextChildJob )
    {
      v13 = *((_QWORD *)v9 + 134);
      if ( v9 != v7 )
        break;
    }
LABEL_12:
    v9 = NextChildJob;
    if ( !NextChildJob )
    {
      if ( (v6 & 2) != 0 )
        return PspCallJobHierarchyCallbacks((_DWORD)v7, v18, v19, v20, a5, v6);
      else
        return (unsigned int)v16;
    }
    v8 = v21;
    a4 = v20;
    a3 = v19;
    a2 = v18;
  }
  while ( 1 )
  {
    if ( (v6 & 2) != 0 )
    {
      v16 = PspCallJobHierarchyCallbacks((_DWORD)v9, v18, v19, v20, a5, v21);
      v15 = v16;
      if ( v16 < 0 )
        break;
    }
    NextChildJob = (char *)PspGetNextChildJob(v13, v9);
    if ( !NextChildJob )
    {
      v9 = (char *)v13;
      v13 = *(_QWORD *)(v13 + 1072);
      if ( v9 != v7 )
        continue;
    }
    goto LABEL_12;
  }
LABEL_27:
  if ( v9 && v9 != v7 )
  {
    do
    {
      ObfDereferenceObjectWithTag(v9, 0x6E457350u);
      v9 = (char *)*((_QWORD *)v9 + 134);
    }
    while ( v9 != v7 );
  }
  return v15;
}
