/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x1404DE910
 * Callers:
 *     IopCreateUnicodeFromAnsiBuffer @ 0x1401467A0 (IopCreateUnicodeFromAnsiBuffer.c)
 *     CmLogMcUpdateStatus @ 0x1401E3D98 (CmLogMcUpdateStatus.c)
 *     PopEmModuleAddressMatchCallback @ 0x14024BF30 (PopEmModuleAddressMatchCallback.c)
 *     ExpSystemErrorHandler2 @ 0x14043AD40 (ExpSystemErrorHandler2.c)
 *     MiResolveImageReferences @ 0x1404DC360 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x1404DC7E4 (MiSnapThunk.c)
 *     RtlInt64ToUnicodeString @ 0x1404DE870 (RtlInt64ToUnicodeString.c)
 *     RtlIntegerToUnicodeString @ 0x1404E0C50 (RtlIntegerToUnicodeString.c)
 *     PiGetDefaultMessageString @ 0x140517098 (PiGetDefaultMessageString.c)
 *     PspInsertProcess @ 0x140539300 (PspInsertProcess.c)
 *     PnpLogVetoInformation @ 0x14055BDB8 (PnpLogVetoInformation.c)
 *     PopAnsiStringToUnicodeString @ 0x14059B0A8 (PopAnsiStringToUnicodeString.c)
 *     IopCopyBootLogRegistryToFile @ 0x1405AD678 (IopCopyBootLogRegistryToFile.c)
 *     CmpFindControlSet @ 0x1405BC7FC (CmpFindControlSet.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1405C0234 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x1405C0658 (CmpInitializeRegistryNode.c)
 *     CmpSetVersionData @ 0x1405C1254 (CmpSetVersionData.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x1405C3454 (RtlCreateUnicodeStringFromAsciiz.c)
 *     KsepStringAnsiToUnicode @ 0x1405C55E0 (KsepStringAnsiToUnicode.c)
 *     SepInitializationPhase1 @ 0x1405D7CD4 (SepInitializationPhase1.c)
 *     PiUEventHandleVetoEvent @ 0x1405E0CB0 (PiUEventHandleVetoEvent.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1405E4D1C (CmpAddRemoveContainerToCLFSLog.c)
 *     WmipQueryWmiRegInfo @ 0x1405F2BD0 (WmipQueryWmiRegInfo.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140698FFC (CmpCreateHwProfileFriendlyName.c)
 *     IopInitializeBootLogging @ 0x1406B5264 (IopInitializeBootLogging.c)
 *     MiLogFailedDriverLoad @ 0x1406E1928 (MiLogFailedDriverLoad.c)
 *     EtwWmitraceWorker @ 0x14074A7F4 (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x14075D2B0 (NtQuerySystemEnvironmentValue.c)
 *     ExpCovReadFriendlyName @ 0x14075FE64 (ExpCovReadFriendlyName.c)
 *     AslStringAnsiToUnicode @ 0x140771F1C (AslStringAnsiToUnicode.c)
 *     InitBootProcessor @ 0x14082FD94 (InitBootProcessor.c)
 *     EmpParseEntryTypes @ 0x140833920 (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x140834760 (EmpInfParseGetGuidFromName.c)
 *     CmpSetVideoBiosInformation @ 0x14083B210 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x14083B4EC (CmpSetSystemBiosInformation.c)
 *     CmpInitializeSystemHive @ 0x14083BCC8 (CmpInitializeSystemHive.c)
 *     CmpCreateControlSet @ 0x14083D05C (CmpCreateControlSet.c)
 *     WmipDriverEntry @ 0x140843D40 (WmipDriverEntry.c)
 *     IopMarkBootPartition @ 0x140844A20 (IopMarkBootPartition.c)
 *     IopCreateArcNames @ 0x140844F90 (IopCreateArcNames.c)
 *     PipSmBiosGetString @ 0x140847E20 (PipSmBiosGetString.c)
 *     IopCreateArcNamesCd @ 0x140851E2C (IopCreateArcNamesCd.c)
 *     CmpAddAliasEntry @ 0x140868D4C (CmpAddAliasEntry.c)
 *     IopGetBootDiskInformation @ 0x140869F24 (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x14086A3C0 (IopApplySystemPartitionProt.c)
 *     RamdiskStart @ 0x14086E0DC (RamdiskStart.c)
 * Callees:
 *     ExFreePool @ 0x1402B3E80 (ExFreePool.c)
 *     RtlMultiByteToUnicodeN @ 0x1404DEA00 (RtlMultiByteToUnicodeN.c)
 *     ExpAllocateStringRoutine @ 0x1404DF9E0 (ExpAllocateStringRoutine.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x1405F2860 (RtlxAnsiStringToUnicodeSize.c)
 */

NTSTATUS __stdcall RtlAnsiStringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PCANSI_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  SIZE_T v6; // rcx
  unsigned __int64 v7; // rcx
  int v8; // edi
  wchar_t *StringRoutine; // rax
  ULONG BytesInUnicodeString; // [rsp+78h] [rbp+20h] BYREF

  if ( (_BYTE)NlsMbCodePageTag )
    v6 = RtlxAnsiStringToUnicodeSize(SourceString);
  else
    v6 = 2 * (unsigned int)SourceString->Length + 2;
  if ( (unsigned int)v6 > 0xFFFE )
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
