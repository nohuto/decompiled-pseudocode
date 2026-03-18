/*
 * XREFs of BiZwSetValueKey @ 0x14014CF98
 * Callers:
 *     BiSetRegistryValue @ 0x14058BEBC (BiSetRegistryValue.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall BiZwSetValueKey(void *a1, UNICODE_STRING *a2, __int64 a3, ULONG a4, void *a5, ULONG a6)
{
  return ZwSetValueKey(a1, a2, 0, a4, a5, a6);
}
