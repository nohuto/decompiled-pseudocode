/*
 * XREFs of ObFastDereferenceObject @ 0x1400EE840
 * Callers:
 *     AlpcpPortQueryConnectedSidInfo @ 0x140426B6C (AlpcpPortQueryConnectedSidInfo.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14043D4E8 (EtwQueryProcessTelemetryInfo.c)
 *     SeIsTokenAssignableToProcess @ 0x14043FBC0 (SeIsTokenAssignableToProcess.c)
 *     SepIsChildTokenByPointer @ 0x14043FD30 (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x14043FDC0 (SepIsSiblingTokenByPointer.c)
 *     PspSetQuotaLimits @ 0x14044B53C (PspSetQuotaLimits.c)
 *     CmpGetVirtualizationID @ 0x140452200 (CmpGetVirtualizationID.c)
 *     AlpcpCheckConnectionSecurity @ 0x140472F48 (AlpcpCheckConnectionSecurity.c)
 *     PsImpersonateClient @ 0x14047E530 (PsImpersonateClient.c)
 *     PspMapSystemDll @ 0x14049C0D0 (PspMapSystemDll.c)
 *     PspInitializeProcessSecurity @ 0x1404A1020 (PspInitializeProcessSecurity.c)
 *     SeSubProcessToken @ 0x1404A138C (SeSubProcessToken.c)
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 *     CmpIsVirtEnabled @ 0x1404D430C (CmpIsVirtEnabled.c)
 *     EtwTraceAppStateChange @ 0x1404E977C (EtwTraceAppStateChange.c)
 *     NtQueryInformationProcess @ 0x1404EA100 (NtQueryInformationProcess.c)
 *     EtwpBuildProcessEvent @ 0x1404ED1D0 (EtwpBuildProcessEvent.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1404F08B4 (ExpWnfQueryCurrentUserSID.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1404F18B0 (EtwpGetSidExtendedHeaderItem.c)
 *     PsQueryProcessAttributes @ 0x1404F7258 (PsQueryProcessAttributes.c)
 *     DbgkCreateThread @ 0x1404F8500 (DbgkCreateThread.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404FE030 (CmKeyBodyRemapToVirtualForEnum.c)
 *     NtOpenThreadTokenEx @ 0x140510670 (NtOpenThreadTokenEx.c)
 *     PfQuerySuperfetchInformation @ 0x14052B3F0 (PfQuerySuperfetchInformation.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     ObOpenObjectByNameEx @ 0x14052E3C0 (ObOpenObjectByNameEx.c)
 *     ExpGetProcessInformation @ 0x140531E70 (ExpGetProcessInformation.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 *     NtImpersonateAnonymousToken @ 0x14055FD94 (NtImpersonateAnonymousToken.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140560A90 (PspAllocateAndQueryNotificationChannel.c)
 *     PfSnCheckModernApp @ 0x140564844 (PfSnCheckModernApp.c)
 *     EtwpPsProvTraceProcess @ 0x140595350 (EtwpPsProvTraceProcess.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1406D29A8 (PopEtGetProcessSidAndPackageIdentity.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x140709828 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1407111B0 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x140712820 (EtwpApplyPackageIdFilter.c)
 *     MmInitSystemDll @ 0x140808CEC (MmInitSystemDll.c)
 *     PspInitPhase3 @ 0x1408269D4 (PspInitPhase3.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 */

signed __int64 __fastcall ObFastDereferenceObject(signed __int64 *a1, unsigned __int64 a2)
{
  signed __int64 result; // rax
  signed __int64 v3; // rtt

  _m_prefetchw(a1);
  result = *a1;
  if ( (a2 ^ *a1) >= 0xF )
    return ObfDereferenceObject((PVOID)a2);
  while ( 1 )
  {
    v3 = result;
    result = _InterlockedCompareExchange64(a1, result + 1, result);
    if ( v3 == result )
      break;
    if ( (a2 ^ result) >= 0xF )
      return ObfDereferenceObject((PVOID)a2);
  }
  return result;
}
