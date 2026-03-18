/*
 * XREFs of sprintf_s @ 0x14016FE70
 * Callers:
 *     RtlIpv6AddressToStringA @ 0x140131350 (RtlIpv6AddressToStringA.c)
 *     RtlIpv4AddressToStringA @ 0x140150680 (RtlIpv4AddressToStringA.c)
 *     RtlEthernetAddressToStringA @ 0x14023E740 (RtlEthernetAddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x14023E7B0 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringExA @ 0x14023E870 (RtlIpv6AddressToStringExA.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1405990C0 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpSetVersionData @ 0x1405A48E0 (CmpSetVersionData.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1405AF0D8 (CmpAddProcessorConfigurationEntry.c)
 *     CmpFindControlSet @ 0x1405B68E4 (CmpFindControlSet.c)
 *     HdlspDispatch @ 0x14078E340 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x14078E9D8 (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x14078EF40 (HdlspProcessDumpCommand.c)
 *     HdlspSendBlueScreenInfo @ 0x14078F48C (HdlspSendBlueScreenInfo.c)
 *     CmpGetAcpiBiosVersion @ 0x1407F6728 (CmpGetAcpiBiosVersion.c)
 *     CmpCreateControlSet @ 0x14081E0AC (CmpCreateControlSet.c)
 *     CmpAddAliasEntry @ 0x140831E58 (CmpAddAliasEntry.c)
 * Callees:
 *     vsprintf_s @ 0x14016FEA0 (vsprintf_s.c)
 */

int sprintf_s(char *DstBuf, size_t SizeInBytes, const char *Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(DstBuf, SizeInBytes, Format, ArgList);
}
