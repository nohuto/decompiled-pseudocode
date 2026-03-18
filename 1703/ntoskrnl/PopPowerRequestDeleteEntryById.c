/*
 * XREFs of PopPowerRequestDeleteEntryById @ 0x1404C71DC
 * Callers:
 *     PopPowerRequestCleanUp @ 0x140071694 (PopPowerRequestCleanUp.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x14004C420 (RtlLookupElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x14004C8D0 (RtlDeleteElementGenericTableAvl.c)
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
