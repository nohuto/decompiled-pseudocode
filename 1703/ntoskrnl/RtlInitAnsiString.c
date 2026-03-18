/*
 * XREFs of RtlInitAnsiString @ 0x1400852C0
 * Callers:
 *     IopCreateUnicodeFromAnsiBuffer @ 0x140153C34 (IopCreateUnicodeFromAnsiBuffer.c)
 *     IopCheckDiskName @ 0x140154AA0 (IopCheckDiskName.c)
 *     CmLogMcUpdateStatus @ 0x1401DFC58 (CmLogMcUpdateStatus.c)
 *     ExpSystemErrorHandler2 @ 0x14041B230 (ExpSystemErrorHandler2.c)
 *     PspInsertProcess @ 0x14049CB2C (PspInsertProcess.c)
 *     EtwpBuildProcessEvent @ 0x1404ED1D0 (EtwpBuildProcessEvent.c)
 *     MiResolveImageReferences @ 0x1404F8F54 (MiResolveImageReferences.c)
 *     PiUEventHandleVetoEvent @ 0x1405743B4 (PiUEventHandleVetoEvent.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1405990C0 (CmpAddRemoveContainerToCLFSLog.c)
 *     PnpLogVetoInformation @ 0x14059A4E0 (PnpLogVetoInformation.c)
 *     CmpSetVersionData @ 0x1405A48E0 (CmpSetVersionData.c)
 *     PiGetDefaultMessageString @ 0x1405AD2F8 (PiGetDefaultMessageString.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1405AF0D8 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x1405AF4FC (CmpInitializeRegistryNode.c)
 *     WmipQueryWmiRegInfo @ 0x1405D6260 (WmipQueryWmiRegInfo.c)
 *     IopCopyBootLogRegistryToFile @ 0x1405D6404 (IopCopyBootLogRegistryToFile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x14066EB04 (CmpCreateHwProfileFriendlyName.c)
 *     KsepGetModuleInfoByName @ 0x1406B003C (KsepGetModuleInfoByName.c)
 *     MiLogFailedDriverLoad @ 0x1406B5708 (MiLogFailedDriverLoad.c)
 *     EtwWmitraceWorker @ 0x14070EB94 (EtwWmitraceWorker.c)
 *     IopCreateArcNamesCd @ 0x1407F6A7C (IopCreateArcNamesCd.c)
 *     CmpSetVideoBiosInformation @ 0x1407F730C (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x1407F75EC (CmpSetSystemBiosInformation.c)
 *     IopCreateArcNames @ 0x1407F83BC (IopCreateArcNames.c)
 *     IopMarkBootPartition @ 0x1407FA5A0 (IopMarkBootPartition.c)
 *     WmipDriverEntry @ 0x1407FF1F0 (WmipDriverEntry.c)
 *     IopGetBootDiskInformationLite @ 0x1408053E4 (IopGetBootDiskInformationLite.c)
 *     EmpParseEntryTypes @ 0x1408055B4 (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x1408063F0 (EmpInfParseGetGuidFromName.c)
 *     CmpInitializeSystemHive @ 0x1408078A0 (CmpInitializeSystemHive.c)
 *     InitBootProcessor @ 0x140809FC8 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 *     CmpCreateControlSet @ 0x14081E0AC (CmpCreateControlSet.c)
 *     CmpAddAliasEntry @ 0x140831E58 (CmpAddAliasEntry.c)
 *     IopGetBootDiskInformation @ 0x140832E04 (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x1408332A0 (IopApplySystemPartitionProt.c)
 *     RamdiskStart @ 0x140836EAC (RamdiskStart.c)
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
