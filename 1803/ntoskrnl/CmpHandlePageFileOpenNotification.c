/*
 * XREFs of CmpHandlePageFileOpenNotification @ 0x1406329A0
 * Callers:
 *     NtInitializeRegistry @ 0x14061371C (NtInitializeRegistry.c)
 * Callees:
 *     CmpRecheckHiveVolumePolicy @ 0x140006AD0 (CmpRecheckHiveVolumePolicy.c)
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1401787F0 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     CmpGetNextActiveHive @ 0x14049BA70 (CmpGetNextActiveHive.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x140632AFC (CmpVolumeContextSendDeviceUsageNotification.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x140632BCC (CmpVolumeManagerGetContextForFilePath.c)
 */

__int64 CmpHandlePageFileOpenNotification()
{
  unsigned int v0; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // r8
  __int64 *v3; // rcx
  int v4; // esi
  int v5; // edi
  __int64 **v6; // rax
  _QWORD *v7; // r14
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  struct _EX_RUNDOWN_REF *v10; // rdi
  _BYTE v12[48]; // [rsp+30h] [rbp-48h] BYREF

  v0 = 0;
  if ( _InterlockedExchange(&CmpBootPageFilesCreated, 1) )
  {
    return (unsigned int)-1073741790;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
    {
      v3 = CmpWellKnownVolumeList;
      v4 = 0;
      v5 = 0;
      v6 = &CmpWellKnownVolumeList;
      if ( CmpWellKnownVolumeList )
      {
        do
        {
          v7 = v6 + 1;
          if ( (int)CmpVolumeManagerGetContextForFilePath(v3, v3, v2, v6 + 1) >= 0 )
          {
            wil_details_FeaturePropertyCache_ReportUsageToService(
              (int)&Feature_UnCOWOnWellKnownVolumes__private_propertyCache,
              0xCAE532u,
              (__int64)&Feature_SchedulerAssistHRTimer_logged_traits,
              1u,
              3);
            if ( (int)CmpVolumeContextSendDeviceUsageNotification(*v7) >= 0 )
              ++v5;
          }
          v6 = &(&CmpWellKnownVolumeList)[2 * (unsigned int)++v4];
          v3 = *v6;
        }
        while ( *v6 );
        if ( v5 )
        {
          CmpAttachToRegistryProcess((__int64)v12);
          for ( i = 0LL; ; i = v10 )
          {
            NextActiveHive = CmpGetNextActiveHive(i);
            v10 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
            if ( !NextActiveHive )
              break;
            CmpRecheckHiveVolumePolicy((__int64)NextActiveHive);
          }
          KiUnstackDetachProcess((__int64)v12, 0LL);
        }
      }
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    else
    {
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return (unsigned int)-1073741431;
    }
  }
  return v0;
}
