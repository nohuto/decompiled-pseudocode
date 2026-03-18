/*
 * XREFs of PsReferencePrimaryToken @ 0x14049C780
 * Callers:
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x14000DEA8 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x14006A3A0 (SepReferenceTokenUsingPseudoHandle.c)
 *     RtlpQueryLowBoxId @ 0x1400A63EC (RtlpQueryLowBoxId.c)
 *     IopIsProcessAppContainer @ 0x14012BDD8 (IopIsProcessAppContainer.c)
 *     PfSnCheckModernApp @ 0x140447F04 (PfSnCheckModernApp.c)
 *     PspSetQuotaLimits @ 0x140449BF0 (PspSetQuotaLimits.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1404593A4 (PopEtGetProcessSidAndPackageIdentity.c)
 *     SepFilterToken @ 0x14045B120 (SepFilterToken.c)
 *     AlpcpCheckConnectionSecurity @ 0x140467994 (AlpcpCheckConnectionSecurity.c)
 *     PsQueryProcessAttributes @ 0x140486A80 (PsQueryProcessAttributes.c)
 *     PspInitializeProcessSecurity @ 0x14048C3A8 (PspInitializeProcessSecurity.c)
 *     MmCreateSection @ 0x14049B260 (MmCreateSection.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14049CA10 (EtwpGetSidExtendedHeaderItem.c)
 *     SepCreateClientSecurityEx @ 0x14049D260 (SepCreateClientSecurityEx.c)
 *     ExpGetProcessInformation @ 0x1404AF9A0 (ExpGetProcessInformation.c)
 *     NtOpenThreadTokenEx @ 0x1404C5CB0 (NtOpenThreadTokenEx.c)
 *     PspExitThread @ 0x1404D5FB4 (PspExitThread.c)
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 *     EtwpBuildProcessEvent @ 0x1404DBDC0 (EtwpBuildProcessEvent.c)
 *     EtwpPsProvTraceProcess @ 0x1404DCB5C (EtwpPsProvTraceProcess.c)
 *     MmCreateSectionEx @ 0x1404FA1DC (MmCreateSectionEx.c)
 *     EtwTraceAppStateChange @ 0x1404FE234 (EtwTraceAppStateChange.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1405033D4 (ExpWnfQueryCurrentUserSID.c)
 *     NtImpersonateAnonymousToken @ 0x140512CF4 (NtImpersonateAnonymousToken.c)
 *     PspReferenceTokenForNewProcess @ 0x14053A8C4 (PspReferenceTokenForNewProcess.c)
 *     PspDisablePrimaryTokenExchange @ 0x14053F3DC (PspDisablePrimaryTokenExchange.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1405626DC (AlpcpPortQueryConnectedSidInfo.c)
 *     ObSetCurrentProcessDeviceMap @ 0x14056FCE0 (ObSetCurrentProcessDeviceMap.c)
 *     MmCreateCacheManagerSection @ 0x140571B20 (MmCreateCacheManagerSection.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140573710 (EtwQueryProcessTelemetryInfo.c)
 *     SeIsTokenAssignableToProcess @ 0x140573A88 (SeIsTokenAssignableToProcess.c)
 *     SepIsChildTokenByPointer @ 0x140573BF4 (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x140573C84 (SepIsSiblingTokenByPointer.c)
 *     SeAuditProcessCreation @ 0x1405A71B4 (SeAuditProcessCreation.c)
 *     EtwpAcquireTokenAccessInformation @ 0x1405E34FC (EtwpAcquireTokenAccessInformation.c)
 *     CmpBuildAdminInformation @ 0x140690E6C (CmpBuildAdminInformation.c)
 *     CmpGetVirtualizationID @ 0x1406921DC (CmpGetVirtualizationID.c)
 *     NtLoadEnclaveData @ 0x1406E9B24 (NtLoadEnclaveData.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x140716134 (PspGetNoChildProcessRestrictedPolicy.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1407161A0 (PspSetNoChildProcessRestrictedPolicy.c)
 *     PsCreateMinimalProcess @ 0x140719A94 (PsCreateMinimalProcess.c)
 *     SeAuditProcessExit @ 0x140729A2C (SeAuditProcessExit.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x140743848 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpPsProvProcessEnumCallback @ 0x14074E870 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x140750908 (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObject @ 0x140081EF0 (ObFastReferenceObject.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ObFastReferenceObjectLocked @ 0x14008AA44 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 */

PACCESS_TOKEN __stdcall PsReferencePrimaryToken(PEPROCESS Process)
{
  unsigned __int64 *v1; // rsi
  void *v3; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  signed __int64 *p_Lock; // rdi

  v1 = &Process[1].Affinity.Bitmap[5];
  v3 = (void *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    p_Lock = (signed __int64 *)&Process[1].Header.Lock;
    ExAcquirePushLockSharedEx((ULONG_PTR)p_Lock, 0LL);
    v3 = (void *)ObFastReferenceObjectLocked(v1);
    if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_Lock);
    KeAbPostRelease((ULONG_PTR)p_Lock);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return v3;
}
