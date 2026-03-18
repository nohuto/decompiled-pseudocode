/*
 * XREFs of RtlCopyUnicodeString @ 0x140085200
 * Callers:
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x140014444 (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     AuthzBasepAllocateSecurityAttribute @ 0x14001A810 (AuthzBasepAllocateSecurityAttribute.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140089720 (AuthzBasepDuplicateSecurityAttributes.c)
 *     RtlPcToFileName @ 0x14015A240 (RtlPcToFileName.c)
 *     IoQueryFullDriverPath @ 0x1401FA820 (IoQueryFullDriverPath.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x14045CBD8 (AuthzBasepCopyoutInternalSecurityAttributes.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140487F80 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     RtlConvertSidToUnicodeString @ 0x140489090 (RtlConvertSidToUnicodeString.c)
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     IopCheckTopDeviceHint @ 0x1404D4AA0 (IopCheckTopDeviceHint.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1404EDB70 (EtwpGetLoggerInfoFromContext.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x14054A85C (SdbMakeIndexKeyFromStringEx.c)
 *     PiDeferSetInterfaceState @ 0x140555FF8 (PiDeferSetInterfaceState.c)
 *     PnpConcatenateUnicodeStrings @ 0x140556718 (PnpConcatenateUnicodeStrings.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x14055BB28 (PipSendTargetDeviceQueryRemoveNotification.c)
 *     PnpProcessRelation @ 0x14055C464 (PnpProcessRelation.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14055CA4C (PnpProcessQueryRemoveAndEject.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x14055EA44 (PnpQueryRemoveLockedDeviceNode.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x14056477C (SepAllocateAndInitializeCachedHandleEntry.c)
 *     FsRtlFindInTunnelCache @ 0x140565C10 (FsRtlFindInTunnelCache.c)
 *     IopBootLog @ 0x14059BC30 (IopBootLog.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405BA584 (IopInitializeDeviceInstanceKey.c)
 *     PnpCopyDeviceInstancePath @ 0x1405C45C8 (PnpCopyDeviceInstancePath.c)
 *     ObCreateObjectTypeEx @ 0x1405C6D8C (ObCreateObjectTypeEx.c)
 *     PsRegisterSiloMonitor @ 0x1405C75F0 (PsRegisterSiloMonitor.c)
 *     IopSymlinkUpdateECP @ 0x1405CD968 (IopSymlinkUpdateECP.c)
 *     AdtpObjsInitialize @ 0x1405D1148 (AdtpObjsInitialize.c)
 *     PiUEventHandleVetoEvent @ 0x1405E0CB0 (PiUEventHandleVetoEvent.c)
 *     IoReportRootDevice @ 0x1405E3820 (IoReportRootDevice.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x1405E7D70 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1405E7F0C (IopFileUtilWalkDirectoryTreeHelper.c)
 *     CmpGetVirtualizationID @ 0x1406921DC (CmpGetVirtualizationID.c)
 *     CmpLoadHiveVolatile @ 0x14069DCAC (CmpLoadHiveVolatile.c)
 *     VrpBuildKeyPath @ 0x1406A95FC (VrpBuildKeyPath.c)
 *     IopSafebootDriverLoad @ 0x1406B5A20 (IopSafebootDriverLoad.c)
 *     PnpNotifyHwProfileChange @ 0x1406BFB64 (PnpNotifyHwProfileChange.c)
 *     PnpFinalizeVetoedRemove @ 0x1406CAE6C (PnpFinalizeVetoedRemove.c)
 *     PiInitializeDevice @ 0x1406D3418 (PiInitializeDevice.c)
 *     PipRecordOpenHandleVeto @ 0x1406D54D4 (PipRecordOpenHandleVeto.c)
 *     PopFxRegisterComponentPerfStates @ 0x1406F8F24 (PopFxRegisterComponentPerfStates.c)
 *     PopProcessWakeSourceWork @ 0x1406FA890 (PopProcessWakeSourceWork.c)
 *     PopConnectToPolicyDevice @ 0x140706CAC (PopConnectToPolicyDevice.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x14071594C (PspSiloInitializeSystemRootBuffer.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1407159B0 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlPcToFilePath @ 0x1407271C0 (RtlPcToFilePath.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14072D060 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     AhcCacheQueryHwId @ 0x140788F7C (AhcCacheQueryHwId.c)
 *     ObGetSiloRootDirectoryPath @ 0x14078A24C (ObGetSiloRootDirectoryPath.c)
 *     StartFirstUserProcess @ 0x14085168C (StartFirstUserProcess.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
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
