/*
 * XREFs of PopPowerRequestDeleteEntryById @ 0x140524B88
 * Callers:
 *     PopPowerRequestCleanUp @ 0x140075F04 (PopPowerRequestCleanUp.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x14006D290 (RtlDeleteElementGenericTableAvl.c)
 *     RtlLookupElementGenericTableAvl @ 0x14006DE30 (RtlLookupElementGenericTableAvl.c)
 */

char __fastcall PopPowerRequestDeleteEntryById(int a1)
{
  PVOID v1; // rax
  _BYTE Buffer[8]; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]

  v4 = a1;
  v1 = RtlLookupElementGenericTableAvl(&PopPowerRequestTable, Buffer);
  if ( v1 )
    LOBYTE(v1) = RtlDeleteElementGenericTableAvl(&PopPowerRequestTable, v1);
  return (char)v1;
}
