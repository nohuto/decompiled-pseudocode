/*
 * XREFs of BiZwDeleteValueKey @ 0x14016446C
 * Callers:
 *     BiDeleteRegistryValue @ 0x140606D48 (BiDeleteRegistryValue.c)
 * Callees:
 *     ZwDeleteValueKey @ 0x1401A8EC0 (ZwDeleteValueKey.c)
 */

NTSTATUS __fastcall BiZwDeleteValueKey(void *a1, UNICODE_STRING *a2)
{
  return ZwDeleteValueKey(a1, a2);
}
