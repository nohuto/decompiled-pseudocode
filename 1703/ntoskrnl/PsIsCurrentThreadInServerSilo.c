/*
 * XREFs of PsIsCurrentThreadInServerSilo @ 0x1400F0FA0
 * Callers:
 *     RtlGetNtProductType @ 0x14002F6A0 (RtlGetNtProductType.c)
 *     IopLoadDriverImage @ 0x140031E34 (IopLoadDriverImage.c)
 *     RtlGetActiveConsoleId @ 0x140071260 (RtlGetActiveConsoleId.c)
 *     ExpRaiseHardError @ 0x140427D10 (ExpRaiseHardError.c)
 *     RtlGetSuiteMask @ 0x140448D10 (RtlGetSuiteMask.c)
 *     RtlSetConsoleSessionForegroundProcessId @ 0x14044F270 (RtlSetConsoleSessionForegroundProcessId.c)
 *     PsQueryCurrentApiSetSchema @ 0x1404569F0 (PsQueryCurrentApiSetSchema.c)
 *     NtPlugPlayControl @ 0x14047F260 (NtPlugPlayControl.c)
 *     RtlGetNtSystemRoot @ 0x1404B12B0 (RtlGetNtSystemRoot.c)
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 *     SepCreateClientSecurityEx @ 0x14050AF80 (SepCreateClientSecurityEx.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     NtImpersonateAnonymousToken @ 0x14055FD94 (NtImpersonateAnonymousToken.c)
 *     RtlIsMultiSessionSku @ 0x140560330 (RtlIsMultiSessionSku.c)
 *     ObpParseSymbolicLinkEx @ 0x1405604C0 (ObpParseSymbolicLinkEx.c)
 *     NtSetSystemInformation @ 0x140562590 (NtSetSystemInformation.c)
 *     PoUserShutdownInitiated @ 0x1405768F0 (PoUserShutdownInitiated.c)
 *     PoUserShutdownCancelled @ 0x140576A00 (PoUserShutdownCancelled.c)
 *     NtInitiatePowerAction @ 0x1405773F8 (NtInitiatePowerAction.c)
 *     EtwShutdown @ 0x140578394 (EtwShutdown.c)
 *     MiInitializeSessionGlobals @ 0x14057F1FC (MiInitializeSessionGlobals.c)
 *     NtInitializeRegistry @ 0x140585198 (NtInitializeRegistry.c)
 *     RtlSetActiveConsoleId @ 0x140586320 (RtlSetActiveConsoleId.c)
 *     MiCreatePagingFile @ 0x1405B967C (MiCreatePagingFile.c)
 *     SepInitializationPhase1 @ 0x1405C48E0 (SepInitializationPhase1.c)
 *     SepRmSetAuditEventWrkr @ 0x1405C5B30 (SepRmSetAuditEventWrkr.c)
 *     IopUnloadDriver @ 0x1405CC050 (IopUnloadDriver.c)
 *     NtSetDefaultHardErrorPort @ 0x1405D43F4 (NtSetDefaultHardErrorPort.c)
 *     PspConvertSiloToServerSilo @ 0x1406DE940 (PspConvertSiloToServerSilo.c)
 *     PsShutdownSystem @ 0x1406E2814 (PsShutdownSystem.c)
 *     RtlGetConsoleSessionForegroundProcessId @ 0x1406E5CF0 (RtlGetConsoleSessionForegroundProcessId.c)
 *     EtwSetPerformanceTraceInformation @ 0x14070CEA0 (EtwSetPerformanceTraceInformation.c)
 *     EtwpGetSoftRestartInformation @ 0x140713888 (EtwpGetSoftRestartInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x140714364 (EtwpSetSoftRestartInformation.c)
 *     NtSetSystemTime @ 0x140716E0C (NtSetSystemTime.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x1400949B0 (PsGetEffectiveServerSilo.c)
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
