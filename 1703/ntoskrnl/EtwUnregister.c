/*
 * XREFs of EtwUnregister @ 0x140589010
 * Callers:
 *     BapdWriteEtwEvents @ 0x14014CABC (BapdWriteEtwEvents.c)
 *     HvlPhase2Initialize @ 0x140168040 (HvlPhase2Initialize.c)
 *     PsDispatchIumService @ 0x140239D84 (PsDispatchIumService.c)
 *     BapdRecordFirmwareBootStats @ 0x14040ECB0 (BapdRecordFirmwareBootStats.c)
 *     PopBootLoaderTraceProcess @ 0x140577ADC (PopBootLoaderTraceProcess.c)
 *     WmipGECleanup @ 0x14059B7C0 (WmipGECleanup.c)
 *     WmipLegacyEtwWorker @ 0x1405CC580 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x1405CC6B4 (WmipProcessLegacyEtwRegister.c)
 *     RegistryUnload @ 0x140679000 (RegistryUnload.c)
 *     DbgkpStartSystemErrorHandler @ 0x1406817A8 (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x140681C24 (DbgkCaptureLiveDump.c)
 *     sub_140717FB8 @ 0x140717FB8 (sub_140717FB8.c)
 *     sub_140718264 @ 0x140718264 (sub_140718264.c)
 *     IopInitializePlugPlayServices @ 0x1407FAEC0 (IopInitializePlugPlayServices.c)
 *     BapdpRecordIumStatus @ 0x14081252C (BapdpRecordIumStatus.c)
 *     PerfDiagInitialize @ 0x140824D70 (PerfDiagInitialize.c)
 *     VslpIumInitializeTelemetry @ 0x140825458 (VslpIumInitializeTelemetry.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     EtwpUnreferenceGuidEntry @ 0x140480BE4 (EtwpUnreferenceGuidEntry.c)
 *     EtwpReleaseProviderTraitsReference @ 0x14048253C (EtwpReleaseProviderTraitsReference.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x14070DD08 (EtwpEventWriteTemplateSessAndProv.c)
 */

NTSTATUS __stdcall EtwUnregister(REGHANDLE RegHandle)
{
  struct _KTHREAD *v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rcx
  struct _KTHREAD *CurrentThread; // rax

  if ( !RegHandle )
    return -1073741816;
  if ( (*(_BYTE *)(RegHandle + 98) & 1) == 0 )
    KeBugCheckEx(0x11Du, 4uLL, RegHandle, 1uLL, 0LL);
  if ( *(_QWORD *)(RegHandle + 40) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(*(_QWORD *)(RegHandle + 40) + 384LL, 0LL);
    *(_QWORD *)(*(_QWORD *)(RegHandle + 40) + 392LL) = KeGetCurrentThread();
  }
  v2 = KeGetCurrentThread();
  --v2->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(*(_QWORD *)(RegHandle + 32) + 384LL, 0LL);
  *(_QWORD *)(*(_QWORD *)(RegHandle + 32) + 392LL) = KeGetCurrentThread();
  v3 = *(_QWORD *)RegHandle;
  v4 = *(_QWORD **)(RegHandle + 8);
  if ( *(_QWORD *)(*(_QWORD *)RegHandle + 8LL) != RegHandle || *v4 != RegHandle )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  v5 = *(_QWORD *)(RegHandle + 16);
  v6 = *(_QWORD **)(RegHandle + 24);
  if ( *(_QWORD *)(v5 + 8) != RegHandle + 16 || *v6 != RegHandle + 16 )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  *(_QWORD *)(*(_QWORD *)(RegHandle + 32) + 392LL) = 0LL;
  ExReleasePushLockEx(*(_QWORD *)(RegHandle + 32) + 384LL, 0LL);
  KeLeaveCriticalRegion();
  v7 = *(_QWORD *)(RegHandle + 40);
  if ( v7 )
  {
    *(_QWORD *)(v7 + 392) = 0LL;
    ExReleasePushLockEx(*(_QWORD *)(RegHandle + 40) + 384LL, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_UNREGISTERS) )
    EtwpEventWriteTemplateSessAndProv(
      v8,
      &ETW_EVENT_PROVIDER_UNREGISTERS,
      v9,
      1LL,
      0LL,
      *(_QWORD *)(RegHandle + 32) + 24LL);
  EtwpUnreferenceGuidEntry(*(_QWORD **)(RegHandle + 32));
  v10 = *(_QWORD **)(RegHandle + 40);
  if ( v10 )
    EtwpUnreferenceGuidEntry(v10);
  EtwpReleaseProviderTraitsReference(RegHandle);
  ExFreePoolWithTag((PVOID)RegHandle, 0);
  return 0;
}
