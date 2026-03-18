/*
 * XREFs of BiZwEnumerateKey @ 0x140134A64
 * Callers:
 *     BiEnumerateSubKeys @ 0x1405AE9F8 (BiEnumerateSubKeys.c)
 * Callees:
 *     ZwEnumerateKey @ 0x14017DF00 (ZwEnumerateKey.c)
 */

NTSTATUS __fastcall BiZwEnumerateKey(void *a1, ULONG a2, __int64 a3, void *a4, ULONG Length, PULONG ResultLength)
{
  return ZwEnumerateKey(a1, a2, KeyBasicInformation, a4, Length, ResultLength);
}
