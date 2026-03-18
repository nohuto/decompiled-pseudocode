/*
 * XREFs of PsIsCurrentThreadInServerSilo @ 0x140085190
 * Callers:
 *     IopLoadDriverImage @ 0x1400157D8 (IopLoadDriverImage.c)
 *     RtlGetActiveConsoleId @ 0x1400B16C0 (RtlGetActiveConsoleId.c)
 *     RtlGetNtProductType @ 0x1400F9570 (RtlGetNtProductType.c)
 *     NtSetSystemInformation @ 0x140469CA0 (NtSetSystemInformation.c)
 *     IopUnloadDriver @ 0x14046EF24 (IopUnloadDriver.c)
 *     SepCreateClientSecurityEx @ 0x14049D260 (SepCreateClientSecurityEx.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 *     ExpRaiseHardError @ 0x14050A5C4 (ExpRaiseHardError.c)
 *     NtImpersonateAnonymousToken @ 0x140512CF4 (NtImpersonateAnonymousToken.c)
 *     RtlIsMultiSessionSku @ 0x140513550 (RtlIsMultiSessionSku.c)
 *     ObpParseSymbolicLinkEx @ 0x14051E840 (ObpParseSymbolicLinkEx.c)
 *     NtPlugPlayControl @ 0x1405259B8 (NtPlugPlayControl.c)
 *     RtlGetSuiteMask @ 0x140541C20 (RtlGetSuiteMask.c)
 *     RtlGetNtSystemRoot @ 0x140542E50 (RtlGetNtSystemRoot.c)
 *     PsQueryCurrentApiSetSchema @ 0x1405960C0 (PsQueryCurrentApiSetSchema.c)
 *     RtlSetConsoleSessionForegroundProcessId @ 0x140599D30 (RtlSetConsoleSessionForegroundProcessId.c)
 *     NtInitializeRegistry @ 0x1405AD498 (NtInitializeRegistry.c)
 *     MiInitializeSessionGlobals @ 0x1405B3E08 (MiInitializeSessionGlobals.c)
 *     MiCreatePagingFile @ 0x1405D3FF0 (MiCreatePagingFile.c)
 *     SepInitializationPhase1 @ 0x1405D7CD4 (SepInitializationPhase1.c)
 *     SepRmSetAuditEventWrkr @ 0x1405E05A0 (SepRmSetAuditEventWrkr.c)
 *     NtSetDefaultHardErrorPort @ 0x1405F0668 (NtSetDefaultHardErrorPort.c)
 *     RtlSetActiveConsoleId @ 0x1405F1C80 (RtlSetActiveConsoleId.c)
 *     PoUserShutdownCancelled @ 0x1406FDA30 (PoUserShutdownCancelled.c)
 *     PoUserShutdownInitiated @ 0x1406FDA60 (PoUserShutdownInitiated.c)
 *     NtInitiatePowerAction @ 0x140700C9C (NtInitiatePowerAction.c)
 *     PspConvertSiloToServerSilo @ 0x140714DA8 (PspConvertSiloToServerSilo.c)
 *     PsShutdownSystem @ 0x140718C64 (PsShutdownSystem.c)
 *     RtlGetConsoleSessionForegroundProcessId @ 0x14071E3B0 (RtlGetConsoleSessionForegroundProcessId.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140747E84 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x140748538 (EtwSetPerformanceTraceInformation.c)
 *     EtwShutdown @ 0x140748DA0 (EtwShutdown.c)
 *     EtwpGetSoftRestartInformation @ 0x1407529D8 (EtwpGetSoftRestartInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x140753500 (EtwpSetSoftRestartInformation.c)
 *     NtSetSystemTime @ 0x14075653C (NtSetSystemTime.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x1400D4220 (PsGetEffectiveServerSilo.c)
 */

char PsIsCurrentThreadInServerSilo()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 EffectiveServerSilo; // rax

  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160] == -3LL )
    EffectiveServerSilo = *(_QWORD *)&CurrentThread->Process[2].ActiveProcessors.Count;
  else
    EffectiveServerSilo = PsGetEffectiveServerSilo(*(_QWORD *)&CurrentThread[1].WaitBlockFill11[160]);
  if ( EffectiveServerSilo )
    LOBYTE(EffectiveServerSilo) = 1;
  return EffectiveServerSilo;
}
