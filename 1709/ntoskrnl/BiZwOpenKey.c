/*
 * XREFs of BiZwOpenKey @ 0x140134ABC
 * Callers:
 *     BiCreateKey @ 0x1405AF19C (BiCreateKey.c)
 *     BiOpenKey @ 0x1405AFAF8 (BiOpenKey.c)
 * Callees:
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 */

NTSTATUS __fastcall BiZwOpenKey(HANDLE *a1, ACCESS_MASK a2, OBJECT_ATTRIBUTES *a3)
{
  return ZwOpenKey(a1, a2, a3);
}
