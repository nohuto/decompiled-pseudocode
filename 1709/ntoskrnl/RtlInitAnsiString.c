/*
 * XREFs of RtlInitAnsiString @ 0x1400AE570
 * Callers:
 *     IopCheckDiskName @ 0x140140B60 (IopCheckDiskName.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x1401467A0 (IopCreateUnicodeFromAnsiBuffer.c)
 *     CmLogMcUpdateStatus @ 0x1401E3D98 (CmLogMcUpdateStatus.c)
 *     ExpSystemErrorHandler2 @ 0x14043AD40 (ExpSystemErrorHandler2.c)
 *     EtwpBuildProcessEvent @ 0x1404DBDC0 (EtwpBuildProcessEvent.c)
 *     MiResolveImageReferences @ 0x1404DC360 (MiResolveImageReferences.c)
 *     PiGetDefaultMessageString @ 0x140517098 (PiGetDefaultMessageString.c)
 *     PspInsertProcess @ 0x140539300 (PspInsertProcess.c)
 *     PnpLogVetoInformation @ 0x14055BDB8 (PnpLogVetoInformation.c)
 *     IopCopyBootLogRegistryToFile @ 0x1405AD678 (IopCopyBootLogRegistryToFile.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1405C0234 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x1405C0658 (CmpInitializeRegistryNode.c)
 *     CmpSetVersionData @ 0x1405C1254 (CmpSetVersionData.c)
 *     PiUEventHandleVetoEvent @ 0x1405E0CB0 (PiUEventHandleVetoEvent.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1405E4D1C (CmpAddRemoveContainerToCLFSLog.c)
 *     WmipQueryWmiRegInfo @ 0x1405F2BD0 (WmipQueryWmiRegInfo.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140698FFC (CmpCreateHwProfileFriendlyName.c)
 *     KsepGetModuleInfoByName @ 0x1406DB66C (KsepGetModuleInfoByName.c)
 *     MiLogFailedDriverLoad @ 0x1406E1928 (MiLogFailedDriverLoad.c)
 *     EtwWmitraceWorker @ 0x14074A7F4 (EtwWmitraceWorker.c)
 *     InitBootProcessor @ 0x14082FD94 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 *     IopGetBootDiskInformationLite @ 0x140833760 (IopGetBootDiskInformationLite.c)
 *     EmpParseEntryTypes @ 0x140833920 (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x140834760 (EmpInfParseGetGuidFromName.c)
 *     CmpSetVideoBiosInformation @ 0x14083B210 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x14083B4EC (CmpSetSystemBiosInformation.c)
 *     CmpInitializeSystemHive @ 0x14083BCC8 (CmpInitializeSystemHive.c)
 *     CmpCreateControlSet @ 0x14083D05C (CmpCreateControlSet.c)
 *     WmipDriverEntry @ 0x140843D40 (WmipDriverEntry.c)
 *     IopMarkBootPartition @ 0x140844A20 (IopMarkBootPartition.c)
 *     IopCreateArcNames @ 0x140844F90 (IopCreateArcNames.c)
 *     IopCreateArcNamesCd @ 0x140851E2C (IopCreateArcNamesCd.c)
 *     CmpAddAliasEntry @ 0x140868D4C (CmpAddAliasEntry.c)
 *     IopGetBootDiskInformation @ 0x140869F24 (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x14086A3C0 (IopApplySystemPartitionProt.c)
 *     RamdiskStart @ 0x14086E0DC (RamdiskStart.c)
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
