/*
 * XREFs of BiZwQueryKey @ 0x1401643EC
 * Callers:
 *     BiEnumerateSubKeys @ 0x140607E7C (BiEnumerateSubKeys.c)
 *     BiGetKeyName @ 0x1406090AC (BiGetKeyName.c)
 * Callees:
 *     ZwQueryKey @ 0x1401A7780 (ZwQueryKey.c)
 */

NTSTATUS __fastcall BiZwQueryKey(void *a1, KEY_INFORMATION_CLASS a2, void *a3, ULONG a4, PULONG ResultLength)
{
  return ZwQueryKey(a1, a2, a3, a4, ResultLength);
}
