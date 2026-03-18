/*
 * XREFs of BiZwDeleteValueKey @ 0x140134B8C
 * Callers:
 *     BiDeleteRegistryValue @ 0x1405AE26C (BiDeleteRegistryValue.c)
 * Callees:
 *     ZwDeleteValueKey @ 0x14017F2A0 (ZwDeleteValueKey.c)
 */

NTSTATUS __fastcall BiZwDeleteValueKey(void *a1, UNICODE_STRING *a2)
{
  return ZwDeleteValueKey(a1, a2);
}
