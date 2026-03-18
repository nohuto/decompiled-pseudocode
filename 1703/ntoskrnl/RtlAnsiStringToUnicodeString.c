/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x1404C0A50
 * Callers:
 *     IopCreateUnicodeFromAnsiBuffer @ 0x140153C34 (IopCreateUnicodeFromAnsiBuffer.c)
 *     CmLogMcUpdateStatus @ 0x1401DFC58 (CmLogMcUpdateStatus.c)
 *     PopEmModuleAddressMatchCallback @ 0x140236D20 (PopEmModuleAddressMatchCallback.c)
 *     ExpSystemErrorHandler2 @ 0x14041B230 (ExpSystemErrorHandler2.c)
 *     PspInsertProcess @ 0x14049CB2C (PspInsertProcess.c)
 *     RtlIntegerToUnicodeString @ 0x1404C02F0 (RtlIntegerToUnicodeString.c)
 *     RtlInt64ToUnicodeString @ 0x1404C09B0 (RtlInt64ToUnicodeString.c)
 *     MiResolveImageReferences @ 0x1404F8F54 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x1404F93D8 (MiSnapThunk.c)
 *     PiUEventHandleVetoEvent @ 0x1405743B4 (PiUEventHandleVetoEvent.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1405990C0 (CmpAddRemoveContainerToCLFSLog.c)
 *     PnpLogVetoInformation @ 0x14059A4E0 (PnpLogVetoInformation.c)
 *     KsepStringAnsiToUnicode @ 0x14059BF68 (KsepStringAnsiToUnicode.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x1405A3744 (RtlCreateUnicodeStringFromAsciiz.c)
 *     CmpSetVersionData @ 0x1405A48E0 (CmpSetVersionData.c)
 *     PiGetDefaultMessageString @ 0x1405AD2F8 (PiGetDefaultMessageString.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1405AF0D8 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x1405AF4FC (CmpInitializeRegistryNode.c)
 *     CmpFindControlSet @ 0x1405B68E4 (CmpFindControlSet.c)
 *     SepInitializationPhase1 @ 0x1405C48E0 (SepInitializationPhase1.c)
 *     WmipQueryWmiRegInfo @ 0x1405D6260 (WmipQueryWmiRegInfo.c)
 *     IopCopyBootLogRegistryToFile @ 0x1405D6404 (IopCopyBootLogRegistryToFile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x14066EB04 (CmpCreateHwProfileFriendlyName.c)
 *     IopInitializeBootLogging @ 0x140689284 (IopInitializeBootLogging.c)
 *     MiLogFailedDriverLoad @ 0x1406B5708 (MiLogFailedDriverLoad.c)
 *     EtwWmitraceWorker @ 0x14070EB94 (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x14071D9A0 (NtQuerySystemEnvironmentValue.c)
 *     ExpCovReadFriendlyName @ 0x14071FFF4 (ExpCovReadFriendlyName.c)
 *     AslStringAnsiToUnicode @ 0x14072E47C (AslStringAnsiToUnicode.c)
 *     IopCreateArcNamesCd @ 0x1407F6A7C (IopCreateArcNamesCd.c)
 *     CmpSetVideoBiosInformation @ 0x1407F730C (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x1407F75EC (CmpSetSystemBiosInformation.c)
 *     IopCreateArcNames @ 0x1407F83BC (IopCreateArcNames.c)
 *     IopMarkBootPartition @ 0x1407FA5A0 (IopMarkBootPartition.c)
 *     WmipDriverEntry @ 0x1407FF1F0 (WmipDriverEntry.c)
 *     EmpParseEntryTypes @ 0x1408055B4 (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x1408063F0 (EmpInfParseGetGuidFromName.c)
 *     CmpInitializeSystemHive @ 0x1408078A0 (CmpInitializeSystemHive.c)
 *     InitBootProcessor @ 0x140809FC8 (InitBootProcessor.c)
 *     PipSmBiosGetString @ 0x14080FF34 (PipSmBiosGetString.c)
 *     CmpCreateControlSet @ 0x14081E0AC (CmpCreateControlSet.c)
 *     CmpAddAliasEntry @ 0x140831E58 (CmpAddAliasEntry.c)
 *     IopGetBootDiskInformation @ 0x140832E04 (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x1408332A0 (IopApplySystemPartitionProt.c)
 *     RamdiskStart @ 0x140836EAC (RamdiskStart.c)
 * Callees:
 *     ExFreePool @ 0x140286A00 (ExFreePool.c)
 *     RtlMultiByteToUnicodeN @ 0x1404C0BD0 (RtlMultiByteToUnicodeN.c)
 *     ExpAllocateStringRoutine @ 0x1404C1D30 (ExpAllocateStringRoutine.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x1405753F0 (RtlxAnsiStringToUnicodeSize.c)
 */

NTSTATUS __stdcall RtlAnsiStringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PCANSI_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // eax
  unsigned __int64 v7; // rcx
  int v8; // edi
  wchar_t *StringRoutine; // rax
  ULONG BytesInUnicodeString; // [rsp+78h] [rbp+20h] BYREF

  if ( (_BYTE)NlsMbCodePageTag )
    v6 = RtlxAnsiStringToUnicodeSize(SourceString);
  else
    v6 = 2 * SourceString->Length + 2;
  if ( v6 > 0xFFFE )
    return -1073741584;
  DestinationString->Length = v6 - 2;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v6;
    StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v6);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else
  {
    v7 = (unsigned __int16)(v6 - 2) + 2LL;
    if ( v7 > DestinationString->MaximumLength || v7 < 2 )
      return -2147483643;
  }
  v8 = RtlMultiByteToUnicodeN(
         DestinationString->Buffer,
         DestinationString->Length,
         &BytesInUnicodeString,
         SourceString->Buffer,
         SourceString->Length);
  if ( v8 >= 0 )
  {
    DestinationString->Buffer[(unsigned __int64)BytesInUnicodeString >> 1] = 0;
    v8 = 0;
  }
  if ( v8 < 0 )
  {
    if ( AllocateDestinationString )
    {
      ExFreePool(DestinationString->Buffer);
      DestinationString->Buffer = 0LL;
    }
  }
  return v8;
}
