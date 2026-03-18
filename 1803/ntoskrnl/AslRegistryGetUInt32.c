/*
 * XREFs of AslRegistryGetUInt32 @ 0x1407D94A0
 * Callers:
 *     SdbpQueryAppCompatFlagsByExeID @ 0x14061FB08 (SdbpQueryAppCompatFlagsByExeID.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14006DDA0 (RtlInitUnicodeStringEx.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 *     AslRegistryGetUInt32_UStr @ 0x1407D9518 (AslRegistryGetUInt32_UStr.c)
 */

__int64 __fastcall AslRegistryGetUInt32(__int64 a1, __int64 a2, const WCHAR *a3)
{
  NTSTATUS inited; // eax
  unsigned int v6; // ebx
  NTSTATUS v8; // [rsp+20h] [rbp-28h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  inited = RtlInitUnicodeStringEx(&DestinationString, a3);
  v6 = inited;
  if ( inited >= 0 )
  {
    return (unsigned int)AslRegistryGetUInt32_UStr(a1, a2, &DestinationString);
  }
  else
  {
    v8 = inited;
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslRegistryGetUInt32",
      896,
      (unsigned int)"RtlInitUnicodeStringEx failed [%x]",
      v8);
  }
  return v6;
}
