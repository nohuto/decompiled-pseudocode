/*
 * XREFs of RtlInitAnsiString @ 0x14006CE80
 * Callers:
 *     IopCheckDiskName @ 0x140175C74 (IopCheckDiskName.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x140179850 (IopCreateUnicodeFromAnsiBuffer.c)
 *     CmLogMcUpdateStatus @ 0x140222194 (CmLogMcUpdateStatus.c)
 *     ExpSystemErrorHandler2 @ 0x140487900 (ExpSystemErrorHandler2.c)
 *     PspInsertProcess @ 0x1404EABB0 (PspInsertProcess.c)
 *     EtwpBuildProcessEvent @ 0x1404F8968 (EtwpBuildProcessEvent.c)
 *     PiUEventHandleVetoEvent @ 0x1405E5ED8 (PiUEventHandleVetoEvent.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1405F3254 (CmpAddRemoveContainerToCLFSLog.c)
 *     MiResolveImageReferences @ 0x1405FABA8 (MiResolveImageReferences.c)
 *     IopCopyBootLogRegistryToFile @ 0x140624BCC (IopCopyBootLogRegistryToFile.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14062DC9C (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x14062E0B4 (CmpInitializeRegistryNode.c)
 *     CmpSetVersionData @ 0x14062ED3C (CmpSetVersionData.c)
 *     PiGetDefaultMessageString @ 0x140645B40 (PiGetDefaultMessageString.c)
 *     WmipQueryWmiRegInfo @ 0x140655A00 (WmipQueryWmiRegInfo.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1406FC834 (CmpCreateHwProfileFriendlyName.c)
 *     PnpLogVetoInformation @ 0x140732698 (PnpLogVetoInformation.c)
 *     KsepGetModuleInfoByName @ 0x14074616C (KsepGetModuleInfoByName.c)
 *     MiLogFailedDriverLoad @ 0x14074C6D0 (MiLogFailedDriverLoad.c)
 *     EtwWmitraceWorker @ 0x1407ACCA4 (EtwWmitraceWorker.c)
 *     WmipDriverEntry @ 0x14089FCB0 (WmipDriverEntry.c)
 *     InitBootProcessor @ 0x1408A6138 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 *     IopGetBootDiskInformationLite @ 0x1408A9998 (IopGetBootDiskInformationLite.c)
 *     EmpParseEntryTypes @ 0x1408A9B4C (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x1408AA96C (EmpInfParseGetGuidFromName.c)
 *     CmpSetVideoBiosInformation @ 0x1408AF57C (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x1408AF738 (CmpSetSystemBiosInformation.c)
 *     CmpInitializeSystemHive @ 0x1408B02A4 (CmpInitializeSystemHive.c)
 *     CmpInitializeDriverStores @ 0x1408B1698 (CmpInitializeDriverStores.c)
 *     IopMarkBootPartition @ 0x1408B6F50 (IopMarkBootPartition.c)
 *     IopCreateArcNames @ 0x1408B74E4 (IopCreateArcNames.c)
 *     IopCreateArcNamesCd @ 0x1408C4DE0 (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x1408DE714 (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x1408DEBB0 (IopApplySystemPartitionProt.c)
 *     RamdiskStart @ 0x1408E2E3C (RamdiskStart.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlInitAnsiString(PANSI_STRING DestinationString, PCSZ SourceString)
{
  unsigned __int64 v2; // rax

  DestinationString->Buffer = (char *)SourceString;
  *(_DWORD *)&DestinationString->Length = 0;
  if ( SourceString )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( SourceString[v2] );
    if ( v2 >= 0xFFFF )
      LOWORD(v2) = -2;
    DestinationString->Length = v2;
    DestinationString->MaximumLength = v2 + 1;
  }
}
