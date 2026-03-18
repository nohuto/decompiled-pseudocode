/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x140518030
 * Callers:
 *     IopCreateUnicodeFromAnsiBuffer @ 0x140179850 (IopCreateUnicodeFromAnsiBuffer.c)
 *     HvlDebuggerSupportInitialize @ 0x140187348 (HvlDebuggerSupportInitialize.c)
 *     CmLogMcUpdateStatus @ 0x140222194 (CmLogMcUpdateStatus.c)
 *     PopEmModuleAddressMatchCallback @ 0x140281EB0 (PopEmModuleAddressMatchCallback.c)
 *     ExpSystemErrorHandler2 @ 0x140487900 (ExpSystemErrorHandler2.c)
 *     PspInsertProcess @ 0x1404EABB0 (PspInsertProcess.c)
 *     RtlInt64ToUnicodeString @ 0x140517F90 (RtlInt64ToUnicodeString.c)
 *     PopAnsiStringToUnicodeString @ 0x140524D84 (PopAnsiStringToUnicodeString.c)
 *     RtlIntegerToUnicodeString @ 0x14053E930 (RtlIntegerToUnicodeString.c)
 *     PiUEventHandleVetoEvent @ 0x1405E5ED8 (PiUEventHandleVetoEvent.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1405F3254 (CmpAddRemoveContainerToCLFSLog.c)
 *     MiResolveImageReferences @ 0x1405FABA8 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x1405FB02C (MiSnapThunk.c)
 *     KsepStringAnsiToUnicode @ 0x140623958 (KsepStringAnsiToUnicode.c)
 *     IopCopyBootLogRegistryToFile @ 0x140624BCC (IopCopyBootLogRegistryToFile.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14062DC9C (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x14062E0B4 (CmpInitializeRegistryNode.c)
 *     CmpSetVersionData @ 0x14062ED3C (CmpSetVersionData.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x140630F30 (RtlCreateUnicodeStringFromAsciiz.c)
 *     CmpFindControlSet @ 0x140634C90 (CmpFindControlSet.c)
 *     SepInitializationPhase1 @ 0x140641CF0 (SepInitializationPhase1.c)
 *     PiGetDefaultMessageString @ 0x140645B40 (PiGetDefaultMessageString.c)
 *     WmipQueryWmiRegInfo @ 0x140655A00 (WmipQueryWmiRegInfo.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1406FC834 (CmpCreateHwProfileFriendlyName.c)
 *     IopInitializeBootLogging @ 0x140719F14 (IopInitializeBootLogging.c)
 *     PnpLogVetoInformation @ 0x140732698 (PnpLogVetoInformation.c)
 *     MiLogFailedDriverLoad @ 0x14074C6D0 (MiLogFailedDriverLoad.c)
 *     EtwWmitraceWorker @ 0x1407ACCA4 (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x1407C42D0 (NtQuerySystemEnvironmentValue.c)
 *     ExpCovReadFriendlyName @ 0x1407C7168 (ExpCovReadFriendlyName.c)
 *     AslStringAnsiToUnicode @ 0x1407D8F74 (AslStringAnsiToUnicode.c)
 *     WmipDriverEntry @ 0x14089FCB0 (WmipDriverEntry.c)
 *     InitBootProcessor @ 0x1408A6138 (InitBootProcessor.c)
 *     EmpParseEntryTypes @ 0x1408A9B4C (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x1408AA96C (EmpInfParseGetGuidFromName.c)
 *     CmpSetVideoBiosInformation @ 0x1408AF57C (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x1408AF738 (CmpSetSystemBiosInformation.c)
 *     CmpInitializeSystemHive @ 0x1408B02A4 (CmpInitializeSystemHive.c)
 *     CmpInitializeDriverStores @ 0x1408B1698 (CmpInitializeDriverStores.c)
 *     PipSmBiosGetString @ 0x1408B4BA8 (PipSmBiosGetString.c)
 *     IopMarkBootPartition @ 0x1408B6F50 (IopMarkBootPartition.c)
 *     IopCreateArcNames @ 0x1408B74E4 (IopCreateArcNames.c)
 *     IopCreateArcNamesCd @ 0x1408C4DE0 (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x1408DE714 (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x1408DEBB0 (IopApplySystemPartitionProt.c)
 *     RamdiskStart @ 0x1408E2E3C (RamdiskStart.c)
 * Callees:
 *     ExFreePool @ 0x1402EA010 (ExFreePool.c)
 *     RtlMultiByteToUnicodeN @ 0x140518120 (RtlMultiByteToUnicodeN.c)
 *     ExpAllocateStringRoutine @ 0x140518FA0 (ExpAllocateStringRoutine.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x1405C2EE0 (RtlxAnsiStringToUnicodeSize.c)
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
