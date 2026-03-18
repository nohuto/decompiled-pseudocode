/*
 * XREFs of BiZwQueryValueKey @ 0x14014CF0C
 * Callers:
 *     BiGetRegistryValue @ 0x14058B2D0 (BiGetRegistryValue.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall BiZwQueryValueKey(void *a1, UNICODE_STRING *a2, __int64 a3, void *a4, ULONG a5, ULONG *a6)
{
  return ZwQueryValueKey(a1, a2, KeyValuePartialInformation, a4, a5, a6);
}
