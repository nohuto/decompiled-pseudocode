/*
 * XREFs of AslRegistryGetUInt32 @ 0x14072E91C
 * Callers:
 *     SdbpQueryAppCompatFlagsByExeID @ 0x1405D70A4 (SdbpQueryAppCompatFlagsByExeID.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 *     AslRegistryGetUInt32_UStr @ 0x14072E994 (AslRegistryGetUInt32_UStr.c)
 */

__int64 __fastcall AslRegistryGetUInt32(__int64 a1, __int64 a2, const WCHAR *a3)
{
  NTSTATUS inited; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  inited = RtlInitUnicodeStringEx(&DestinationString, a3);
  if ( inited >= 0 )
    return (unsigned int)AslRegistryGetUInt32_UStr(a1, a2, &DestinationString);
  else
    AslLogCallPrintf(1LL);
  return (unsigned int)inited;
}
