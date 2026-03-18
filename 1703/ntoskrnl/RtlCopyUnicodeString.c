/*
 * XREFs of RtlCopyUnicodeString @ 0x1400F1110
 * Callers:
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x14003F1B4 (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     AuthzBasepAllocateSecurityAttribute @ 0x140065D18 (AuthzBasepAllocateSecurityAttribute.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140093E50 (AuthzBasepDuplicateSecurityAttributes.c)
 *     RtlPcToFileName @ 0x140165994 (RtlPcToFileName.c)
 *     IopQueryFullDriverPath @ 0x1401F5180 (IopQueryFullDriverPath.c)
 *     FsRtlFindInTunnelCache @ 0x140426F10 (FsRtlFindInTunnelCache.c)
 *     CmpGetVirtualizationID @ 0x140452200 (CmpGetVirtualizationID.c)
 *     PiDeferSetInterfaceState @ 0x1404572B4 (PiDeferSetInterfaceState.c)
 *     IopBootLog @ 0x14045B6F8 (IopBootLog.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x140462774 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x14046F164 (AuthzBasepCopyoutInternalSecurityAttributes.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x1404B5854 (SdbMakeIndexKeyFromStringEx.c)
 *     RtlConvertSidToUnicodeString @ 0x1404C06A0 (RtlConvertSidToUnicodeString.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404F61D0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     IopCheckTopDeviceHint @ 0x140515C84 (IopCheckTopDeviceHint.c)
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 *     EtwpGetLoggerInfoFromContext @ 0x140551788 (EtwpGetLoggerInfoFromContext.c)
 *     IopInitializeDeviceInstanceKey @ 0x140559998 (IopInitializeDeviceInstanceKey.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14056E6B4 (PnpProcessQueryRemoveAndEject.c)
 *     PnpProcessRelation @ 0x14056F60C (PnpProcessRelation.c)
 *     PiUEventHandleVetoEvent @ 0x1405743B4 (PiUEventHandleVetoEvent.c)
 *     IopSymlinkUpdateECP @ 0x14057BE7C (IopSymlinkUpdateECP.c)
 *     PnpConcatenateUnicodeStrings @ 0x140581138 (PnpConcatenateUnicodeStrings.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x1405980F0 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14059828C (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x14059A934 (PnpQueryRemoveLockedDeviceNode.c)
 *     PiEventQueryRemoveNotifyKernel @ 0x14059B004 (PiEventQueryRemoveNotifyKernel.c)
 *     ObCreateObjectTypeEx @ 0x14059EB6C (ObCreateObjectTypeEx.c)
 *     PsRegisterSiloMonitor @ 0x14059F3C0 (PsRegisterSiloMonitor.c)
 *     AdtpObjsInitialize @ 0x1405A6FD4 (AdtpObjsInitialize.c)
 *     IoReportRootDevice @ 0x1405AFC40 (IoReportRootDevice.c)
 *     PnpCopyDeviceInstancePath @ 0x1405D6524 (PnpCopyDeviceInstancePath.c)
 *     PopConnectToPolicyDevice @ 0x1405D67E8 (PopConnectToPolicyDevice.c)
 *     CmpLoadHiveVolatile @ 0x140672BD8 (CmpLoadHiveVolatile.c)
 *     VrpBuildKeyPath @ 0x14067E57C (VrpBuildKeyPath.c)
 *     IopSafebootDriverLoad @ 0x140689D60 (IopSafebootDriverLoad.c)
 *     PnpNotifyHwProfileChange @ 0x140693DA8 (PnpNotifyHwProfileChange.c)
 *     PnpFinalizeVetoedRemove @ 0x1406A053C (PnpFinalizeVetoedRemove.c)
 *     PiInitializeDevice @ 0x1406A8758 (PiInitializeDevice.c)
 *     PiEventRemovalOpenHandleVeto @ 0x1406AA3FC (PiEventRemovalOpenHandleVeto.c)
 *     PopFxRegisterComponentPerfStates @ 0x1406C8508 (PopFxRegisterComponentPerfStates.c)
 *     PopProcessWakeSourceWork @ 0x1406C9854 (PopProcessWakeSourceWork.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x1406DF4CC (PspSiloInitializeSystemRootBuffer.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1406DF530 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlPcToFilePath @ 0x1406EECDC (RtlPcToFilePath.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1406F5610 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     AhcCacheQueryHwId @ 0x140746A68 (AhcCacheQueryHwId.c)
 *     ObGetSiloRootDirectoryPath @ 0x140747A10 (ObGetSiloRootDirectoryPath.c)
 *     StartFirstUserProcess @ 0x14081013C (StartFirstUserProcess.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
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
