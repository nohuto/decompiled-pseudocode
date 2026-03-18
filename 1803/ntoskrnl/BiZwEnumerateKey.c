/*
 * XREFs of BiZwEnumerateKey @ 0x140164358
 * Callers:
 *     BiEnumerateSubKeys @ 0x140607E7C (BiEnumerateSubKeys.c)
 * Callees:
 *     ZwEnumerateKey @ 0x1401A7B00 (ZwEnumerateKey.c)
 */

NTSTATUS __fastcall BiZwEnumerateKey(void *a1, ULONG a2, __int64 a3, void *a4, ULONG Length, PULONG ResultLength)
{
  return ZwEnumerateKey(a1, a2, KeyBasicInformation, a4, Length, ResultLength);
}
