/*
 * XREFs of PopGracefulShutdown @ 0x1404199F0
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     KeAttachProcess @ 0x140033D40 (KeAttachProcess.c)
 *     PopDiagTraceEventNoPayload @ 0x140038914 (PopDiagTraceEventNoPayload.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x140131770 (CcWaitForCurrentLazyWriterActivity.c)
 *     IoAddTriageDumpDataBlock @ 0x140166F20 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     VfShutdownScheduleWatchdog @ 0x14025153C (VfShutdownScheduleWatchdog.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PopSetDevicesSystemState @ 0x140408D68 (PopSetDevicesSystemState.c)
 *     PopBuildDeviceNotifyList @ 0x14040AE30 (PopBuildDeviceNotifyList.c)
 *     IoShutdownSystem @ 0x140415678 (IoShutdownSystem.c)
 *     MmShutdownSystem @ 0x140419790 (MmShutdownSystem.c)
 *     PopShutdownSystem @ 0x14041A6B0 (PopShutdownSystem.c)
 *     ExShutdownSystem @ 0x14041A7C8 (ExShutdownSystem.c)
 *     PopTransitionCheckpoint @ 0x140576B7C (PopTransitionCheckpoint.c)
 *     EtwShutdown @ 0x140578394 (EtwShutdown.c)
 *     EtwWriteEndScenario @ 0x140586480 (EtwWriteEndScenario.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x14059CE50 (PnpWaitForEmptyDeviceActionQueue.c)
 *     CmShutdownSystem @ 0x14066270C (CmShutdownSystem.c)
 *     MmZeroPageFileAtShutdown @ 0x1406B3404 (MmZeroPageFileAtShutdown.c)
 *     ObShutdownSystem @ 0x1406C0774 (ObShutdownSystem.c)
 *     PopSetCleanShutdownMarker @ 0x1406C5648 (PopSetCleanShutdownMarker.c)
 *     PsShutdownSystem @ 0x1406E2814 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x1406E2AF4 (PsWaitForAllProcesses.c)
 */

void __noreturn PopGracefulShutdown()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  PVOID *v2; // rbx
  char v3; // al
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  PopTransitionCheckpoint(10LL, 1LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_GRACEFULSHUTDOWN_START);
  *(_QWORD *)(qword_14034B1B8 + 16) = KeGetCurrentThread();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_START);
  MmZeroPageFileAtShutdown();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_STOP);
  if ( !qword_14034B1B0 )
    off_14033C7A8[0]();
  VfShutdownScheduleWatchdog();
  if ( PopShutdownCleanly )
  {
    PsShutdownSystem();
    KeSetEvent(&PopShutdownEvent, 0, 0);
    ExAcquireFastMutex(&PopShutdownListMutex);
    PopShutdownListAvailable = 0;
    KeReleaseGuardedMutex(&PopShutdownListMutex);
    while ( 1 )
    {
      v1 = PopShutdownQueue;
      if ( (__int64 *)PopShutdownQueue == &PopShutdownQueue )
        break;
      v0 = *(_QWORD *)PopShutdownQueue;
      if ( *(__int64 **)(PopShutdownQueue + 8) != &PopShutdownQueue || *(_QWORD *)(v0 + 8) != PopShutdownQueue )
        __fastfail(3u);
      PopShutdownQueue = *(_QWORD *)PopShutdownQueue;
      *(_QWORD *)(v0 + 8) = &PopShutdownQueue;
      (*(void (__fastcall **)(_QWORD))(v1 + 16))(*(_QWORD *)(v1 + 24));
    }
    while ( 1 )
    {
      v2 = (PVOID *)PopShutdownThreadList;
      if ( !PopShutdownThreadList )
        break;
      PopShutdownThreadList = *(PVOID *)PopShutdownThreadList;
      KeWaitForSingleObject(v2[1], Executive, 0, 0, 0LL);
      ObfDereferenceObject(v2[1]);
      ExFreePoolWithTag(v2, 0);
    }
  }
  TmShutdownSystem();
  CmShutdownSystem(0LL);
  ExShutdownSystem(0LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWNSYSTEM_START);
  IoShutdownSystem(0);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWNSYSTEM_STOP);
  v3 = PopShutdownCleanly;
  if ( PopShutdownCleanly )
  {
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_WAITFORPROCESSES_START);
    PsWaitForAllProcesses();
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_WAITFORPROCESSES_STOP);
    v3 = PopShutdownCleanly;
  }
  if ( (v3 & 0x10) != 0 )
    ObShutdownSystem(0LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_CMSHUTDOWNSYSTEM_START);
  CmShutdownSystem(1LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_CMSHUTDOWNSYSTEM_STOP);
  if ( PopDiagHandleRegistered )
    EtwWriteEndScenario(
      PopDiagHandle,
      &POP_ETW_EVENT_GRACEFULSHUTDOWN_STOP,
      &PopShutdownDiagnosticsScenarioGuid,
      0,
      0LL);
  EtwShutdown(0LL);
  ExShutdownSystem(1LL);
  MmShutdownSystem(0);
  PopSetCleanShutdownMarker();
  PopTransitionCheckpoint(10LL, 2LL);
  PnpWaitForEmptyDeviceActionQueue();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWN_FILE_SYSTEMS_START);
  IoShutdownSystem(1);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWN_FILE_SYSTEMS_STOP);
  CcWaitForCurrentLazyWriterActivity();
  v4 = qword_14034B1B0;
  if ( qword_14034B1B0 )
  {
    if ( *(_QWORD *)(qword_14034B1B0 + 8) )
    {
      KeAttachProcess(*(PRKPROCESS *)(qword_14034B1B0 + 8));
      v4 = qword_14034B1B0;
    }
    IoAddTriageDumpDataBlock(v4, 72);
    KeBugCheckEx(
      *(_DWORD *)(qword_14034B1B0 + 32),
      *(_QWORD *)(qword_14034B1B0 + 40),
      *(_QWORD *)(qword_14034B1B0 + 48),
      *(_QWORD *)(qword_14034B1B0 + 56),
      *(_QWORD *)(qword_14034B1B0 + 64));
  }
  *(_DWORD *)(qword_14034B1B8 + 440) = 0;
  PopBuildDeviceNotifyList((void *)(qword_14034B1B8 + 48));
  PopSetDevicesSystemState(v6, v5, v7, v8);
  ExShutdownSystem(2LL);
  if ( (PopShutdownCleanly & 0x10) != 0 )
    ObShutdownSystem(2LL);
  MmShutdownSystem(2);
  PopShutdownSystem((unsigned int)qword_14034B184);
}
