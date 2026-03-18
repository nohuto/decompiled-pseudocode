/*
 * XREFs of BiZwDeleteKey @ 0x140290190
 * Callers:
 *     BiDeleteKey @ 0x140779740 (BiDeleteKey.c)
 * Callees:
 *     ZwDeleteKey @ 0x14017F240 (ZwDeleteKey.c)
 */

NTSTATUS __fastcall BiZwDeleteKey(void *a1)
{
  return ZwDeleteKey(a1);
}
