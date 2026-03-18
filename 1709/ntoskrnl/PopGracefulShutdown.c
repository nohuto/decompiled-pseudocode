/*
 * XREFs of PopGracefulShutdown @ 0x140431740
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     KeAttachProcess @ 0x1401216C0 (KeAttachProcess.c)
 *     PopDiagTraceEventNoPayload @ 0x14012C528 (PopDiagTraceEventNoPayload.c)
 *     IoAddTriageDumpDataBlock @ 0x14015ACC8 (IoAddTriageDumpDataBlock.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x14015D140 (CcWaitForCurrentLazyWriterActivity.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     VfShutdownScheduleWatchdog @ 0x140277DAC (VfShutdownScheduleWatchdog.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IoShutdownSystem @ 0x14042A6B4 (IoShutdownSystem.c)
 *     MmShutdownSystem @ 0x14042EF70 (MmShutdownSystem.c)
 *     PopBuildDeviceNotifyList @ 0x140437204 (PopBuildDeviceNotifyList.c)
 *     PopSetDevicesSystemState @ 0x14043760C (PopSetDevicesSystemState.c)
 *     PopShutdownSystem @ 0x14043A3E0 (PopShutdownSystem.c)
 *     ExShutdownSystem @ 0x14043A73C (ExShutdownSystem.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x1405C92D0 (PnpWaitForEmptyDeviceActionQueue.c)
 *     EtwWriteEndScenario @ 0x1405D94F0 (EtwWriteEndScenario.c)
 *     CmShutdownSystem @ 0x14068BC1C (CmShutdownSystem.c)
 *     MmZeroPageFileAtShutdown @ 0x1406DF3D4 (MmZeroPageFileAtShutdown.c)
 *     ObShutdownSystem @ 0x1406EF22C (ObShutdownSystem.c)
 *     PopSetCleanShutdownMarker @ 0x1406F578C (PopSetCleanShutdownMarker.c)
 *     PopTransitionCheckpoint @ 0x1406F5940 (PopTransitionCheckpoint.c)
 *     PsShutdownSystem @ 0x140718C64 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x140718F50 (PsWaitForAllProcesses.c)
 *     EtwShutdown @ 0x140748DA0 (EtwShutdown.c)
 */

void __noreturn PopGracefulShutdown()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  PVOID *v2; // rbx
  struct _KPROCESS *v3; // rcx

  PopTransitionCheckpoint(10LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_GRACEFULSHUTDOWN_START);
  *(_QWORD *)(qword_140365818 + 16) = KeGetCurrentThread();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_START);
  MmZeroPageFileAtShutdown();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_STOP);
  if ( !qword_140365810 )
    off_140354FD8[0]();
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
      if ( *(__int64 **)(PopShutdownQueue + 8) != &PopShutdownQueue
        || (v0 = *(_QWORD *)PopShutdownQueue, *(_QWORD *)(*(_QWORD *)PopShutdownQueue + 8LL) != PopShutdownQueue) )
      {
        __fastfail(3u);
      }
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
  if ( PopShutdownCleanly )
  {
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_WAITFORPROCESSES_START);
    PsWaitForAllProcesses();
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_WAITFORPROCESSES_STOP);
  }
  if ( (PopShutdownCleanly & 0x10) != 0 )
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
  PopTransitionCheckpoint(10LL);
  PnpWaitForEmptyDeviceActionQueue();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWN_FILE_SYSTEMS_START);
  IoShutdownSystem(1);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWN_FILE_SYSTEMS_STOP);
  CcWaitForCurrentLazyWriterActivity();
  if ( qword_140365810 )
  {
    v3 = *(struct _KPROCESS **)(qword_140365810 + 8);
    if ( v3 )
      KeAttachProcess(v3);
    IoAddTriageDumpDataBlock(qword_140365810, 72);
    KeBugCheckEx(
      *(_DWORD *)(qword_140365810 + 32),
      *(_QWORD *)(qword_140365810 + 40),
      *(_QWORD *)(qword_140365810 + 48),
      *(_QWORD *)(qword_140365810 + 56),
      *(_QWORD *)(qword_140365810 + 64));
  }
  *(_DWORD *)(qword_140365818 + 440) = 0;
  PopBuildDeviceNotifyList((void *)(qword_140365818 + 48));
  PopSetDevicesSystemState();
  ExShutdownSystem(2LL);
  if ( (PopShutdownCleanly & 0x10) != 0 )
    ObShutdownSystem(2LL);
  MmShutdownSystem(2);
  PopShutdownSystem((unsigned int)qword_1403657E4);
}
