/*
 * XREFs of sprintf_s @ 0x140164670
 * Callers:
 *     RtlIpv4AddressToStringA @ 0x1401485A0 (RtlIpv4AddressToStringA.c)
 *     RtlEthernetAddressToStringA @ 0x140254700 (RtlEthernetAddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x140254770 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringA @ 0x140254830 (RtlIpv6AddressToStringA.c)
 *     RtlIpv6AddressToStringExA @ 0x140254AB0 (RtlIpv6AddressToStringExA.c)
 *     CmpFindControlSet @ 0x1405BC7FC (CmpFindControlSet.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1405C0234 (CmpAddProcessorConfigurationEntry.c)
 *     CmpSetVersionData @ 0x1405C1254 (CmpSetVersionData.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1405E4D1C (CmpAddRemoveContainerToCLFSLog.c)
 *     HdlspDispatch @ 0x1407CBE10 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x1407CC508 (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x1407CCA70 (HdlspProcessDumpCommand.c)
 *     HdlspSendBlueScreenInfo @ 0x1407CCFD0 (HdlspSendBlueScreenInfo.c)
 *     CmpGetAcpiBiosVersion @ 0x14083BBC0 (CmpGetAcpiBiosVersion.c)
 *     CmpCreateControlSet @ 0x14083D05C (CmpCreateControlSet.c)
 *     CmpAddAliasEntry @ 0x140868D4C (CmpAddAliasEntry.c)
 * Callees:
 *     vsprintf_s @ 0x1401646A0 (vsprintf_s.c)
 */

int sprintf_s(char *DstBuf, size_t SizeInBytes, const char *Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(DstBuf, SizeInBytes, Format, ArgList);
}
