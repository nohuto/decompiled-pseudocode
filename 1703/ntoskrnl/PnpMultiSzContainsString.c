/*
 * XREFs of PnpMultiSzContainsString @ 0x14014FC94
 * Callers:
 *     PiDevCfgResolveMultiSzValue @ 0x14058E87C (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgFindDeviceDriver @ 0x14058EEF8 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgAppendMultiSz @ 0x140698BEC (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140699B70 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgResolveVariableExpression @ 0x14069C3A0 (PiDevCfgResolveVariableExpression.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 */

PCWSTR __fastcall PnpMultiSzContainsString(PCWSTR SourceString, const WCHAR *a2)
{
  __int64 v3; // rdi
  UNICODE_STRING String2; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  while ( *SourceString )
  {
    RtlInitUnicodeString(&String2, SourceString);
    if ( RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
      return SourceString;
    SourceString += ((unsigned __int64)String2.Length >> 1) + 1;
  }
  return (PCWSTR)v3;
}
