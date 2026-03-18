/*
 * XREFs of PspEnumJobsAndProcessesInJobHierarchy @ 0x14050FB60
 * Callers:
 *     PspSetJobIoAttribution @ 0x1404457CC (PspSetJobIoAttribution.c)
 *     PspRemoveIoAttribution @ 0x1404459B4 (PspRemoveIoAttribution.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x1404508F4 (PspDoesJobHierarchyPermitUILimits.c)
 *     PspAddSchedulingGroupToJobChain @ 0x14050A0DC (PspAddSchedulingGroupToJobChain.c)
 *     PspIsSetJobIoAttribution @ 0x14050B318 (PspIsSetJobIoAttribution.c)
 *     PspEstablishJobHierarchy @ 0x14050C5C4 (PspEstablishJobHierarchy.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x14050DAFC (PspQueryJobHierarchyProcessIdList.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14050E064 (PspAllocateAndQueryNotificationChannel.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x14050E678 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspEnforceLimits @ 0x14050F6C0 (PspEnforceLimits.c)
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 *     PspFreezeJobTree @ 0x1405128B8 (PspFreezeJobTree.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x140512C00 (PspSetEnergyTrackingStateJobTree.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x140591C84 (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspSetBackgroundJobTree @ 0x140597E00 (PspSetBackgroundJobTree.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140715CA8 (PspTerminateSiloSubsystemProcesses.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x140717ADC (PspQueryJobHierarchyInterferenceCount.c)
 *     PspRemoveRateControl @ 0x140717CFC (PspRemoveRateControl.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x140717D84 (PspSendNoWakeChargeLimitNotification.c)
 *     PspSetJobRateControl @ 0x140718160 (PspSetJobRateControl.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x140083060 (ObReferenceObjectSafeWithTag.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     PspGetNextChildJob @ 0x14050FA98 (PspGetNextChildJob.c)
 *     PspCallJobHierarchyCallbacks @ 0x14050FDA0 (PspCallJobHierarchyCallbacks.c)
 *     PspLockJobShared @ 0x14050FED0 (PspLockJobShared.c)
 */

__int64 __fastcall PspEnumJobsAndProcessesInJobHierarchy(char *Object, int a2, int a3, int a4, __int64 a5, int a6)
{
  int v6; // ebp
  char *v7; // r12
  unsigned int v8; // r13d
  char *v9; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  char *NextChildJob; // rsi
  char *v12; // r15
  __int64 v13; // rcx
  __int64 v15; // rbx
  unsigned int v16; // esi
  int v19; // [rsp+88h] [rbp+10h]
  int v20; // [rsp+90h] [rbp+18h]
  int v21; // [rsp+98h] [rbp+20h]
  int v22; // [rsp+A8h] [rbp+30h]

  v21 = a4;
  v20 = a3;
  v19 = a2;
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
  v9 = Object;
  v22 = 0;
  while ( 1 )
  {
    if ( (v6 & 2) == 0 )
    {
      v22 = PspCallJobHierarchyCallbacks((_DWORD)v9, a2, a3, a4, a5, v6);
      v16 = v22;
      if ( v22 < 0 )
        goto LABEL_26;
      v6 = v8;
    }
    CurrentThread = KeGetCurrentThread();
    NextChildJob = 0LL;
    PspLockJobShared(v9, CurrentThread);
    v12 = (char *)*((_QWORD *)v9 + 132);
    if ( v12 != v9 + 1056 )
    {
      while ( !ObReferenceObjectSafeWithTag((__int64)(v12 - 1040)) )
      {
        v12 = *(char **)v12;
        if ( v12 == v9 + 1056 )
          goto LABEL_22;
      }
      NextChildJob = v12 - 1040;
LABEL_22:
      v7 = Object;
    }
    ExReleaseResourceLite((PERESOURCE)(v9 + 56));
    if ( CurrentThread )
    {
      if ( CurrentThread->SpecialApcDisable++ == -1
        && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v13);
      }
    }
    if ( !NextChildJob )
    {
      v15 = *((_QWORD *)v9 + 134);
      if ( v9 != v7 )
        break;
    }
LABEL_16:
    v9 = NextChildJob;
    if ( !NextChildJob )
    {
      if ( (v6 & 2) != 0 )
        return PspCallJobHierarchyCallbacks((_DWORD)v7, v19, v20, v21, a5, v6);
      else
        return (unsigned int)v22;
    }
    a4 = v21;
    a3 = v20;
    a2 = v19;
  }
  while ( 1 )
  {
    if ( (v6 & 2) != 0 )
    {
      v22 = PspCallJobHierarchyCallbacks((_DWORD)v9, v19, v20, v21, a5, v8);
      v16 = v22;
      if ( v22 < 0 )
        break;
    }
    NextChildJob = (char *)PspGetNextChildJob(v15, v9);
    if ( !NextChildJob )
    {
      v9 = (char *)v15;
      v15 = *(_QWORD *)(v15 + 1072);
      if ( v9 != v7 )
        continue;
    }
    goto LABEL_16;
  }
LABEL_26:
  if ( v9 && v9 != v7 )
  {
    do
    {
      ObfDereferenceObjectWithTag(v9, 0x6E457350u);
      v9 = (char *)*((_QWORD *)v9 + 134);
    }
    while ( v9 != v7 );
  }
  return v16;
}
