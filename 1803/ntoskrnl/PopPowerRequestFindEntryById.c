/*
 * XREFs of PopPowerRequestFindEntryById @ 0x140524BC0
 * Callers:
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x140075E54 (PopProcessPowerRequestOverrideQueryResponse.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x14006DE30 (RtlLookupElementGenericTableAvl.c)
 */

PVOID __fastcall PopPowerRequestFindEntryById(int a1)
{
  _BYTE Buffer[8]; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]

  v3 = a1;
  return RtlLookupElementGenericTableAvl(&PopPowerRequestTable, Buffer);
}
