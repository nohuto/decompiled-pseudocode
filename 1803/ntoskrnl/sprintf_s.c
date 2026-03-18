/*
 * XREFs of sprintf_s @ 0x14018E540
 * Callers:
 *     RtlIpv6AddressToStringA @ 0x140144860 (RtlIpv6AddressToStringA.c)
 *     RtlIpv4AddressToStringA @ 0x14015AEB0 (RtlIpv4AddressToStringA.c)
 *     RtlEthernetAddressToStringA @ 0x14028C780 (RtlEthernetAddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x14028C7F0 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringExA @ 0x14028C8B0 (RtlIpv6AddressToStringExA.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1405F3254 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14062DC9C (CmpAddProcessorConfigurationEntry.c)
 *     CmpSetVersionData @ 0x14062ED3C (CmpSetVersionData.c)
 *     CmpFindControlSet @ 0x140634C90 (CmpFindControlSet.c)
 *     HdlspDispatch @ 0x140838E10 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x1408394FC (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x140839A68 (HdlspProcessDumpCommand.c)
 *     HdlspSendBlueScreenInfo @ 0x140839FCC (HdlspSendBlueScreenInfo.c)
 *     CmpGetAcpiBiosVersion @ 0x1408AFE08 (CmpGetAcpiBiosVersion.c)
 * Callees:
 *     vsprintf_s @ 0x14018E570 (vsprintf_s.c)
 */

int sprintf_s(char *DstBuf, size_t SizeInBytes, const char *Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(DstBuf, SizeInBytes, Format, ArgList);
}
