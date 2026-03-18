/*
 * XREFs of EtwUnregister @ 0x1405726E0
 * Callers:
 *     BapdWriteEtwEvents @ 0x1401342D8 (BapdWriteEtwEvents.c)
 *     HvlPhase2Initialize @ 0x14015CA00 (HvlPhase2Initialize.c)
 *     PsDispatchIumService @ 0x14024ED54 (PsDispatchIumService.c)
 *     BapdRecordFirmwareBootStats @ 0x140424BFC (BapdRecordFirmwareBootStats.c)
 *     WmipGECleanup @ 0x14059E0A0 (WmipGECleanup.c)
 *     WmipLegacyEtwWorker @ 0x1405E1EA0 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x1405E1FB8 (WmipProcessLegacyEtwRegister.c)
 *     VrpRegistryUnload @ 0x1406A38E0 (VrpRegistryUnload.c)
 *     DbgkpStartSystemErrorHandler @ 0x1406AC9C8 (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x1406ACEEC (DbgkCaptureLiveDump.c)
 *     PopBootLoaderTraceProcess @ 0x1406FB258 (PopBootLoaderTraceProcess.c)
 *     sub_140757694 @ 0x140757694 (sub_140757694.c)
 *     sub_140757944 @ 0x140757944 (sub_140757944.c)
 *     BapdpRecordIumStatus @ 0x140827F50 (BapdpRecordIumStatus.c)
 *     IopInitializePlugPlayServices @ 0x14083F81C (IopInitializePlugPlayServices.c)
 *     PerfDiagInitialize @ 0x140854D40 (PerfDiagInitialize.c)
 *     VslpIumInitializeTelemetry @ 0x1408569A4 (VslpIumInitializeTelemetry.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     EtwpUnreferenceGuidEntry @ 0x140491D2C (EtwpUnreferenceGuidEntry.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140492018 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x14074959C (EtwpEventWriteTemplateSessAndProv.c)
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
  __int64 *v10; // rcx
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
  if ( *(_QWORD *)(*(_QWORD *)RegHandle + 8LL) != RegHandle || (v4 = *(_QWORD **)(RegHandle + 8), *v4 != RegHandle) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  v5 = *(_QWORD *)(RegHandle + 16);
  if ( *(_QWORD *)(v5 + 8) != RegHandle + 16 || (v6 = *(_QWORD **)(RegHandle + 24), *v6 != RegHandle + 16) )
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
  EtwpUnreferenceGuidEntry(*(__int64 **)(RegHandle + 32));
  v10 = *(__int64 **)(RegHandle + 40);
  if ( v10 )
    EtwpUnreferenceGuidEntry(v10);
  EtwpReleaseProviderTraitsReference(RegHandle);
  ExFreePoolWithTag((PVOID)RegHandle, 0);
  return 0;
}
