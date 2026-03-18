/*
 * XREFs of PsIsCurrentThreadInServerSilo @ 0x14006E2C0
 * Callers:
 *     RtlGetActiveConsoleId @ 0x14006EAF0 (RtlGetActiveConsoleId.c)
 *     RtlGetNtProductType @ 0x1400C4610 (RtlGetNtProductType.c)
 *     IopLoadDriverImage @ 0x140160304 (IopLoadDriverImage.c)
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 *     SepCreateClientSecurityEx @ 0x1404C9490 (SepCreateClientSecurityEx.c)
 *     RtlIsMultiSessionSku @ 0x140509250 (RtlIsMultiSessionSku.c)
 *     NtPlugPlayControl @ 0x14050927C (NtPlugPlayControl.c)
 *     ObpParseSymbolicLinkEx @ 0x14051B890 (ObpParseSymbolicLinkEx.c)
 *     NtImpersonateAnonymousToken @ 0x14051C480 (NtImpersonateAnonymousToken.c)
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 *     RtlGetSuiteMask @ 0x140571920 (RtlGetSuiteMask.c)
 *     RtlSetConsoleSessionForegroundProcessId @ 0x140578190 (RtlSetConsoleSessionForegroundProcessId.c)
 *     RtlGetNtSystemRoot @ 0x14057EB70 (RtlGetNtSystemRoot.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     EtwShutdown @ 0x1405EAAFC (EtwShutdown.c)
 *     PoUserShutdownCancelled @ 0x1405EACA0 (PoUserShutdownCancelled.c)
 *     NtInitiatePowerAction @ 0x1405EB5AC (NtInitiatePowerAction.c)
 *     PoUserShutdownInitiated @ 0x1405EBBD0 (PoUserShutdownInitiated.c)
 *     IopUnloadDriver @ 0x1405F5EC0 (IopUnloadDriver.c)
 *     PsQueryCurrentApiSetSchema @ 0x1405FB2D8 (PsQueryCurrentApiSetSchema.c)
 *     MiInitializeSessionGlobals @ 0x14060B700 (MiInitializeSessionGlobals.c)
 *     CmpAcceptBoot @ 0x14061378C (CmpAcceptBoot.c)
 *     RtlSetActiveConsoleId @ 0x1406144A0 (RtlSetActiveConsoleId.c)
 *     SepRmSetAuditEventWrkr @ 0x140631C70 (SepRmSetAuditEventWrkr.c)
 *     MiCreatePagingFile @ 0x14063BE50 (MiCreatePagingFile.c)
 *     SepInitializationPhase1 @ 0x140641CF0 (SepInitializationPhase1.c)
 *     NtSetDefaultHardErrorPort @ 0x140653884 (NtSetDefaultHardErrorPort.c)
 *     PspConvertSiloToServerSilo @ 0x140778F94 (PspConvertSiloToServerSilo.c)
 *     PsShutdownSystem @ 0x14077CC34 (PsShutdownSystem.c)
 *     RtlGetConsoleSessionForegroundProcessId @ 0x1407819B0 (RtlGetConsoleSessionForegroundProcessId.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1407A95C8 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1407A9CB0 (EtwSetPerformanceTraceInformation.c)
 *     EtwpGetSoftRestartInformation @ 0x1407B9774 (EtwpGetSoftRestartInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x1407BA2B0 (EtwpSetSoftRestartInformation.c)
 *     NtSetSystemTime @ 0x1407BD00C (NtSetSystemTime.c)
 *     ExpRaiseHardError @ 0x1407C5BB8 (ExpRaiseHardError.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14008A8E0 (PsGetEffectiveServerSilo.c)
 */

char PsIsCurrentThreadInServerSilo()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 EffectiveServerSilo; // rax

  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160] == -3LL )
    EffectiveServerSilo = *(_QWORD *)&CurrentThread->Process[2].ActiveProcessors.Count;
  else
    EffectiveServerSilo = PsGetEffectiveServerSilo();
  if ( EffectiveServerSilo )
    LOBYTE(EffectiveServerSilo) = 1;
  return EffectiveServerSilo;
}
