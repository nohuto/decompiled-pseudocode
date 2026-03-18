/*
 * XREFs of BiZwOpenKey @ 0x1401643B0
 * Callers:
 *     BiCreateKey @ 0x140608544 (BiCreateKey.c)
 *     BiOpenKey @ 0x140608CE0 (BiOpenKey.c)
 * Callees:
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 */

NTSTATUS __fastcall BiZwOpenKey(HANDLE *a1, ACCESS_MASK a2, OBJECT_ATTRIBUTES *a3)
{
  return ZwOpenKey(a1, a2, a3);
}
