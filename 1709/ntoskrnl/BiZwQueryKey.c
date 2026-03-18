/*
 * XREFs of BiZwQueryKey @ 0x140134B0C
 * Callers:
 *     BiEnumerateSubKeys @ 0x1405AE9F8 (BiEnumerateSubKeys.c)
 *     BiGetKeyName @ 0x1405AFEC4 (BiGetKeyName.c)
 * Callees:
 *     ZwQueryKey @ 0x14017DB80 (ZwQueryKey.c)
 */

NTSTATUS __fastcall BiZwQueryKey(void *a1, KEY_INFORMATION_CLASS a2, void *a3, ULONG a4, PULONG ResultLength)
{
  return ZwQueryKey(a1, a2, a3, a4, ResultLength);
}
