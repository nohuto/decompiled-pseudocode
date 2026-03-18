/*
 * XREFs of PopPowerRequestFindEntryById @ 0x1404E7E28
 * Callers:
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x1400B0A44 (PopProcessPowerRequestOverrideQueryResponse.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1400DF250 (RtlLookupElementGenericTableAvl.c)
 */

PVOID __fastcall PopPowerRequestFindEntryById(int a1)
{
  _BYTE Buffer[8]; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]

  v3 = a1;
  return RtlLookupElementGenericTableAvl(&PopPowerRequestTable, Buffer);
}
