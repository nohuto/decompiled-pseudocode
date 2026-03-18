/*
 * XREFs of RtlCopyUnicodeString @ 0x140106C50
 * Callers:
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14005C310 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepAllocateSecurityAttribute @ 0x14005C570 (AuthzBasepAllocateSecurityAttribute.c)
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x1400A095C (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     RtlPcToFileName @ 0x140182850 (RtlPcToFileName.c)
 *     IoQueryFullDriverPath @ 0x140186560 (IoQueryFullDriverPath.c)
 *     IopCheckTopDeviceHint @ 0x1404E245C (IopCheckTopDeviceHint.c)
 *     RtlConvertSidToUnicodeString @ 0x140517C80 (RtlConvertSidToUnicodeString.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14053E640 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x14053ED50 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x140544638 (AuthzBasepCopyoutInternalSecurityAttributes.c)
 *     FsRtlFindInTunnelCache @ 0x140554CD0 (FsRtlFindInTunnelCache.c)
 *     IopSymlinkUpdateECP @ 0x140577744 (IopSymlinkUpdateECP.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14058B16C (EtwpGetLoggerInfoFromContext.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 *     CmpGetVirtualizationID @ 0x1405C08C4 (CmpGetVirtualizationID.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1405C79A8 (PnpProcessQueryRemoveAndEject.c)
 *     PnpProcessRelation @ 0x1405C9EB4 (PnpProcessRelation.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405D9834 (IopInitializeDeviceInstanceKey.c)
 *     PiUEventHandleVetoEvent @ 0x1405E5ED8 (PiUEventHandleVetoEvent.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x1405F2F7C (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1405F3118 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PnpConcatenateUnicodeStrings @ 0x1405F5438 (PnpConcatenateUnicodeStrings.c)
 *     PiDeferSetInterfaceState @ 0x1405F5D60 (PiDeferSetInterfaceState.c)
 *     IopBootLog @ 0x1405F6E00 (IopBootLog.c)
 *     IopQueryRegistryKeySystemPath @ 0x1405FB93C (IopQueryRegistryKeySystemPath.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x1405FD650 (SdbMakeIndexKeyFromStringEx.c)
 *     PsRegisterSiloMonitor @ 0x1406216F0 (PsRegisterSiloMonitor.c)
 *     ObCreateObjectTypeEx @ 0x14062189C (ObCreateObjectTypeEx.c)
 *     PopConnectToPolicyDevice @ 0x140626BD4 (PopConnectToPolicyDevice.c)
 *     AdtpObjsInitialize @ 0x140632254 (AdtpObjsInitialize.c)
 *     IoReportRootDevice @ 0x14064B860 (IoReportRootDevice.c)
 *     PnpCopyDeviceInstancePath @ 0x140655BF4 (PnpCopyDeviceInstancePath.c)
 *     CmpLoadHiveVolatile @ 0x140702BD0 (CmpLoadHiveVolatile.c)
 *     VrpBuildKeyPath @ 0x14070DD28 (VrpBuildKeyPath.c)
 *     IopSafebootDriverLoad @ 0x14071A6D0 (IopSafebootDriverLoad.c)
 *     PnpNotifyHwProfileChange @ 0x1407255B4 (PnpNotifyHwProfileChange.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140727C3C (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpFinalizeVetoedRemove @ 0x14073254C (PnpFinalizeVetoedRemove.c)
 *     PiInitializeDevice @ 0x14073B304 (PiInitializeDevice.c)
 *     PipRecordOpenHandleVeto @ 0x14073F080 (PipRecordOpenHandleVeto.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x14073F280 (PipSendTargetDeviceQueryRemoveNotification.c)
 *     PopFxRegisterComponentPerfStates @ 0x1407603E8 (PopFxRegisterComponentPerfStates.c)
 *     PopProcessWakeSourceWork @ 0x140762264 (PopProcessWakeSourceWork.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x140779ADC (PspSiloInitializeSystemRootBuffer.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140779B40 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlPcToFilePath @ 0x14078AB40 (RtlPcToFilePath.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x140791310 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     ExRaiseHardError @ 0x1407C5960 (ExRaiseHardError.c)
 *     AhcCacheQueryHwId @ 0x1407F5744 (AhcCacheQueryHwId.c)
 *     ObGetSiloRootDirectoryPath @ 0x1407F6710 (ObGetSiloRootDirectoryPath.c)
 *     StartFirstUserProcess @ 0x1408C254C (StartFirstUserProcess.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 */

void __stdcall RtlCopyUnicodeString(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  unsigned int Length; // eax
  wchar_t *Buffer; // r9
  wchar_t *v5; // rsi
  unsigned __int16 MaximumLength; // cx
  unsigned __int64 v7; // rdi

  if ( SourceString )
  {
    Length = SourceString->Length;
    Buffer = SourceString->Buffer;
    v5 = DestinationString->Buffer;
    MaximumLength = DestinationString->MaximumLength;
    if ( (unsigned __int16)Length > MaximumLength )
      Length = MaximumLength;
    DestinationString->Length = Length;
    v7 = Length;
    memmove(v5, Buffer, Length);
    if ( (unsigned __int64)DestinationString->Length + 2 <= DestinationString->MaximumLength )
      v5[v7 >> 1] = 0;
  }
  else
  {
    DestinationString->Length = 0;
  }
}
