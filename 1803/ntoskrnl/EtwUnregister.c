/*
 * XREFs of EtwUnregister @ 0x140600D40
 * Callers:
 *     PsDispatchIumService @ 0x14015CBE4 (PsDispatchIumService.c)
 *     BapdWriteEtwEvents @ 0x14016E868 (BapdWriteEtwEvents.c)
 *     HvlPhase2Initialize @ 0x1401869A4 (HvlPhase2Initialize.c)
 *     BapdRecordFirmwareBootStats @ 0x140478A90 (BapdRecordFirmwareBootStats.c)
 *     PopBootLoaderTraceProcess @ 0x1405EA854 (PopBootLoaderTraceProcess.c)
 *     WmipLegacyEtwWorker @ 0x1406493E0 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x14064953C (WmipProcessLegacyEtwRegister.c)
 *     WmipGECleanup @ 0x1406553E0 (WmipGECleanup.c)
 *     VrpRegistryUnload @ 0x140707F50 (VrpRegistryUnload.c)
 *     DbgkpStartSystemErrorHandler @ 0x140711300 (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x140711794 (DbgkCaptureLiveDump.c)
 *     sub_1407BE3D4 @ 0x1407BE3D4 (sub_1407BE3D4.c)
 *     sub_1407BE6B4 @ 0x1407BE6B4 (sub_1407BE6B4.c)
 *     IopInitializePlugPlayServices @ 0x1408A3B0C (IopInitializePlugPlayServices.c)
 *     BapdpRecordIumStatus @ 0x1408A5094 (BapdpRecordIumStatus.c)
 *     PerfDiagInitialize @ 0x1408C82CC (PerfDiagInitialize.c)
 *     VslpIumInitializeTelemetry @ 0x1408C9530 (VslpIumInitializeTelemetry.c)
 * Callees:
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405906D4 (EtwpUnreferenceGuidEntry.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140590B80 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x1407AB268 (EtwpEventWriteTemplateSessAndProv.c)
 */

NTSTATUS __stdcall EtwUnregister(REGHANDLE RegHandle)
{
  struct _KTHREAD *v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  volatile signed __int64 *v14; // rcx
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
  v5 = *(_QWORD *)RegHandle;
  if ( *(_QWORD *)(*(_QWORD *)RegHandle + 8LL) != RegHandle || (v6 = *(_QWORD **)(RegHandle + 8), *v6 != RegHandle) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  v7 = *(_QWORD *)(RegHandle + 16);
  if ( *(_QWORD *)(v7 + 8) != RegHandle + 16 || (v8 = *(_QWORD **)(RegHandle + 24), *v8 != RegHandle + 16) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  *(_QWORD *)(*(_QWORD *)(RegHandle + 32) + 392LL) = 0LL;
  ExReleasePushLockEx(*(_QWORD *)(RegHandle + 32) + 384LL, 0LL, v3, v4);
  KeLeaveCriticalRegion();
  v11 = *(_QWORD *)(RegHandle + 40);
  if ( v11 )
  {
    *(_QWORD *)(v11 + 392) = 0LL;
    ExReleasePushLockEx(*(_QWORD *)(RegHandle + 40) + 384LL, 0LL, v9, v10);
    KeLeaveCriticalRegion();
  }
  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_UNREGISTERS) )
    EtwpEventWriteTemplateSessAndProv(
      v12,
      &ETW_EVENT_PROVIDER_UNREGISTERS,
      v13,
      1LL,
      0LL,
      *(_QWORD *)(RegHandle + 32) + 24LL);
  EtwpUnreferenceGuidEntry(*(volatile signed __int64 **)(RegHandle + 32));
  v14 = *(volatile signed __int64 **)(RegHandle + 40);
  if ( v14 )
    EtwpUnreferenceGuidEntry(v14);
  EtwpReleaseProviderTraitsReference(RegHandle);
  ExFreePoolWithTag((PVOID)RegHandle, 0);
  return 0;
}
