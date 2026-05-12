/*
 * XREFs of RaidMachineRequireIoPortResource @ 0x1C004793C
 * Callers:
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C0063900 (RaidAdapterFilterResourceRequirementsIrp.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     memset @ 0x1C0018140 (memset.c)
 */

bool RaidMachineRequireIoPortResource()
{
  char v0; // bl
  int v2[4]; // [rsp+20h] [rbp-148h] BYREF
  _BYTE VersionInformation[284]; // [rsp+30h] [rbp-138h] BYREF

  v0 = 1;
  v2[0] = 1;
  EmClientQueryRuleState(&GUID_KEEP_IO_PORT_RESOURCE_REQUIREMENT_RULE, v2);
  if ( v2[0] != 2 )
  {
    memset(VersionInformation, 0, sizeof(VersionInformation));
    *(_DWORD *)VersionInformation = 284;
    RtlGetVersion((PRTL_OSVERSIONINFOW)VersionInformation);
    return (unsigned __int8)(VersionInformation[282] - 2) > 1u;
  }
  return v0;
}
