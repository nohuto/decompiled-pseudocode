/*
 * XREFs of PopGracefulShutdown @ 0x140485D40
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     KeAttachProcess @ 0x1400C7820 (KeAttachProcess.c)
 *     PopDiagTraceEventNoPayload @ 0x1400CDCD0 (PopDiagTraceEventNoPayload.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x14014D7B0 (CcWaitForCurrentLazyWriterActivity.c)
 *     IoAddTriageDumpDataBlock @ 0x140185870 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     VfShutdownScheduleWatchdog @ 0x1402AAEBC (VfShutdownScheduleWatchdog.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PopSetDevicesSystemState @ 0x140472178 (PopSetDevicesSystemState.c)
 *     PopBuildDeviceNotifyList @ 0x140475B44 (PopBuildDeviceNotifyList.c)
 *     IoShutdownSystem @ 0x1404812F8 (IoShutdownSystem.c)
 *     MmShutdownSystem @ 0x1404853A0 (MmShutdownSystem.c)
 *     PopShutdownSystem @ 0x1404873E0 (PopShutdownSystem.c)
 *     ExShutdownSystem @ 0x140487504 (ExShutdownSystem.c)
 *     EtwShutdown @ 0x1405EAAFC (EtwShutdown.c)
 *     PopTransitionCheckpoint @ 0x1405EBCD4 (PopTransitionCheckpoint.c)
 *     EtwWriteEndScenario @ 0x14060C5F0 (EtwWriteEndScenario.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x140634450 (PnpWaitForEmptyDeviceActionQueue.c)
 *     CmShutdownSystem @ 0x1406EFFE4 (CmShutdownSystem.c)
 *     MmZeroPageFileAtShutdown @ 0x14074A344 (MmZeroPageFileAtShutdown.c)
 *     ObShutdownSystem @ 0x14075870C (ObShutdownSystem.c)
 *     PopSetCleanShutdownMarker @ 0x14075D5C8 (PopSetCleanShutdownMarker.c)
 *     PsShutdownSystem @ 0x14077CC34 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x14077CF24 (PsWaitForAllProcesses.c)
 */

void __noreturn PopGracefulShutdown()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  PVOID *v2; // rbx
  struct _KPROCESS *v3; // rcx

  PopTransitionCheckpoint(10LL, 1LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_GRACEFULSHUTDOWN_START);
  *(_QWORD *)(qword_1403AA098 + 16) = KeGetCurrentThread();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_START);
  MmZeroPageFileAtShutdown();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_STOP);
  if ( !qword_1403AA090 )
    off_140397E28[0]();
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
      ObfDereferenceObjectWithTag(v2[1], 0x64536F50u);
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
  PopTransitionCheckpoint(10LL, 2LL);
  PnpWaitForEmptyDeviceActionQueue();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWN_FILE_SYSTEMS_START);
  IoShutdownSystem(1);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWN_FILE_SYSTEMS_STOP);
  CcWaitForCurrentLazyWriterActivity();
  if ( qword_1403AA090 )
  {
    v3 = *(struct _KPROCESS **)(qword_1403AA090 + 8);
    if ( v3 )
      KeAttachProcess(v3);
    IoAddTriageDumpDataBlock(qword_1403AA090, 72);
    KeBugCheckEx(
      *(_DWORD *)(qword_1403AA090 + 32),
      *(_QWORD *)(qword_1403AA090 + 40),
      *(_QWORD *)(qword_1403AA090 + 48),
      *(_QWORD *)(qword_1403AA090 + 56),
      *(_QWORD *)(qword_1403AA090 + 64));
  }
  *(_DWORD *)(qword_1403AA098 + 448) = 0;
  PopBuildDeviceNotifyList((void *)(qword_1403AA098 + 48));
  PopSetDevicesSystemState();
  ExShutdownSystem(2LL);
  if ( (PopShutdownCleanly & 0x10) != 0 )
    ObShutdownSystem(2LL);
  MmShutdownSystem(2);
  PopShutdownSystem((unsigned int)qword_1403AA064);
}
